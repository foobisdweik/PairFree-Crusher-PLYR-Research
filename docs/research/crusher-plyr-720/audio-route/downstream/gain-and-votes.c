/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 0822824c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_0822824c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar2 = _DAT_082282c8;
  func_0x082ee038(_DAT_082282cc,_DAT_082282d0,1,param_1);
  func_0x0821e580(*puVar2);
  if (*(char *)(_DAT_082282d4 + param_1 * 0x54) == '\x03') {
    cVar1 = *(char *)(_DAT_082282d4 + param_1 * 0x54 + 1);
    uStack_60 = param_2;
    if (param_3 == (undefined4 *)0x0) {
      func_0x082528d0(&uStack_5c,0,0x24);
    }
    else {
      uStack_5c = *param_3;
      uStack_58 = param_3[1];
      uStack_54 = param_3[2];
      uStack_50 = param_3[3];
      uStack_4c = param_3[4];
      uStack_48 = param_3[5];
      uStack_44 = param_3[6];
      uStack_40 = param_3[7];
      uStack_3c = param_3[8];
    }
    uVar3 = func_0x0821fcc4((int)cVar1,auStack_68);
    func_0x0821e58c(*puVar2);
  }
  else {
    func_0x0821e58c(*puVar2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* function at 0821e5d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 aux_0821e5d4(void)

{
  return *_DAT_0821e5dc;
}


/* function at 0824d664 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_0824d664(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = _DAT_0824d69c;
  while ((iVar3 != 4 && (*pcVar2 == '\0'))) {
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  }
  func_0x082ee038(_DAT_0824d6a4,_DAT_0824d6a0,1,iVar3);
  if (iVar3 < 2) {
    if (iVar3 < 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
  }
  else if (iVar3 == 3) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


/* function at 0824d428 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool aux_0824d428(uint param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uStack_14;
  ushort uStack_12;
  
  puVar1 = _DAT_0824d490;
  uVar3 = (ushort)(1 << (param_1 & 0xff));
  if (param_2 == 0) {
    uVar3 = *_DAT_0824d490 & ~uVar3;
  }
  else {
    uVar3 = *_DAT_0824d490 | uVar3;
  }
  *_DAT_0824d490 = uVar3;
  _uStack_14 = CONCAT22(uVar3 << 8 | uVar3 >> 8,0x102);
  iVar2 = func_0x081f8c14(_DAT_0824d494,&uStack_14,4,0,0,100,param_3);
  func_0x082ee038(_DAT_0824d49c,_DAT_0824d498,2,*puVar1,iVar2);
  if (iVar2 != 0) {
    func_0x082ee9d8(_DAT_0824d49c,_DAT_0824d4a0,0);
    func_0x0824d2fc();
  }
  return iVar2 == 0;
}


/* function at 0823e550 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0823e550(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0x082ee408(param_4 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = param_4;
    if (param_3 == 0) {
      iVar2 = 0;
    }
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = iVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      func_0x082ee988(puVar1 + 3,param_3,param_4);
    }
    func_0x081f9b28(1,param_5,puVar1,param_4 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x082ee4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_082ee4b4)(puVar1);
    return;
  }
  return;
}


/* function at 08227f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int aux_08227f60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    func_0x082eeb08(_DAT_08228020,_DAT_0822801c);
  }
  else {
    iVar3 = func_0x0821f524(0xc,_DAT_08228024,*(int *)(param_1 + 0x40),param_4,param_1,param_2);
    func_0x082ee038(_DAT_08228020,_DAT_08228028,1,iVar3);
    if (iVar3 == -1) {
      func_0x082eeb08(_DAT_08228020,_DAT_0822802c,0);
      return -1;
    }
    func_0x082ef1b8();
    iVar5 = _DAT_08228030;
    for (iVar4 = 0; iVar4 != 0x10; iVar4 = iVar4 + 1) {
      iVar6 = iVar4 * 0x54;
      if (*(char *)(iVar6 + _DAT_08228030) == '\0') {
        *(char *)(_DAT_08228030 + iVar6 + 1) = (char)iVar3;
        func_0x082ee988(iVar6 + 0xc + iVar5,param_1,0x48);
        iVar3 = (int)(char)iVar4;
        *(undefined1 *)(iVar5 + iVar6) = 1;
        goto LAB_08227fdc;
      }
    }
    iVar3 = 0;
LAB_08227fdc:
    func_0x082ee078();
    uVar2 = _DAT_08228034;
    uVar1 = _DAT_08228020;
    if (iVar4 != 0x10) {
      return iVar3;
    }
    iVar5 = 0x11;
    iVar3 = _DAT_08228030;
    while( true ) {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
      func_0x082eeb08(uVar1,uVar2,2,*(undefined1 *)(iVar3 + 0xc),*(undefined1 *)(iVar3 + 0xd));
      iVar3 = iVar3 + 0x54;
    }
    func_0x0825442c(_DAT_08228038 + 0x59,_DAT_08228038,0xd5);
  }
  return -1;
}


/* function at 08219250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_08219250(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_14;
  
  func_0x082196f8();
  if (param_1 == 0) {
    uVar6 = func_0x082ee038(_DAT_08219280,_DAT_0821927c,0);
  }
  else {
    uVar6 = func_0x08219ddc(param_1,param_2);
  }
  uStack_14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  func_0x082eeb38(&uStack_14);
  piVar2 = _DAT_082197c4;
  iVar5 = *_DAT_082197c4;
  iVar4 = *_DAT_082197c8;
  func_0x082ef438(uStack_14);
  if (iVar5 == iVar4) {
    cVar1 = *_DAT_082197cc;
    if (cVar1 == '\0') {
      func_0x082ee038(_DAT_082197d4,_DAT_082197d0,0);
      uVar3 = *_DAT_082197d8;
      *piVar2 = 0;
      func_0x082ee7d8(uVar3,0,0,0);
    }
    else {
      *_DAT_082197cc = cVar1 + -1;
      func_0x082ee038(_DAT_082197d4,_DAT_082197dc,1,cVar1 + -1,uVar3);
    }
  }
  else {
    func_0x082ee038(_DAT_082197d4,_DAT_082197e0,0);
  }
  return;
}


/* function at 08247842 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_08247842(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_1;
    puVar2 = (undefined1 *)func_0x082ee408(8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
      *(undefined4 *)(puVar2 + 4) = 1;
      iVar3 = aux_0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,1,iVar3);
      }
    }
    return;
  }
  return;
}


/* function at 0824786e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824786e(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_1;
    puVar2 = (undefined1 *)func_0x082ee408(8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
      *(undefined4 *)(puVar2 + 4) = 2;
      iVar3 = aux_0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,2,iVar3);
      }
    }
    return;
  }
  return;
}

