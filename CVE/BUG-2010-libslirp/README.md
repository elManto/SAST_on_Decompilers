# Project 

libslirp - (https://gitlab.freedesktop.org/slirp/libslirp), commit  a6ecd0ff (old:  76462e2f )

libslirp is a user-mode networking library used by virtual machines,
containers or various tools

# Description

The vuln is a UAF in the file ```src/mbuf.c``` at line 114:

	g_free(m);
	m->slirp->mbuf_alloced--;


# Detections

1. ikos
2. scan-build


# Decompiled code

No great differences bug the Used-After-Freed pointer is dereferenced with a cast like:
	
	free(*(_QWORD *)(v + 8))

Static tools are tricked by this and don't detect the bug anymore.
Fix: Create a variable with type ```void *``` and assign the casted pointer to it.

# Actions

time 2h

1. Usual fixes (variable declarations/ headers)
2. Some functions have mismatch input arguments (e.g., foo(int a1) and then it references a5 which was not an argument)
3. The decompiler recognizes some structs contained in the C headers (inet/in.h) -> tons of casts are not allowed by gcc, need to fix them

