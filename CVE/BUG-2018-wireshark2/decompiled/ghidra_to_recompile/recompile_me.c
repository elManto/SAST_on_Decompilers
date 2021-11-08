#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <stdbool.h>

#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>

// Wireshark imports
#include "config.h"

#include <stdio.h>
#include <ftypes-int.h>
#include <string.h>


typedef unsigned char   undefined;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;

long DAT_041353c0;
long DAT_04135300;
long DAT_04135240;
long DAT_04135180;
long DAT_00000008;
long DAT_00000018;
long stack0xfffffffffffffff0;
long register0x00000020;

undefined8 FUN_01b14720(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  g_free(*(undefined8 *)(param_1 + 8));
  plVar2 = (long *)fvalue_from_unparsed(0x1e,param_2,1,0);
  if (plVar2 != (long *)0x0) {
    iVar1 = *(int *)(plVar2[1] + 8);
    pvVar3 = (void *)g_malloc((long)(iVar1 + 1));
    *(void **)(param_1 + 8) = pvVar3;
    memcpy(pvVar3,*(void **)plVar2[1],(long)iVar1);
    *(undefined *)((long)pvVar3 + (long)iVar1) = 0;
    if (*(void*  (*)())(*plVar2 + 0x28) != 0x0) {
      (**(void* (*)())(*plVar2 + 0x28))(plVar2);
    }
    g_slice_free1(0x28,plVar2);
    return 1;
  }
  g_free(*(undefined8 *)(param_1 + 8));
  uVar4 = g_strdup(param_2);
  *(undefined8 *)(param_1 + 8) = uVar4;
  return 1;
}



void FUN_01b147e0(long param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  g_byte_array_append(param_2,(ulong)param_3 + *(long *)(param_1 + 8),param_4);
  return;
}



void FUN_01b14800(long param_1)

{
  strlen(*(char **)(param_1 + 8));
  return;
}



bool FUN_01b14820(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return iVar1 < 1;
}



uint FUN_01b14840(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return uVar1 >> 0x1f;
}



uint FUN_01b14860(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return ~uVar1 >> 0x1f;
}



bool FUN_01b14880(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return 0 < iVar1;
}



bool FUN_01b148a0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return iVar1 != 0;
}



bool FUN_01b148c0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return iVar1 == 0;
}



undefined  FUN_01b148e0(ulong param_1,long *param_2)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = 8;
  bVar6 = &stack0xfffffffffffffff0 < &DAT_00000008;
  bVar7 = (undefined *)register0x00000020 == &DAT_00000018;
  lVar1 = param_2[1];
  pbVar4 = *(byte **)(*param_2 + 8);
  pbVar5 = (byte *)"FT_PCRE";
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  if ((lVar1 != 0) && ((!bVar6 && !bVar7) == bVar6)) {
    __s = *(char **)(param_1 + 8);
    uVar9 = 0x1b1492c;
    sVar2 = strlen(__s);
    uVar8 = 0;
    uVar9 = g_regex_match_full(lVar1,__s,(long)(int)sVar2,0,0,0,0);
    return CONCAT88(uVar8,uVar9);
  }
  return ZEXT816(param_1) << 0x40;
}



bool FUN_01b14960(long param_1,long param_2)

{
  char *pcVar1;
  
  if (**(char **)(param_2 + 8) != '\0') {
    pcVar1 = strstr(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
    return pcVar1 != (char *)0x0;
  }
  return false;
}



void FUN_01b14990(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    g_free(*(undefined8 *)(param_1 + 8));
    uVar1 = g_strdup(param_2);
    *(undefined8 *)(param_1 + 8) = uVar1;
    return;
  }
  uVar1 = wmem_packet_scope();
  uVar1 = wmem_strdup_printf(uVar1,"%s:%u: failed assertion \"%s\"","ftype-string.c",0x22,
                             "value != ((void *)0)");
                    // WARNING: Subroutine does not return
  proto_report_dissector_bug(uVar1);
}



void FUN_01b149f0(long param_1,int param_2)

{
  if (param_2 == 0) {
    strlen(*(char **)(param_1 + 8));
    return;
  }
  if (param_2 == 1) {
                    // WARNING: Treating indirect jump as call
    escape_string_len(*(undefined8 *)(param_1 + 8));
    return;
  }
                    // WARNING: Subroutine does not return
  g_assertion_message_expr(0,"ftype-string.c",0x34,"string_repr_len",0);
}



void FUN_01b14a40(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  if (param_2 == 0) {
    g_strlcpy(param_4,*(undefined8 *)(param_1 + 8),param_5);
    return;
  }
  if (param_2 == 1) {
                    // WARNING: Treating indirect jump as call
    escape_string(param_4,*(undefined8 *)(param_1 + 8));
    return;
  }
                    // WARNING: Subroutine does not return
  g_assertion_message_expr(0,"ftype-string.c",0x44,"string_to_repr",0);
}



void FUN_01b14a90(void)

{
  FUN_01b0cb10(0x1a,&DAT_041353c0);
  FUN_01b0cb10(0x1b,&DAT_04135300);
  FUN_01b0cb10(0x1c,&DAT_04135240);
  FUN_01b0cb10(0x2c,&DAT_04135180);
  return;
}



bool FUN_01b14ae0(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return false;
  }
  return *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
}



bool FUN_01b14b00(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return true;
  }
  return *(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10);
}



bool FUN_01b14b30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_1 + 8);
  bVar3 = true;
  if ((*(long *)(param_1 + 8) == lVar1 || lVar2 < lVar1) && (bVar3 = false, lVar1 <= lVar2)) {
    bVar3 = *(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10) &&
            *(int *)(param_2 + 0x10) <= *(int *)(param_1 + 0x10);
  }
  return bVar3;
}



bool FUN_01b14b60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_1 + 8);
  bVar3 = true;
  if ((*(long *)(param_1 + 8) == lVar1 || lVar2 < lVar1) && (bVar3 = false, lVar1 <= lVar2)) {
    bVar3 = *(int *)(param_2 + 0x10) <= *(int *)(param_1 + 0x10);
  }
  return bVar3;
}



bool FUN_01b14b90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_1 + 8);
  bVar3 = true;
  if ((lVar1 <= lVar2) && (bVar3 = false, *(long *)(param_1 + 8) == lVar1 || lVar2 < lVar1)) {
    bVar3 = *(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10);
  }
  return bVar3;
}
