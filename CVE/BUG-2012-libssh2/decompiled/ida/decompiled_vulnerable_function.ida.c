__int64 __fastcall libssh2_packet_add(__int64 session, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int64 v9; // [rsp+8h] [rbp-A8h]
  char v10; // [rsp+25h] [rbp-8Bh]
  char v11; // [rsp+26h] [rbp-8Ah]
  char v12; // [rsp+27h] [rbp-89h]
  unsigned int v13; // [rsp+28h] [rbp-88h]
  unsigned int v14; // [rsp+2Ch] [rbp-84h]
  unsigned int v15; // [rsp+30h] [rbp-80h]
  int v16; // [rsp+34h] [rbp-7Ch]
  size_t name_len; // [rsp+38h] [rbp-78h]
  unsigned int v18; // [rsp+40h] [rbp-70h]
  unsigned int v19; // [rsp+44h] [rbp-6Ch]
  __int64 v20; // [rsp+48h] [rbp-68h]
  __int64 v21; // [rsp+50h] [rbp-60h]
  __int64 v22; // [rsp+58h] [rbp-58h]
  __int64 v23; // [rsp+60h] [rbp-50h]
  __int64 channelp; // [rsp+68h] [rbp-48h]
  unsigned __int64 v25; // [rsp+70h] [rbp-40h]
  _QWORD *v26; // [rsp+78h] [rbp-38h]
  __int64 v27; // [rsp+80h] [rbp-30h]
  __int64 v28; // [rsp+88h] [rbp-28h]
  unsigned __int64 v29; // [rsp+90h] [rbp-20h]
  char v30; // [rsp+A3h] [rbp-Dh]
  int v31; // [rsp+A4h] [rbp-Ch]
  unsigned __int64 v32; // [rsp+A8h] [rbp-8h]

  v9 = a3;
  v32 = __readfsqword(0x28u);
  v14 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  channelp = 0LL;
  v25 = 0LL;
  v12 = *(_BYTE *)a2;
  switch ( *(_DWORD *)(session + 53936) )
  {
    case 0:
      if ( a4 != -1
        || *(_QWORD *)(session + 56)
        && !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64))(session + 56))(
              session,
              a2,
              (unsigned int)a3,
              session) )
      {
        *(_DWORD *)(session + 53936) = 1;
        goto LABEL_7;
      }
      (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
      return _libssh2_error(session, 4294967292LL, "Invalid MAC received");
    case 0xB:
LABEL_43:
      *(_DWORD *)(session + 53936) = 11;
      if ( (unsigned int)_libssh2_channel_receive_window_adjust(
                           *(_QWORD *)(session + 53944),
                           (unsigned int)(v9 - 13),
                           1LL,
                           0LL) == -37 )
        return 4294967259LL;
      *(_DWORD *)(session + 53936) = 0;
      return 0LL;
    case 0xC:
LABEL_93:
      *(_DWORD *)(session + 53936) = 12;
      v14 = packet_queue_listener(session, a2, v9, session + 53952);
      goto LABEL_99;
    case 0xD:
LABEL_98:
      *(_DWORD *)(session + 53936) = 13;
      v14 = packet_x11_open(session, a2, v9, session + 54056);
LABEL_99:
      if ( v14 == -37 )
        return 4294967259LL;
      (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
      *(_DWORD *)(session + 53936) = 0;
      return v14;
    case 0xE:
LABEL_80:
      *(_DWORD *)(session + 53936) = 14;
      v30 = 100;
      v31 = *(_DWORD *)(a2 + 1);
      v14 = _libssh2_transport_send(session, &v30, 5LL, 0LL, 0LL);
      if ( v14 == -37 )
        return 4294967259LL;
LABEL_82:
      (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
      *(_DWORD *)(session + 53936) = 0;
      return v14;
    case 0xF:
LABEL_30:
      *(_DWORD *)(session + 53936) = 15;
      v14 = _libssh2_transport_send(session, &packet_20119, 1LL, 0LL, 0LL);
      if ( v14 == -37 )
        return 4294967259LL;
LABEL_32:
      (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
      *(_DWORD *)(session + 53936) = 0;
      return 0LL;
    default:
LABEL_7:
      if ( *(_DWORD *)(session + 53936) == 1 )
      {
        switch ( v12 )
        {
          case 1:
            if ( v9 > 4 )
            {
              v13 = 0;
              v27 = a2;
              v29 = v9;
              v28 = a2 + 1;
              _libssh2_get_u32(&v27, &v13);
              _libssh2_get_string(&v27, &v20, &v22);
              _libssh2_get_string(&v27, &v21, &v23);
              if ( *(_QWORD *)(session + 48) )
                (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, __int64))(session + 48))(
                  session,
                  v13,
                  v20,
                  (unsigned int)v22,
                  v21,
                  (unsigned int)v23,
                  session);
            }
            (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
            *(_DWORD *)(session + 556) = -1;
            *(_DWORD *)(session + 53936) = 0;
            return _libssh2_error(session, 4294967283LL, "socket disconnect");
          case 2:
            if ( v9 <= 1 )
            {
              if ( *(_QWORD *)(session + 32) )
                (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(session + 32))(
                  session,
                  &unk_47C31,
                  0LL,
                  session);
            }
            else if ( *(_QWORD *)(session + 32) )
            {
              (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(session + 32))(
                session,
                a2 + 1,
                (unsigned int)(v9 - 1),
                session);
            }
            (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
            *(_DWORD *)(session + 53936) = 0;
            return 0LL;
          case 4:
            if ( v9 > 1 )
            {
              v19 = *(unsigned __int8 *)(a2 + 1);
              if ( v9 > 5 )
              {
                v27 = a2;
                v29 = v9;
                v28 = a2 + 2;
                _libssh2_get_string(&v27, &v20, &v22);
                _libssh2_get_string(&v27, &v21, &v23);
              }
              if ( *(_QWORD *)(session + 40) )
                (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, __int64))(session + 40))(
                  session,
                  v19,
                  v20,
                  (unsigned int)v22,
                  v21,
                  (unsigned int)v23,
                  session);
            }
            (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
            *(_DWORD *)(session + 53936) = 0;
            return 0LL;
          case 0x50:
            if ( v9 > 4 )
            {
              v10 = 0;
              v18 = _libssh2_ntohu32(a2 + 1);
              if ( v18 <= 0xFFFFFFF9 && v9 >= v18 + 6 )
                v10 = *(_BYTE *)(v18 + 5 + a2);
              if ( v10 )
                goto LABEL_30;
            }
            goto LABEL_32;
          case 0x5A:
            if ( v9 <= 0x10 )
              goto LABEL_99;
            if ( v9 > 0x13
              && (unsigned int)_libssh2_ntohu32(a2 + 1) == 15
              && !memcmp((const void *)(a2 + 5), "forwarded-tcpip", 0xFuLL) )
            {
              memset((void *)(session + 53952), 0, 0x68uLL);
              goto LABEL_93;
            }
            if ( v9 <= 7 || (unsigned int)_libssh2_ntohu32(a2 + 1) != 3 || memcmp((const void *)(a2 + 5), "x11", 3uLL) )
              goto LABEL_99;
            memset((void *)(session + 54056), 0, 0x58uLL);
            goto LABEL_98;
          case 0x5D:
            if ( v9 > 8 )
            {
              HIDWORD(name_len) = _libssh2_ntohu32(a2 + 5);
              v8 = _libssh2_ntohu32(a2 + 1);
              channelp = _libssh2_channel_locate(session, v8);
              if ( channelp )
                *(_DWORD *)(channelp + 56) += HIDWORD(name_len);
            }
            (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
            *(_DWORD *)(session + 53936) = 0;
            return 0LL;
          case 0x5E:
            goto LABEL_34;
          case 0x5F:
            v25 += 4LL;
LABEL_34:
            v25 += 9LL;
            if ( v9 >= v25 )
            {
              v5 = _libssh2_ntohu32(a2 + 1);
              channelp = _libssh2_channel_locate(session, v5);
            }
            if ( !channelp )
            {
              _libssh2_error(session, 4294967273LL, "Packet received for unknown channel");
              (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
              *(_DWORD *)(session + 53936) = 0;
              return 0LL;
            }
            if ( *(_BYTE *)(channelp + 86) == 1 && v12 == 95 )
            {
              (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
              if ( *(unsigned int *)(channelp + 92) + v9 - v25 >= *(unsigned int *)(channelp + 76) )
                LODWORD(v9) = *(_DWORD *)(channelp + 76) - *(_DWORD *)(channelp + 92) + v25;
              *(_DWORD *)(channelp + 76) += v25 - v9;
              *(_QWORD *)(session + 53944) = channelp;
              goto LABEL_43;
            }
            if ( *(unsigned int *)(channelp + 80) < v9 - v25 )
            {
              _libssh2_error(session, 4294967271LL, "Packet contains more data than we offered to receive, truncating");
              v9 = *(unsigned int *)(channelp + 80) + v25;
            }
            if ( *(_DWORD *)(channelp + 76) <= *(_DWORD *)(channelp + 92) )
            {
              _libssh2_error(session, 4294967272LL, "The current receive window is full, data ignored");
              (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
              *(_DWORD *)(session + 53936) = 0;
              return 0LL;
            }
            *(_BYTE *)(channelp + 85) = 0;
            if ( *(unsigned int *)(channelp + 92) + v9 - v25 > *(unsigned int *)(channelp + 76) )
            {
              _libssh2_error(session, 4294967272LL, "Remote sent more data than current window allows, truncating");
              v9 = (unsigned int)(*(_DWORD *)(channelp + 76) - *(_DWORD *)(channelp + 92)) + v25;
            }
            *(_DWORD *)(channelp + 92) += v9 - v25;
LABEL_106:
            *(_DWORD *)(session + 53936) = 3;
            break;
          case 0x60:
            if ( v9 > 4 )
            {
              v6 = _libssh2_ntohu32(a2 + 1);
              channelp = _libssh2_channel_locate(session, v6);
            }
            if ( channelp )
              *(_BYTE *)(channelp + 85) = 1;
            (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
            *(_DWORD *)(session + 53936) = 0;
            return 0LL;
          case 0x61:
            if ( v9 > 4 )
            {
              v7 = _libssh2_ntohu32(a2 + 1);
              channelp = _libssh2_channel_locate(session, v7);
            }
            if ( channelp )
            {
              *(_BYTE *)(channelp + 84) = 1;
              *(_BYTE *)(channelp + 85) = 1;
            }
            (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
            *(_DWORD *)(session + 53936) = 0;
            return 0LL;
          case 0x62:
            if ( v9 > 8 )
            {
              v15 = _libssh2_ntohu32(a2 + 1);
              v16 = _libssh2_ntohu32(a2 + 5);
              v11 = 1;
              if ( v9 > (unsigned int)(v16 + 9) )
                v11 = *(_BYTE *)((unsigned int)(v16 + 9) + a2);
              if ( v16 == 11 && v9 > 0x13 && !memcmp("exit-status", (const void *)(a2 + 9), 0xBuLL) )
              {
                if ( v9 > 0x13 )
                  channelp = _libssh2_channel_locate(session, v15);
                if ( channelp && v9 > 0x18 )
                  *(_DWORD *)(channelp + 36) = _libssh2_ntohu32(a2 + 21);
              }
              else if ( v16 == 11 && v9 > 0x13 && !memcmp("exit-signal", (const void *)(a2 + 9), 0xBuLL) )
              {
                if ( v9 > 0x13 )
                  channelp = _libssh2_channel_locate(session, v15);
                if ( channelp && v9 > 0x18 )
                {
                  LODWORD(name_len) = _libssh2_ntohu32(a2 + 21);
                  *(_QWORD *)(channelp + 40) = (*(__int64 (__fastcall **)(_QWORD, __int64))(session + 8))(
                                                 (unsigned int)(name_len + 1),					// BUG integer overflow
                                                 session);
                  if ( *(_QWORD *)(channelp + 40) )
                  {
                    memcpy(*(void **)(channelp + 40), (const void *)(a2 + 25), (unsigned int)name_len);
                    *(_BYTE *)(*(_QWORD *)(channelp + 40) + (unsigned int)name_len) = 0;
                  }
                  else
                  {
                    v14 = _libssh2_error(session, 4294967290LL, "memory for signal name");
                  }
                }
              }
              if ( v11 )
                goto LABEL_80;
            }
            goto LABEL_82;
          default:
            goto LABEL_106;
        }
      }
      if ( *(_DWORD *)(session + 53936) != 3 )
        goto LABEL_111;
      v26 = (_QWORD *)(*(__int64 (__fastcall **)(signed __int64, __int64))(session + 8))(48LL, session);
      if ( v26 )
      {
        v26[3] = a2;
        v26[4] = v9;
        v26[5] = v25;
        _libssh2_list_add(session + 496, v26);
        *(_DWORD *)(session + 53936) = 4;
LABEL_111:
        if ( (v12 != 20 || *(_DWORD *)(session + 104) & 1) && *(_DWORD *)(session + 53936) != 5 )
          goto LABEL_121;
        if ( *(_DWORD *)(session + 53936) == 4 )
          *(_DWORD *)(session + 53936) = 5;
        *(_DWORD *)(session + 53384) = 0;
        *(_QWORD *)(session + 17008) = 0LL;
        *(_DWORD *)(session + 53936) = 0;
        *(_DWORD *)(session + 54144) = 0;
        memset((void *)(session + 52432), 0, 0x298uLL);
        if ( (unsigned int)_libssh2_kex_exchange(session, 1LL, session + 52432) != -37 )
        {
LABEL_121:
          *(_DWORD *)(session + 53936) = 0;
          result = 0LL;
        }
        else
        {
          result = 4294967259LL;
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(session + 24))(a2, session);
        *(_DWORD *)(session + 53936) = 0;
        result = 4294967290LL;
      }
      return result;
  }
}
