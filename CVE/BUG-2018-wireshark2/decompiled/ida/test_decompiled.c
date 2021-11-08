
//----- (0000000001A14400) ----------------------------------------------------
unsigned __int64 __fastcall sub_1A14400(__int64 a1, int a2, __int64 a3, char *a4)
{
  char *v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r12
  char *v12; // [rsp+8h] [rbp-140h]
  char v13; // [rsp+14h] [rbp-134h]
  char *v14; // [rsp+18h] [rbp-130h]
  char v15; // [rsp+20h] [rbp-128h]
  char s; // [rsp+40h] [rbp-108h]
  char v17; // [rsp+50h] [rbp-F8h]
  __int64 v18; // [rsp+68h] [rbp-E0h]
  __int64 v19; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v20; // [rsp+138h] [rbp-10h]

  v12 = a4;
  v20 = __readfsqword(0x28u);
  if ( a2 != 1 )
    g_assertion_message_expr(0LL, "ftype-protocol.c", 137LL, "val_to_repr", "rtype == FTREPR_DFILTER");
  v4 = &s;
  except_setup_try(&v15, &s, &unk_26DDC30, 1LL);
  if ( _setjmp((struct __jmp_buf_tag *)&v19) )
    v14 = &v17;
  else
    v14 = 0LL;
  v13 = 0;
  if ( !v14 )
  {
    v7 = tvb_captured_length();
    if ( v7 )
    {
      v4 = (char *)tvb_get_ptr(*(_QWORD *)(a1 + 8), 0LL);
      v12 = sub_19ECBB0(v12, v4, v7, 58);
    }
    *v12 = 0;
  }
  if ( v14 )
    v13 = 1;
  if ( !(v13 & 1) && v14 )
  {
    except_rethrow(v14);
    sub_1A12FF0((__int64)v14, (__int64)v4);
    v8 = strlen(v4);
    v9 = g_memdup(v4, v8);
    v10 = strlen(v4);
    v11 = tvb_new_real_data(v9, v10, v10);
    tvb_set_free_cb(v11, &j_g_free_3);
    *((_QWORD *)v14 + 1) = v11;
    *((_DWORD *)v14 + 8) = 1;
    *((_QWORD *)v14 + 2) = g_strdup(v4);
    result = 1LL;
  }
  else
  {
    v5 = v18;
    except_free(v18);
    except_pop(v5, v4);
    result = __readfsqword(0x28u) ^ v20;
  }
  return result;
}
// 195E0B0: using guessed type __int64 __fastcall g_memdup(_QWORD, _QWORD);
// 195E500: using guessed type __int64 __fastcall except_pop(_QWORD, _QWORD);
// 195F1B0: using guessed type __int64 __fastcall g_strdup(_QWORD);
// 195F6A0: using guessed type __int64 __fastcall except_free(_QWORD);
// 1960270: using guessed type __int64 __fastcall g_assertion_message_expr(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1962870: using guessed type __int64 __fastcall tvb_set_free_cb(_QWORD, _QWORD);
// 1962A60: using guessed type __int64 __fastcall except_setup_try(_QWORD, _QWORD, _QWORD, _QWORD);
// 1963E20: using guessed type __int64 __fastcall except_rethrow(_QWORD);
// 1963E80: using guessed type __int64 __fastcall tvb_new_real_data(_QWORD, _QWORD, _QWORD);

//----- (0000000001A14600) ----------------------------------------------------
signed __int64 __fastcall sub_1A14600(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp

  sub_1A12FF0(a1, a2);
  v2 = fvalue_from_unparsed(30LL, a2, 1LL, 0LL);
  if ( !v2 )
    JUMPOUT(&loc_1A14590);
  v3 = v2;
  v4 = g_memdup(**(_QWORD **)(v2 + 8), *(unsigned int *)(*(_QWORD *)(v2 + 8) + 8LL));
  v5 = tvb_new_real_data(v4, *(unsigned int *)(*(_QWORD *)(v3 + 8) + 8LL), *(unsigned int *)(*(_QWORD *)(v3 + 8) + 8LL));
  tvb_set_free_cb(v5, &j_g_free_3);
  *(_QWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 32) = 1;
  return 1LL;
}
// 195E0B0: using guessed type __int64 __fastcall g_memdup(_QWORD, _QWORD);
// 1962870: using guessed type __int64 __fastcall tvb_set_free_cb(_QWORD, _QWORD);
// 1963B70: using guessed type __int64 __fastcall fvalue_from_unparsed(_QWORD, _QWORD, _QWORD, _QWORD);
// 1963E80: using guessed type __int64 __fastcall tvb_new_real_data(_QWORD, _QWORD, _QWORD);

//----- (0000000001A146A0) ----------------------------------------------------
_QWORD *sub_1A146A0()
{
  return sub_1A0CB10(1LL, (const char *)&unk_40350C0);
}

//----- (0000000001A146C0) ----------------------------------------------------
void __fastcall sub_1A146C0(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
}

//----- (0000000001A146D0) ----------------------------------------------------
__int64 __fastcall sub_1A146D0(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}

//----- (0000000001A146E0) ----------------------------------------------------
__int64 __fastcall sub_1A146E0(__int64 a1)
{
  return g_free(*(_QWORD *)(a1 + 8));
}
// 1964490: using guessed type __int64 __fastcall g_free(_QWORD);

//----- (0000000001A146F0) ----------------------------------------------------
signed __int64 __fastcall sub_1A146F0(__int64 a1, __int64 a2)
{
  g_free(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = g_strdup(a2);
  return 1LL;
}
// 195F1B0: using guessed type __int64 __fastcall g_strdup(_QWORD);
// 1964490: using guessed type __int64 __fastcall g_free(_QWORD);

//----- (0000000001A14720) ----------------------------------------------------
signed __int64 __fastcall sub_1A14720(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const void ***v3; // rbx
  size_t v4; // rbp
  void *v5; // rax
  void (__fastcall *v6)(const void ***); // rax
  signed __int64 result; // rax

  g_free(*(_QWORD *)(a1 + 8));
  v2 = fvalue_from_unparsed(30LL, a2, 1LL, 0LL);
  if ( v2 )
  {
    v3 = (const void ***)v2;
    v4 = *(signed int *)(*(_QWORD *)(v2 + 8) + 8LL);
    v5 = (void *)g_malloc((signed int)v4 + 1, a2);
    *(_QWORD *)(a1 + 8) = v5;
    *((_BYTE *)memcpy(v5, *v3[1], v4) + v4) = 0;
    v6 = (void (__fastcall *)(const void ***))(*v3)[5];
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
// 195F1B0: using guessed type __int64 __fastcall g_strdup(_QWORD);
// 1963B70: using guessed type __int64 __fastcall fvalue_from_unparsed(_QWORD, _QWORD, _QWORD, _QWORD);
// 1963F20: using guessed type __int64 __fastcall g_slice_free1(_QWORD, _QWORD);
// 1964490: using guessed type __int64 __fastcall g_free(_QWORD);
// 19644C8: using guessed type __int64 __fastcall g_malloc(_QWORD, _QWORD);

//----- (0000000001A147E0) ----------------------------------------------------
__int64 __fastcall sub_1A147E0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  return g_byte_array_append(a2, *(_QWORD *)(a1 + 8) + a3, a4);
}
// 1962890: using guessed type __int64 __fastcall g_byte_array_append(_QWORD, _QWORD, _QWORD);

//----- (0000000001A14800) ----------------------------------------------------
size_t __fastcall sub_1A14800(__int64 a1)
{
  return strlen(*(const char **)(a1 + 8));
}

//----- (0000000001A14820) ----------------------------------------------------
_BOOL8 __fastcall sub_1A14820(__int64 a1, __int64 a2)
{
  return strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) <= 0;
}

