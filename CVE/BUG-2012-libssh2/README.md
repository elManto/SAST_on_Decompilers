# Project 

libssh2 - (https://github.com/libssh2/libssh2.git), commit c55b0b0425585d32048391c8679cbbede40c4cda

# Description

The bug is an heap-based buffer overflow in the src/packet.c source file. 
Line 794, we have the following assignment, where the variable ```data``` is under
the attacker controller:

	uint32_t namelen = _libssh2_ntohu32(data + 9 + sizeof("exit-signal"));

However, in the following line, there is a dynamic memory allocation and ```namelen``` is increased by one. 
So we can have integer overflow, that leads to a wrong allocation:

	channelp->exit_signal = LIBSSH2_ALLOC(session, namelen + 1);

If the previous condition is met, we have an heap-based buffer overflow at line 802:

	memcpy(channelp->exit_signal, data + 13 + sizeof("exit_signal"), namelen);

# Detections

1. flawfinder
2. ikos 			(also on decomp2recomp)
3. Clang Static Analyser	(also on decomp2recomp)

# Decompiled code

time: 5h

Ida and Ghidra have basically the same behavior: since that ```LIBSSH2_ALLOC``` is a field of the struct ```session```, during the decompilation process we get something like a cast to a function of the corresponding struct ```session``` field. After renaming a couple of variables:

	*(_QWORD *)(channelp + 40) = (*(__int64 (__fastcall **)(_QWORD, __int64))(session + 8))(
                                                 (unsigned int)(name_len + 1),
                                                 session);

To detect the integer overflow, the user should indicate that the ```session + 8``` is a method that performs memory allocation (sort of malloc wrapper).
On the other hand , flawfinder, detects the memcpy error (it doesn't detect any check on the destination buffer)


