/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */

/* Function at 08245d5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08245d5c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = _DAT_08245d7c;
    if (param_2 == 0) {
      puVar1 = _DAT_08245d78;
    }
  }
  else {
    puVar1 = _DAT_08245d80;
    if (param_1 != 2) {
      return 0;
    }
  }
  return *puVar1;
}


/* Function at 08245d84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_08245d84(uint param_1)

{
  if ((*_DAT_08245db0 != param_1) && (*_DAT_08245db0 = (byte)param_1, *_DAT_08245db4 != '\0')) {
    func_0x0823181c(0,4,1,0x28,param_1,0,0,0);
  }
  return;
}


/* Function at 08245e58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08245e58(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_08245e74;
  if (((param_1 != 0) && (puVar1 = _DAT_08245e78, param_1 != 1)) &&
     (puVar1 = _DAT_08245e7c, param_1 != 2)) {
    return 0;
  }
  return *puVar1;
}


/* Function at 08245e10 */

void selection_08245e10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  
  func_0x08247848();
  if (param_4 == 0) {
    iVar1 = func_0x0821e5e0();
    if (iVar1 == param_2) goto LAB_08243bac;
    iVar1 = func_0x0821e5e0();
  }
  else {
    iVar1 = func_0x0821e5ec();
    if (iVar1 == param_2) goto LAB_08243bac;
    iVar1 = func_0x0821e5ec();
  }
  if (iVar1 != param_3) {
    return;
  }
LAB_08243bac:
  func_0x082528d0(auStack_18,0,0x10);
  uStack_1c = 10;
  selection_082439a4(&uStack_1c,0);
  return;
}


/* Function at 0824513c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint selection_0824513c(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte bStack_22;
  undefined1 auStack_21 [5];
  
  uVar4 = func_0x08241e60();
  uVar5 = func_0x08241e60();
  pcVar2 = _DAT_082452ac;
  if (param_1 == 0xffff) {
    return param_2;
  }
  cVar1 = *_DAT_082452ac;
  if (cVar1 == '\x05') {
    return param_2;
  }
  uVar8 = uVar4 - 4 & 0xff;
  if (uVar8 < 9) {
    switch(uVar4) {
    case 4:
    case 10:
code_r0x082451ea:
      uVar5 = 10;
      break;
    case 5:
    case 0xb:
      uVar5 = 0xb;
      break;
    case 6:
    case 7:
    case 8:
    case 0xc:
      if (cVar1 == '\0') goto code_r0x082451ea;
      if (cVar1 != '\x05') {
        uVar5 = 0xc;
      }
    }
  }
  else if (cVar1 == '\0') {
    uVar5 = 4;
  }
  else if (cVar1 != '\x05') {
    uVar5 = 6;
  }
  func_0x0823e980(&bStack_22,auStack_21,param_1);
  if (bStack_22 - 0x21 < 4) {
    bStack_22 = 0x18;
  }
  uVar6 = func_0x08241d04(bStack_22,auStack_21[0],uVar5);
  uVar9 = uVar6;
  func_0x082ee038(_DAT_082452b4,_DAT_082452b0,4,uVar4,*pcVar2,uVar5,uVar6);
  puVar3 = _DAT_082452b8;
  if (uVar6 < 0xc) {
    if (9 < uVar6) {
LAB_0824523c:
      if (uVar8 < 9) goto LAB_08245266;
      uVar7 = _DAT_082452bc;
      if (*pcVar2 == '\x05') goto code_r0x08245250;
      *_DAT_082452b8 = (short)uVar6;
    }
  }
  else if ((uVar6 - 0x34 & 0xffff) < 0xd) {
    switch(uVar6 - 0x34) {
    case 0:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 10:
      goto LAB_0824523c;
    default:
      goto LAB_082451d2;
    case 5:
      if (uVar4 == 4) {
code_r0x08245264:
        uVar6 = 0x38;
        goto LAB_08245266;
      }
      uVar7 = uRam082452c8;
      if (*pcVar2 == '\0') {
        *_DAT_082452b8 = 0x38;
        uVar6 = 0;
        goto LAB_08245266;
      }
      break;
    case 0xc:
      if (*pcVar2 == '\0') {
        *_DAT_082452b8 = 0x3b;
        if (uVar4 != 4) {
          uVar6 = 0;
          if (4 < uVar4) {
            uVar6 = 0x3c;
          }
          goto LAB_08245266;
        }
        goto code_r0x08245264;
      }
      uVar7 = uRam082452c4;
      if (uVar4 == 4) {
        uVar6 = 0x3b;
        *_DAT_082452b8 = 0x3c;
        goto LAB_08245266;
      }
    }
code_r0x08245250:
    func_0x082eeb08(_DAT_082452b4,uVar7,0);
  }
LAB_082451d2:
  uVar6 = 0;
LAB_08245266:
  func_0x082ee038(_DAT_082452b4,_DAT_082452c0,2,uVar6,*puVar3,uVar5,uVar9);
  return uVar6;
}

