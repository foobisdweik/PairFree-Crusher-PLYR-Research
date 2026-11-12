/* Verified function entry. Extracted from usb-events.c. */

/* Function at 08245ffc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08245ffc(undefined4 param_1,uint param_2,uint param_3,ushort *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  char *pcVar20;
  bool bVar21;
  uint in_fpscr;
  float extraout_s11;
  float extraout_s12;
  float fVar22;
  float fVar23;
  float extraout_s15;
  undefined4 uVar24;
  undefined1 uStack_44;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = _DAT_082468dc;
  pcVar7 = _DAT_082468d8;
  iVar10 = _DAT_082468d4;
  pcVar5 = pcRam0824636c;
  pcVar20 = pcRam08246310;
  if (param_2 < 4) {
    switch(param_2) {
    case 0:
      if (param_3 != 0) {
        return 1;
      }
      *pcRam08246310 = '\0';
      iVar10 = func_0x08240d3c();
      if (iVar10 == 1) {
        *pcVar20 = '\x01';
      }
      uVar13 = func_0x081d2660(uRam08246314,1);
      func_0x082ee038(uRam0824631c,uRam08246318,1,uVar13);
      func_0x082528d0(&uStack_3c,0,0x24);
      uStack_38 = uRam08246320;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_1c = 0;
      uStack_2c = uRam08246324;
      uStack_28 = 0x100;
      uStack_24 = 0xd;
      uStack_20 = uRam08246328;
      uStack_3c._0_1_ = 2;
      uVar13 = func_0x08247800(&uStack_3c);
      *puRam0824632c = uVar13;
      func_0x0824783c();
      uStack_3c._0_1_ = 3;
      uVar13 = func_0x08247800(&uStack_3c);
      *puRam08246330 = uVar13;
      func_0x0824783c();
      *puRam08246334 = 0xd;
      uStack_24 = 2;
      *puRam08246338 = 0xd;
      uStack_3c = CONCAT31(uStack_3c._1_3_,4);
      uStack_28 = 1;
      uStack_20 = uRam0824633c;
      uVar13 = func_0x08247800(&uStack_3c);
      *puRam08246340 = uVar13;
      func_0x0824783c();
      uVar13 = func_0x081d2660(uRam08246344,1);
      func_0x082ee038(uRam0824631c,uRam08246348,1,uVar13);
      pbVar16 = pbRam0824634c;
      uStack_3c = 1;
      iVar10 = func_0x081c62f8(0xf601,pbRam0824634c,&uStack_3c);
      if (iVar10 != 0) {
        *pbVar16 = 10;
      }
      func_0x082ee038(uRam0824631c,uRam08246350,0);
      return 1;
    case 1:
      if (param_3 == 0x4c) {
        bVar3 = (byte)*param_4;
        pbVar16 = pbRam0824634c;
        goto code_r0x08246252;
      }
      if (param_3 < 0x4d) {
        if (param_3 != 0x29) {
          if (param_3 == 0x40) {
            if (pcRam08246368[2] == '\0') {
              return 0;
            }
            uVar13 = *puRam08246340;
            func_0x08247848(uVar13,0);
            func_0x0824786e(uVar13);
            func_0x08247842(uVar13);
            func_0x08247848(uVar13,*puRam08246338,*puRam08246334);
            return 0;
          }
          if (param_3 != 0x13) {
            return 0;
          }
          uVar18 = func_0x08241e60();
          func_0x082ee038(uRam0824631c,uRam08246354,0);
          if (2 < uVar18) {
            return 0;
          }
          func_0x081d0c30();
          return 0;
        }
        func_0x082ee038(uRam0824631c,uRam08246364,0);
        func_0x0824786e(*puRam0824632c);
        uVar13 = *puRam08246330;
        goto LAB_082461b0;
      }
      if (param_3 != 99) {
        if (param_3 == 0x94) {
          uVar18 = (uint)(param_4 != (ushort *)0x0);
          pcVar20 = pcRam08246368;
          for (iVar10 = 0; uVar13 = uRam08246378, iVar10 != 3; iVar10 = iVar10 + 1) {
            if (*pcVar20 != '\0') {
              func_0x08245e58(iVar10);
              if (param_4 == (ushort *)0x0) {
                func_0x0824786e();
              }
              else {
                func_0x08247842();
              }
            }
            pcVar20 = pcVar20 + 1;
          }
        }
        else {
          if (param_3 != 0x4d) {
            return 0;
          }
          uVar1 = *param_4;
          uVar13 = func_0x0821e5e0();
          puVar4 = puRam08246340;
          fVar22 = (float)VectorSignedToFloat((uint)(byte)uVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar23 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
          uVar18 = VectorFloatToUnsigned((fVar23 * fVar22) / fRam08246358 + fRam0824635c,3);
          uStack_44 = (undefined1)uVar18;
          uVar18 = uVar18 & 0xff;
          *puRam08246338 = uStack_44;
          *puRam08246334 = uStack_44;
          func_0x08245e10(*puVar4,uVar18,uVar18,0);
          uVar13 = uRam08246360;
        }
        goto code_r0x0824626e;
      }
      bVar21 = param_4 != (ushort *)0x0;
      if (bVar21 == (bool)*pcRam0824636c) {
        return 0;
      }
      func_0x082ee038(uRam0824631c,uRam08246370,2,*pcRam0824636c,bVar21);
      *pcVar5 = bVar21;
      pcVar20 = pcRam08246368;
      for (iVar10 = 0; iVar10 != 3; iVar10 = iVar10 + 1) {
        if (*pcVar20 != '\0') {
          func_0x08245e58(iVar10);
          if (param_4 == (ushort *)0x0) {
            func_0x0824786e();
          }
          else {
            func_0x08247842();
          }
        }
        pcVar20 = pcVar20 + 1;
      }
      if (*pcRam08246374 == '\0') {
        return 0;
      }
      uVar13 = 0x28;
      uVar15 = 1;
      uVar19 = 4;
      uVar24 = 0;
      break;
    case 2:
      if (*pcRam08246310 != '\0') {
        return 0;
      }
      if (*pcRam08246374 == '\0') {
        return 0;
      }
      if (param_4 == (ushort *)0x0) {
        func_0x0823e980(&uStack_3d,&uStack_3c);
        uVar18 = func_0x08241d04(uStack_3d,uStack_3c & 0xff,0x10);
      }
      else {
        uVar18 = (uint)*param_4;
      }
      if ((uVar18 == 0x53) || (uVar18 == 0x55)) {
code_r0x0824637c:
        if ((uVar18 - 0x53 & 0xffff) < 9) {
          switch(uVar18 - 0x53) {
          case 0:
          case 2:
            goto code_r0x082463b8;
          default:
            return 0;
          case 7:
            func_0x081d0c7c();
            return 1;
          case 8:
            func_0x081d0cc8();
            return 1;
          }
        }
        return 0;
      }
      if (*pcRam0824636c == '\0') {
        return 0;
      }
      if (0xb < uVar18) goto code_r0x0824637c;
      if (uVar18 < 10) {
        return 0;
      }
      if ((((*pcRam08246368 == '\0') && (pcRam08246368[1] == '\0')) && (pcRam08246368[2] == '\0'))
         && (iVar10 = func_0x0823e328(), iVar10 == 0x18)) {
        return 0;
      }
      iVar10 = func_0x08245f50();
      if ((iVar10 == 0) && (uVar18 == 10)) {
        func_0x081d0b48(1);
      }
      else {
        iVar10 = func_0x08245f9c();
        if ((iVar10 == 0) && (uVar18 == 0xb)) {
          func_0x081d0bbc(1);
        }
      }
      uVar15 = 1;
      uVar24 = 400;
      uVar19 = 2;
      uVar13 = 0x97;
      bVar21 = false;
      break;
    case 3:
      if (param_4 == (ushort *)0x0) {
        return 0;
      }
      uVar1 = *param_4;
      func_0x0823e9a8(&uStack_3e,&uStack_3d,&uStack_3c,param_3);
      if (uVar1 == 0x210) {
        if (*pbRam082466e4 < uStack_3c) {
          return 0;
        }
        uStack_3c = *pbRam082466e4 - uStack_3c;
      }
      else {
        if (uVar1 < 0x211) {
          if (uVar1 == 10) {
            func_0x081d0b48(uStack_3c & 0xff);
            uVar13 = uRam082466e8;
            uVar18 = uStack_3c;
          }
          else {
            if (uVar1 != 0xb) {
              return 0;
            }
            func_0x081d0bbc(uStack_3c & 0xff);
            uVar13 = uRam082466e0;
            uVar18 = uStack_3c;
          }
code_r0x0824626e:
          func_0x082ee038(uRam0824631c,uVar13,1,uVar18);
          return 0;
        }
        if (uVar1 != 0x211) {
          return 0;
        }
        uStack_3c = *pbRam082466e4 + uStack_3c;
        if (0x14 < uStack_3c) {
          return 0;
        }
      }
      bVar3 = (byte)uStack_3c;
      pbVar16 = pbRam082466e4;
code_r0x08246252:
      *pbVar16 = bVar3;
      func_0x08245f08();
      return 0;
    default:
      return 0;
    }
    goto code_r0x0824622c;
  }
  if (param_2 == 0x20) {
    if (param_3 == 3) {
      return 0;
    }
    if (param_3 == 2) {
      func_0x082ee038(_DAT_082468bc,_DAT_082468e0,4,param_4 != (ushort *)0x0,*_DAT_082468dc,
                      *(undefined1 *)(_DAT_082468d4 + 2),*_DAT_082468d8);
      puVar4 = _DAT_082468e4;
      if (param_4 != (ushort *)0x0) {
        if (((*pcVar8 == '\0') && (*(char *)(iVar10 + 2) == '\0')) && (*pcVar7 != '\0')) {
          func_0x08247842(*_DAT_082468e4);
          uVar19 = *puVar4;
          uVar13 = func_0x0824a7d4();
          func_0x08247862(uVar19,uVar13);
        }
        *(undefined1 *)(iVar10 + 2) = 1;
        return 0;
      }
      if (((*pcVar8 == '\0') && (*(char *)(iVar10 + 2) != '\0')) && (*pcVar7 != '\0')) {
        func_0x0824786e(*_DAT_082468e4);
      }
      *(undefined1 *)(iVar10 + 2) = 0;
      return 0;
    }
    if (param_4 != (ushort *)0x0) {
      if (*(char *)(_DAT_082468d4 + param_3) != '\0') {
        return 0;
      }
      *(undefined1 *)(_DAT_082468d4 + param_3) = 1;
      if (*_DAT_082468d8 == '\0') {
        return 0;
      }
      func_0x08245e58(param_3);
      func_0x08247842();
      return 0;
    }
    if (*(char *)(_DAT_082468d4 + param_3) == '\0') {
      return 0;
    }
    *(undefined1 *)(_DAT_082468d4 + param_3) = 0;
    if (*_DAT_082468d8 == '\0') {
      return 0;
    }
    uVar13 = func_0x08245e58(param_3);
LAB_082461b0:
    func_0x0824786e(uVar13);
    return 0;
  }
  if (param_2 != 0x24) {
    return 0;
  }
  uVar2 = (undefined1)((uint)param_4 >> 0x10);
  switch(param_3) {
  case 0:
    func_0x08245d84(0);
  case 8:
    pcVar20 = pcRam082466ec;
    for (iVar10 = 0; iVar10 != 3; iVar10 = iVar10 + 1) {
      func_0x082318d4(0x20,iVar10);
      if (*pcVar20 != '\0') {
        *pcVar20 = '\0';
        func_0x08245e58(iVar10);
        func_0x0824786e();
      }
      pcVar20 = pcVar20 + 1;
    }
    if (param_3 == 8) {
      func_0x082318d4(0x24,9);
code_r0x08246510:
      uVar24 = 100;
      uVar13 = 9;
code_r0x082467f4:
      bVar21 = false;
      uVar15 = 0x24;
code_r0x0824657e:
      uVar19 = 3;
code_r0x0824622c:
      func_0x0823181c(0,uVar19,uVar15,uVar13,bVar21,0,0,uVar24);
    }
    break;
  case 1:
    func_0x08245d84(1);
    if (((uint)param_4 & 0xff) == 1) {
      uVar13 = 0;
      if (((uint)param_4 & 0xff00) != 0) {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 2;
    }
    func_0x082318d4(0x20,uVar13);
    bVar21 = true;
    goto code_r0x0824657a;
  case 2:
    func_0x08245d84(1);
    if (((uint)param_4 & 0xff) == 1) {
      uVar13 = 0;
      if (((uint)param_4 & 0xff00) != 0) {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 2;
    }
    func_0x082318d4(0x20,uVar13);
    bVar21 = false;
code_r0x0824657a:
    uVar24 = 100;
    uVar15 = 0x20;
    goto code_r0x0824657e;
  case 3:
    if (param_4 != (ushort *)0x0) {
      func_0x082ee038(uRam082466dc,uRam082466f0,4,(byte)*param_4,*(byte *)((int)param_4 + 1),
                      (byte)param_4[1],*(byte *)((int)param_4 + 3));
      if ((byte)*param_4 == 1) {
        func_0x0821e5ec();
        uVar13 = uRam082466f4;
        if (*(byte *)((int)param_4 + 1) != 1) {
          uVar13 = uRam082466f8;
        }
        func_0x082ee988(uVar13,param_4,0xc);
      }
      else {
        func_0x0821e5e0();
      }
      if ((byte)*param_4 == 1) {
        iVar10 = 0;
        if (*(byte *)((int)param_4 + 1) != 0) {
          iVar10 = 1;
        }
      }
      else {
        iVar10 = 2;
      }
      uVar13 = func_0x0821e5ec();
      fVar22 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      if (iVar10 == 2) {
        uVar13 = func_0x0821e5e0();
        fVar22 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      }
      fVar23 = (float)VectorSignedToFloat((uint)(byte)param_4[1],(byte)(in_fpscr >> 0x16) & 3);
      uVar18 = VectorFloatToUnsigned((fVar23 * fVar22) / fRam082466fc + fRam08246700,3);
      uVar13 = func_0x08245d5c((byte)*param_4,*(byte *)((int)param_4 + 1));
      uStack_44 = (undefined1)uVar18;
      fVar22 = (float)VectorSignedToFloat((uint)*(byte *)((int)param_4 + 3),
                                          (byte)(in_fpscr >> 0x16) & 3);
      uVar14 = VectorFloatToUnsigned((fVar22 * extraout_s15) / extraout_s11 + extraout_s12,3);
      func_0x08245e10(uVar13,uVar18 & 0xff,uVar14 & 0xff,iVar10 != 2);
      puVar6 = puRam08246708;
      if ((byte)*param_4 != 1) {
        *puRam08246704 = uStack_44;
        *puVar6 = uStack_44;
        puVar11 = (undefined1 *)func_0x082ee408(1);
        *puVar11 = *puVar6;
        iVar10 = func_0x0823181c(0,3,1,0xcc,puVar11,1,0,0);
        if (iVar10 != 0) {
          func_0x082ee4a8(puVar11);
        }
      }
    }
    break;
  case 4:
    uVar13 = func_0x08245d5c((uint)param_4 & 0xff,((uint)param_4 & 0xffff) >> 8);
    func_0x08247862(uVar13,((uint)param_4 & 0xffffff) >> 0x10);
    break;
  case 5:
    uVar18 = ((uint)param_4 & 0xffff) >> 8;
    if (((uint)param_4 & 0xff) == 1) {
      iVar10 = 0;
      if (uVar18 != 0) {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = 2;
    }
    iVar12 = func_0x08240cd4(((uint)param_4 & 0xffffff) >> 0x10);
    iVar9 = iRam082468e8;
    iVar17 = *(int *)(iRam082468e8 + iVar10 * 4);
    if (iVar12 == iVar17) {
      return 0;
    }
    func_0x082ee038(_DAT_082468bc,uRam082468b8,3,iVar10,iVar12,iVar17);
    *(int *)(iVar9 + iVar10 * 4) = iVar12;
    goto code_r0x08246748;
  case 7:
    func_0x082318d4(0x24,9);
    uVar13 = 9;
    uVar15 = 0x24;
    uVar19 = 3;
    uVar24 = 0;
    bVar21 = false;
    goto code_r0x0824622c;
  case 9:
    iVar10 = func_0x081cb370();
    func_0x082ee038(_DAT_082468bc,uRam082468d0,1,iVar10);
    if (iVar10 != 3) goto code_r0x08246510;
    uVar13 = 10;
    uVar24 = 0;
    goto code_r0x082467f4;
  case 10:
    func_0x08245d84(1);
    break;
  case 0xb:
    uVar18 = ((uint)param_4 & 0xffff) >> 8;
    if (((uint)param_4 & 0xff) == 1) {
      iVar10 = 0;
      if (uVar18 != 0) {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = 2;
    }
    uVar14 = ((uint)param_4 & 0xffffff) >> 0x10;
    if (((uint)param_4 & 0xff0000) == 0) {
      return 0;
    }
    if (*(byte *)(iRam082468c0 + iVar10) == uVar14) {
      return 0;
    }
    *(undefined1 *)(iRam082468c0 + iVar10) = uVar2;
    uVar13 = uRam082468c4;
    goto code_r0x0824678e;
  case 0xc:
    uVar18 = ((uint)param_4 & 0xffff) >> 8;
    if (((uint)param_4 & 0xff) == 1) {
      iVar10 = 0;
      if (uVar18 != 0) {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = 2;
    }
    uVar14 = ((uint)param_4 & 0xffffff) >> 0x10;
    if (((uint)param_4 & 0xff0000) == 0) {
      return 0;
    }
    if (*(byte *)(iRam082468c8 + iVar10) == uVar14) {
      return 0;
    }
    *(undefined1 *)(iRam082468c8 + iVar10) = uVar2;
    uVar13 = uRam082468cc;
code_r0x0824678e:
    func_0x082ee038(_DAT_082468bc,uVar13,2,iVar10,uVar14);
code_r0x08246748:
    uVar13 = func_0x08245d5c((uint)param_4 & 0xff,uVar18);
    func_0x08245db8(iVar10,uVar13);
  }
  return 0;
code_r0x082463b8:
  uVar18 = func_0x08241e60();
  iVar10 = func_0x0824787c();
  func_0x082ee038(uRam082466dc,uRam082466d8,2,uVar18,iVar10);
  if (3 < uVar18) {
    if (iVar10 == 0) {
      return 0;
    }
    if (uVar18 < 0x10) {
      return 0;
    }
  }
  func_0x081d0c30();
  return 1;
}

