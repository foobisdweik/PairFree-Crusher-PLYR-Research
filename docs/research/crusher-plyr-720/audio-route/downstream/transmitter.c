/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 0821f524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_0821f524(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined4 uStack_e4;
  
  pcVar1 = _DAT_0821f5dc;
  func_0x082528d0(&uStack_108,0,0xe0);
  func_0x082ee038(_DAT_0821f5e4,_DAT_0821f5e0,3,param_1,(int)*pcVar1,param_2);
  iVar3 = _DAT_0821f5e8 + param_1 * 4;
  uStack_104 = *(undefined1 *)(iVar3 + 1);
  uStack_103 = *(undefined1 *)(iVar3 + 2);
  uStack_102 = *(undefined1 *)(iVar3 + 3);
  uStack_105 = *(undefined1 *)(_DAT_0821f5e8 + param_1 * 4);
  if (*pcVar1 < '\x14') {
    func_0x0821e580(*_DAT_0821f5ec);
    uVar2 = func_0x0821e550();
    func_0x0821e58c(*_DAT_0821f5ec);
    func_0x082ee038(_DAT_0821f5e4,_DAT_0821f5f0,3,uVar2,param_1,(int)*pcVar1);
    uStack_108 = (undefined1)uVar2;
    uStack_107 = (undefined1)param_1;
    uStack_106 = 0;
    uStack_e4 = param_2;
    func_0x0821ec9c(1,0,0,1,&uStack_108,0,0);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* function at 0821f5f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_0821f5f4(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uStack_f8;
  byte bStack_f7;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  byte bStack_d8;
  undefined1 auStack_c4 [176];
  
  func_0x082528d0(&uStack_f8,0,0xe0);
  iVar1 = _DAT_0821f6b0;
  uVar2 = (uint)*param_2;
  uVar3 = *(undefined4 *)(_DAT_0821f6b0 + param_1 * 8 + 4);
  uVar4 = (uint)*(byte *)(_DAT_0821f6b0 + param_1 * 8);
  iVar5 = (int)*_DAT_0821f6bc;
  func_0x082ee038(_DAT_0821f6b8,_DAT_0821f6b4,5,param_1,iVar5,uVar4,uVar3,uVar2);
  if ((param_1 < 0x14) &&
     ((uVar6 = (uint)*(byte *)(iVar1 + param_1 * 8), uVar6 == 1 || (uVar6 - 4 < 2)))) {
    func_0x082ee038(_DAT_0821f6b8,_DAT_0821f6c0,1,param_1,iVar5,uVar4,uVar3,uVar2);
    bStack_f7 = *param_2;
    bStack_d8 = param_2[0x48];
    uStack_f8 = (undefined1)param_1;
    func_0x082ee988(auStack_c4,param_2 + 4,0x2c);
    func_0x082ee988(auStack_f0,param_2 + 0x30,0xc);
    func_0x082ee988(auStack_e4,param_2 + 0x3c,0xc);
    func_0x082ee988(_DAT_0821f6c4,param_2 + 0x49,6);
    func_0x0821ec9c(1,0,0,0x1c,&uStack_f8,0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* function at 0821f6c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_0821f6c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_f0 [224];
  
  iVar1 = _DAT_0821f740;
  func_0x082528d0(auStack_f0,0,0xe0);
  uVar2 = *(undefined4 *)(iVar1 + param_1 * 8 + 4);
  uVar3 = (uint)*(byte *)(iVar1 + param_1 * 8);
  iVar4 = (int)*_DAT_0821f748;
  func_0x082ee038(_DAT_0821f74c,_DAT_0821f744,4,param_1,iVar4,uVar3,uVar2);
  if ((param_1 < 0x14) && (*(char *)(iVar1 + param_1 * 8) == '\x02')) {
    func_0x082ee038(_DAT_0821f74c,_DAT_0821f750,1,param_1,iVar4,uVar3,uVar2);
    auStack_f0[0] = (undefined1)param_1;
    *(undefined1 *)(iVar1 + param_1 * 8) = 5;
    func_0x0821ec9c(1,0,0,0x1d,auStack_f0,0,0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* function at 0821fcc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_0821fcc4(int param_1,int param_2)

{
  int iVar1;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined4 uStack_d4;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  func_0x082528d0(&uStack_f8,0,0xe0);
  func_0x082ee038(_DAT_0821fd64,_DAT_0821fd60,1,param_1);
  if (param_1 < 0x14) {
    iVar1 = *(int *)(_DAT_0821fd68 + param_1 * 8 + 4);
    if (iVar1 != 0) {
      uStack_f7 = *(undefined1 *)(iVar1 + 1);
      uStack_f8 = (undefined1)param_1;
      uStack_c4 = *(undefined4 *)(iVar1 + 0x34);
      uStack_c0 = *(undefined4 *)(param_2 + 8);
      uStack_bc = *(undefined4 *)(param_2 + 0xc);
      uStack_b8 = *(undefined4 *)(param_2 + 0x10);
      uStack_b4 = *(undefined4 *)(param_2 + 0x14);
      uStack_b0 = *(undefined4 *)(param_2 + 0x18);
      uStack_ac = *(undefined4 *)(param_2 + 0x1c);
      uStack_a8 = *(undefined4 *)(param_2 + 0x20);
      uStack_a4 = *(undefined4 *)(param_2 + 0x24);
      uStack_a0 = *(undefined4 *)(param_2 + 0x28);
      uStack_9c = *(undefined4 *)(param_2 + 0x2c);
      uStack_d4 = *(undefined4 *)(iVar1 + 0x24);
      func_0x0821ec9c(1,0,0,0x20,&uStack_f8,0,0);
      return 0;
    }
    func_0x082eeb08(_DAT_0821fd64,_DAT_0821fd6c,1,param_1);
  }
  return 0xffffffff;
}


/* function at 08219ddc */

/* WARNING: Possible PIC construction at 0x08219e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0821995e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x082197f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219a76: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219a2e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219c4a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x082198a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219222: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0821978e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x082197b2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0821923e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x082191e2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219cd6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219d7e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219906: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0821991a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219d1e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219b3a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08219b8a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x08219b3e) */
/* WARNING: Removing unreachable block (ram,0x08219d22) */
/* WARNING: Removing unreachable block (ram,0x0821991e) */
/* WARNING: Removing unreachable block (ram,0x0821990a) */
/* WARNING: Removing unreachable block (ram,0x08219d82) */
/* WARNING: Removing unreachable block (ram,0x08219bb0) */
/* WARNING: Removing unreachable block (ram,0x08219cda) */
/* WARNING: Removing unreachable block (ram,0x08219242) */
/* WARNING: Removing unreachable block (ram,0x082197b6) */
/* WARNING: Removing unreachable block (ram,0x08219792) */
/* WARNING: Removing unreachable block (ram,0x08219226) */
/* WARNING: Removing unreachable block (ram,0x0821922e) */
/* WARNING: Removing unreachable block (ram,0x08219c8c) */
/* WARNING: Removing unreachable block (ram,0x08219c96) */
/* WARNING: Removing unreachable block (ram,0x08219c9c) */
/* WARNING: Removing unreachable block (ram,0x08219c34) */
/* WARNING: Removing unreachable block (ram,0x082198a8) */
/* WARNING: Removing unreachable block (ram,0x08219c60) */
/* WARNING: Removing unreachable block (ram,0x08219c4e) */
/* WARNING: Removing unreachable block (ram,0x08219a32) */
/* WARNING: Removing unreachable block (ram,0x08219a3a) */
/* WARNING: Removing unreachable block (ram,0x08219c42) */
/* WARNING: Removing unreachable block (ram,0x08219c4a) */
/* WARNING: Removing unreachable block (ram,0x08219208) */
/* WARNING: Removing unreachable block (ram,0x08219238) */
/* WARNING: Removing unreachable block (ram,0x08219212) */
/* WARNING: Removing unreachable block (ram,0x08219ab8) */
/* WARNING: Removing unreachable block (ram,0x08219a9c) */
/* WARNING: Removing unreachable block (ram,0x082197f8) */
/* WARNING: Removing unreachable block (ram,0x08219962) */
/* WARNING: Removing unreachable block (ram,0x08219968) */
/* WARNING: Removing unreachable block (ram,0x0821996c) */
/* WARNING: Removing unreachable block (ram,0x08219970) */
/* WARNING: Removing unreachable block (ram,0x08219974) */
/* WARNING: Removing unreachable block (ram,0x082199c6) */
/* WARNING: Removing unreachable block (ram,0x08219978) */
/* WARNING: Removing unreachable block (ram,0x08219acc) */
/* WARNING: Removing unreachable block (ram,0x08219ad4) */
/* WARNING: Removing unreachable block (ram,0x08219b0c) */
/* WARNING: Removing unreachable block (ram,0x08219b22) */
/* WARNING: Removing unreachable block (ram,0x08219b12) */
/* WARNING: Removing unreachable block (ram,0x08219ade) */
/* WARNING: Removing unreachable block (ram,0x08219ae6) */
/* WARNING: Removing unreachable block (ram,0x08219b02) */
/* WARNING: Removing unreachable block (ram,0x08219b56) */
/* WARNING: Removing unreachable block (ram,0x08219b5e) */
/* WARNING: Removing unreachable block (ram,0x08219b80) */
/* WARNING: Removing unreachable block (ram,0x08219b6a) */
/* WARNING: Removing unreachable block (ram,0x08219b40) */
/* WARNING: Removing unreachable block (ram,0x08219b46) */
/* WARNING: Removing unreachable block (ram,0x08219b4a) */
/* WARNING: Removing unreachable block (ram,0x08219b90) */
/* WARNING: Removing unreachable block (ram,0x08219b96) */
/* WARNING: Removing unreachable block (ram,0x08219bb6) */
/* WARNING: Removing unreachable block (ram,0x08219b9e) */
/* WARNING: Removing unreachable block (ram,0x08219986) */
/* WARNING: Removing unreachable block (ram,0x082199b2) */
/* WARNING: Removing unreachable block (ram,0x08219cec) */
/* WARNING: Removing unreachable block (ram,0x08219cf4) */
/* WARNING: Removing unreachable block (ram,0x08219d58) */
/* WARNING: Removing unreachable block (ram,0x08219d72) */
/* WARNING: Removing unreachable block (ram,0x08219d5e) */
/* WARNING: Removing unreachable block (ram,0x08219d68) */
/* WARNING: Removing unreachable block (ram,0x08219cfc) */
/* WARNING: Removing unreachable block (ram,0x08219d16) */
/* WARNING: Removing unreachable block (ram,0x08219d32) */
/* WARNING: Removing unreachable block (ram,0x08219d1c) */
/* WARNING: Removing unreachable block (ram,0x08219d0a) */
/* WARNING: Removing unreachable block (ram,0x08219d84) */
/* WARNING: Removing unreachable block (ram,0x08219d8c) */
/* WARNING: Removing unreachable block (ram,0x08219d92) */
/* WARNING: Removing unreachable block (ram,0x08219d3c) */
/* WARNING: Removing unreachable block (ram,0x08219d44) */
/* WARNING: Removing unreachable block (ram,0x08219af2) */
/* WARNING: Removing unreachable block (ram,0x08219bac) */
/* WARNING: Removing unreachable block (ram,0x08219d4e) */
/* WARNING: Removing unreachable block (ram,0x082199ba) */
/* WARNING: Removing unreachable block (ram,0x08219bc6) */
/* WARNING: Removing unreachable block (ram,0x08219bce) */
/* WARNING: Removing unreachable block (ram,0x08219ce6) */
/* WARNING: Removing unreachable block (ram,0x08219c76) */
/* WARNING: Removing unreachable block (ram,0x08219c7a) */
/* WARNING: Removing unreachable block (ram,0x08219c82) */
/* WARNING: Removing unreachable block (ram,0x08219c7e) */
/* WARNING: Removing unreachable block (ram,0x08219ac8) */
/* WARNING: Removing unreachable block (ram,0x08219c64) */
/* WARNING: Removing unreachable block (ram,0x08219ca6) */
/* WARNING: Removing unreachable block (ram,0x08219caa) */
/* WARNING: Removing unreachable block (ram,0x08219cb4) */
/* WARNING: Removing unreachable block (ram,0x08219cae) */
/* WARNING: Removing unreachable block (ram,0x082199ca) */
/* WARNING: Removing unreachable block (ram,0x08219c10) */
/* WARNING: Removing unreachable block (ram,0x08219c18) */
/* WARNING: Removing unreachable block (ram,0x08219c1e) */
/* WARNING: Removing unreachable block (ram,0x08219c6c) */
/* WARNING: Removing unreachable block (ram,0x08219c2a) */
/* WARNING: Removing unreachable block (ram,0x08219cc0) */
/* WARNING: Removing unreachable block (ram,0x08219bc0) */
/* WARNING: Removing unreachable block (ram,0x08219cc8) */
/* WARNING: Removing unreachable block (ram,0x08219cdc) */
/* WARNING: Removing unreachable block (ram,0x08219cd0) */
/* WARNING: Removing unreachable block (ram,0x08219988) */
/* WARNING: Removing unreachable block (ram,0x0821998e) */
/* WARNING: Removing unreachable block (ram,0x082199d6) */
/* WARNING: Removing unreachable block (ram,0x08219a14) */
/* WARNING: Removing unreachable block (ram,0x08219a18) */
/* WARNING: Removing unreachable block (ram,0x08219a54) */
/* WARNING: Removing unreachable block (ram,0x08219a58) */
/* WARNING: Removing unreachable block (ram,0x08219a1c) */
/* WARNING: Removing unreachable block (ram,0x08219a44) */
/* WARNING: Removing unreachable block (ram,0x08219a4c) */
/* WARNING: Removing unreachable block (ram,0x08219a28) */
/* WARNING: Removing unreachable block (ram,0x082199da) */
/* WARNING: Removing unreachable block (ram,0x08219a64) */
/* WARNING: Removing unreachable block (ram,0x08219aae) */
/* WARNING: Removing unreachable block (ram,0x08219890) */
/* WARNING: Removing unreachable block (ram,0x08219a68) */
/* WARNING: Removing unreachable block (ram,0x08219a90) */
/* WARNING: Removing unreachable block (ram,0x08219a9e) */
/* WARNING: Removing unreachable block (ram,0x08219a7a) */
/* WARNING: Removing unreachable block (ram,0x08219a96) */
/* WARNING: Removing unreachable block (ram,0x08219a74) */
/* WARNING: Removing unreachable block (ram,0x082198b8) */
/* WARNING: Removing unreachable block (ram,0x08219904) */
/* WARNING: Removing unreachable block (ram,0x082191a8) */
/* WARNING: Removing unreachable block (ram,0x082191f0) */
/* WARNING: Removing unreachable block (ram,0x082191e6) */
/* WARNING: Removing unreachable block (ram,0x08219768) */
/* WARNING: Removing unreachable block (ram,0x082197b8) */
/* WARNING: Removing unreachable block (ram,0x082197a2) */
/* WARNING: Removing unreachable block (ram,0x08219782) */
/* WARNING: Removing unreachable block (ram,0x082197a6) */
/* WARNING: Removing unreachable block (ram,0x08219788) */
/* WARNING: Removing unreachable block (ram,0x082191b8) */
/* WARNING: Removing unreachable block (ram,0x082191ba) */
/* WARNING: Removing unreachable block (ram,0x082191c0) */
/* WARNING: Removing unreachable block (ram,0x082191c8) */
/* WARNING: Removing unreachable block (ram,0x082191ca) */
/* WARNING: Removing unreachable block (ram,0x082191d2) */
/* WARNING: Removing unreachable block (ram,0x082198f8) */
/* WARNING: Removing unreachable block (ram,0x082199de) */
/* WARNING: Removing unreachable block (ram,0x082199e2) */
/* WARNING: Removing unreachable block (ram,0x082199f2) */
/* WARNING: Removing unreachable block (ram,0x082199f6) */
/* WARNING: Removing unreachable block (ram,0x08219a10) */
/* WARNING: Removing unreachable block (ram,0x08219a06) */
/* WARNING: Removing unreachable block (ram,0x08219a0a) */
/* WARNING: Removing unreachable block (ram,0x08219994) */
/* WARNING: Removing unreachable block (ram,0x08219996) */
/* WARNING: Removing unreachable block (ram,0x0821999a) */
/* WARNING: Removing unreachable block (ram,0x082199a8) */
/* WARNING: Removing unreachable block (ram,0x082197e4) */
/* WARNING: Removing unreachable block (ram,0x08219e30) */
/* WARNING: Removing unreachable block (ram,0x08219b8e) */
/* WARNING: Removing unreachable block (ram,0x08219b70) */
/* WARNING: Removing unreachable block (ram,0x08219a88) */
/* WARNING: Removing unreachable block (ram,0x082199c2) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08219ddc(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  uint *puStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = _DAT_08219e4c;
  switch(param_2) {
  case 0:
    uStack_30 = 1;
    break;
  case 1:
    uStack_30 = 2;
    break;
  case 2:
    if (param_1 == (uint *)0x0) goto LAB_08219e36;
    param_4 = *param_1;
    if (param_4 != 0x2000000) goto LAB_08219e1c;
    param_1 = (uint *)func_0x08219dcc();
    uStack_30 = 3;
    break;
  case 3:
    uStack_30 = 4;
    break;
  case 4:
    uStack_30 = 5;
    break;
  case 5:
    uStack_30 = 6;
    break;
  default:
LAB_08219e1c:
    if (param_1 != (uint *)0x0) {
      param_4 = (uint)(byte)param_1[2];
      uVar3 = 3;
      uVar2 = _DAT_08219e48;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
      goto SUB_082ee038;
    }
LAB_08219e36:
    uVar3 = 0;
    uVar2 = _DAT_08219e50;
    goto SUB_082ee038;
  }
  uStack_24 = *param_1;
  register0x00000054 = (BADSPACEBASE *)&uStack_30;
  uStack_28 = (uint)(byte)param_1[2];
  param_4 = *puRam08219bd8;
  uVar3 = 5;
  uVar1 = uRam08219be0;
  uVar2 = uRam08219bdc;
  puStack_2c = param_1;
SUB_082ee038:
  *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(*(undefined4 *)((int)register0x00000054 + -4),uVar2,uVar3,param_4);
  return;
}

