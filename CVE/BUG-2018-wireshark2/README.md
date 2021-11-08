# Project 

wireshark - (https://github.com/wireshark/wireshark.git), commit 8bc1c6e3e8c0a84ee656d1e1d68530fc9bf2e35d

# Description

Two double-free bugs in the file epan/ftypes/ftype-string.c (line 28) and epan/ftypes/ftype-protocol.c (line 35).

The static function ```string_fvalue_free``` (line 28) basically is a wrapper of ```g_free()```. In the same file, at line 89, you can find the implementation of ```val_from_unparsed()``` which looks like this:
	
	{
		string_fvalue_free(fv);
		/*
		//	Code
		*/
		return val_from_string(fv, s, err_msg);
	}

The function ```val_from_string``` internally invokes again ```string_fvalue_free``` causing the Double Free

# Detections

1. ikos 			
2. Clang Static Analyser
3. Code-ql

# Decompiled code

Apparently the bug seems also easier to spot because the ```string_fvalue_free``` function is statically replaced by the compiler and so the bug is not interprocedural anymore, but everything is inside the same function (```val_from_unparsed```).

However, the tools (ikos / scan-build) don't detect the bug because the ```g_free()``` is invoked both the times like:
	
	g_free(*(_QWORD*)(a1 + 8));

Probably the tools do not register that *(_QWORD*)(a1 + 8) is always the same pointer. But if we define an intermediate variable:
	
	void * target_ptr = *(_QWORD*)(a1 + 8);

now the tools can detect the bug



