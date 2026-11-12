/* Candidate .35 address mapping. Selected functions only. */

/* candidate_35_common_config at 0823f3e4 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * candidate_35_common_config(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  short sStack_28;
  short sStack_26;
  
  uVar14 = (uint)*(ushort *)(param_1 + 4);
  func_0x082ee038(_DAT_0823f6d0,_DAT_0823f6cc,2,param_1[1],uVar14);
  if ((param_1[1] != 0x5a) && (param_1[1] != 0x5c)) {
    return (byte *)0x0;
  }
  uVar12 = (uint)*(ushort *)(param_1 + 4);
  if (uVar12 < 0x2c17) {
    if (uVar12 < 0x2c15) {
      return (byte *)0x0;
    }
    if (uVar12 != 0x2c15) {
      if (uVar12 != 0x2c16) {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c16,9,param_3);
      uVar15 = _DAT_0823ffc4;
      if (pbVar5 != (byte *)0x0) {
        puVar6 = (ushort *)func_0x08236538();
        *pbVar5 = 0;
        uVar15 = _DAT_0823f6d4;
        *(ushort *)(pbVar5 + 1) = *puVar6;
        *(ushort *)(pbVar5 + 3) = puVar6[1];
        *(ushort *)(pbVar5 + 5) = puVar6[2];
        *(ushort *)(pbVar5 + 7) = puVar6[3];
        uVar12 = (uint)puVar6[1];
        uVar14 = (uint)*puVar6;
LAB_0823f8b6:
        func_0x082ee038(_DAT_0823f9ec,uVar15,2,uVar14,uVar12);
        return pbVar5;
      }
      goto LAB_0823f4bc;
    }
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c15,1,param_3);
    uVar15 = _DAT_0823ffc0;
    if (pbVar5 == (byte *)0x0) goto LAB_0823f4bc;
    *pbVar5 = 1;
    if (param_1 == (byte *)0x0) {
      return pbVar5;
    }
    sVar1 = *(short *)(param_1 + 2);
    func_0x082528d0(&uStack_2c,0,8);
    if ((ushort)(sVar1 - 2U) < 4) {
      return pbVar5;
    }
    uStack_2c = *(uint *)(param_1 + 6);
    if (7 < (ushort)(sVar1 - 2U)) {
      sStack_28 = *(short *)(param_1 + 10);
      sStack_26 = *(short *)(param_1 + 0xc);
    }
    func_0x082ee038(_DAT_0823ffa0,_DAT_0823ffbc,5,(short)*(uint *)(param_1 + 6),
                    *(undefined2 *)(param_1 + 8),sStack_28,sStack_26,param_2);
    if ((*(short *)(param_1 + 6) != 0) && (*(short *)(param_1 + 8) == 0)) {
      return pbVar5;
    }
    if ((sStack_28 != 0) && (sStack_26 == 0)) {
      return pbVar5;
    }
    iVar10 = func_0x08236540(&uStack_2c);
    if (iVar10 != 0) {
      return pbVar5;
    }
LAB_0823f818:
    func_0x082365f4();
    goto LAB_0823f5e6;
  }
  if (8 < (uVar12 - 0x2c80 & 0xffff)) {
    return (byte *)0x0;
  }
  switch(uVar12 - 0x2c80) {
  case 0:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c80,1,param_3);
    uVar15 = uRam0823f6d8;
    if (pbVar5 == (byte *)0x0) goto LAB_0823f4bc;
    bVar3 = func_0x08241e60();
    break;
  case 1:
    uVar14 = (uint)*(ushort *)(param_1 + 6);
    if (uVar14 == 0xff01) {
      uVar15 = 1;
code_r0x0823f4d0:
      func_0x0824395c(uVar15);
code_r0x0823f4d4:
      bVar17 = true;
    }
    else {
      if (uVar14 == 0xff00) {
        uVar15 = 0;
        goto code_r0x0823f4d0;
      }
      if (uVar14 == 0xff02) goto code_r0x0823f4d4;
      func_0x082528d0(&sStack_28,0,0x10);
      uStack_2c = uVar14;
      func_0x082439a4(&uStack_2c,0);
      bVar17 = false;
    }
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c81,1,param_3);
    uVar15 = uRam0823f6dc;
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      if (!bVar17) {
        return pbVar5;
      }
      uVar15 = 100;
      uVar18 = 0xb0;
code_r0x0823f52e:
      func_0x0823181c(0,4,1,uVar18,0,0,0,uVar15);
      return pbVar5;
    }
    goto LAB_0823f4bc;
  case 2:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c82,3,param_3);
    uVar15 = uRam0823f6e8;
    if (pbVar5 == (byte *)0x0) goto LAB_0823f4bc;
    uVar14 = *(ushort *)(param_1 + 2) - 4 & 0xffff;
    uVar16 = (uint)*(ushort *)(param_1 + 6);
    uVar19 = uVar14;
    func_0x082ee038(_DAT_0823f9ec,uRam0823f9e8,3,*(undefined2 *)(param_1 + 4),uVar16,uVar14);
    switch(*(undefined2 *)(param_1 + 6)) {
    case 0:
      func_0x082ee038(_DAT_0823f9ec,uRam0823f9f4,1,param_1[8],uVar16,uVar19);
      iVar10 = func_0x08243268(param_1[8],0);
      if (iVar10 == 1) {
        *pbVar5 = 0;
      }
      else {
        *pbVar5 = 1;
      }
      pbVar5[1] = 0;
      goto code_r0x0823f782;
    case 1:
      *pbVar5 = 1;
      pbVar5[1] = 1;
      pbVar5[2] = 0;
      func_0x082528d0(&uStack_2c,0,8);
      if (3 < uVar14) {
        uStack_2c = *(uint *)(param_1 + 8);
      }
      if (7 < uVar14) {
        sStack_28 = *(short *)(param_1 + 0xc);
        sStack_26 = *(short *)(param_1 + 0xe);
      }
      func_0x082ee038(_DAT_0823f9ec,uRam0823f9f8,5,uStack_2c & 0xffff,uStack_2c >> 0x10,sStack_28,
                      sStack_26,param_2);
      if (((short)uStack_2c != 0) && (uStack_2c._2_2_ == 0)) {
        return pbVar5;
      }
      if ((sStack_28 != 0) && (sStack_26 == 0)) {
        return pbVar5;
      }
      iVar10 = func_0x08236540(&uStack_2c);
      if (iVar10 != 0) {
        func_0x082ee038(_DAT_0823f9ec,uRam0823fa00,0);
        bVar3 = 1;
code_r0x0823f59c:
        *pbVar5 = bVar3;
        return pbVar5;
      }
      func_0x082ee038(_DAT_0823f9ec,uRam0823f9fc,0);
      goto LAB_0823f818;
    default:
      func_0x081f3f9c(pbVar5);
      return (byte *)0x0;
    case 6:
      *pbVar5 = 1;
      pbVar5[1] = 6;
      pbVar5[2] = 0;
      iVar10 = func_0x08241b66((int)*(short *)(param_1 + 8));
      if (iVar10 != 0) {
        return pbVar5;
      }
      bVar3 = 0;
      break;
    case 7:
      *pbVar5 = 1;
      pbVar5[1] = 7;
      pbVar5[2] = 0;
      bVar3 = param_1[8];
      iVar10 = func_0x08241b4c();
      bVar11 = *(byte *)(iVar10 + 4);
      iVar10 = func_0x08241b60(bVar3 != 0);
      if (iVar10 != 0) {
        return pbVar5;
      }
      if (bVar11 != bVar3) {
        iVar10 = func_0x08241b4c();
        func_0x08243d24(*(undefined1 *)(iVar10 + 4));
      }
      uVar15 = 0x8b;
      iVar10 = 0;
      uVar18 = 0;
      goto code_r0x0823f5dc;
    case 8:
      *pbVar5 = 2;
      pbVar5[1] = 8;
code_r0x0823f782:
      pbVar5[2] = 0;
      return pbVar5;
    case 9:
      func_0x082ee038(_DAT_0823f9ec,uRam0823f9f0,1,param_1[8],uVar16,uVar19);
      iVar10 = func_0x08243b18(param_1[8],1);
      if (iVar10 == 0) {
        *pbVar5 = 0;
        pbVar5[1] = 9;
        pbVar5[2] = 0;
        return pbVar5;
      }
      return pbVar5;
    case 10:
      uStack_2c = CONCAT31(uStack_2c._1_3_,param_1[8]);
      uVar14 = func_0x081c6324(0xf319,&uStack_2c,1);
      uVar12 = uStack_2c & 0xff;
      uVar15 = uRam0823fa04;
      if (uVar14 != 0) goto LAB_0823f8b6;
      func_0x082ee038(_DAT_0823f9ec,uRam0823fa08,1,uVar12,uVar16,uVar19);
      uVar18 = 7;
      uVar15 = 0;
      goto code_r0x0823f52e;
    case 0xb:
      *pbVar5 = 1;
      pbVar5[1] = 0xb;
      pbVar5[2] = 0;
      pbVar8 = (byte *)func_0x082ee408(1);
      if (pbVar8 == (byte *)0x0) {
        return pbVar5;
      }
      *pbVar8 = param_1[8];
      iVar10 = func_0x0823181c(0,3,1,0x4c,pbVar8,1,0,0);
      bVar3 = 0;
      if (iVar10 != 0) goto code_r0x0823f916;
      break;
    case 0xc:
      *pbVar5 = 1;
      pbVar5[1] = 0xc;
      pbVar5[2] = 0;
      pbVar8 = (byte *)func_0x082ee408(1);
      if (pbVar8 == (byte *)0x0) {
        return pbVar5;
      }
      *pbVar8 = param_1[8];
      iVar10 = func_0x0823181c(0,3,1,0x4d,pbVar8,1,0,0);
      func_0x08246a18(param_1[8]);
      if (iVar10 == 0) {
        *pbVar5 = 0;
        return pbVar5;
      }
code_r0x0823f916:
      func_0x082ee4a8(pbVar8);
      return pbVar5;
    case 0x10:
      pbVar5[2] = 0;
      *pbVar5 = 0;
      pbVar5[1] = 0x10;
      uStack_2c = (uint)param_1[8];
      func_0x0823e550(1,0x4f,&uStack_2c,4,0);
      return pbVar5;
    case 0x12:
      pbVar5[2] = 0;
      pbVar5[1] = 0x12;
      func_0x0823181c(0,3,1,0x62,param_1[8],0,0,0);
      goto code_r0x0823f576;
    case 0x13:
      pbVar5[1] = 0x13;
      pbVar5[2] = 0;
      if (param_1 == (byte *)0xfffffff8) {
        bVar3 = 2;
        goto code_r0x0823f59c;
      }
      bVar3 = param_1[8];
      func_0x082ee038(_DAT_0823f9ec,uRam0823fa0c,1,bVar3,uVar16,uVar19);
      bVar3 = func_0x08247958(bVar3);
      break;
    case 0x14:
      pbVar5[2] = 0;
      pbVar5[1] = 0x14;
      func_0x0824690c(param_1[8] != 0);
code_r0x0823f576:
      *pbVar5 = 0;
      return pbVar5;
    }
    break;
  case 3:
    uVar14 = (uint)*(ushort *)(param_1 + 6);
    func_0x082ee038(uRam0823fd30,uRam0823fd2c,2,uVar12,uVar14);
    switch(*(undefined2 *)(param_1 + 6)) {
    case 0:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      uVar15 = uRam0823fd40;
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        iVar10 = func_0x082432c8();
        uVar18 = uRam0823fd3c;
        uVar2 = uRam0823fd38;
        if (iVar10 == 0xff) {
          *pbVar5 = 0xff;
          pbVar5[3] = 0xff;
          uVar15 = 0xff;
          uVar18 = uVar2;
        }
        else {
          uVar15 = 0;
          *pbVar5 = 0;
          pbVar5[3] = (byte)iVar10;
        }
        goto code_r0x0823fb28;
      }
      break;
    case 1:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,0xb,param_3);
      uVar15 = uRam0823fd48;
      if (pbVar5 != (byte *)0x0) {
        pbVar5[2] = 0;
        pbVar5[1] = 1;
        puVar9 = (undefined2 *)func_0x08236538();
        *pbVar5 = 0;
        uVar15 = uRam0823fd44;
        *(undefined2 *)(pbVar5 + 3) = *puVar9;
        *(undefined2 *)(pbVar5 + 5) = puVar9[1];
        *(undefined2 *)(pbVar5 + 7) = puVar9[2];
        *(undefined2 *)(pbVar5 + 9) = puVar9[3];
        func_0x082ee038(uRam0823fd30,uVar15,4,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
        return pbVar5;
      }
      break;
    default:
      goto LAB_0823f490;
    case 6:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,5,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[2] = 0;
        *pbVar5 = 0;
        pbVar5[1] = 6;
        puVar9 = (undefined2 *)func_0x08241b4c();
        *(undefined2 *)(pbVar5 + 3) = *puVar9;
        return pbVar5;
      }
      return (byte *)0x0;
    case 7:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[2] = 0;
        *pbVar5 = 0;
        pbVar5[1] = 7;
        iVar10 = func_0x08241b4c();
        pbVar5[3] = *(byte *)(iVar10 + 4);
        return pbVar5;
      }
      return (byte *)0x0;
    case 8:
      func_0x082ee038(uRam0823fd30,uRam0823fd4c,0,*(undefined2 *)(param_1 + 6),uVar14);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        func_0x082eeb08(uRam0823fd30,uRam0823fd54,0);
        return (byte *)0x0;
      }
      uVar15 = 0;
      pbVar5[1] = 8;
      uVar18 = uRam0823fd50;
      *pbVar5 = 2;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
code_r0x0823fb28:
      func_0x082ee038(uRam0823fd30,uVar18,1,uVar15);
      return pbVar5;
    case 9:
      uVar15 = func_0x08243afe();
      func_0x082ee038(uRam0823fd30,uRam0823fd34,1,uVar15,uVar14);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar11 = 9;
      goto code_r0x0823faf0;
    case 10:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,1,param_3);
      uVar15 = uRam0823fd5c;
      if (pbVar5 != (byte *)0x0) {
        uVar15 = func_0x081caec0();
        uVar18 = uRam0823fd58;
        *pbVar5 = (byte)uVar15;
        goto code_r0x0823fb28;
      }
      break;
    case 0xb:
    case 0xc:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      if (*(short *)(param_1 + 6) == 0xb) {
        pbVar5[1] = 0xb;
        pbVar5[2] = 0;
        bVar3 = func_0x082396a0();
      }
      else {
        pbVar5[2] = 0;
        pbVar5[1] = 0xc;
        bVar3 = func_0x08239694();
      }
      goto code_r0x0823fc92;
    case 0xd:
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      pbVar5[1] = 0xd;
      pbVar5[2] = 0;
      bVar3 = func_0x08239688();
code_r0x0823fc92:
      pbVar5[3] = bVar3;
      return pbVar5;
    case 0x10:
      uVar15 = func_0x0823add4();
      func_0x082ee038(uRam0823fd30,uRam0823fd60,1,uVar15,uVar14);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar11 = 0x10;
code_r0x0823faf0:
      bVar3 = (byte)uVar15;
      pbVar5[1] = bVar11;
      pbVar5[2] = 0;
      *pbVar5 = 0;
code_r0x0823faf6:
      pbVar5[3] = bVar3;
      return pbVar5;
    case 0x12:
      bVar3 = func_0x08240d3c();
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,4,param_3);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *pbVar5 = 0;
      pbVar5[1] = 0x12;
      pbVar5[2] = 0;
      goto code_r0x0823faf6;
    case 0x13:
      bVar3 = func_0x082479d0(&uStack_2c);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,6,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = 0x13;
        pbVar5[2] = 0;
        *pbVar5 = bVar3;
        *(short *)(pbVar5 + 3) = (short)uStack_2c;
        pbVar5[5] = uStack_2c._2_1_;
        return pbVar5;
      }
      return (byte *)0x0;
    case 0x18:
      func_0x082ee038(_DAT_0823ffa0,uRam0823ffa4,1,param_1[8],uVar14);
      bVar3 = param_1[8];
      if (bVar3 == 3) {
code_r0x0823fde8:
        iVar10 = func_0x081fdd64(0,&uStack_2c,3);
        uVar15 = uRam0823ffa8;
      }
      else {
        if (3 < bVar3) {
          bVar17 = bVar3 == 0xff;
code_r0x0823fdbe:
          if (!bVar17) {
            return (byte *)0x0;
          }
          func_0x082d1370();
          uVar14 = 0;
          func_0x0823181c(0,4,1,0x73,0,0,0,1000);
          if (param_1[8] == 2) {
            return (byte *)0x0;
          }
          goto code_r0x0823fde8;
        }
        if (bVar3 != 0) {
          bVar17 = bVar3 == 2;
          goto code_r0x0823fdbe;
        }
        iVar10 = func_0x081fdd64(0,&uStack_2c,3);
        uVar15 = uRam0823ffac;
      }
      func_0x082ee038(_DAT_0823ffa0,uVar15,1,iVar10,uVar14);
      if (iVar10 != 0) {
        func_0x082624c8(&uStack_2c);
        func_0x08264788();
      }
LAB_0823f490:
      return (byte *)0x0;
    case 0x23:
      func_0x082ee038(_DAT_0823ffa0,uRam0823ffb0,1,param_1[8],uVar14);
      bVar3 = param_1[8];
      uStack_2c = CONCAT13(uStack_2c._3_1_,*puRam0823ffb4);
      if (bVar3 == 2) {
        func_0x08242654(&uStack_2c);
        goto code_r0x0823fe58;
      }
      if (bVar3 != 3) {
        if (bVar3 == 1) {
          func_0x08242610(&uStack_2c);
        }
        goto code_r0x0823fe58;
      }
      uStack_30 = 0;
      func_0x082425d8(&uStack_30);
      uVar13 = 0;
      if (uStack_30._1_1_ == '\0') {
code_r0x0823febe:
        uStack_2c._0_3_ = CONCAT12(uVar13,(short)uStack_2c);
      }
      else {
        if ((char)uStack_30 == '\x01') {
          if (uStack_30._1_1_ == '\t') {
            uStack_2c._0_3_ = CONCAT12(3,(short)uStack_2c);
            goto code_r0x0823fe58;
          }
        }
        else if (((char)uStack_30 == '\x02') && (uStack_30._1_1_ == '\t')) {
          uVar13 = 4;
          goto code_r0x0823febe;
        }
        uStack_2c._0_3_ = CONCAT12((char)uStack_30,(short)uStack_2c);
      }
code_r0x0823fe58:
      func_0x082ee038(_DAT_0823ffa0,uRam0823ffb8,3,uStack_2c & 0xff,uStack_2c >> 8 & 0xff,
                      uStack_2c >> 0x10 & 0xff);
      pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c83,6,param_3);
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = 0x23;
        *pbVar5 = 0;
        pbVar5[2] = 0;
        func_0x082ee988(pbVar5 + 3,&uStack_2c);
        return pbVar5;
      }
      return (byte *)0x0;
    }
LAB_0823f4bc:
    func_0x082ee038(_DAT_0823f6d0,uVar15,0);
    return (byte *)0x0;
  default:
    goto LAB_0823f490;
  case 5:
    puVar7 = (undefined4 *)func_0x082ef558(4);
    *puVar7 = *(undefined4 *)(param_1 + 6);
    func_0x0823181c(0,3,1,0x30,puVar7,4,0,0);
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c85,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    goto code_r0x0823f576;
  case 6:
    iVar10 = *(ushort *)(param_1 + 2) - 2;
    func_0x082ee038(_DAT_0823f6d0,uRam0823f6e0,3,(uint)*(ushort *)(param_1 + 2),2,iVar10);
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c86,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar3 = func_0x08242432(param_1 + 6,iVar10);
    bVar3 = bVar3 ^ 1;
    break;
  case 7:
    func_0x082ee038(_DAT_0823f6d0,uRam0823f6e4,1,uVar12,uVar14);
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c87,5,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    *pbVar5 = 1;
    uStack_30._0_1_ = 0x82;
    cVar4 = func_0x081f8d18(0x20,&uStack_30,1,&uStack_2c,4,100);
    if (cVar4 != '\0') {
      return pbVar5;
    }
    *(uint *)(pbVar5 + 1) = uStack_2c;
    uStack_30 = CONCAT11(uStack_30._1_1_,0x84);
    cVar4 = func_0x081f8d18(0x20,&uStack_30,1,&uStack_2c,4,100);
    if (cVar4 != '\0') {
      return pbVar5;
    }
    *(uint *)(pbVar5 + 1) = *(uint *)(pbVar5 + 1) | uStack_2c;
    bVar3 = 0;
    break;
  case 8:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2c88,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (2 < param_1[6] - 1) {
      bVar3 = 3;
      goto code_r0x0823f59c;
    }
    iVar10 = func_0x082ef558(4);
    func_0x082ee988(iVar10,param_1 + 6,4);
    if (100 < *(byte *)(iVar10 + 1)) {
      *(undefined1 *)(iVar10 + 1) = 100;
    }
    if (100 < *(byte *)(iVar10 + 2)) {
      *(undefined1 *)(iVar10 + 2) = 100;
    }
    if (100 < *(byte *)(iVar10 + 3)) {
      *(undefined1 *)(iVar10 + 3) = 100;
    }
    uVar18 = 4;
    uVar15 = 0xb7;
code_r0x0823f5dc:
    func_0x0823181c(0,3,1,uVar15,iVar10,uVar18,0,0);
LAB_0823f5e6:
    *pbVar5 = 0;
    return pbVar5;
  }
  *pbVar5 = bVar3;
  return pbVar5;
}


/* candidate_35_mmi_enum at 081f4edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * candidate_35_mmi_enum(int param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  uint uStack_2c;
  undefined1 auStack_24 [12];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uStack_18 = (uint)*(ushort *)(param_1 + 4);
  uStack_14 = param_3;
  uStack_10 = param_3;
  func_0x082ee038(_DAT_081f4f44,_DAT_081f4f40,3,*(undefined1 *)(param_1 + 1));
  *_DAT_081f4f48 = (char)param_3;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 != 0x901) {
    if (sVar3 == 0x9fd) {
      puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x9fd,1,param_3);
      if (*(char *)(param_1 + 6) == '\0') {
        uStack_7c = 2;
      }
      else if (*(char *)(param_1 + 6) == '\x01') {
        uStack_7c = 0x40;
      }
      else {
        func_0x082eeb08(_DAT_081f4d28,_DAT_081f4d24,1);
        uStack_7c = 0;
      }
      if (puVar6 != (undefined2 *)0x0) {
        func_0x082528d0(&uStack_7c,0,0x6c);
        uStack_78 = 0xfe01;
        uStack_76 = *(undefined2 *)(param_1 + 7);
        iVar5 = func_0x0821f368(0xffffffff,&uStack_7c);
        *(bool *)puVar6 = iVar5 != 0;
      }
      return puVar6;
    }
    if (sVar3 != 0x900) {
      return (undefined2 *)0x0;
    }
    uStack_18 = param_1;
    uStack_14 = param_3;
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x900,3,param_3);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    *(undefined1 *)(puVar6 + 1) = 1;
    func_0x081f4d2c(*(undefined2 *)(param_1 + 6),*(undefined1 *)(param_1 + 8));
    uVar1 = *(ushort *)(param_1 + 6);
    if (0xb < uVar1) {
      if (3 < (ushort)(uVar1 - 0x1b)) {
        return puVar6;
      }
      switch(uVar1) {
      case 0x1b:
code_r0x081f4df4:
        iVar5 = func_0x08222e5c(1,&uStack_14);
        if (iVar5 == 0) {
          uVar9 = 0;
          if ((uStack_14 & 0xff) != 0) {
            uVar9 = uStack_14 >> 8 & 0xff;
          }
        }
        else {
          uVar9 = 0;
        }
        uVar8 = (uint)*(byte *)(param_1 + 8);
        iVar5 = func_0x08223078(0);
        if (iVar5 < (int)uVar8) {
          return puVar6;
        }
        if (uVar8 == 0) {
          return puVar6;
        }
        if ((uVar8 != uVar9) && (iVar5 = func_0x0824a64c(), iVar5 != 0)) {
          uVar7 = func_0x0824c4a0(uVar8);
          func_0x081f4a10(uVar7,puVar6 + 1,uRam081f4ec8);
          func_0x0824c4a0(uVar8);
          func_0x0824c74c();
          return puVar6;
        }
        goto code_r0x081f4e1e;
      case 0x1c:
        uVar7 = 0x100000;
        break;
      case 0x1d:
        uVar7 = 0x200000;
        break;
      case 0x1e:
        func_0x081f4af4(*(undefined1 *)(param_1 + 8),puVar6 + 1);
        return puVar6;
      default:
        goto LAB_081f4da8;
      }
      func_0x081f4a10(*(undefined1 *)(param_1 + 8),puVar6 + 1,uVar7);
LAB_081f4da8:
      return puVar6;
    }
    switch(uVar1) {
    case 0:
    case 0xb:
      goto code_r0x081f4df4;
    case 1:
      func_0x0824395c(*(undefined1 *)(param_1 + 8));
      break;
    default:
      return puVar6;
    case 4:
      if (puVar6 == (undefined2 *)0xfffffffe) {
        return (undefined2 *)0xfffffffe;
      }
      iVar5 = func_0x081f4a00(*(undefined1 *)(param_1 + 8),1);
      if (iVar5 == 0) {
code_r0x081f4e74:
        uVar2 = 1;
        goto code_r0x081f4e76;
      }
      break;
    case 10:
      if (*(char *)(param_1 + 1) == 'Z') {
        if (*(byte *)(param_1 + 8) < 2) {
          if (puVar6 == (undefined2 *)0xfffffffe) {
            return (undefined2 *)0xfffffffe;
          }
          if (*(code **)(iRam081f4ecc + 4) != (code *)0x0) {
            (**(code **)(iRam081f4ecc + 4))();
            return puVar6;
          }
        }
        goto code_r0x081f4e74;
      }
      if (*(char *)(param_1 + 1) != '[') {
        func_0x082ee038(uRam081f4ed4,uRam081f4ed8,1);
        return puVar6;
      }
      if (*(code **)(iRam081f4ecc + 8) == (code *)0x0) {
        func_0x082eeb08(uRam081f4ed4,uRam081f4ed0);
      }
      else {
        (**(code **)(iRam081f4ecc + 8))(*(undefined1 *)(param_1 + 8));
      }
    }
code_r0x081f4e1e:
    uVar2 = 0;
code_r0x081f4e76:
    *(undefined1 *)(puVar6 + 1) = uVar2;
    return puVar6;
  }
  switch(*(undefined2 *)(param_1 + 6)) {
  case 0:
  case 0xb:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *(undefined2 *)(param_1 + 6);
      auStack_24[0] = 0;
      func_0x081f4a18(auStack_24,puVar6 + 1,1);
      uVar2 = func_0x0824c488(auStack_24[0]);
      *(undefined1 *)((int)puVar6 + 3) = uVar2;
    }
    break;
  default:
    puVar6 = (undefined2 *)0x0;
    break;
  case 2:
    uStack_2c = param_3;
    sVar3 = func_0x081f4a08();
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,(sVar3 + 2) * 2,uStack_2c);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    iVar5 = func_0x081f4a08();
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    if (iVar5 == 0) {
      *(undefined1 *)((int)puVar6 + 3) = 0;
      goto code_r0x081f4be6;
    }
    uStack_2c = iVar5 << 1;
    iVar4 = func_0x081ed1b4(uStack_2c);
    func_0x081f4a0c();
    *(char *)((int)puVar6 + 3) = (char)iVar5;
    if (iVar4 == 0) {
      func_0x082528d0(puVar6 + 2,0,uStack_2c);
    }
    else {
      func_0x082ee988();
    }
    func_0x081ed1d0(iVar4);
    goto code_r0x081f4bda;
  case 3:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    iVar5 = func_0x081f4a04();
    *(char *)((int)puVar6 + 3) = (char)iVar5;
    bVar10 = iVar5 == 0xff;
    goto code_r0x081f4c16;
  case 5:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,7);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *(undefined2 *)(param_1 + 6);
      func_0x081f4a48((int)puVar6 + 3,puVar6 + 1);
    }
    break;
  case 6:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    iVar5 = func_0x081fd3c6(0xdf,auStack_24);
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    if (iVar5 != 0) {
      uVar2 = func_0x08212c18(auStack_24);
      *(undefined1 *)((int)puVar6 + 3) = uVar2;
    }
    bVar10 = *(char *)((int)puVar6 + 3) == -1;
code_r0x081f4c16:
    if (bVar10) {
code_r0x081f4be6:
      uVar2 = 1;
    }
    else {
code_r0x081f4bda:
      uVar2 = 0;
    }
    *(undefined1 *)(puVar6 + 1) = uVar2;
    break;
  case 7:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,5);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = *(undefined2 *)(param_1 + 6);
      func_0x081f4ac8((int)puVar6 + 3,puVar6 + 1);
    }
    break;
  case 10:
    puVar6 = (undefined2 *)func_0x081f3f28(0x5b,0x901,4);
    if (puVar6 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    *puVar6 = *(undefined2 *)(param_1 + 6);
    if (puVar6 == (undefined2 *)0xfffffffd) {
      return (undefined2 *)0xfffffffd;
    }
    if (puVar6 == (undefined2 *)0xfffffffe) {
      return (undefined2 *)0xfffffffe;
    }
    if ((code *)*puRam081f4cb4 != (code *)0x0) {
      (*(code *)*puRam081f4cb4)();
      goto code_r0x081f4bda;
    }
    goto code_r0x081f4be6;
  }
  return puVar6;
}


/* candidate_35_line_in_getter at 08241a04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte candidate_35_line_in_getter(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bStack_9;
  
  bStack_9 = *_DAT_08241a54;
  if (bStack_9 == 0) {
    func_0x081aa6c8(*_DAT_08241a50,&bStack_9);
    bVar1 = bStack_9 == 0;
  }
  else {
    bStack_9 = 0;
    func_0x081be964(*_DAT_08241a50,&bStack_9,param_3,0,param_1);
    bVar1 = bStack_9 ^ 1;
  }
  func_0x082ee038(_DAT_08241a5c,_DAT_08241a58,1,bVar1);
  return bVar1;
}


/* candidate_35_input_helper_A at 081aa6c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 candidate_35_input_helper_A(uint param_1,undefined1 *param_2)

{
  if (0x39 < param_1) {
    return 0xfffffffe;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  if ((1 << (param_1 & 0x1f) & *(uint *)(*_DAT_081aa6fc + ((param_1 >> 5) + 0x18) * 4)) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}


/* candidate_35_input_helper_B at 081be964 */

undefined4 candidate_35_input_helper_B(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 4) && (param_2 != (undefined1 *)0x0)) {
    iVar1 = func_0x081ad710(param_1 + 3 & 0xff);
    if (iVar1 == 0) {
      *param_2 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

