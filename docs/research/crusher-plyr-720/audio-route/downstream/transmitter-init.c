/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

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
    iVar3 = ds_0821f524(0xc,_DAT_08228024,*(int *)(param_1 + 0x40),param_4,param_1,param_2);
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

