/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 082456a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_082456a0(undefined4 param_1,uint param_2,uint param_3,ushort *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  byte bStack_4a;
  char cStack_49;
  undefined2 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar7 = puRam08245c20;
  pbVar15 = _DAT_08245c08;
  pcVar4 = _DAT_08245bfc;
  if (param_2 < 4) {
    switch(param_2) {
    case 0:
      uStack_44 = 1;
      if (param_3 != 0) {
        return 1;
      }
      cVar10 = *pcRam0824599c;
      cVar9 = *pcRam082459a0;
      if ((cVar10 != -1) && (cVar9 == -1)) {
        *pcRam082459a4 = '\x01';
      }
      puVar3 = puRam082459a8;
      func_0x082ee038(uRam082459b0,uRam082459ac,2,cVar10,cVar9);
      uVar16 = func_0x081c62f8(0xf313,puVar3,&uStack_44);
      func_0x082ee038(uRam082459b0,uRam082459b4,2,*puVar3,uVar16);
      puVar3 = puRam082459b8;
      uStack_40 = 1;
      iVar11 = func_0x081c62f8(0xf601,puRam082459b8,&uStack_40);
      if (iVar11 != 0) {
        *puVar3 = 10;
      }
      func_0x08221c08(7,*puVar3);
      func_0x082528d0(&uStack_3c,0,0x24);
      uStack_28 = (ushort)uStack_28._1_1_ << 8;
      uStack_38 = uRam082459bc;
      uStack_1c = 0;
      uStack_2c = uRam082459c0;
      uVar8 = func_0x0821e5d4();
      uStack_24 = 0x11;
      uStack_2c = CONCAT31(CONCAT21(uStack_2c._2_2_,uVar8),uVar8);
      uStack_3c = uStack_3c & 0xffffff00;
      uStack_20 = uRam082459c4;
      uStack_28 = CONCAT11(1,(undefined1)uStack_28);
      uVar16 = func_0x08247800(&uStack_3c);
      *puRam082459c8 = uVar16;
      func_0x0824783c();
      uStack_20 = uRam082459cc;
      uStack_3c = CONCAT31(uStack_3c._1_3_,1);
      uStack_24 = 2;
      uStack_28 = 1;
      uVar16 = func_0x08247800(&uStack_3c);
      *puRam082459d0 = uVar16;
      func_0x0824783c();
      uStack_38 = uRam082459d4;
      uStack_3c = uRam082459d8;
      uStack_34 = uRam082459dc;
      func_0x081f4adc(&uStack_3c);
      uStack_48 = 0;
      bStack_4a = 0;
      cStack_49 = '\0';
      uStack_3c = 2;
      iVar11 = func_0x081c62f8(0xf323,&uStack_48,&uStack_3c);
      func_0x082ee038(uRam082459b0,uRam082459e0,1,iVar11);
      if (iVar11 == 0) {
        func_0x082ee038(uRam082459b0,uRam082459e8,3,uStack_3c,(undefined1)uStack_48,uStack_48._1_1_)
        ;
        cVar9 = func_0x082ea500(&uStack_48);
        bVar12 = false;
        if (cVar9 == '\0') goto code_r0x08245838;
      }
      if (*pcRam082459a4 == '\0') {
        uVar13 = func_0x081aa6c8(cVar10,&bStack_4a);
        uVar13 = uVar13 & 0xff | (uint)bStack_4a;
code_r0x082457f8:
        bVar12 = uVar13 == 0;
      }
      else {
        uVar13 = func_0x081be964(cVar10,&cStack_49);
        if (cStack_49 == '\0') goto code_r0x082457f8;
        bVar12 = false;
      }
      func_0x082ee038(uRam082459b0,uRam082459e4,1,bVar12 == true);
      func_0x0824560c(bVar12 == true);
code_r0x08245838:
      func_0x082454bc(bVar12,0);
      if ((bVar12 == true) && (*pcRam082459ec != '\0')) {
        func_0x082455a4(1);
      }
      func_0x082ee038(uRam082459b0,uRam082459f4,1,*pcRam082459f0);
      func_0x08236274(uRam082459f8);
      return 1;
    case 1:
      if (param_3 == 0x29) {
        uVar13 = 0;
        *_DAT_08245bfc = '\0';
        goto LAB_08245b18;
      }
      if (param_3 != 100) {
        if (param_3 != 0x40) {
          if (param_3 != 0x92) {
            return 0;
          }
          func_0x08247848(*puRam08245c24,*pbRam08245c00);
          return 0;
        }
        if (*_DAT_08245bfc != '\x01') {
          return 0;
        }
        func_0x0824786e(*puRam08245c20);
        func_0x08247842(*puVar7);
        return 0;
      }
      uVar13 = (uint)(param_4 != (ushort *)0x0);
      if (*_DAT_08245c08 == uVar13) {
        return 0;
      }
      func_0x082ee038(_DAT_08245c10,uRam08245c1c,3,(uint)*_DAT_08245c08,uVar13,*_DAT_08245bfc);
      cVar10 = *pcVar4;
      *pbVar15 = param_4 != (ushort *)0x0;
      if (cVar10 != '\x01') {
        return 0;
      }
      goto LAB_08245ac2;
    case 2:
      func_0x0823e980(&uStack_40,&uStack_3c);
      uVar13 = uStack_3c & 0xff;
      func_0x082ee038(uRam082459b0,uRam082459fc,3,uStack_40 & 0xff,uVar13,param_3);
      if (param_4 == (ushort *)0x0) {
        uVar14 = func_0x08241e24(uStack_40 & 0xff,uStack_3c & 0xff);
        uVar16 = uRam08245a08;
      }
      else {
        uVar14 = (uint)*param_4;
        uVar16 = uRam08245a00;
      }
      func_0x082ee038(uRam082459b0,uVar16,1,uVar14,uVar13,param_3);
      pbVar15 = pbRam08245a18;
      pcVar6 = pcRam08245a10;
      pbVar5 = pbRam08245a0c;
      pcVar4 = pcRam082459f0;
      if (uVar14 == 0x200) {
        func_0x082ee038(uRam082459b0,uRam08245a04,1,*pcRam082459f0,uVar13,param_3);
        func_0x0823181c(0,4,0x1f,4,0xff,0,0,0);
        return 1;
      }
      if (uVar14 == 0x3e) {
        bVar1 = *pbRam08245a0c;
        cVar10 = *pcRam08245a10;
        *pbRam08245a0c = bVar1 ^ 1;
        func_0x082ee038(uRam082459b0,uRam08245a14,3,bVar1 ^ 1,*pcVar4,cVar10);
        if (*pcVar6 != '\0') {
          return 0;
        }
        if (*pcVar4 == '\0') {
          return 0;
        }
        if (*pbVar5 != 0) {
          func_0x0824d700();
          return 0;
        }
        func_0x0824d6d8(2);
        return 0;
      }
      if (1 < (uVar14 - 10 & 0xffff)) {
        return 0;
      }
      if (*pcRam082459f0 != '\x01') {
        return 0;
      }
      uVar13 = (uint)*pbRam08245a18;
      if (uVar14 == 10) {
        iVar11 = func_0x0821e5d4();
        uVar13 = uVar13 + 1;
        if ((int)uVar13 < iVar11) {
code_r0x0824595a:
          uVar13 = uVar13 & 0xff;
          uVar16 = uRam08245a1c;
        }
        else {
          uVar13 = func_0x0821e5d4();
          func_0x08243c84();
          uVar16 = uRam08245a1c;
        }
      }
      else {
        if (1 < uVar13) {
          uVar13 = uVar13 - 1;
          goto code_r0x0824595a;
        }
        func_0x08243cd4();
        uVar13 = 0;
        uVar16 = uRam08245a1c;
      }
      break;
    case 3:
      if (param_4 == (ushort *)0x0) {
        return 0;
      }
      uVar2 = *param_4;
      func_0x0823e9a8(&uStack_44,&uStack_40,&uStack_3c,param_3);
      pbVar15 = pbRam08245c00;
      if (1 < uVar2 - 10) {
        return 0;
      }
      if (*_DAT_08245bfc != '\x01') {
        return 0;
      }
      bVar1 = *pbRam08245c00;
      if (uVar2 == 10) {
        uVar14 = uStack_3c + bVar1;
        uVar13 = func_0x0821e5d4();
        if (uVar14 < uVar13) {
          cVar10 = (char)uStack_3c;
code_r0x08245a68:
          uVar13 = (uint)(byte)(bVar1 + cVar10);
          uVar16 = uRam08245c04;
        }
        else {
          uVar13 = func_0x0821e5d4();
          uVar16 = uRam08245c04;
        }
      }
      else {
        if (uStack_3c < bVar1) {
          cVar10 = -(char)uStack_3c;
          goto code_r0x08245a68;
        }
        uVar13 = 0;
        uVar16 = uRam08245c04;
      }
      break;
    default:
      goto LAB_0824591a;
    }
    func_0x082ee038(uRam082459b0,uVar16,1,uVar13);
    uVar16 = *puRam082459c8;
    uVar14 = func_0x0821e5d4();
    func_0x08247848(uVar16,uVar13,uVar13);
    if (uVar13 == uVar14) {
      func_0x08243bd0();
    }
    *pbVar15 = (byte)uVar13;
  }
  else {
    if (param_2 == 0x1f) {
      if (param_3 == 4) {
        uVar13 = (uint)param_4 & 0xff;
        func_0x082ee038(_DAT_08245c10,_DAT_08245c14,1,uVar13);
        if (uVar13 == 0xff) {
          uVar13 = (uint)(*_DAT_08245bfc == '\0');
        }
        func_0x0824560c(uVar13 == 1);
        func_0x082454bc(uVar13,1);
        goto LAB_08245b18;
      }
      if (4 < param_3) {
        if (param_3 != 0x94) {
          return 0;
        }
        func_0x082455a4(param_4 != (ushort *)0x0);
        func_0x082ee038(_DAT_08245c10,_DAT_08245c0c,1,param_4 != (ushort *)0x0);
        return 0;
      }
      if (1 < param_3 - 1) {
        return 0;
      }
      uVar13 = (uint)(param_3 == 1);
      uStack_3c = CONCAT31(uStack_3c._1_3_,param_3 == 1);
      func_0x0824560c(uVar13);
      func_0x082454bc(uVar13,0);
      func_0x0823ffc8(3,&uStack_3c,1);
      bVar1 = *_DAT_08245c08;
    }
    else {
      if (param_2 != 0x27) {
        return 0;
      }
      uStack_40 = uStack_40 & 0xffff0000;
      uStack_3c = 2;
      iVar11 = func_0x081c62f8(0xf323,&uStack_40,&uStack_3c);
      if (iVar11 == 0) {
        cVar10 = func_0x082ea500(&uStack_40);
      }
      else {
        cVar10 = -1;
      }
      func_0x082ee038(_DAT_08245c10,_DAT_08245c18,2,iVar11,cVar10);
      if (cVar10 == '\0') {
        return 0;
      }
      if (param_3 != 0x7d) {
        return 0;
      }
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)param_4);
      uVar13 = (uint)((char)param_4 != '\0');
      func_0x0824560c(uVar13);
      func_0x082454bc(uVar13,0);
      func_0x0823ffc8(3,&uStack_3c,1);
LAB_08245b18:
      bVar1 = *_DAT_08245c08;
    }
    if (bVar1 == 0) {
      return 0;
    }
LAB_08245ac2:
    func_0x082455a4(uVar13);
  }
LAB_0824591a:
  return 0;
}


/* function at 0823181c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
aux_0823181c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 auStack_50 [44];
  
  piVar1 = _DAT_082318d0;
  uVar5 = *(uint *)(_DAT_082318c0 + 4);
  if (*_DAT_082318d0 == 0) {
    func_0x082eeb08(_DAT_082318c4,_DAT_082318c8);
    uVar2 = 0xffffffff;
  }
  else if (param_2 < 6) {
    func_0x082ee038(_DAT_082318c4,_DAT_082318cc,3,param_3,param_4,param_8);
    if (param_8 == 0) {
      func_0x08230f92(auStack_50,param_2,param_3,param_4,param_5,param_6,0,0,0);
      puVar3 = (undefined4 *)*piVar1;
      pcVar4 = (code *)*puVar3;
    }
    else {
      func_0x08231128(auStack_50,param_2,param_3,param_4,param_5,param_6,0,0,0,param_8);
      puVar3 = (undefined4 *)*piVar1;
      pcVar4 = (code *)puVar3[1];
    }
    uVar2 = 0;
    (*pcVar4)(puVar3,(uVar5 & 0x1ff) != 0,auStack_50);
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


/* function at 082318d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_082318d4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = _DAT_08231904;
  if (*_DAT_08231904 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    func_0x082ee038(_DAT_08231908,_DAT_0823190c,2,param_1,param_2,param_2);
    (**(code **)(*piVar1 + 0xc))(*piVar1,param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}

