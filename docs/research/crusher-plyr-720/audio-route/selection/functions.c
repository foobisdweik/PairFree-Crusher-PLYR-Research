/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */

/* Function at 08241570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08241570(int *param_1)

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
  
  func_0x082528d0(auStack_420,0,0x408);
  if ((char)param_1[4] == '\x02') {
    iVar5 = *param_1;
    iVar6 = param_1[2];
    puVar2 = (undefined1 *)func_0x082ee408(3);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x082528d0(puVar2,0,3);
      uVar3 = func_0x081a61a8(_DAT_08241690);
      iVar5 = iVar5 + iVar6 + 1;
      iVar6 = func_0x082ea724(_DAT_08241690,iVar5,uVar3);
      if (iVar6 == 0) {
        *puVar2 = 0;
LAB_082415c4:
        iVar5 = func_0x082eb4cc(iVar5,0x2c);
        uVar1 = func_0x082eb840(iVar5 + 1,0,10);
        puVar2[1] = uVar1;
        iVar5 = func_0x082eb4cc(iVar5 + 1,0x2c);
        uVar1 = func_0x082eb840(iVar5 + 1,0,10);
        puVar2[2] = uVar1;
        iStack_1c = 0x40;
        puVar4 = puVar2;
      }
      else {
        uVar3 = func_0x081a61a8(_DAT_0824169c);
        iVar6 = func_0x082ea724(_DAT_0824169c,iVar5,uVar3);
        if (iVar6 == 0) {
          *puVar2 = 1;
          goto LAB_082415c4;
        }
        uVar3 = func_0x081a61a8(_DAT_082416a0);
        iVar6 = func_0x082ea724(_DAT_082416a0,iVar5,uVar3);
        if (iVar6 == 0) {
          *puVar2 = 2;
          goto LAB_082415c4;
        }
        iStack_1c = 0x80;
        puVar4 = (undefined1 *)0x0;
        func_0x082ee4a8(puVar2);
      }
      if (iStack_1c == 0x40) {
        func_0x082ee038(_DAT_08241698,_DAT_08241694,3,*puVar4,puVar4[1],puVar4[2]);
        iVar5 = func_0x0823181c(0,4,0x27,0,puVar4,3,0,0);
        if (iVar5 != 0) {
          iStack_1c = 0x80;
          func_0x082ee4a8(puVar4);
        }
      }
      goto LAB_08241634;
    }
  }
  iStack_1c = 0x80;
LAB_08241634:
  uStack_20 = func_0x081a61a8(auStack_420);
  func_0x081d27e8(auStack_420);
  return 0;
}


/* Function at 08241b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08241b4c(void)

{
  return _DAT_08241b50;
}


/* Function at 08243268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool selection_08243268(undefined1 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  iVar2 = func_0x081c6324(0xf307,&uStack_11,1);
  puVar1 = _DAT_082432b8;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  else {
    *_DAT_082432b8 = uStack_11;
    uVar3 = func_0x082431a8(uStack_11,param_2);
  }
  func_0x082ee038(_DAT_082432c4,_DAT_082432c0,4,iVar2,uVar3,_DAT_082432bc,*puVar1);
  return iVar2 == 0;
}


/* Function at 082439a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int selection_082439a4(int *param_1,undefined2 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*_DAT_08243a2c == '\0') || (iVar2 = func_0x08243974(*param_1), iVar2 == 0)) {
    iVar2 = func_0x082438c0(param_1);
    pcVar1 = _DAT_08243a30;
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((*param_1 == 9) || (*param_1 == 0)) {
      *_DAT_08243a30 = '\0';
    }
    if (*pcVar1 == '\0') {
      if (*param_1 == 1) {
        *pcVar1 = '\x01';
      }
      iVar2 = func_0x082ee408(0x18);
      if (iVar2 != 0) {
        func_0x082ee988(iVar2,param_1,0x14);
        uVar3 = func_0x08244908();
        *(short *)(iVar2 + 0x14) = (short)uVar3;
        func_0x082ee038(_DAT_08243a38,_DAT_08243a34,3,*param_1,uVar3,(short)param_1[1]);
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = *(undefined2 *)(iVar2 + 0x14);
        }
        func_0x08243f9c(0,1,iVar2);
        goto LAB_08243a10;
      }
      func_0x082eeb08(_DAT_08243a38,_DAT_08243a3c,0);
    }
    iVar2 = 1;
  }
  else {
LAB_08243a10:
    iVar2 = 0;
  }
  return iVar2;
}


/* Function at 08243d24 */

void selection_08243d24(int param_1)

{
  undefined4 uStack_1c;
  undefined2 auStack_18 [8];
  
  func_0x082528d0(auStack_18,0,0x10);
  if (param_1 == 0) {
    uStack_1c = 0x32;
  }
  else {
    uStack_1c = 0x31;
  }
  auStack_18[0] = 2;
  selection_082439a4(&uStack_1c,0);
  return;
}

