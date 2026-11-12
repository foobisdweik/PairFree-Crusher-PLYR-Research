/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08246e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246e98(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [64];
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  func_0x082528d0(auStack_5c,0,0x4c);
  (**(code **)(param_1 + 4))(*param_1,auStack_5c);
  uStack_1c = _DAT_08247034;
  pcStack_18 = param_1;
  cVar2 = aux_08227f60(auStack_5c);
  param_1[0x36] = cVar2;
  func_0x08246be4(param_1,1);
  iVar3 = *(int *)(param_1 + 0x38);
  if (((iVar3 == 0) || (*(char *)(iVar3 + 7) != (char)uStack_14)) && (param_1[0x15] == '\0')) {
    if (iVar3 != 0) {
      func_0x08219328();
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
    }
    if (*param_1 == '\x02') {
      iVar3 = *(int *)(_DAT_08247038 + 0x104);
LAB_08246ef8:
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x38) = iVar3;
        goto LAB_08246efe;
      }
    }
    else if (*param_1 == '\x03') {
      iVar3 = *(int *)(_DAT_08247038 + 0xc0);
      goto LAB_08246ef8;
    }
    iVar3 = func_0x082192bc((char)uStack_14,*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x10) = _DAT_08247048;
      *(undefined1 *)(*(int *)(param_1 + 0x38) + 0xc) = uStack_14._1_1_;
      goto LAB_08246efe;
    }
    cVar1 = param_1[0x36];
    cVar2 = *param_1;
    uVar4 = _DAT_08247044;
LAB_08246f70:
    func_0x082eeb08(_DAT_08247040,uVar4,2,cVar2,(int)cVar1);
  }
  else {
LAB_08246efe:
    if ((*(int *)(param_1 + 0x3c) == 0) && (param_1[0x15] == '\x02')) {
      if (*param_1 == '\x02') {
        iVar3 = *(int *)(_DAT_08247038 + 0x108);
LAB_08246f14:
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x3c) = iVar3;
          goto LAB_08246f1a;
        }
      }
      else if (*param_1 == '\x03') {
        iVar3 = *(int *)(_DAT_08247038 + 0xc4);
        goto LAB_08246f14;
      }
      uStack_6c = uStack_14;
      uStack_6a = uStack_11;
      uStack_68 = *(undefined4 *)(param_1 + 0x1c);
      uStack_60 = _DAT_0824704c;
      pcStack_64 = param_1;
      iVar3 = func_0x08233544(&uStack_6c);
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 == 0) {
        func_0x082eeb08(_DAT_08247040,_DAT_08247050,2,*param_1,(int)param_1[0x36]);
      }
    }
LAB_08246f1a:
    if ((*(int *)(param_1 + 0x40) == 0) && (param_1[0x15] == '\x01')) {
      if (*param_1 == '\x02') {
        iVar3 = *(int *)(_DAT_08247038 + 0x10c);
LAB_08246f30:
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x40) = iVar3;
          goto LAB_08246f36;
        }
      }
      else if (*param_1 == '\x03') {
        iVar3 = *(int *)(_DAT_08247038 + 200);
        goto LAB_08246f30;
      }
      iVar3 = ds_082190d8(uStack_12);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0) {
        cVar1 = param_1[0x36];
        cVar2 = *param_1;
        uVar4 = _DAT_08247054;
        goto LAB_08246f70;
      }
      *(undefined1 *)(iVar3 + 8) = uStack_12;
      *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x12) = uStack_14._1_1_;
      uVar4 = _DAT_08247058;
      iVar3 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) = uVar4;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24) = _DAT_0824705c;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28) = _DAT_08247060;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c) = _DAT_08247064;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x30) = _DAT_08247068;
      aux_08219250(*(undefined4 *)(param_1 + 0x40),1);
    }
LAB_08246f36:
    func_0x082ee038(_DAT_08247040,_DAT_0824703c,2,*param_1,(int)param_1[0x36]);
  }
  return;
}


/* function at 0824706c */

/* WARNING: Possible PIC construction at 0x082470f2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x082470f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * ds_0824706c(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  byte *unaff_r4;
  int iVar8;
  undefined4 unaff_r5;
  undefined4 *puVar9;
  undefined4 unaff_lr;
  byte abStack_70 [96];
  undefined4 uStack_10;
  
  puVar9 = &uStack_10;
  pbVar4 = param_1;
  if (param_1 != (byte *)0x0) {
    uStack_10 = param_4;
    if (param_1[0x15] == 0) {
      func_0x08246be4(param_1,3);
      pbVar4 = (byte *)func_0x0821943c(*(undefined4 *)(param_1 + 0x38));
    }
    if (param_1[0x15] == 1) {
      bVar3 = true;
      if (*param_1 - 2 < 2) {
        bVar3 = false;
        if (**(int **)(param_1 + 0x40) != 0x3000000) {
          bVar3 = true;
        }
      }
      func_0x08246be4(param_1,3);
      if (!bVar3) {
        bVar2 = param_1[0x36];
        unaff_lr = 0x82470f7;
        unaff_r5 = 0;
        goto SUB_0822803c;
      }
      pbVar4 = (byte *)aux_08219250(*(undefined4 *)(param_1 + 0x40),2);
    }
    if (param_1[0x15] == 2) {
      func_0x08246be4(param_1,3);
      uVar5 = func_0x082335ac(*(undefined4 *)(param_1 + 0x3c),0);
      pbVar4 = (byte *)func_0x082ee038(_DAT_08247100,_DAT_082470fc,1,uVar5);
    }
    if (param_1[0x15] == 0xff) {
      func_0x08246be4(param_1,3);
      bVar2 = param_1[0x36];
      param_1 = unaff_r4;
      puVar9 = (undefined4 *)register0x00000054;
SUB_0822803c:
      puVar9[-1] = unaff_lr;
      puVar9[-2] = unaff_r5;
      puVar9[-3] = param_1;
      func_0x082528d0(puVar9 + -0x18,0,0x50);
      *(undefined1 *)(puVar9 + -0x18) = 0xc;
      iVar6 = (char)bVar2 * 0x54;
      iVar8 = _DAT_082280b4 + iVar6;
      if (*(char *)(_DAT_082280b4 + iVar6) == '\x01') {
        *(undefined1 *)(_DAT_082280b4 + iVar6) = 2;
        bVar2 = *(byte *)(iVar8 + 0xc);
        *(byte *)(puVar9 + -0x17) = bVar2;
        pcVar7 = *(code **)((uint)bVar2 * 0x14 + _DAT_082280b8 + 8);
        cVar1 = *(char *)(iVar8 + 1);
        *(undefined1 *)((int)puVar9 + -0x5b) = *(undefined1 *)(iVar8 + 0xd);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)();
        }
        pbVar4 = (byte *)ds_0821f5f4((int)cVar1,puVar9 + -0x18);
        puVar9[-0x1a] = pbVar4;
        func_0x082ee038(_DAT_082280c0,_DAT_082280bc,2,(int)cVar1);
      }
      else {
        func_0x082eeb08(_DAT_082280c0,_DAT_082280c4,1);
        pbVar4 = (byte *)0xffffffff;
      }
      return pbVar4;
    }
  }
  return pbVar4;
}

