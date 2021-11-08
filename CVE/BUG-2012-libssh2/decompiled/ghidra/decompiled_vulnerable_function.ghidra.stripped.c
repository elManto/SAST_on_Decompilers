
/* WARNING: Could not reconcile some variable overlaps */

ulong _libssh2_packet_add(long param_1,char *param_2,ulong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_b0;
  char local_93;
  char local_92;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  ulong local_48;
  long local_40;
  char *local_38;
  char *local_30;
  ulong local_28;
  undefined local_15;
  undefined4 local_14;
  long local_10;
  
  local_b0._0_4_ = (int)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  cVar1 = *param_2;
  switch(*(undefined4 *)(param_1 + 0xd2b0)) {
  case 0:
    if ((param_4 == -1) &&
       ((*(long *)(param_1 + 0x38) == 0 ||
        (iVar2 = (**(code **)(param_1 + 0x38))(param_1,param_2,param_3 & 0xffffffff), iVar2 != 0))))
    {
      (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
      uVar6 = _libssh2_error(param_1,0xfffffffc,"Invalid MAC received");
      goto LAB_0012c576;
    }
    *(undefined4 *)(param_1 + 0xd2b0) = 1;
    break;
  case 0xb:
    goto LAB_0012bb61;
  case 0xc:
    goto LAB_0012c1a4;
  case 0xd:
    goto LAB_0012c25a;
  case 0xe:
    goto LAB_0012bfc5;
  case 0xf:
    goto LAB_0012b977;
  }
  local_b0 = param_3;
  if (*(int *)(param_1 + 0xd2b0) != 1) goto LAB_0012c39f;
  switch(cVar1) {
  default:
    goto LAB_0012c38e;
  case '\x01':
    if (4 < param_3) {
      local_90 = 0;
      local_30 = param_2 + 1;
      local_38 = param_2;
      local_28 = param_3;
      _libssh2_get_u32(&local_38,&local_90,&local_90);
      _libssh2_get_string(&local_38,&local_70,&local_60,&local_70);
      uVar5 = 0x12b66a;
      _libssh2_get_string(&local_38,&local_68,&local_58,&local_68);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(param_1 + 0x30))
                  (param_1,(ulong)local_90,local_70,local_60 & 0xffffffff,local_68,
                   local_58 & 0xffffffff,param_1,uVar5);
      }
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = _libssh2_error(param_1,0xfffffff3,"socket disconnect");
    break;
  case '\x02':
    if (param_3 < 2) {
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(param_1 + 0x20))(param_1,&DAT_00147c31,0,param_1);
      }
    }
    else {
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(param_1 + 0x20))(param_1,param_2 + 1,(ulong)((int)local_b0 - 1),param_1);
      }
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = 0;
    break;
  case '\x04':
    if (1 < param_3) {
      local_74 = (uint)(byte)param_2[1];
      if (5 < param_3) {
        local_30 = param_2 + 2;
        local_38 = param_2;
        local_28 = param_3;
        _libssh2_get_string(&local_38,&local_70,&local_60,&local_70);
        _libssh2_get_string(&local_38,&local_68,&local_58,&local_68);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(param_1 + 0x28))
                  (param_1,(ulong)local_74,local_70,local_60 & 0xffffffff,local_68,
                   local_58 & 0xffffffff,param_1);
      }
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = 0;
    break;
  case 'P':
    if (4 < param_3) {
      local_78 = 0;
      local_93 = '\0';
      local_78 = _libssh2_ntohu32(param_2 + 1);
      if ((local_78 < 0xfffffffa) && (local_78 + 6 <= param_3)) {
        local_93 = param_2[local_78 + 5];
      }
      if (local_93 != '\0') {
LAB_0012b977:
        *(undefined4 *)(param_1 + 0xd2b0) = 0xf;
        local_8c = _libssh2_transport_send(param_1,&DAT_00147f18,1,0,0);
        if (local_8c == 0xffffffdb) {
          uVar6 = 0xffffffdb;
          break;
        }
      }
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = 0;
    break;
  case 'Z':
    if (0x10 < param_3) {
      if (((param_3 < 0x14) || (iVar2 = _libssh2_ntohu32(param_2 + 1), iVar2 != 0xf)) ||
         (iVar2 = memcmp(param_2 + 5,"forwarded-tcpip",0xf), iVar2 != 0)) {
        if (((7 < param_3) && (iVar2 = _libssh2_ntohu32(param_2 + 1), iVar2 == 3)) &&
           (iVar2 = memcmp(param_2 + 5,&DAT_00147bee,3), iVar2 == 0)) {
          memset((void *)(param_1 + 0xd328),0,0x58);
LAB_0012c25a:
          *(undefined4 *)(param_1 + 0xd2b0) = 0xd;
          local_8c = FUN_0012ae70(param_1,param_2,param_3,param_1 + 0xd328);
        }
      }
      else {
        memset((void *)(param_1 + 0xd2c0),0,0x68);
LAB_0012c1a4:
        *(undefined4 *)(param_1 + 0xd2b0) = 0xc;
        local_8c = FUN_0012a779(param_1,param_2,param_3,param_1 + 0xd2c0);
      }
    }
    if (local_8c == 0xffffffdb) {
      uVar6 = 0xffffffdb;
    }
    else {
      (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
      *(undefined4 *)(param_1 + 0xd2b0) = 0;
      uVar6 = (ulong)local_8c;
    }
    break;
  case ']':
    if (8 < param_3) {
      local_7c = _libssh2_ntohu32(param_2 + 5);
      uVar4 = _libssh2_ntohu32(param_2 + 1);
      local_50 = _libssh2_channel_locate(param_1,(ulong)uVar4,(ulong)uVar4);
      if (local_50 != 0) {
        *(int *)(local_50 + 0x38) = *(int *)(local_50 + 0x38) + local_7c;
      }
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = 0;
    break;
  case '^':
    goto switchD_0012b5e2_caseD_5e;
  case '_':
    local_48 = local_48 + 4;
switchD_0012b5e2_caseD_5e:
    local_48 = local_48 + 9;
    if (local_48 <= param_3) {
      uVar4 = _libssh2_ntohu32(param_2 + 1);
      local_50 = _libssh2_channel_locate(param_1,(ulong)uVar4,(ulong)uVar4);
    }
    if (local_50 == 0) {
      _libssh2_error(param_1,0xffffffe9,"Packet received for unknown channel");
      (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
      *(undefined4 *)(param_1 + 0xd2b0) = 0;
      uVar6 = 0;
    }
    else {
      if ((*(char *)(local_50 + 0x56) == '\x01') && (cVar1 == '_')) {
        (**(code **)(param_1 + 0x18))(param_2,param_1,param_2);
        if ((ulong)*(uint *)(local_50 + 0x4c) <= (param_3 + *(uint *)(local_50 + 0x5c)) - local_48)
        {
          local_b0._0_4_ = (int)local_48 + (*(int *)(local_50 + 0x4c) - *(int *)(local_50 + 0x5c));
        }
        *(int *)(local_50 + 0x4c) = ((int)local_48 - (int)local_b0) + *(int *)(local_50 + 0x4c);
        *(long *)(param_1 + 0xd2b8) = local_50;
LAB_0012bb61:
        *(undefined4 *)(param_1 + 0xd2b0) = 0xb;
        local_8c = _libssh2_channel_receive_window_adjust
                             (*(undefined8 *)(param_1 + 0xd2b8),(ulong)((int)local_b0 - 0xd),1,0);
        if (local_8c == 0xffffffdb) {
          uVar6 = 0xffffffdb;
        }
        else {
          *(undefined4 *)(param_1 + 0xd2b0) = 0;
          uVar6 = 0;
        }
      }
      else {
        if ((ulong)*(uint *)(local_50 + 0x50) < param_3 - local_48) {
          _libssh2_error(param_1,0xffffffe7,
                         "Packet contains more data than we offered to receive, truncating");
          local_b0 = local_48 + *(uint *)(local_50 + 0x50);
        }
        if (*(uint *)(local_50 + 0x5c) < *(uint *)(local_50 + 0x4c)) {
          *(undefined *)(local_50 + 0x55) = 0;
          if ((ulong)*(uint *)(local_50 + 0x4c) < (local_b0 + *(uint *)(local_50 + 0x5c)) - local_48
             ) {
            _libssh2_error(param_1,0xffffffe8,
                           "Remote sent more data than current window allows, truncating");
            local_b0 = local_48 + (uint)(*(int *)(local_50 + 0x4c) - *(int *)(local_50 + 0x5c));
          }
          *(int *)(local_50 + 0x5c) = ((int)local_b0 - (int)local_48) + *(int *)(local_50 + 0x5c);
LAB_0012c38e:
          *(undefined4 *)(param_1 + 0xd2b0) = 3;
LAB_0012c39f:
          if (*(int *)(param_1 + 0xd2b0) == 3) {
            local_40 = (**(code **)(param_1 + 8))(0x30,param_1,param_1);
            if (local_40 == 0) {
              (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
              *(undefined4 *)(param_1 + 0xd2b0) = 0;
              uVar6 = 0xfffffffa;
              break;
            }
            *(char **)(local_40 + 0x18) = param_2;
            *(ulong *)(local_40 + 0x20) = local_b0;
            *(ulong *)(local_40 + 0x28) = local_48;
            _libssh2_list_add(param_1 + 0x1f0,local_40,param_1 + 0x1f0);
            *(undefined4 *)(param_1 + 0xd2b0) = 4;
          }
          if (((cVar1 == '\x14') && ((*(uint *)(param_1 + 0x68) & 1) == 0)) ||
             (*(int *)(param_1 + 0xd2b0) == 5)) {
            if (*(int *)(param_1 + 0xd2b0) == 4) {
              *(undefined4 *)(param_1 + 0xd2b0) = 5;
            }
            *(undefined4 *)(param_1 + 0xd088) = 0;
            *(undefined8 *)(param_1 + 0x4270) = 0;
            *(undefined4 *)(param_1 + 0xd2b0) = 0;
            *(undefined4 *)(param_1 + 0xd380) = 0;
            memset((void *)(param_1 + 0xccd0),0,0x298);
            local_8c = _libssh2_kex_exchange(param_1,1,param_1 + 0xccd0);
            if (local_8c == 0xffffffdb) {
              uVar6 = 0xffffffdb;
              break;
            }
          }
          *(undefined4 *)(param_1 + 0xd2b0) = 0;
          uVar6 = 0;
        }
        else {
          _libssh2_error(param_1,0xffffffe8,"The current receive window is full, data ignored");
          (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
          *(undefined4 *)(param_1 + 0xd2b0) = 0;
          uVar6 = 0;
        }
      }
    }
    break;
  case '`':
    if (4 < param_3) {
      uVar4 = _libssh2_ntohu32(param_2 + 1);
      local_50 = _libssh2_channel_locate(param_1,(ulong)uVar4,(ulong)uVar4);
    }
    if (local_50 != 0) {
      *(undefined *)(local_50 + 0x55) = 1;
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = 0;
    break;
  case 'a':
    if (4 < param_3) {
      uVar4 = _libssh2_ntohu32(param_2 + 1);
      local_50 = _libssh2_channel_locate(param_1,(ulong)uVar4,(ulong)uVar4);
    }
    if (local_50 == 0) {
      (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
      *(undefined4 *)(param_1 + 0xd2b0) = 0;
      uVar6 = 0;
    }
    else {
      *(undefined *)(local_50 + 0x54) = 1;
      *(undefined *)(local_50 + 0x55) = 1;
      (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
      *(undefined4 *)(param_1 + 0xd2b0) = 0;
      uVar6 = 0;
    }
    break;
  case 'b':
    if (8 < param_3) {
      local_88 = _libssh2_ntohu32(param_2 + 1);
      local_84 = _libssh2_ntohu32(param_2 + 5);
      local_92 = '\x01';
      if (local_84 + 9 < param_3) {
        local_92 = param_2[local_84 + 9];
      }
      if (((local_84 == 0xb) && (0x13 < param_3)) &&
         (iVar2 = memcmp("exit-status",param_2 + 9,0xb), iVar2 == 0)) {
        if (0x13 < param_3) {
          local_50 = _libssh2_channel_locate(param_1,(ulong)local_88,(ulong)local_88);
        }
        if ((local_50 != 0) && (0x18 < param_3)) {
          uVar3 = _libssh2_ntohu32(param_2 + 0x15);
          *(undefined4 *)(local_50 + 0x24) = uVar3;
        }
      }
      else {
        if (((local_84 == 0xb) && (0x13 < param_3)) &&
           (iVar2 = memcmp("exit-signal",param_2 + 9,0xb), iVar2 == 0)) {
          if (0x13 < param_3) {
            local_50 = _libssh2_channel_locate(param_1,(ulong)local_88,(ulong)local_88);
          }
          if ((local_50 != 0) && (0x18 < param_3)) {
            local_80 = _libssh2_ntohu32(param_2 + 0x15);
            uVar5 = (**(code **)(param_1 + 8))
                              ((ulong)(local_80 + 1),param_1,param_1,(ulong)(local_80 + 1));
            *(undefined8 *)(local_50 + 0x28) = uVar5;
            if (*(long *)(local_50 + 0x28) == 0) {
              local_8c = _libssh2_error(param_1,0xfffffffa,"memory for signal name");
            }
            else {
              memcpy(*(void **)(local_50 + 0x28),param_2 + 0x19,(ulong)local_80);
              *(undefined *)((ulong)local_80 + *(long *)(local_50 + 0x28)) = 0;
            }
          }
        }
      }
      if (local_92 != '\0') {
LAB_0012bfc5:
        *(undefined4 *)(param_1 + 0xd2b0) = 0xe;
        local_15 = 100;
        local_14 = *(undefined4 *)(param_2 + 1);
        local_8c = _libssh2_transport_send(param_1,&local_15,5,0,0);
        if (local_8c == 0xffffffdb) {
          uVar6 = 0xffffffdb;
          break;
        }
      }
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1,param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    uVar6 = (ulong)local_8c;
  }
LAB_0012c576:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

