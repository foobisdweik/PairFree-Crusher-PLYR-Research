/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 082416a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_082416a4(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_418 [1024];
  undefined2 uStack_18;
  undefined4 uStack_14;
  
  func_0x082528d0(auStack_418,0,0x408);
  if ((char)param_1[4] == '\x02') {
    iVar2 = func_0x082ea500(param_1[2] + 1 + *param_1);
    func_0x082ee038(_DAT_08241724,_DAT_08241720,2,(char)param_1[4],iVar2);
    puVar1 = _DAT_08241728;
    if ((iVar2 == 1) || (iVar2 == 0)) {
      *_DAT_08241728 = (char)iVar2;
    }
    func_0x0823181c(0,4,0x27,0x7d,*puVar1,0,0,0);
    uStack_14 = 0x40;
  }
  else {
    uStack_14 = 0x80;
  }
  uStack_18 = func_0x081a61a8(auStack_418);
  func_0x081d27e8(auStack_418);
  return 0;
}


/* function at 0824172c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824172c(void)

{
  undefined1 uVar1;
  char acStack_11 [5];
  
  acStack_11[0] = *_DAT_082417b0;
  if (acStack_11[0] == '\0') {
    uVar1 = *_DAT_082417b4;
    func_0x082edcf8(uVar1);
    func_0x081aa6c8(*_DAT_082417b8,acStack_11);
    func_0x082ee038(_DAT_082417c0,_DAT_082417bc,1,acStack_11[0]);
    *(bool *)_DAT_082417c4 = acStack_11[0] == '\0';
    func_0x0823181c(1,4,0x27,0x7d,acStack_11[0] == '\0',0,0,0);
    func_0x082edee8(uVar1);
  }
  else {
    func_0x082318d4(0x27,0x7e);
    func_0x0823181c(1,4,0x27,0x7e,0,0,0,300);
  }
  return;
}


/* function at 082417c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_082417c8(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uStack_21;
  char acStack_20 [8];
  char acStack_18 [3];
  undefined1 uStack_15;
  undefined4 uStack_14;
  
  pcVar3 = _DAT_08241940;
  cVar1 = *_DAT_0824193c;
  if ((cVar1 != -1) && (*_DAT_08241944 == -1)) {
    *_DAT_08241940 = '\x01';
  }
  iVar5 = func_0x081d2660(_DAT_08241948,2);
  uVar6 = _DAT_08241958;
  if (iVar5 == 0) {
    uVar6 = _DAT_0824194c;
  }
  func_0x082ee038(_DAT_08241950,uVar6,0);
  if (*pcVar3 == '\0') {
    acStack_18[0] = '\x04';
    uStack_14 = 300;
    func_0x081aa488(cVar1);
    cVar2 = *_DAT_08241944;
    func_0x082edcf8(cVar2);
    iVar5 = func_0x081a77e4(cVar2,acStack_18);
    if (iVar5 != 0) {
      func_0x082eeb08(_DAT_08241950,_DAT_08241954,1);
      func_0x082edee8(cVar2);
      return;
    }
    iVar5 = func_0x081a76b0(cVar2,_DAT_0824195c,0,0);
    if (iVar5 != 0) {
      func_0x082eeb08(_DAT_08241950,_DAT_08241960,1);
      func_0x082edee8(cVar2);
      func_0x081a78ac(cVar2);
      return;
    }
    func_0x082edee8(cVar2);
  }
  else {
    uStack_21 = 0;
    func_0x082528d0(acStack_18,0,5);
    acStack_20[2] = '\x01';
    acStack_20[3] = '\x01';
    acStack_20[1] = 0;
    acStack_20[4] = 0;
    acStack_20[0] = cVar1;
    func_0x081be53c(acStack_20);
    func_0x081be964(cVar1,&uStack_21);
    uStack_15 = 1;
    acStack_18[1] = 1;
    acStack_18[2] = uStack_21;
    acStack_18[0] = cVar1;
    func_0x081be514(acStack_18);
    func_0x081be444(cVar1,_DAT_0824195c,0);
  }
  puVar4 = _DAT_08241964;
  acStack_20[0] = *pcVar3;
  if (acStack_20[0] == '\0') {
    func_0x081aa6c8(cVar1,acStack_20);
    func_0x082ee038(_DAT_08241950,_DAT_08241968,1,acStack_20[0]);
    *puVar4 = acStack_20[0] == '\0';
  }
  else {
    acStack_20[0] = '\0';
    iVar5 = func_0x081be964(cVar1,acStack_20);
    *puVar4 = acStack_20[0] == '\0' && iVar5 == 0;
  }
  func_0x0823181c(0,4,0x27,0x7d,*puVar4,0,0,0);
  func_0x082ee038(_DAT_08241950,_DAT_0824196c,0);
  return;
}


/* function at 08241970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_08241970(void)

{
  undefined1 uVar1;
  byte bStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  byte bStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  
  uVar1 = *_DAT_082419f0;
  bStack_19 = 0;
  uStack_14 = 0;
  bStack_16 = 0;
  uStack_15 = 1;
  uStack_17 = 1;
  uStack_18 = uVar1;
  func_0x081be964(uVar1,&bStack_19);
  _bStack_16 = CONCAT11(uStack_15,bStack_19);
  func_0x081be514(&uStack_18);
  func_0x081be444(uVar1,_DAT_082419f4,0);
  func_0x082ee038(_DAT_082419fc,_DAT_082419f8,1,bStack_19);
  func_0x0824c388(uVar1,bStack_19);
  *_DAT_08241a00 = bStack_19 ^ 1;
  func_0x0823181c(0,4,0x27,0x7d,bStack_19 ^ 1,0,0,0);
  return;
}


/* function at 08231848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_08231848(undefined4 param_1)

{
  func_0x082eeb08(param_1,_DAT_082318c8);
  return 0xffffffff;
}


/* function at 08240d48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_08240d48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = *_DAT_08240fbc;
  switch(uVar1) {
  case 0:
    func_0x082ee038(uRam08240fc4,uRam08240fc0,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x0824a404();
    func_0x081c9b08();
    func_0x081caf04(1);
    func_0x081caecc(0x34f0,0x5220,0x100);
    uVar2 = uRam08240fc8;
    break;
  default:
    goto LAB_08240da8;
  case 2:
    func_0x082ee038(uRam08240fc4,uRam08240fd4,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(0);
    func_0x081caecc(0xe8d,0x809,0x100);
    uVar2 = uRam08240fd8;
    break;
  case 3:
    func_0x082ee038(uRam08240fc4,uRam08240fdc,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(0);
    func_0x081caecc(0xe8d,0x80d,0x100);
    uVar2 = uRam08240fe0;
    break;
  case 4:
    func_0x082ee038(uRam08240fc4,uRam08240fe4,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(1);
    func_0x081caecc(0xe8d,0x80f,0x100);
    uVar2 = uRam08240fe8;
    break;
  case 5:
    func_0x082ee038(uRam08240fc4,uRam08240fec,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(0);
    func_0x081caecc(0xe8d,0x811,0x100);
    uVar2 = uRam08240ff0;
    break;
  case 6:
    func_0x082ee038(uRam08240fc4,uRam08240ff4,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(0);
    func_0x081caecc(0xe8d,0x813,0x100);
    uVar2 = uRam08240ff8;
    break;
  case 7:
    func_0x082ee038(uRam08240fc4,uRam08240ffc,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(1);
    func_0x081caecc(0xe8d,0x815,0x100);
    uVar2 = uRam08241000;
    break;
  case 8:
    func_0x082ee038(uRam08240fc4,uRam08241004,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(6);
    func_0x081caf04(1);
    func_0x081caecc(0xe8d,0x817,0x100);
    uVar2 = uRam08241008;
    break;
  case 10:
    func_0x082ee038(uRam08240fc4,uRam08240fcc,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(1);
    func_0x081caecc(0x34f0,0x821,0x100);
    uVar2 = uRam08240fd0;
    break;
  case 0xb:
    func_0x082ee038(uRam08240fc4,uRam0824100c,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(3);
    func_0x081caf04(1);
    func_0x081caecc(0xe8d,0x823,0x100);
    uVar2 = uRam08241010;
    break;
  case 0xd:
    func_0x082ee038(uRam08240fc4,uRam08241014,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(2);
    func_0x081caf04(1);
    func_0x081caecc(0xe8d,0x827,0x100);
    uVar2 = uRam08241018;
    break;
  case 0xf:
    func_0x082ee038(uRam08240fc4,uRam0824101c,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(1);
    func_0x081caf04(0);
    func_0x081caecc(0xe8d,0x82b,0x100);
    uVar2 = uRam08241020;
    break;
  case 0x10:
    func_0x082ee038(uRam08240fc4,uRam08241024,1,uVar1,param_1,param_2,param_3,param_4);
    func_0x081c9b08(4);
    func_0x081caf04(0);
    func_0x081caecc(0xe8d,0x82d,0x100);
    uVar2 = uRam08241028;
  }
  func_0x081caedc(2,uVar2);
LAB_08240da8:
  func_0x0823181c(1,3,0x24,0xd,0,0,0,0);
  return;
}

