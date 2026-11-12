/* Candidate ARM Thumb interpretation. Runtime mapping inferred from command-table pointers. */

/* candidate_line_in_detect at 0824163c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 candidate_line_in_detect(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_418 [1024];
  undefined2 uStack_18;
  undefined4 uStack_14;
  
  func_0x08252840(auStack_418,0,0x408);
  if ((char)param_1[4] == '\x02') {
    iVar2 = func_0x082ea470(param_1[2] + 1 + *param_1);
    func_0x082edcc8(_DAT_082416bc,_DAT_082416b8,2,(char)param_1[4],iVar2);
    puVar1 = _DAT_082416c0;
    if ((iVar2 == 1) || (iVar2 == 0)) {
      *_DAT_082416c0 = (char)iVar2;
    }
    func_0x082317e0(0,4,0x27,0x7d,*puVar1,0,0,0);
    uStack_14 = 0x40;
  }
  else {
    uStack_14 = 0x80;
  }
  uStack_18 = func_0x081a61a8(auStack_418);
  func_0x081d27e8(auStack_418);
  return 0;
}


/* candidate_line_in_volume at 08241508 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 candidate_line_in_volume(int *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_420 [1024];
  undefined2 uStack_20;
  int iStack_1c;
  
  func_0x08252840(auStack_420,0,0x408);
  if ((char)param_1[4] == '\x02') {
    iVar5 = *param_1;
    iVar6 = param_1[2];
    puVar2 = (undefined1 *)func_0x082ee778(3);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x08252840(puVar2,0,3);
      uVar3 = func_0x081a61a8(_DAT_08241628);
      iVar5 = iVar5 + iVar6 + 1;
      iVar6 = func_0x082ea694(_DAT_08241628,iVar5,uVar3);
      if (iVar6 == 0) {
        *puVar2 = 0;
LAB_0824155c:
        iVar5 = func_0x082eb43c(iVar5,0x2c);
        uVar1 = func_0x082eb7b0(iVar5 + 1,0,10);
        puVar2[1] = uVar1;
        iVar5 = func_0x082eb43c(iVar5 + 1,0x2c);
        uVar1 = func_0x082eb7b0(iVar5 + 1,0,10);
        puVar2[2] = uVar1;
        iStack_1c = 0x40;
        puVar4 = puVar2;
      }
      else {
        uVar3 = func_0x081a61a8(_DAT_08241634);
        iVar6 = func_0x082ea694(_DAT_08241634,iVar5,uVar3);
        if (iVar6 == 0) {
          *puVar2 = 1;
          goto LAB_0824155c;
        }
        uVar3 = func_0x081a61a8(_DAT_08241638);
        iVar6 = func_0x082ea694(_DAT_08241638,iVar5,uVar3);
        if (iVar6 == 0) {
          *puVar2 = 2;
          goto LAB_0824155c;
        }
        iStack_1c = 0x80;
        puVar4 = (undefined1 *)0x0;
        func_0x082ee848(puVar2);
      }
      if (iStack_1c == 0x40) {
        func_0x082edcc8(_DAT_08241630,_DAT_0824162c,3,*puVar4,puVar4[1],puVar4[2]);
        iVar5 = func_0x082317e0(0,4,0x27,0,puVar4,3,0,0);
        if (iVar5 != 0) {
          iStack_1c = 0x80;
          func_0x082ee848(puVar4);
        }
      }
      goto LAB_082415cc;
    }
  }
  iStack_1c = 0x80;
LAB_082415cc:
  uStack_20 = func_0x081a61a8(auStack_420);
  func_0x081d27e8(auStack_420);
  return 0;
}


/* candidate_app_command at 08242ef0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 candidate_app_command(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puStack_448;
  uint uStack_444;
  uint auStack_440 [2];
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [1024];
  undefined2 uStack_28;
  undefined4 uStack_24;
  
  func_0x08252840(auStack_428,0,0x408);
  if ((char)param_1[4] != '\x02') {
    uStack_24 = 0x80;
    goto LAB_08243048;
  }
  puVar7 = (undefined2 *)0x0;
  iVar9 = param_1[2] + 1 + *param_1;
  auStack_440[1] = 0;
  func_0x08252840(auStack_438,0,0x10);
  iVar3 = func_0x081a61a8(iVar9);
  puVar2 = auStack_440 + 1;
  func_0x082eeaa8(puVar2,iVar9,iVar3 + -2);
  func_0x082ee498(_DAT_082430f0,_DAT_082430ec,0x69,1,_DAT_082430e8,puVar2);
  puStack_448 = (undefined2 *)0x0;
  iVar3 = func_0x082eb4d6(puVar2,_DAT_082430f4);
  if (iVar3 == 0) {
    uVar4 = func_0x082eb4d6(puVar2,_DAT_082430fc);
    puVar7 = (undefined2 *)0x2;
    if (uVar4 != 0) {
      func_0x082eb3e0(puVar2,_DAT_08243100,&puStack_448);
      puVar5 = (undefined2 *)func_0x082ee778(2);
      if (puVar5 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
        puVar8 = (undefined2 *)0x2;
        puVar10 = (undefined2 *)0xffff;
      }
      else {
        puVar10 = (undefined2 *)0xffff;
        *puVar5 = (short)puStack_448;
LAB_08242f98:
        puVar8 = (undefined2 *)0x2;
      }
      goto LAB_08242f66;
    }
    iVar3 = func_0x082eb4d6(puVar2,_DAT_08243104);
    if (iVar3 != 0) {
      uStack_444 = uVar4;
      auStack_440[0] = uVar4;
      func_0x082eb3e0(puVar2,_DAT_08243108,&uStack_444,auStack_440);
      puVar10 = (undefined2 *)((auStack_440[0] & 0xff) << 8 | uStack_444 & 0xff);
      puVar5 = (undefined2 *)func_0x082ee778(2);
      if (puVar5 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
      }
      else {
        *puVar5 = 0;
      }
      goto LAB_08242f98;
    }
    iVar3 = func_0x082eb4d6(puVar2,_DAT_0824310c);
    if (iVar3 == 0) {
      iVar3 = func_0x082eb4d6(puVar2,_DAT_0824311c);
      if (iVar3 == 0) {
        iVar3 = func_0x082eb4d6(puVar2,_DAT_08243124);
        if (iVar3 == 0) {
          puVar7 = (undefined2 *)0x0;
          puVar8 = (undefined2 *)0x0;
          bVar1 = false;
          puVar10 = (undefined2 *)0x0;
          puVar5 = (undefined2 *)0x0;
          goto LAB_08242ffc;
        }
        func_0x082eb3e0(puVar2,_DAT_08243128,&puStack_448);
        func_0x08242204((uint)puStack_448 & 0xff,0x1e,0);
      }
      else {
        func_0x082eb3e0(puVar2,_DAT_08243120,&puStack_448);
        func_0x082421a0((uint)puStack_448 & 0xff,0,1);
      }
      puVar7 = (undefined2 *)0x0;
      puVar8 = puVar7;
      puVar10 = puVar7;
      puVar5 = puVar7;
      goto LAB_08242f66;
    }
    iVar9 = func_0x0824199c();
    if (iVar9 == 0) {
      bVar1 = true;
      puVar7 = (undefined2 *)0x0;
      puVar8 = (undefined2 *)0x0;
      puVar10 = (undefined2 *)0x0;
      puVar5 = (undefined2 *)0x0;
      iVar9 = _DAT_08243110;
    }
    else {
      bVar1 = true;
      puVar7 = (undefined2 *)0x0;
      puVar8 = (undefined2 *)0x0;
      puVar10 = (undefined2 *)0x0;
      puVar5 = (undefined2 *)0x0;
      iVar9 = _DAT_0824312c;
    }
  }
  else {
    func_0x082eb3e0(puVar2,_DAT_082430f8,&puStack_448);
    puVar8 = (undefined2 *)0x1;
    puVar10 = puStack_448;
    puVar5 = (undefined2 *)0x0;
LAB_08242f66:
    bVar1 = true;
  }
LAB_08242ffc:
  func_0x08252840(auStack_428,0,0x400);
  uStack_24 = 2;
  if (bVar1) {
    func_0x082eb338(auStack_428,0x400,_DAT_08243114,iVar9);
    uVar6 = func_0x082317e0(0,3,puVar8,puVar10,puVar5,puVar7,0,0);
    func_0x082edcc8(_DAT_082430f0,_DAT_08243118,4,puVar8,puVar10,puVar10,uVar6);
  }
  else {
    func_0x082eb338(auStack_428,0x400,_DAT_08243130,iVar9);
  }
LAB_08243048:
  uStack_28 = func_0x081a61a8(auStack_428);
  func_0x081d27e8(auStack_428);
  return 0;
}


/* candidate_line_in_state_getter at 0824199c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte candidate_line_in_state_getter(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bStack_9;
  
  bStack_9 = *_DAT_082419ec;
  if (bStack_9 == 0) {
    func_0x081aa6c8(*_DAT_082419e8,&bStack_9);
    bVar1 = bStack_9 == 0;
  }
  else {
    bStack_9 = 0;
    func_0x081be964(*_DAT_082419e8,&bStack_9,param_3,0,param_1);
    bVar1 = bStack_9 ^ 1;
  }
  func_0x082edcc8(_DAT_082419f4,_DAT_082419f0,1,bVar1);
  return bVar1;
}

