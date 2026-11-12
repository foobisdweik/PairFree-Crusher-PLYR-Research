/* Candidate .35 address mapping. Selected functions only. */

/* slave_relay_0d00_0d01 at 080f7f50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * slave_relay_0d00_0d01(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  func_0x081e75f8(_DAT_080f7fd4,_DAT_080f7fd0,2,param_1[1],*(undefined2 *)(param_1 + 4),param_2);
  if ((param_1[1] == 0x5a) || (param_1[1] == 0x5c)) {
    if (*(short *)(param_1 + 4) == 0xd00) {
      pbVar2 = (byte *)func_0x080f26a0(0x5b,0xd00,2,param_3);
      if (pbVar2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar2 = 0;
      pbVar2[1] = 2;
      return pbVar2;
    }
    if (*(short *)(param_1 + 4) == 0xd01) {
      pbVar2 = (byte *)func_0x080f26d6(*param_1 >> 4,0x5b,0xd01,1,param_3);
      if (pbVar2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar1 = func_0x080f7cfc(param_1 + 8,*(short *)(param_1 + 2) + -4,param_3,0);
      *pbVar2 = bVar1 ^ 1;
      return pbVar2;
    }
  }
  return (byte *)0x0;
}


/* slave_cosystem_110f at 080f8114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 slave_cosystem_110f(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  if (*(short *)(param_1 + 4) == 0x110f) {
    func_0x081e75f8(_DAT_080f8194,_DAT_080f8198,2,param_3,param_2);
    iVar4 = *(ushort *)(param_1 + 2) - 4;
    if ((param_1 == -6) || (iVar4 == 0)) {
      func_0x081e7a40(_DAT_080f8194,_DAT_080f819c,0);
    }
    else {
      bVar1 = *(byte *)(param_1 + 7);
      uVar2 = (uint)*(byte *)(param_1 + 6);
      iVar5 = iVar4;
      func_0x081e75f8(_DAT_080f8194,_DAT_080f81a0,3,(uint)bVar1,uVar2,iVar4);
      pcVar3 = *(code **)(_DAT_080f81a4 + (uint)bVar1 * 4);
      if (pcVar3 == (code *)0x0) {
        func_0x081e75f8(_DAT_080f8194,_DAT_080f81a8,0,0,uVar2,iVar5);
      }
      else {
        (*pcVar3)(*(char *)(param_1 + 6) != '\0',param_1 + 8,iVar4);
      }
    }
  }
  else {
    func_0x081e7810(_DAT_080f8194,_DAT_080f81ac,1,*(short *)(param_1 + 4),param_1,param_2);
  }
  return 0;
}


/* slave_relay_1100_1101 at 080f5e88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * slave_relay_1100_1101(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined1 *)func_0x080f26a0(0x5b,*(undefined2 *)(param_1 + 4),1,param_3);
  uVar5 = _DAT_080f5f34;
  if (puVar3 == (undefined1 *)0x0) goto LAB_080f5ea0;
  *puVar3 = 0xff;
  if (*(short *)(param_1 + 4) == 0x1100) {
    iVar6 = func_0x080e0950((char)*(undefined2 *)(param_1 + 6),1,0);
  }
  else {
    if (*(short *)(param_1 + 4) != 0x1101) {
      return puVar3;
    }
    func_0x081e75f8(_DAT_080f5f38,_DAT_080f5f3c,1,*(undefined2 *)(param_1 + 6));
    uVar1 = *(ushort *)(param_1 + 6);
    if (uVar1 == 0xa6) {
      iVar6 = func_0x080f5e40();
    }
    else if (uVar1 < 0xa7) {
      if (uVar1 == 0xa4) {
        uVar5 = 1;
      }
      else {
        if (uVar1 != 0xa5) goto LAB_080f5eee;
        uVar5 = 0;
      }
      iVar6 = func_0x080f5e04(uVar5);
    }
    else {
      if (uVar1 == 0xb4) {
        uVar2 = func_0x080c9b04();
        goto LAB_080f5f06;
      }
LAB_080f5eee:
      puVar4 = (undefined2 *)func_0x081e7ba0(2);
      uVar5 = _DAT_080f5f40;
      if (puVar4 == (undefined2 *)0x0) {
LAB_080f5ea0:
        func_0x081e7810(_DAT_080f5f38,uVar5,0);
        return puVar3;
      }
      func_0x08152250(puVar4,0,2);
      *puVar4 = *(undefined2 *)(param_1 + 6);
      iVar6 = func_0x080f2a48(0x1b,puVar4);
    }
  }
  if (iVar6 != 0) {
    return puVar3;
  }
  uVar2 = 0;
LAB_080f5f06:
  *puVar3 = uVar2;
  return puVar3;
}


/* slave_relay_1110_111f at 080f5f44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
slave_relay_1110_111f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  
  puVar2 = (undefined1 *)
           func_0x080f26a0(0x5b,*(undefined2 *)(param_1 + 4),1,param_3,param_1,param_2,param_3,
                           param_4);
  if (puVar2 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  func_0x081e75f8(_DAT_080f5ff8,_DAT_080f5ff4,2,*(undefined2 *)(param_1 + 4),
                  *(undefined1 *)(param_1 + 6));
  *puVar2 = 0xff;
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x1112) {
    if (*(char *)(param_1 + 6) != '\x01') {
      return puVar2;
    }
    puVar3 = (undefined1 *)func_0x081e7ba0(1);
    if (puVar3 == (undefined1 *)0x0) {
      return puVar2;
    }
    func_0x08152250(puVar3,0,1);
    *puVar3 = 1;
  }
  else {
    if (sVar1 == 0x1113) {
      uVar5 = (uint)*(byte *)(param_1 + 6);
      if (uVar5 != 1) {
        return puVar2;
      }
      puVar3 = (undefined1 *)func_0x081e7ba0(1);
      if (puVar3 == (undefined1 *)0x0) {
        return puVar2;
      }
      func_0x08152250(puVar3,0,uVar5);
      uVar6 = 2;
    }
    else {
      if (sVar1 != 0x1111) {
        return puVar2;
      }
      uVar5 = (uint)*(byte *)(param_1 + 6);
      if (uVar5 != 1) {
        return puVar2;
      }
      puVar3 = (undefined1 *)func_0x081e7ba0(1);
      if (puVar3 == (undefined1 *)0x0) {
        return puVar2;
      }
      func_0x08152250(puVar3,0,uVar5);
      uVar6 = 0;
    }
    *puVar3 = uVar6;
  }
  iVar4 = func_0x080f2a48(0x1d,puVar3);
  if (iVar4 == 0) {
    *puVar2 = 0;
  }
  return puVar2;
}


/* slave_relay_send at 080f7cfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 slave_relay_send(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  func_0x081e75f8(_DAT_080f7d90,_DAT_080f7d8c,4,*(undefined2 *)(param_1 + 4),param_2,param_3,param_4
                  ,param_4);
  uVar4 = (uint)*(ushort *)(param_1 + 2);
  if (param_2 == uVar4 + 4) {
    puVar2 = (undefined1 *)func_0x080ec59c(uVar4 + 6);
    if (puVar2 != (undefined1 *)0x0) {
      cVar1 = *param_1;
      *puVar2 = (char)param_3;
      puVar2[1] = (char)param_4;
      func_0x081e7dd0(puVar2 + 2,param_1,param_2);
      uVar3 = func_0x080f8038(0,cVar1 == '\x15',puVar2,uVar4 + 6);
      func_0x080ec5b8(puVar2);
      return uVar3;
    }
    func_0x081e7810(_DAT_080f7d90,_DAT_080f7d98,0);
  }
  else {
    func_0x081e7810(_DAT_080f7d90,_DAT_080f7d94,2,param_2,uVar4);
  }
  return 0;
}

