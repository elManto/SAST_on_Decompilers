#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>

#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <defs.h>
#include <stdarg.h>

// Wireshark imports
#include "config.h"

#include <stdio.h>
#include <ftypes-int.h>
#include <string.h>

#define CMP_MATCHES cmp_matches

//#include <strutil.h>


signed __int64  sub_1A14720(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const void ***v3; // rbx
  size_t v4; // rbp
  void *v5; // rax
  void ( *v6)(const void ***); // rax
  signed __int64 result; // rax


  g_free(*(_QWORD *)(a1 + 8));
  v2 = fvalue_from_unparsed(30LL, a2, 1LL, 0LL);
  if ( v2 )
  {
    v3 = (const void ***)v2;
    v4 = *(signed int *)(*(_QWORD *)(v2 + 8) + 8LL);
    v5 = (void *)g_malloc((signed int)v4 + 1);
    *(_QWORD *)(a1 + 8) = v5;
    *((_BYTE *)memcpy(v5, *v3[1], v4) + v4) = 0;
    v6 = (void ( *)(const void ***))(*v3)[5];
    if ( v6 )
      v6(v3);
    g_slice_free1(40LL, v3);
    result = 1LL;
  }
  else
  {
    g_free(*(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = g_strdup(a2);
    result = 1LL;
  }

  return result;
}
