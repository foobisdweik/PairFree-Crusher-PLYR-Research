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
    iVar9 = candidate_line_in_state_getter();
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


/* candidate_race_line_in_caller at 0823dff4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte candidate_race_line_in_caller(int param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  func_0x0823e920(&uStack_14,(int)&uStack_14 + 1,param_2,param_4,param_1,param_2,param_3);
  *_DAT_0823e2a0 = (char)param_1;
  if (param_3 == (ushort *)0x0) {
    uVar2 = func_0x08241dbc(uStack_14 & 0xff,uStack_14._1_1_);
    uStack_14._2_2_ = uVar2;
    iVar4 = func_0x08246898();
    bVar6 = iVar4 != 0;
    if (bVar6) {
      func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2a4,0);
    }
    iVar4 = func_0x08246884();
    if (iVar4 != 0) {
      func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2ac,0);
      if (uStack_14._2_2_ == 0x150) {
        return 0;
      }
      bVar6 = true;
    }
    iVar4 = candidate_line_in_state_getter();
    if (iVar4 != 0) {
      func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2b0,0);
      bVar6 = true;
    }
    iVar4 = func_0x0823964c();
    if (iVar4 == 0) {
      if (!bVar6) goto LAB_0823e012;
    }
    else {
      func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2b4,0);
    }
    uVar3 = (uint)uStack_14._2_2_;
    if (((uVar3 - 0xff < 10) || (uVar3 - 0x10f < 8)) || (uVar3 - 0x120 < 5)) {
      func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2b8,1);
      return 1;
    }
  }
  else {
    uStack_14._2_2_ = *param_3;
  }
LAB_0823e012:
  uVar3 = (uint)uStack_14._2_2_;
  if (uVar3 < 0x125) {
    if (0x10e < uVar3) {
      switch(uVar3) {
      case 0x10f:
      case 0x110:
      case 0x111:
      case 0x115:
      case 0x116:
      case 0x11a:
      case 0x11b:
      case 0x120:
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
        goto LAB_0823e0fa;
      default:
        goto LAB_0823e11e;
      }
    }
    if (0x22 < uVar3) {
      bVar7 = 7 < uVar3 - 0x100;
      bVar6 = uVar3 - 0x100 == 8;
      goto LAB_0823e0f8;
    }
    if (uVar3 < 0x20) {
      iVar4 = uVar3 - 2;
      goto LAB_0823e02c;
    }
LAB_0823e0fa:
    iVar4 = func_0x08246884();
    if ((iVar4 != 0) && (uStack_14._2_2_ == 0x150)) {
      func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2bc,0);
      return 0;
    }
    bVar1 = 1;
  }
  else {
    iVar4 = uVar3 - 0x150;
LAB_0823e02c:
    bVar7 = iVar4 != 0;
    bVar6 = iVar4 == 1;
LAB_0823e0f8:
    if (!bVar7 || bVar6) goto LAB_0823e0fa;
LAB_0823e11e:
    bVar1 = 0;
  }
  if ((param_1 == 3) && (bVar1 == 0)) {
    uVar3 = (uint)uStack_14._2_2_;
    if (uVar3 == 0x34) {
LAB_0823e1d0:
      if ((1 < (ushort)(uStack_14._2_2_ - 10)) || (iVar4 = func_0x08241df8(), iVar4 != 0x1b)) {
        iVar4 = func_0x08247814();
        if (iVar4 == 0) goto LAB_0823e1e2;
        bVar6 = uStack_14._2_2_ == 0x34;
LAB_0823e1a8:
        if (bVar6) {
          bVar1 = 1;
        }
      }
    }
    else if (uVar3 < 0x35) {
      if (uVar3 - 10 < 2) {
        iVar4 = func_0x0824a2b0();
        if (((iVar4 == 0) && (iVar4 = func_0x0824a2bc(), iVar4 == 0)) &&
           (iVar4 = func_0x08245de4(), iVar4 == 0)) goto LAB_0823e1d0;
        func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2c0,0);
      }
    }
    else {
      if (uVar3 != 0x53) {
        bVar6 = uVar3 == 0x55;
        goto LAB_0823e1a8;
      }
LAB_0823e1e2:
      bVar1 = 1;
    }
  }
  uVar3 = param_1 - 4U & 0xff;
  if ((uVar3 < 9) && (bVar1 == 0)) {
    uVar5 = (uint)uStack_14._2_2_;
    if (uVar5 < 0x3e) {
      if (uVar5 < 0x37) {
        if (uVar5 - 10 < 2) {
          bVar1 = 1;
        }
      }
      else {
        bVar1 = 1;
      }
    }
    else if (uVar5 == 0x40) {
      bVar1 = 1;
    }
  }
  if (param_1 == 0x18) {
    if (bVar1 == 0) {
      uVar5 = (uint)uStack_14._2_2_;
      if (uVar5 == 0x55) {
        bVar1 = 1;
      }
      else if (uVar5 < 0x56) {
        if ((uVar5 - 10 < 2) && (iVar4 = func_0x08239668(), iVar4 == 0)) {
          bVar1 = func_0x08247814();
          bVar1 = bVar1 ^ 1;
        }
      }
      else {
        if (0x5f < uVar5) {
          bVar6 = uVar5 == 0x220;
          goto LAB_0823e214;
        }
        if (0x59 < uVar5) {
          bVar1 = 1;
        }
      }
    }
  }
  else if (param_1 == 0x1c) {
    if ((bVar1 == 0) && (uStack_14._2_2_ - 10 < 2)) {
      bVar1 = 1;
    }
  }
  else if ((param_1 == 0x19) && (bVar1 == 0)) {
    bVar6 = uStack_14._2_2_ == 0x98;
LAB_0823e214:
    if (bVar6) {
      bVar1 = 1;
    }
  }
  iVar4 = func_0x08245de4();
  if ((iVar4 != 0) && (8 < uVar3)) {
    uVar3 = (uint)uStack_14._2_2_;
    if (uVar3 == 0x55) {
LAB_0823e290:
      if ((param_1 != 3) && (param_1 != 0x18)) {
        return 0;
      }
      bVar1 = 1;
      goto LAB_0823e262;
    }
    if (uVar3 < 0x56) {
      if (uVar3 < 0xc) {
        if (9 < uVar3) goto LAB_0823e18c;
      }
      else if (uVar3 == 0x53) goto LAB_0823e290;
    }
    else if (uVar3 - 0x5a < 6) {
LAB_0823e18c:
      if (param_1 != 0x18) {
        return 0;
      }
      iVar4 = func_0x08247814();
      if (iVar4 != 0) {
        return 0;
      }
    }
  }
  if (bVar1 == 0) {
    return 0;
  }
LAB_0823e262:
  func_0x082edcc8(_DAT_0823e2a8,_DAT_0823e2c4,2,uStack_14._2_2_,param_1);
  func_0x0823e4f0(2,0xffff,(int)&uStack_14 + 2,2,0);
  return bVar1;
}


/* candidate_other_line_in_caller at 082342b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 candidate_other_line_in_caller(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(_DAT_082342e4 + 8) == 0) {
    iVar1 = candidate_line_in_state_getter();
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x081c9b4c();
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 1;
    }
  }
  func_0x082edcc8(_DAT_082342ec,_DAT_082342e8,1,uVar2);
  return uVar2;
}


/* candidate_race_cosystem_callback at 0823e2f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_race_cosystem_callback(undefined4 param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int aiStack_14 [2];
  
  if ((param_2 == (int *)0x0) || (iVar6 = param_2[2], iVar6 + 0xc != param_3)) {
    func_0x082eea28(_DAT_0823e4c8,_DAT_0823e4c4,1,param_2);
    return;
  }
  iVar5 = param_2[1];
  if (*param_2 == 1) {
    if (iVar5 == 0x65) {
      if (param_2 != (int *)0xfffffff4) {
        func_0x0823ebf0(param_2[3]);
      }
    }
    else if ((iVar5 == 0x66) && (param_2 != (int *)0xfffffff4)) {
      func_0x0823ec40(param_2[3]);
    }
LAB_0823e438:
    func_0x082edcc8(_DAT_0823e4c8,_DAT_0823e4ec,3,*param_2,param_2[1],param_2[2]);
    if (param_2[2] == 0) {
      iVar6 = 0;
    }
    else if ((*param_2 == 1) && ((param_2[1] == 5 || (param_2[1] - 7U < 3)))) {
      aiStack_14[0] = 0;
      func_0x082eeaa8(aiStack_14,param_2 + 3,param_2[2]);
      param_2[2] = 0;
      iVar6 = aiStack_14[0];
    }
    else {
      iVar6 = func_0x082ee778();
      if (iVar6 == 0) {
        return;
      }
      func_0x082eeaa8(iVar6,param_2 + 3,param_2[2]);
    }
    uVar9 = 0;
    iVar7 = param_2[2];
    uVar4 = 2;
    iVar5 = *param_2;
    iVar8 = param_2[1];
LAB_0823e3a6:
    func_0x082317e0(0,uVar4,iVar5,iVar8,iVar6,iVar7,0,uVar9);
  }
  else {
    if (*param_2 != 0x23) goto LAB_0823e438;
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        return;
      }
      func_0x082ee498(_DAT_0823e4c8,_DAT_0823e4d4,0x84,1,_DAT_0823e4d0,_DAT_0823e4cc,param_2 + 3);
      return;
    }
    switch(iVar5) {
    case 0xc:
      func_0x082edcc8(_DAT_0823e4c8,uRam0823e4d8,0);
      func_0x081fa274(param_2 + 3,param_2[2]);
      iVar6 = func_0x08235608();
      if (iVar6 != 0) {
        func_0x08243418(0x29,0x25,param_2 + 3,param_2[2]);
      }
      break;
    case 0xd:
      if (2 < *(byte *)(param_2 + 3)) {
        return;
      }
      if (*(byte *)(param_2 + 3) != 2) {
        func_0x082438f4();
      }
      iVar5 = 1;
      uVar9 = 100;
      uVar4 = 4;
      iVar8 = 0xb0;
      iVar6 = 0;
      iVar7 = 0;
      goto LAB_0823e3a6;
    case 0xe:
      func_0x081fabe8(param_2 + 3,iVar6);
      break;
    default:
      goto LAB_0823e438;
    case 0x11:
      func_0x082edcc8(_DAT_0823e4c8,uRam0823e4dc,1);
      iVar6 = param_2[2];
      if (iVar6 == 3) {
        func_0x081c6324(0xf603,param_2 + 3);
        uVar1 = *(undefined1 *)((int)param_2 + 0xe);
        uVar3 = *(undefined1 *)((int)param_2 + 0xd);
        uVar2 = (undefined1)param_2[3];
        uVar4 = uRam0823e4e8;
      }
      else {
        if (iVar6 != 6) {
          if (iVar6 != 2) {
            return;
          }
          func_0x081c6324(0xf602,param_2 + 3);
          func_0x082edcc8(_DAT_0823e4c8,uRam0823e4e0,2,(char)param_2[3],
                          *(undefined1 *)((int)param_2 + 0xd));
          return;
        }
        func_0x081c6324(0xf66c,param_2 + 3);
        uVar1 = *(undefined1 *)((int)param_2 + 0x11);
        uVar3 = (undefined1)param_2[4];
        uVar2 = *(undefined1 *)((int)param_2 + 0xf);
        uVar4 = uRam0823e4e4;
      }
      func_0x082edcc8(_DAT_0823e4c8,uVar4,3,uVar2,uVar3,uVar1);
    }
  }
  return;
}


/* candidate_race_task at 081ecbbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_race_task(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  func_0x082edcc8(_DAT_081ecc04,_DAT_081ecc00,0,param_4,param_1);
  uVar3 = _DAT_081ecc0c;
  puVar2 = _DAT_081ecc08;
  uVar1 = _DAT_081ecc04;
  do {
    do {
      do {
        func_0x081ed260(*puVar2,&uStack_14,0xffffffff);
        func_0x082edcc8(uVar1,uVar3,1,uStack_14 & 0xffff,param_1);
      } while (0xe < (uStack_14 & 0xffff));
      pcVar4 = *(code **)(_DAT_081ecc10 + (uStack_14 & 0xffff) * 4);
    } while (pcVar4 == (code *)0x0);
    (*pcVar4)(&uStack_14);
  } while( true );
}


/* candidate_opcode_0901 at 082e2a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_opcode_0901(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = _DAT_082e2ab8;
  func_0x082318d4(1,_DAT_082e2ac0,5,(uint)*(byte *)(_DAT_082e2ab8 + 0xe),
                  (uint)*(byte *)(_DAT_082e2ab8 + 0xe) * 10 + _DAT_082e2abc,*param_1,param_1[1],
                  param_1[2]);
  if (*(char *)(iVar1 + 0xe) == '\x02') {
    iVar3 = (uint)(byte)param_1[2] * 3 + iVar1;
    if (*param_1 == '\0') {
      *(undefined1 *)(iVar3 + 4) = 0;
      *(undefined1 *)(iVar1 + (uint)(byte)param_1[2] * 3 + 6) = 0;
      cVar2 = '\0';
      if (param_1[2] == '\x01') {
LAB_082e2a8e:
        iVar1 = _DAT_082e9138;
        if (*(char *)(_DAT_082e9138 + 8) != cVar2) {
          *(char *)(_DAT_082e9138 + 8) = cVar2;
          *(bool *)(iVar1 + 0xe) = cVar2 == '\0';
        }
        return;
      }
    }
    else {
      *(undefined1 *)(iVar3 + 4) = 1;
      *(char *)(iVar1 + (uint)(byte)param_1[2] * 3 + 6) = param_1[1];
      if (param_1[2] == '\x01') {
        cVar2 = '\x01';
        goto LAB_082e2a8e;
      }
    }
  }
  return;
}


/* candidate_atci_registration at 081d2fdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int candidate_atci_registration(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  
  piVar1 = _DAT_081d3034;
  func_0x08252840(_DAT_081d3034,0,0x4c,in_r3,in_r3);
  iVar2 = func_0x081d2340(0xf,0xc);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    func_0x0825439c(_DAT_081d3038 + 0x36,_DAT_081d3038,0xa2);
  }
  piVar1[0x10] = _DAT_081d303c;
  iVar2 = _DAT_081d3040;
  piVar1[0x11] = _DAT_081d3040;
  piVar1[0x12] = iVar2;
  iVar2 = func_0x081d2ee0();
  if ((iVar2 == 0) && (iVar2 = func_0x081d33d0(), iVar2 == 0)) {
    *(undefined1 *)(piVar1 + 0xe) = 1;
  }
  func_0x082edcc8(_DAT_081d3048,_DAT_081d3044,1,iVar2);
  return iVar2;
}


/* candidate_common_config at 0823f384 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * candidate_common_config(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  short sStack_28;
  short sStack_26;
  
  uVar14 = (uint)*(ushort *)(param_1 + 4);
  func_0x082edcc8(_DAT_0823f670,_DAT_0823f66c,2,param_1[1],uVar14);
  if ((param_1[1] != 0x5a) && (param_1[1] != 0x5c)) {
    return (byte *)0x0;
  }
  uVar12 = (uint)*(ushort *)(param_1 + 4);
  if (uVar12 < 0x2c17) {
    if (uVar12 < 0x2c15) {
      return (byte *)0x0;
    }
    if (uVar12 != 0x2c15) {
      if (uVar12 != 0x2c16) {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c16,9,param_3);
      uVar15 = _DAT_0823ff64;
      if (pbVar5 != (byte *)0x0) {
        puVar6 = (ushort *)func_0x082364d8();
        *pbVar5 = 0;
        uVar15 = _DAT_0823f674;
        *(ushort *)(pbVar5 + 1) = *puVar6;
        *(ushort *)(pbVar5 + 3) = puVar6[1];
        *(ushort *)(pbVar5 + 5) = puVar6[2];
        *(ushort *)(pbVar5 + 7) = puVar6[3];
        uVar12 = (uint)puVar6[1];
        uVar14 = (uint)*puVar6;
LAB_0823f856:
        func_0x082edcc8(_DAT_0823f98c,uVar15,2,uVar14,uVar12);
        return pbVar5;
      }
      goto LAB_0823f45c;
    }
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c15,1,param_3);
    uVar15 = _DAT_0823ff60;
    if (pbVar5 == (byte *)0x0) goto LAB_0823f45c;
    *pbVar5 = 1;
    if (param_1 == (byte *)0x0) {
      return pbVar5;
    }
    sVar1 = *(short *)(param_1 + 2);
    func_0x08252840(&uStack_2c,0,8);
    if ((ushort)(sVar1 - 2U) < 4) {
      return pbVar5;
    }
    uStack_2c = *(uint *)(param_1 + 6);
    if (7 < (ushort)(sVar1 - 2U)) {
      sStack_28 = *(short *)(param_1 + 10);
      sStack_26 = *(short *)(param_1 + 0xc);
    }
    func_0x082edcc8(_DAT_0823ff40,_DAT_0823ff5c,5,(short)*(uint *)(param_1 + 6),
                    *(undefined2 *)(param_1 + 8),sStack_28,sStack_26,param_2);
    if ((*(short *)(param_1 + 6) != 0) && (*(short *)(param_1 + 8) == 0)) {
      return pbVar5;
    }
    if ((sStack_28 != 0) && (sStack_26 == 0)) {
      return pbVar5;
    }
    iVar10 = func_0x082364e0(&uStack_2c);
    if (iVar10 != 0) {
      return pbVar5;
    }
LAB_0823f7b8:
    func_0x08236594();
    goto LAB_0823f586;
  }
  if (8 < (uVar12 - 0x2c80 & 0xffff)) {
    return (byte *)0x0;
  }
  switch(uVar12 - 0x2c80) {
  case 0:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c80,1,param_3);
    uVar15 = uRam0823f678;
    if (pbVar5 == (byte *)0x0) goto LAB_0823f45c;
    bVar3 = func_0x08241df8();
    break;
  case 1:
    uVar14 = (uint)*(ushort *)(param_1 + 6);
    if (uVar14 == 0xff01) {
      uVar15 = 1;
code_r0x0823f470:
      func_0x082438f4(uVar15);
code_r0x0823f474:
      bVar17 = true;
    }
    else {
      if (uVar14 == 0xff00) {
        uVar15 = 0;
        goto code_r0x0823f470;
      }
      if (uVar14 == 0xff02) goto code_r0x0823f474;
      func_0x08252840(&sStack_28,0,0x10);
      uStack_2c = uVar14;
      func_0x0824393c(&uStack_2c,0);
      bVar17 = false;
    }
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c81,1,param_3);
    uVar15 = uRam0823f67c;
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      if (!bVar17) {
        return pbVar5;
      }
      uVar15 = 100;
      uVar18 = 0xb0;
code_r0x0823f4ce:
      func_0x082317e0(0,4,1,uVar18,0,0,0,uVar15);
      return pbVar5;
    }
    goto LAB_0823f45c;
  case 2:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c82,3,param_3);
    uVar15 = uRam0823f688;
    if (pbVar5 == (byte *)0x0) goto LAB_0823f45c;
    uVar14 = *(ushort *)(param_1 + 2) - 4 & 0xffff;
    uVar16 = (uint)*(ushort *)(param_1 + 6);
    uVar19 = uVar14;
    func_0x082edcc8(_DAT_0823f98c,uRam0823f988,3,*(undefined2 *)(param_1 + 4),uVar16,uVar14);
    switch(*(undefined2 *)(param_1 + 6)) {
    case 0:
      func_0x082edcc8(_DAT_0823f98c,uRam0823f994,1,param_1[8],uVar16,uVar19);
      iVar10 = func_0x08243200(param_1[8],0);
      if (iVar10 == 1) {
        *pbVar5 = 0;
      }
      else {
        *pbVar5 = 1;
      }
      pbVar5[1] = 0;
      goto code_r0x0823f722;
    case 1:
      *pbVar5 = 1;
      pbVar5[1] = 1;
      pbVar5[2] = 0;
      func_0x08252840(&uStack_2c,0,8);
      if (3 < uVar14) {
        uStack_2c = *(uint *)(param_1 + 8);
      }
      if (7 < uVar14) {
        sStack_28 = *(short *)(param_1 + 0xc);
        sStack_26 = *(short *)(param_1 + 0xe);
      }
      func_0x082edcc8(_DAT_0823f98c,uRam0823f998,5,uStack_2c & 0xffff,uStack_2c >> 0x10,sStack_28,
                      sStack_26,param_2);
      if (((short)uStack_2c != 0) && (uStack_2c._2_2_ == 0)) {
        return pbVar5;
      }
      if ((sStack_28 != 0) && (sStack_26 == 0)) {
        return pbVar5;
      }
      iVar10 = func_0x082364e0(&uStack_2c);
      if (iVar10 != 0) {
        func_0x082edcc8(_DAT_0823f98c,uRam0823f9a0,0);
        bVar3 = 1;
code_r0x0823f53c:
        *pbVar5 = bVar3;
        return pbVar5;
      }
      func_0x082edcc8(_DAT_0823f98c,uRam0823f99c,0);
      goto LAB_0823f7b8;
    default:
      func_0x081f3f9c(pbVar5);
      return (byte *)0x0;
    case 6:
      *pbVar5 = 1;
      pbVar5[1] = 6;
      pbVar5[2] = 0;
      iVar10 = func_0x08241afe((int)*(short *)(param_1 + 8));
      if (iVar10 != 0) {
        return pbVar5;
      }
      bVar3 = 0;
      break;
    case 7:
      *pbVar5 = 1;
      pbVar5[1] = 7;
      pbVar5[2] = 0;
      bVar3 = param_1[8];
      iVar10 = func_0x08241ae4();
      bVar11 = *(byte *)(iVar10 + 4);
      iVar10 = func_0x08241af8(bVar3 != 0);
      if (iVar10 != 0) {
        return pbVar5;
      }
      if (bVar11 != bVar3) {
        iVar10 = func_0x08241ae4();
        func_0x08243cbc(*(undefined1 *)(iVar10 + 4));
      }
      uVar15 = 0x8b;
      iVar10 = 0;
      uVar18 = 0;
      goto code_r0x0823f57c;
    case 8:
      *pbVar5 = 2;
      pbVar5[1] = 8;
code_r0x0823f722:
      pbVar5[2] = 0;
      return pbVar5;
    case 9:
      func_0x082edcc8(_DAT_0823f98c,uRam0823f990,1,param_1[8],uVar16,uVar19);
      iVar10 = func_0x08243ab0(param_1[8],1);
      if (iVar10 == 0) {
        *pbVar5 = 0;
        pbVar5[1] = 9;
        pbVar5[2] = 0;
        return pbVar5;
      }
      return pbVar5;
    case 10:
      uStack_2c = CONCAT31(uStack_2c._1_3_,param_1[8]);
      uVar14 = func_0x081c6324(0xf319,&uStack_2c,1);
      uVar12 = uStack_2c & 0xff;
      uVar15 = uRam0823f9a4;
      if (uVar14 != 0) goto LAB_0823f856;
      func_0x082edcc8(_DAT_0823f98c,uRam0823f9a8,1,uVar12,uVar16,uVar19);
      uVar18 = 7;
      uVar15 = 0;
      goto code_r0x0823f4ce;
    case 0xb:
      *pbVar5 = 1;
      pbVar5[1] = 0xb;
      pbVar5[2] = 0;
      pbVar8 = (byte *)func_0x082ee778(1);
      if (pbVar8 == (byte *)0x0) {
        return pbVar5;
      }
      *pbVar8 = param_1[8];
      iVar10 = func_0x082317e0(0,3,1,0x4c,pbVar8,1,0,0);
      bVar3 = 0;
      if (iVar10 != 0) goto code_r0x0823f8b6;
      break;
    case 0xc:
      *pbVar5 = 1;
      pbVar5[1] = 0xc;
      pbVar5[2] = 0;
      pbVar8 = (byte *)func_0x082ee778(1);
      if (pbVar8 == (byte *)0x0) {
        return pbVar5;
      }
      *pbVar8 = param_1[8];
      iVar10 = func_0x082317e0(0,3,1,0x4d,pbVar8,1,0,0);
      func_0x082469b0(param_1[8]);
      if (iVar10 == 0) {
        *pbVar5 = 0;
        return pbVar5;
      }
code_r0x0823f8b6:
      func_0x082ee848(pbVar8);
      return pbVar5;
    case 0x10:
      pbVar5[2] = 0;
      *pbVar5 = 0;
      pbVar5[1] = 0x10;
      uStack_2c = (uint)param_1[8];
      func_0x0823e4f0(1,0x4f,&uStack_2c,4,0);
      return pbVar5;
    case 0x12:
      pbVar5[2] = 0;
      pbVar5[1] = 0x12;
      func_0x082317e0(0,3,1,0x62,param_1[8],0,0,0);
      goto code_r0x0823f516;
    case 0x13:
      pbVar5[1] = 0x13;
      pbVar5[2] = 0;
      if (param_1 == (byte *)0xfffffff8) {
        bVar3 = 2;
        goto code_r0x0823f53c;
      }
      bVar3 = param_1[8];
      func_0x082edcc8(_DAT_0823f98c,uRam0823f9ac,1,bVar3,uVar16,uVar19);
      bVar3 = func_0x082478f0(bVar3);
      break;
    case 0x14:
      pbVar5[2] = 0;
      pbVar5[1] = 0x14;
      func_0x082468a4(param_1[8] != 0);
code_r0x0823f516:
      *pbVar5 = 0;
      return pbVar5;
    }
    break;
  case 3:
    uVar14 = (uint)*(ushort *)(param_1 + 6);
    func_0x082edcc8(uRam0823fcd0,uRam0823fccc,2,uVar12,uVar14);
    switch(*(undefined2 *)(param_1 + 6)) {
    case 0:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      uVar15 = uRam0823fce0;
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        iVar10 = func_0x08243260();
        uVar18 = uRam0823fcdc;
        uVar2 = uRam0823fcd8;
        if (iVar10 == 0xff) {
          *pbVar5 = 0xff;
          pbVar5[3] = 0xff;
          uVar15 = 0xff;
          uVar18 = uVar2;
        }
        else {
          uVar15 = 0;
          *pbVar5 = 0;
          pbVar5[3] = (byte)iVar10;
        }
        goto code_r0x0823fac8;
      }
      break;
    case 1:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,0xb,param_3);
      uVar15 = uRam0823fce8;
      if (pbVar5 != (byte *)0x0) {
        pbVar5[2] = 0;
        pbVar5[1] = 1;
        puVar9 = (undefined2 *)func_0x082364d8();
        *pbVar5 = 0;
        uVar15 = uRam0823fce4;
        *(undefined2 *)(pbVar5 + 3) = *puVar9;
        *(undefined2 *)(pbVar5 + 5) = puVar9[1];
        *(undefined2 *)(pbVar5 + 7) = puVar9[2];
        *(undefined2 *)(pbVar5 + 9) = puVar9[3];
        func_0x082edcc8(uRam0823fcd0,uVar15,4,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
        return pbVar5;
      }
      break;
    default:
      goto LAB_0823f430;
    case 6:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,5,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[2] = 0;
        *pbVar5 = 0;
        pbVar5[1] = 6;
        puVar9 = (undefined2 *)func_0x08241ae4();
        *(undefined2 *)(pbVar5 + 3) = *puVar9;
        return pbVar5;
      }
      return (byte *)0x0;
    case 7:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[2] = 0;
        *pbVar5 = 0;
        pbVar5[1] = 7;
        iVar10 = func_0x08241ae4();
        pbVar5[3] = *(byte *)(iVar10 + 4);
        return pbVar5;
      }
      return (byte *)0x0;
    case 8:
      func_0x082edcc8(uRam0823fcd0,uRam0823fcec,0,*(undefined2 *)(param_1 + 6),uVar14);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        func_0x082eea28(uRam0823fcd0,uRam0823fcf4,0);
        return (byte *)0x0;
      }
      uVar15 = 0;
      pbVar5[1] = 8;
      uVar18 = uRam0823fcf0;
      *pbVar5 = 2;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
code_r0x0823fac8:
      func_0x082edcc8(uRam0823fcd0,uVar18,1,uVar15);
      return pbVar5;
    case 9:
      uVar15 = func_0x08243a96();
      func_0x082edcc8(uRam0823fcd0,uRam0823fcd4,1,uVar15,uVar14);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar11 = 9;
      goto code_r0x0823fa90;
    case 10:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,1,param_3);
      uVar15 = uRam0823fcfc;
      if (pbVar5 != (byte *)0x0) {
        uVar15 = func_0x081caec0();
        uVar18 = uRam0823fcf8;
        *pbVar5 = (byte)uVar15;
        goto code_r0x0823fac8;
      }
      break;
    case 0xb:
    case 0xc:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      if (*(short *)(param_1 + 6) == 0xb) {
        pbVar5[1] = 0xb;
        pbVar5[2] = 0;
        bVar3 = func_0x08239640();
      }
      else {
        pbVar5[2] = 0;
        pbVar5[1] = 0xc;
        bVar3 = func_0x08239634();
      }
      goto code_r0x0823fc32;
    case 0xd:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      pbVar5[1] = 0xd;
      pbVar5[2] = 0;
      bVar3 = func_0x08239628();
code_r0x0823fc32:
      pbVar5[3] = bVar3;
      return pbVar5;
    case 0x10:
      uVar15 = func_0x0823ad74();
      func_0x082edcc8(uRam0823fcd0,uRam0823fd00,1,uVar15,uVar14);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar11 = 0x10;
code_r0x0823fa90:
      bVar3 = (byte)uVar15;
      pbVar5[1] = bVar11;
      pbVar5[2] = 0;
      *pbVar5 = 0;
code_r0x0823fa96:
      pbVar5[3] = bVar3;
      return pbVar5;
    case 0x12:
      bVar3 = func_0x08240cd4();
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      pbVar5[1] = 0x12;
      pbVar5[2] = 0;
      goto code_r0x0823fa96;
    case 0x13:
      bVar3 = func_0x08247968(&uStack_2c);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,6,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = 0x13;
        pbVar5[2] = 0;
        *pbVar5 = bVar3;
        *(short *)(pbVar5 + 3) = (short)uStack_2c;
        pbVar5[5] = uStack_2c._2_1_;
        return pbVar5;
      }
      return (byte *)0x0;
    case 0x18:
      func_0x082edcc8(_DAT_0823ff40,uRam0823ff44,1,param_1[8],uVar14);
      bVar3 = param_1[8];
      if (bVar3 == 3) {
code_r0x0823fd88:
        iVar10 = func_0x081fdd64(0,&uStack_2c,3);
        uVar15 = uRam0823ff48;
      }
      else {
        if (3 < bVar3) {
          bVar17 = bVar3 == 0xff;
code_r0x0823fd5e:
          if (!bVar17) {
            return (byte *)0x0;
          }
          func_0x082d12e0();
          uVar14 = 0;
          func_0x082317e0(0,4,1,0x73,0,0,0,1000);
          if (param_1[8] == 2) {
            return (byte *)0x0;
          }
          goto code_r0x0823fd88;
        }
        if (bVar3 != 0) {
          bVar17 = bVar3 == 2;
          goto code_r0x0823fd5e;
        }
        iVar10 = func_0x081fdd64(0,&uStack_2c,3);
        uVar15 = uRam0823ff4c;
      }
      func_0x082edcc8(_DAT_0823ff40,uVar15,1,iVar10,uVar14);
      if (iVar10 != 0) {
        func_0x08262438(&uStack_2c);
        func_0x082646f8();
      }
LAB_0823f430:
      return (byte *)0x0;
    case 0x23:
      func_0x082edcc8(_DAT_0823ff40,uRam0823ff50,1,param_1[8],uVar14);
      bVar3 = param_1[8];
      uStack_2c = CONCAT13(uStack_2c._3_1_,*puRam0823ff54);
      if (bVar3 == 2) {
        func_0x082425ec(&uStack_2c);
        goto code_r0x0823fdf8;
      }
      if (bVar3 != 3) {
        if (bVar3 == 1) {
          func_0x082425a8(&uStack_2c);
        }
        goto code_r0x0823fdf8;
      }
      uStack_30 = 0;
      func_0x08242570(&uStack_30);
      uVar13 = 0;
      if (uStack_30._1_1_ == '\0') {
code_r0x0823fe5e:
        uStack_2c._0_3_ = CONCAT12(uVar13,(short)uStack_2c);
      }
      else {
        if ((char)uStack_30 == '\x01') {
          if (uStack_30._1_1_ == '\t') {
            uStack_2c._0_3_ = CONCAT12(3,(short)uStack_2c);
            goto code_r0x0823fdf8;
          }
        }
        else if (((char)uStack_30 == '\x02') && (uStack_30._1_1_ == '\t')) {
          uVar13 = 4;
          goto code_r0x0823fe5e;
        }
        uStack_2c._0_3_ = CONCAT12((char)uStack_30,(short)uStack_2c);
      }
code_r0x0823fdf8:
      func_0x082edcc8(_DAT_0823ff40,uRam0823ff58,3,uStack_2c & 0xff,uStack_2c >> 8 & 0xff,
                      uStack_2c >> 0x10 & 0xff);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,6,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = 0x23;
        *pbVar5 = 0;
        pbVar5[2] = 0;
        func_0x082eeaa8(pbVar5 + 3,&uStack_2c);
        return pbVar5;
      }
      return (byte *)0x0;
    }
LAB_0823f45c:
    func_0x082edcc8(_DAT_0823f670,uVar15,0);
    return (byte *)0x0;
  default:
    goto LAB_0823f430;
  case 5:
    puVar7 = (undefined4 *)func_0x082ef1b8(4);
    *puVar7 = *(undefined4 *)(param_1 + 6);
    func_0x082317e0(0,3,1,0x30,puVar7,4,0,0);
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c85,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    goto code_r0x0823f516;
  case 6:
    iVar10 = *(ushort *)(param_1 + 2) - 2;
    func_0x082edcc8(_DAT_0823f670,uRam0823f680,3,(uint)*(ushort *)(param_1 + 2),2,iVar10);
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c86,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar3 = func_0x082423ca(param_1 + 6,iVar10);
    bVar3 = bVar3 ^ 1;
    break;
  case 7:
    func_0x082edcc8(_DAT_0823f670,uRam0823f684,1,uVar12,uVar14);
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c87,5,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    *pbVar5 = 1;
    uStack_30._0_1_ = 0x82;
    cVar4 = func_0x081f8d18(0x20,&uStack_30,1,&uStack_2c,4,100);
    if (cVar4 != '\0') {
      return pbVar5;
    }
    *(uint *)(pbVar5 + 1) = uStack_2c;
    uStack_30 = CONCAT11(uStack_30._1_1_,0x84);
    cVar4 = func_0x081f8d18(0x20,&uStack_30,1,&uStack_2c,4,100);
    if (cVar4 != '\0') {
      return pbVar5;
    }
    *(uint *)(pbVar5 + 1) = *(uint *)(pbVar5 + 1) | uStack_2c;
    bVar3 = 0;
    break;
  case 8:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c88,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (2 < param_1[6] - 1) {
      bVar3 = 3;
      goto code_r0x0823f53c;
    }
    iVar10 = func_0x082ef1b8(4);
    func_0x082eeaa8(iVar10,param_1 + 6,4);
    if (100 < *(byte *)(iVar10 + 1)) {
      *(undefined1 *)(iVar10 + 1) = 100;
    }
    if (100 < *(byte *)(iVar10 + 2)) {
      *(undefined1 *)(iVar10 + 2) = 100;
    }
    if (100 < *(byte *)(iVar10 + 3)) {
      *(undefined1 *)(iVar10 + 3) = 100;
    }
    uVar18 = 4;
    uVar15 = 0xb7;
code_r0x0823f57c:
    func_0x082317e0(0,3,1,uVar15,iVar10,uVar18,0,0);
LAB_0823f586:
    *pbVar5 = 0;
    return pbVar5;
  }
  *pbVar5 = bVar3;
  return pbVar5;
}


/* candidate_generic_common_getter at 081f4edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * candidate_generic_common_getter(int param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  uint uStack_2c;
  undefined1 auStack_24 [12];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uStack_18 = (uint)*(ushort *)(param_1 + 4);
  uStack_14 = param_3;
  uStack_10 = param_3;
  func_0x082edcc8(_DAT_081f4f44,_DAT_081f4f40,3,*(undefined1 *)(param_1 + 1));
  *_DAT_081f4f48 = (char)param_3;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 != 0x901) {
    if (sVar3 == 0x9fd) {
      puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x9fd,1,param_3);
      if (*(char *)(param_1 + 6) == '\0') {
        uStack_7c = 2;
      }
      else if (*(char *)(param_1 + 6) == '\x01') {
        uStack_7c = 0x40;
      }
      else {
        func_0x082eea28(_DAT_081f4d28,_DAT_081f4d24,1);
        uStack_7c = 0;
      }
      if (puVar6 != (undefined2 *)0x0) {
        func_0x08252840(&uStack_7c,0,0x6c);
        uStack_78 = 0xfe01;
        uStack_76 = *(undefined2 *)(param_1 + 7);
        iVar5 = func_0x0821f368(0xffffffff,&uStack_7c);
        *(bool *)puVar6 = iVar5 != 0;
      }
      return puVar6;
    }
    if (sVar3 != 0x900) {
      return (undefined2 *)0x0;
    }
    uStack_18 = param_1;
    uStack_14 = param_3;
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x900,3,param_3);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    *(undefined1 *)(puVar6 + 1) = 1;
    func_0x081f4d2c(*(undefined2 *)(param_1 + 6),*(undefined1 *)(param_1 + 8));
    uVar1 = *(ushort *)(param_1 + 6);
    if (0xb < uVar1) {
      if (3 < (ushort)(uVar1 - 0x1b)) {
        return puVar6;
      }
      switch(uVar1) {
      case 0x1b:
code_r0x081f4df4:
        iVar5 = func_0x08222e5c(1,&uStack_14);
        if (iVar5 == 0) {
          uVar9 = 0;
          if ((uStack_14 & 0xff) != 0) {
            uVar9 = uStack_14 >> 8 & 0xff;
          }
        }
        else {
          uVar9 = 0;
        }
        uVar8 = (uint)*(byte *)(param_1 + 8);
        iVar5 = func_0x08223078(0);
        if (iVar5 < (int)uVar8) {
          return puVar6;
        }
        if (uVar8 == 0) {
          return puVar6;
        }
        if ((uVar8 != uVar9) && (iVar5 = func_0x0824a5e4(), iVar5 != 0)) {
          uVar7 = func_0x0824c438(uVar8);
          func_0x081f4a10(uVar7,puVar6 + 1,uRam081f4ec8);
          func_0x0824c438(uVar8);
          func_0x0824c6c0();
          return puVar6;
        }
        goto code_r0x081f4e1e;
      case 0x1c:
        uVar7 = 0x100000;
        break;
      case 0x1d:
        uVar7 = 0x200000;
        break;
      case 0x1e:
        func_0x081f4af4(*(undefined1 *)(param_1 + 8),puVar6 + 1);
        return puVar6;
      default:
        goto LAB_081f4da8;
      }
      func_0x081f4a10(*(undefined1 *)(param_1 + 8),puVar6 + 1,uVar7);
LAB_081f4da8:
      return puVar6;
    }
    switch(uVar1) {
    case 0:
    case 0xb:
      goto code_r0x081f4df4;
    case 1:
      func_0x082438f4(*(undefined1 *)(param_1 + 8));
      break;
    default:
      return puVar6;
    case 4:
      if (puVar6 == (undefined2 *)0xfffffffe) {
        return (undefined2 *)0xfffffffe;
      }
      iVar5 = func_0x081f4a00(*(undefined1 *)(param_1 + 8),1);
      if (iVar5 == 0) {
code_r0x081f4e74:
        uVar2 = 1;
        goto code_r0x081f4e76;
      }
      break;
    case 10:
      if (*(char *)(param_1 + 1) == 'Z') {
        if (*(byte *)(param_1 + 8) < 2) {
          if (puVar6 == (undefined2 *)0xfffffffe) {
            return (undefined2 *)0xfffffffe;
          }
          if (*(code **)(iRam081f4ecc + 4) != (code *)0x0) {
            (**(code **)(iRam081f4ecc + 4))();
            return puVar6;
          }
        }
        goto code_r0x081f4e74;
      }
      if (*(char *)(param_1 + 1) != '[') {
        func_0x082edcc8(uRam081f4ed4,uRam081f4ed8,1);
        return puVar6;
      }
      if (*(code **)(iRam081f4ecc + 8) == (code *)0x0) {
        func_0x082eea28(uRam081f4ed4,uRam081f4ed0);
      }
      else {
        (**(code **)(iRam081f4ecc + 8))(*(undefined1 *)(param_1 + 8));
      }
    }
code_r0x081f4e1e:
    uVar2 = 0;
code_r0x081f4e76:
    *(undefined1 *)(puVar6 + 1) = uVar2;
    return puVar6;
  }
  switch(*(undefined2 *)(param_1 + 6)) {
  case 0:
  case 0xb:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *(undefined2 *)(param_1 + 6);
      auStack_24[0] = 0;
      func_0x081f4a18(auStack_24,puVar6 + 1,1);
      uVar2 = func_0x0824c420(auStack_24[0]);
      *(undefined1 *)((int)puVar6 + 3) = uVar2;
    }
    break;
  default:
    puVar6 = (undefined2 *)0x0;
    break;
  case 2:
    uStack_2c = param_3;
    sVar3 = func_0x081f4a08();
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,(sVar3 + 2) * 2,uStack_2c);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    iVar5 = func_0x081f4a08();
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    if (iVar5 == 0) {
      *(undefined1 *)((int)puVar6 + 3) = 0;
      goto code_r0x081f4be6;
    }
    uStack_2c = iVar5 << 1;
    iVar4 = func_0x081ed1b4(uStack_2c);
    func_0x081f4a0c();
    *(char *)((int)puVar6 + 3) = (char)iVar5;
    if (iVar4 == 0) {
      func_0x08252840(puVar6 + 2,0,uStack_2c);
    }
    else {
      func_0x082eeaa8();
    }
    func_0x081ed1d0(iVar4);
    goto code_r0x081f4bda;
  case 3:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    iVar5 = func_0x081f4a04();
    *(char *)((int)puVar6 + 3) = (char)iVar5;
    bVar10 = iVar5 == 0xff;
    goto code_r0x081f4c16;
  case 5:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,7);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *(undefined2 *)(param_1 + 6);
      func_0x081f4a48((int)puVar6 + 3,puVar6 + 1);
    }
    break;
  case 6:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    iVar5 = func_0x081fd3c6(0xdf,auStack_24);
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    if (iVar5 != 0) {
      uVar2 = func_0x08212c18(auStack_24);
      *(undefined1 *)((int)puVar6 + 3) = uVar2;
    }
    bVar10 = *(char *)((int)puVar6 + 3) == -1;
code_r0x081f4c16:
    if (bVar10) {
code_r0x081f4be6:
      uVar2 = 1;
    }
    else {
code_r0x081f4bda:
      uVar2 = 0;
    }
    *(undefined1 *)(puVar6 + 1) = uVar2;
    break;
  case 7:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,5);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *(undefined2 *)(param_1 + 6);
      func_0x081f4ac8((int)puVar6 + 3,puVar6 + 1);
    }
    break;
  case 10:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    if ((code *)*puRam081f4cb4 != (code *)0x0) {
      (*(code *)*puRam081f4cb4)();
      goto code_r0x081f4bda;
    }
    goto code_r0x081f4be6;
  }
  return puVar6;
}

