/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08239a5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_08239a5c(int *param_1,uint param_2,uint param_3,ushort *param_4,undefined4 param_5)

{
  int *piVar1;
  short sVar2;
  bool bVar3;
  byte *pbVar4;
  short *psVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  char cVar18;
  byte bVar19;
  char *pcVar20;
  uint uVar21;
  undefined4 uVar22;
  char cStack_47;
  byte bStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  ushort uStack_42;
  undefined2 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  
  iVar8 = _DAT_0823a420;
  if (8 < param_2) {
    if (param_2 != 0x23) {
      return 0;
    }
    if (1 < param_3 - 1) {
      return 0;
    }
    func_0x082ee038(_DAT_0823a40c,_DAT_0823a424,2,param_3,*(undefined1 *)(_DAT_0823a420 + 5));
    iVar10 = _DAT_0823a420;
    if (*(byte *)(iVar8 + 5) - 1 < 2) {
      *(undefined1 *)(iVar8 + 5) = 0;
    }
    ds_08239754(iVar10);
    return 0;
  }
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
      return 1;
    }
    func_0x082ee038(uRam08239dd0,uRam08239dcc);
    iVar8 = iRam08239dd4;
    *param_1 = iRam08239dd4;
    func_0x082528d0(iVar8,0,0x34);
    puVar15 = (undefined4 *)*param_1;
    *puVar15 = 0;
    *(undefined1 *)((int)puVar15 + 9) = 0xfe;
    *(undefined1 *)((int)puVar15 + 7) = 0;
    func_0x0824319c();
    func_0x0823a960();
    func_0x081c9acc(0,0,uRam08239dd8,0);
    func_0x081c9acc(0,1,uRam08239ddc,0);
    func_0x081c9acc(0,3,uRam08239de0,0);
    func_0x08240af8();
    func_0x081ca084();
    return 1;
  case 1:
    pcVar20 = (char *)*param_1;
    uVar7 = func_0x0823a460(param_1,param_3,param_4,param_5);
    psVar5 = psRam0823a428;
    if (param_3 == 0x5f) {
      if (*pcVar20 != '\0') {
code_r0x0823a174:
        ds_08239754(pcVar20);
      }
LAB_0823a184:
      uVar7 = 1;
    }
    else {
      if (0x5f < param_3) {
        if (param_3 == 0xa5) {
          aux_0824d428(1);
          aux_0824d428(0,1);
          aux_0824d428(2,0);
        }
        else {
          if (param_3 < 0xa6) {
            if (param_3 == 0x62) {
              func_0x082ee038(_DAT_0823a40c,uRam0823a418,1,param_4);
              func_0x08240ce8(param_4);
            }
            else if (param_3 == 0x73) {
              piVar9 = (int *)func_0x082d1368();
              uVar17 = piVar9[1] + *piVar9;
              uVar21 = 0;
              if (uVar17 != 0) {
                uVar21 = (uint)(piVar9[1] * 100) / uVar17 & 0xff;
              }
              piVar13 = piVar9 + 2;
              while (piVar9 + 6 != piVar13) {
                piVar1 = piVar13 + 4;
                piVar12 = piVar13 + 1;
                uVar17 = *piVar1 + *piVar13;
                piVar13 = piVar12;
                if ((uVar17 != 0) &&
                   (uVar17 = (uint)(*piVar1 * 100) / uVar17 & 0xff, uVar21 < uVar17)) {
                  uVar21 = uVar17;
                }
              }
              uStack_3c = CONCAT22(uStack_3c._2_2_,(short)(uVar21 << 8)) | 2;
              aux_0823ffc8(0x18,&uStack_3c,2);
            }
            goto LAB_0823a082;
          }
          if (param_3 == 0xa6) {
            func_0x08243c58();
          }
          else {
            if (param_3 != 0xaf) goto LAB_0823a082;
            iVar8 = func_0x0822f3ec(2);
            if (iVar8 == 0) {
              func_0x0824348e(0x29,0x20);
              func_0x0824226c(0xf,0x1e,0);
              func_0x08243c1c(0x41);
              aux_0823181c(0,4,1,0x29,0,0,0,0);
              func_0x0823988c(*param_1,1);
            }
            else {
              func_0x0824226c(0xf,0x1e,0);
              func_0x08243c1c(1);
              aux_0823181c(0,4,1,8,0,0,0,0);
            }
          }
        }
        goto LAB_0823a184;
      }
      if (param_3 == 0x2a) {
        if (*psRam0823a404 != 0) {
          uVar22 = 0x2b;
          uVar11 = 0;
code_r0x0823a200:
          aux_0823181c(0,4,1,uVar22,0,0,0,uVar11);
        }
      }
      else if (param_3 < 0x2b) {
        if (param_3 == 0xf) {
          iVar8 = *param_1;
          if (iVar8 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            if (*(char *)(iVar8 + 1) != '\0') {
              iVar10 = func_0x08234b5c();
              if ((*(char *)(iVar8 + 3) == '\0') && (*(byte *)(iVar10 + 3) < 2)) {
                if (*(char *)(iVar8 + 7) == '\0') {
                  uVar7 = 1;
                }
                else {
                  uVar7 = 2;
                }
              }
              else {
                uVar7 = 3;
              }
            }
          }
          func_0x08241e30(uVar7);
          goto LAB_0823a184;
        }
        if (param_3 == 0x1b) {
          uVar21 = func_0x0820918c();
          func_0x082ee9d8(_DAT_0823a40c,uRam0823a408,1,uVar21);
          if (uVar21 < 0x10) {
            func_0x0823b05c();
          }
        }
        else if ((param_3 == 4) && (*pcVar20 != '\0')) {
          pcVar20[4] = '\0';
          goto code_r0x0823a174;
        }
      }
      else if (param_3 == 0x2b) {
        func_0x082ee038(_DAT_0823a40c,uRam0823a410,1,*psRam0823a428);
        iVar8 = func_0x08236a10();
        if (iVar8 == 0) {
          *psRam0823a404 = *psRam0823a414;
        }
        else {
          sVar2 = *psVar5;
          *psRam0823a404 = 0;
          if (sVar2 == 0) {
            if (*psRam0823a414 == 0x95) {
              uVar22 = 7;
            }
            else {
              uVar22 = 5;
            }
            *psVar5 = 1;
            func_0x082396f8(0x55);
            uVar11 = 0x5dc;
            goto code_r0x0823a200;
          }
        }
      }
      else if (param_3 == 0x4a) {
        func_0x082ee038(_DAT_0823a190,uRam0823a1b4,0);
        func_0x0823981c(*param_1,0);
        goto LAB_0823a184;
      }
    }
LAB_0823a082:
    if (6 < param_3 - 5) {
      return uVar7;
    }
    iVar8 = func_0x082188c0();
    if (iVar8 == 0) {
      bVar3 = false;
    }
    else {
      iVar8 = func_0x082188c0();
      if (iVar8 == 1) {
        iVar8 = func_0x08218668();
        bVar3 = false;
        if (iVar8 != 1) {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
    }
    func_0x082ee038(_DAT_0823a190,_DAT_0823a1b0,1,param_3);
    if (bVar3) {
      return 1;
    }
    if (param_3 == 5) {
      if (param_4 == (ushort *)0x0) {
        uVar14 = 1;
      }
      else {
        uVar14 = (undefined1)*param_4;
      }
      uVar7 = 1;
    }
    else {
      if (param_3 != 6) {
        if (param_3 != 7) {
          if (param_3 == 8) {
            if (param_4 == (ushort *)0x0) {
              pcVar20[8] = '\x01';
            }
            func_0x08234a74(param_4 != (ushort *)0x0,0,1);
            return 1;
          }
          if (param_3 != 9) {
            if (param_3 == 10) {
              uVar7 = 1;
              pcVar20[8] = '\x01';
            }
            else {
              if (param_3 != 0xb) {
                return 1;
              }
              func_0x082ee038(_DAT_0823a40c,_DAT_0823a41c,0);
              pcVar20[8] = '\x01';
              uVar7 = 0;
            }
            func_0x08234a74(0,0,uVar7);
            return 1;
          }
          pcVar20[8] = '\x01';
          func_0x08234a74(0,1,param_4 != (ushort *)0x0,0);
LAB_08239a8e:
          return 0;
        }
        uStack_3c = uStack_3c & 0xffffff00;
        func_0x0822b774(&uStack_3c);
        if ((uStack_3c & 0xff) != 0) {
          func_0x0824eae4();
        }
LAB_08239c32:
        func_0x0823981c(*param_1,param_4);
        return 1;
      }
      uVar14 = 1;
      uVar7 = 0;
    }
    func_0x0823988c(*param_1,uVar7,uVar14);
    return 1;
  case 2:
    pcVar20 = (char *)*param_1;
    func_0x0823e980(&cStack_47,&bStack_46);
    if ((pcVar20[9] == cStack_47) && (bStack_46 == 0)) {
      pcVar20[9] = -2;
      ds_08239754(pcVar20);
    }
    if (*pcVar20 == '\x01') {
      return 1;
    }
    if (param_4 == (ushort *)0x0) {
      uStack_42 = func_0x08241e24(cStack_47,bStack_46);
    }
    else {
      uStack_42 = *param_4;
    }
    uVar6 = uStack_42;
    pbVar4 = pbRam0823a194;
    uVar21 = (uint)uStack_42;
    if (uVar21 == 0x95) {
      aux_0823e550(2,0xffff,&uStack_42,2,0);
      *puRam0823a188 = uVar6;
      uVar11 = 4;
      uVar16 = 0x2b;
      uVar22 = 0;
code_r0x08239d4c:
      uVar7 = 0;
      goto code_r0x08239d4e;
    }
    if (uVar21 < 0x96) {
      if (uVar21 < 0x1a) {
        if (uVar21 < 0x16) {
          if (uVar21 != 2) {
            if (uVar21 == 3) {
              func_0x08234b00(0,0,0);
              func_0x0824226c(0,0x1e,1);
              return 0;
            }
            return 0;
          }
          uVar7 = 0x85;
code_r0x08239d64:
          aux_0823181c(0,4,1,uVar7,0,0,0,0);
          return 1;
        }
        switch(uVar21) {
        case 0x16:
          iVar8 = func_0x0824ef28();
          if (iVar8 != 0) {
            uVar7 = func_0x08217330(3);
            func_0x082ee038(uRam08239dd0,uRam08239df0,1,uVar7);
            pcVar20[1] = '\0';
            return 1;
          }
          uVar7 = 8;
          goto code_r0x08239d64;
        case 0x17:
          if (pcVar20[1] != '\0') {
            return 0;
          }
          func_0x08234a74(1,0,0,0);
          func_0x082ee038(uRam08239dd0,uRam08239df4,0);
          aux_0823181c(0,3,1,0xa5,0,0,0,600);
          func_0x08243eec();
          func_0x0824226c(0xe,0x1e,0);
          uVar22 = 700;
          uVar11 = 3;
          uVar16 = 0xa6;
          break;
        case 0x18:
          aux_0823181c(0,4,1,0xaf,0,0,0,0);
          if (0xf < bStack_46 - 0x21) {
            return 1;
          }
          pcVar20[9] = cStack_47;
          return 1;
        case 0x19:
          goto code_r0x08239c30;
        default:
          goto LAB_08239a8e;
        }
        goto code_r0x08239d4c;
      }
      if (3 < uVar21 - 0x90) {
        return 0;
      }
    }
    else {
      if (uVar21 == 0x214) {
        if ((*pbRam0823a194 ^ 1) == 0) {
          uVar7 = 8;
        }
        else {
          uVar7 = 0;
        }
        *pbRam0823a194 = *pbRam0823a194 ^ 1;
        uVar7 = func_0x0821f4d8(uVar7);
        func_0x082ee038(_DAT_0823a190,uRam0823a198,2,*pbVar4,uVar7);
        return 0;
      }
      if (0x214 < uVar21) {
        if (uVar21 == 0x300) {
          bVar19 = 1;
          uStack_40._0_1_ = 0;
          uStack_3c = 1;
          iVar8 = func_0x081c62f8(0x183a,&uStack_40,&uStack_3c);
          if (iVar8 == 0) {
            bVar19 = (byte)uStack_40 ^ 1;
          }
          uStack_3c = 1;
          uStack_40 = CONCAT11(uStack_40._1_1_,bVar19);
          uVar7 = func_0x081c6324(0x183a,&uStack_40);
          func_0x082ee038(_DAT_0823a190,uRam0823a18c,1,uVar7);
        }
        else {
          if (uVar21 != 0x301) {
            return 0;
          }
          uStack_40 = 0;
          uStack_3c = 2;
          iVar8 = func_0x081c62f8(0x1839,&uStack_40,&uStack_3c);
          if (iVar8 == 0) {
            uStack_40 = uStack_40 ^ 1;
          }
          else {
            uStack_40 = 1;
          }
          uStack_3c = 2;
          uVar7 = func_0x081c6324(0x1839,&uStack_40,2);
          func_0x082ee038(uRam08239dd0,uRam08239dec,3,uVar7,(byte)uStack_40,uStack_40._1_1_,uVar7);
        }
        func_0x0823981c(*param_1,0);
        return 0;
      }
      if (0xa3 < uVar21) {
        if (uVar21 != 0x10b) {
          return 0;
        }
        func_0x082396f8(0x56);
code_r0x08239c30:
        param_4 = (ushort *)0x0;
        goto LAB_08239c32;
      }
      if (uVar21 < 0xa0) {
        if (uVar21 != 0x96) {
          return 0;
        }
        func_0x082528d0(&uStack_3c,0,0x14);
        uStack_3c = 10;
        uStack_38 = 3;
        func_0x082439a4(&uStack_3c,0);
        *puRam08239de8 = uVar6;
        uVar7 = 0x2b;
        goto code_r0x08239d64;
      }
    }
    if (*param_1 == 0) {
      return 0;
    }
    func_0x082e0238(&cStack_45,&cStack_44,&uStack_3c,&uStack_40,&cStack_43,0);
    if (uVar21 == 0x90) goto joined_r0x08239ba6;
    if (uVar21 != 0x91) {
      if (uVar21 == 0x92) {
        if (cStack_45 == '\0') goto joined_r0x08239ba6;
      }
      else if (uVar21 == 0x93) {
        if ((cStack_45 == '\0') || ((cStack_44 != '\x05' && (cStack_44 != '\t'))))
        goto joined_r0x08239ba6;
      }
      else {
        if (uVar21 != 0xa1) {
          if (uVar21 != 0xa2) {
            if (uVar21 == 0xa3) {
              cStack_45 = '\x01';
              cVar18 = cStack_44;
            }
            else {
              if (uVar21 != 0xa0) {
                return 0;
              }
              if ((cStack_45 == '\0') || (cStack_44 != '\x01')) {
                func_0x08243bdc();
                return 1;
              }
              if (uStack_3c < 2) {
                uStack_3c = 2;
              }
              else {
                uStack_3c = (uint)(cStack_43 == '\0');
              }
              cStack_45 = '\0';
              cVar18 = '\x01';
            }
            goto code_r0x08239bae;
          }
          cStack_45 = '\0';
joined_r0x08239ba6:
          if (cStack_43 == '\0') {
            uStack_3c = 4;
            cVar18 = '\t';
          }
          else {
            uStack_3c = 6;
            cVar18 = '\x05';
          }
          goto code_r0x08239bae;
        }
        cStack_45 = '\0';
      }
    }
    uStack_3c = (uint)(cStack_43 == '\0');
    cVar18 = '\x01';
code_r0x08239bae:
    if ((cStack_45 == '\0') || (cStack_44 != cVar18)) {
      uVar7 = func_0x0823aa58(cVar18,uStack_3c,0x7fff,0);
    }
    else {
      uVar7 = func_0x0823aab8();
    }
    func_0x082ee038(uRam08239dd0,uRam08239de4,3,cStack_45,cVar18,uVar7);
    return 1;
  default:
    goto LAB_08239a8e;
  case 6:
    func_0x082ee038(_DAT_0823a190,uRam0823a19c,1,param_3);
    if (((param_3 == uRam0823a1a0) && (0xf < *param_4)) && (param_4[1] < 0x10)) {
      aux_082318d4(1,0x1b);
      aux_0823181c(0,4,1,0x1b,0,0,0,uRam0823a1a4);
    }
    uVar7 = func_0x0823a45c(param_1,param_3,param_4,param_5);
    return uVar7;
  case 7:
    if (*param_1 == 0) {
      return 0;
    }
    uVar7 = func_0x0823a464(param_1,param_3,param_4,param_5);
    if (param_3 != uRam0823a1a8) {
      return uVar7;
    }
    if (param_4 == (ushort *)0x0) {
      return uVar7;
    }
    if ((byte)param_4[3] == 0) {
      return uVar7;
    }
    if ((byte)param_4[3] - 2 < 2) {
      return uVar7;
    }
    if (*(char *)((int)param_4 + 7) != '\0') {
      return uVar7;
    }
    aux_082318d4(1,0x1b);
    uVar16 = 0x1b;
    uVar22 = uRam0823a1a4;
    break;
  case 8:
    if (*param_1 == 0) {
      return 0;
    }
    func_0x0823f338(param_3,&uStack_40,&uStack_3c);
    uVar7 = func_0x0823a728(param_1,param_3,param_4,param_5);
    if ((char)uStack_3c != '\0') {
      return uVar7;
    }
    if ((byte)uStack_40 == '\x04') {
      ds_08239754(*param_1);
      return uVar7;
    }
    if ((byte)uStack_40 != '\a') {
      if ((byte)uStack_40 == '\b') {
        aux_082318d4(1,0x1b);
        return uVar7;
      }
      return uVar7;
    }
    iVar8 = func_0x082169f0();
    if ((iVar8 == 0) && (iVar8 = func_0x082495bc(), iVar8 == 0)) {
      uVar16 = 0x8d;
      uVar22 = 0x9c4;
      uVar11 = 4;
      goto code_r0x08239d4e;
    }
    aux_082318d4(1,0x1b);
    aux_082318d4(1,0x8d);
    aux_0823181c(0,4,1,0x1b,0,0,0,uRam0823a1ac);
    uVar16 = 0x8d;
    uVar22 = 10000;
  }
  uVar11 = 4;
code_r0x08239d4e:
  aux_0823181c(0,uVar11,1,uVar16,0,0,0,uVar22);
  return uVar7;
}


/* listing 08233d40..08233d78 (linear sweep) */
08233d40 ldrh r1,[r1,#0x12]
08233d42 lsrs r3,r4,#0x20
08233d44 cmp r5,r1
08233d46 lsrs r3,r4,#0x20
08233d48 subs r6,#0x1d
08233d4a lsrs r3,r4,#0x20
08233d4c bpl 0x08233db2
08233d4e lsrs r3,r4,#0x20
08233d50 bkpt 0xd1
08233d52 lsrs r3,r4,#0x20
08233d54 ldrb r1,[r2,r6]
08233d56 lsrs r3,r4,#0x20
08233d58 ldmia r2!,{r0,r3,r5,r6}
08233d5a lsrs r3,r4,#0x20
08233d5c ldr r2,[sp,#0x174]
08233d5e lsrs r3,r4,#0x20
08233d60 ldrsh r5,[r7,r7]
08233d62 lsrs r4,r4,#0x20
08233d64 bgt 0x08233db2
08233d66 lsrs r3,r4,#0x20
08233d68 ldrsb r1,[r4,r2]
08233d6a lsrs r4,r4,#0x20
08233d6c add r6,sp,#0x3b4
08233d6e lsrs r3,r4,#0x20
08233d70 ldrb r5,[r5,#0x3]
08233d72 lsrs r4,r4,#0x20
08233d74 ldrb r1,[r0,#0x13]
08233d76 lsrs r4,r4,#0x20
08233d78 rev r5,r4
