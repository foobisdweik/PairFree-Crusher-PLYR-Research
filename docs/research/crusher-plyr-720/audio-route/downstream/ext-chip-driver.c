/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 0824d02a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d02a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_4;
  uStack_10 = param_3;
  iVar2 = func_0x081c62f8(0xf5fd,_DAT_0824d0b4,&uStack_14,param_4,param_1);
  if (iVar2 != 0) {
    func_0x0824cff0();
  }
  piVar1 = _DAT_0824d0b8;
  if (*_DAT_0824d0b8 == 0) {
    iVar2 = func_0x082edf58(1,0,3);
    *piVar1 = iVar2;
  }
  func_0x0824cf2c(0x45,0);
  func_0x082ee498(0x28);
  puVar3 = _DAT_0824d0bc;
  for (iVar2 = 0; iVar2 != 0xaf; iVar2 = iVar2 + 1) {
    func_0x0824cf2c(*puVar3,puVar3[1]);
    puVar3 = puVar3 + 2;
  }
  func_0x0824cf2c(0x45,0x80);
  func_0x082ee498(0x28);
  puVar3 = _DAT_0824d0c0;
  for (iVar2 = 0; iVar2 != 0x11; iVar2 = iVar2 + 1) {
    func_0x0824cf2c(*puVar3,puVar3[1]);
    puVar3 = puVar3 + 2;
  }
  func_0x082ee038(_DAT_0824d0c8,_DAT_0824d0c4,0);
  return;
}


/* function at 0824d1fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ds_0824d1fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined3 param_4)

{
  int iVar1;
  
  iVar1 = ds_081f8c14(_DAT_0824d230,&stack0xfffffff7,1,param_1,param_2,100,param_3,
                      CONCAT13(0x46,param_4));
  if (iVar1 != 0) {
    func_0x082ee038(_DAT_0824d234,_DAT_0824d238,0);
  }
  return iVar1 == 0;
}


/* function at 0824d23e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ds_0824d23e(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  iVar1 = ds_081f8c14(_DAT_0824d26c,param_1,param_2,0,0,100);
  if (iVar1 != 0) {
    func_0x082ee038(_DAT_0824d270,_DAT_0824d274,0);
  }
  return iVar1 == 0;
}


/* function at 0824d278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d278(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_1 == 0) {
    uVar2 = 0x20;
  }
  else {
    uVar2 = 0x30;
  }
  func_0x082ee038(_DAT_0824d2cc,_DAT_0824d2c8,1,param_1);
  _uStack_14 = CONCAT11(uVar2,0x27);
  iVar1 = ds_081f8c14(_DAT_0824d2d0,&uStack_14,2,0,0,100);
  if (iVar1 == 0) {
    *_DAT_0824d2d8 = (char)param_1;
  }
  else {
    func_0x082eeb08(_DAT_0824d2cc,_DAT_0824d2d4,0);
  }
  return;
}


/* function at 0824d31c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 ds_0824d31c(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 auStack_18 [2];
  undefined4 uStack_14;
  
  auStack_18[0] = 0x202;
  uStack_14 = 0;
  ds_081f8c14(_DAT_0824d380,auStack_18,2,0,0,100);
  func_0x082ee498(10);
  iVar2 = ds_081f8c14(_DAT_0824d380,0,0,&uStack_14,4,100);
  puVar1 = _DAT_0824d384;
  if (((iVar2 == 0) && ((char)uStack_14 == '\x02')) && (uStack_14._1_1_ == '\x02')) {
    *_DAT_0824d384 = CONCAT11(uStack_14._2_1_,uStack_14._3_1_);
  }
  return *puVar1;
}


/* function at 0824d388 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d388(void)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  
  piVar1 = _DAT_0824d3bc;
  if (*_DAT_0824d3bc == 0) {
    iVar3 = func_0x082edf58(1,0,3);
    *piVar1 = iVar3;
  }
  psVar2 = _DAT_0824d3c0;
  if (*_DAT_0824d3c0 == -1) {
    ds_0824d31c();
  }
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_0824d3c8,_DAT_0824d3c4,1,*psVar2);
  return;
}


/* function at 0824d3cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d3cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uStack_c;
  ushort uStack_a;
  
  _uStack_c = CONCAT22(*_DAT_0824d414 << 8 | *_DAT_0824d414 >> 8,0x102);
  iVar1 = ds_081f8c14(_DAT_0824d418,&uStack_c,4,0,0,100,param_3);
  if (iVar1 == 0) {
    func_0x082ee038(_DAT_0824d420,_DAT_0824d41c,0);
  }
  else {
    func_0x082ee9d8(_DAT_0824d420,_DAT_0824d424,0);
    ds_0824d2fc();
  }
  return;
}


/* function at 0824d4ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ds_0824d4ac(void)

{
  uint uVar1;
  undefined2 in_r3;
  undefined2 auStack_14 [4];
  
  auStack_14[0] = in_r3;
  uVar1 = ds_081f8c14(_DAT_0824d4e8,auStack_14,2,0,0,100);
  if (uVar1 == 0) {
    func_0x082ee038(_DAT_0824d4f0,_DAT_0824d4ec,0);
  }
  else {
    func_0x082ee9d8(_DAT_0824d4f0,_DAT_0824d4f4,0);
  }
  return uVar1 & 0xff;
}


/* function at 0824d4fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ds_0824d4fc(void)

{
  uint3 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 in_r3;
  uint uVar4;
  undefined2 auStack_1c [2];
  char cStack_18;
  char cStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  
  uVar2 = *_DAT_0824d5d4;
  cStack_18 = (char)uVar2;
  cStack_17 = (char)((uint)uVar2 >> 8);
  uStack_16 = (undefined1)((uint)uVar2 >> 0x10);
  bStack_15 = (byte)((uint)uVar2 >> 0x18);
  bStack_14 = (byte)*(undefined2 *)(_DAT_0824d5d4 + 1);
  bStack_13 = (byte)((ushort)*(undefined2 *)(_DAT_0824d5d4 + 1) >> 8);
  auStack_1c[0] = in_r3;
  ds_081f8c14(_DAT_0824d5d8,auStack_1c,2,0,0,100);
  func_0x082ee498(10);
  iVar3 = ds_081f8c14(_DAT_0824d5d8,0,0,&cStack_18,6,100);
  if (iVar3 == 0) {
    if (cStack_18 == '\x02') {
      uVar1 = CONCAT12(bStack_15,CONCAT11(uStack_16,cStack_17));
      uVar4 = CONCAT13(bStack_14,uVar1) << 0x18 | ((uVar1 & 0xff00) >> 8) << 0x10 |
              (uint)bStack_15 << 8 | (uint)bStack_14;
      func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5dc,2,2,uVar4);
    }
    else if ((cStack_18 == '\x01') && (cStack_17 == '\x02')) {
      uVar1 = CONCAT12(bStack_14,CONCAT11(bStack_15,uStack_16));
      uVar4 = CONCAT13(bStack_13,uVar1) << 0x18 | ((uVar1 & 0xff00) >> 8) << 0x10 |
              (uint)bStack_14 << 8 | (uint)bStack_13;
      func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5e4,3,1,2,uVar4);
    }
    else {
      func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5e8,6,cStack_18,cStack_17,uStack_16,bStack_15,
                      bStack_14,bStack_13);
      aux_0823181c(0,1,1,0xbc,0,0,0,100);
      uVar4 = 0xaaaaaaaa;
    }
  }
  else {
    func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5ec,0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

