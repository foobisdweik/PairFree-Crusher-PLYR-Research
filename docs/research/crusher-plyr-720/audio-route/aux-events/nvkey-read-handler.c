/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 081ef628 */

/* WARNING: Removing unreachable block (ram,0x081eef6c) */
/* WARNING: Removing unreachable block (ram,0x081eef82) */
/* WARNING: Removing unreachable block (ram,0x081eef98) */
/* WARNING: Removing unreachable block (ram,0x081eef90) */

undefined1 * aux_081ef628(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  uint uStack_4c;
  undefined2 auStack_48 [2];
  undefined1 auStack_44 [12];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  short in_stack_ffffffe4;
  
  switch(*(undefined2 *)(param_1 + 4)) {
  case 0xa00:
    uStack_20 = param_1;
    uStack_20 = func_0x081c638c(*(undefined2 *)(param_1 + 6),&stack0xffffffec);
    func_0x082eeb08(uRam081eefa8,uRam081eefa4,3,*(undefined2 *)(param_1 + 6));
    puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa00,3,param_3);
    if (puVar13 != (undefined1 *)0x0) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
    }
    return puVar13;
  case 0xa01:
    uStack_24 = 0;
    uStack_30 = param_1;
    uStack_2c = param_3;
    uStack_28 = param_3;
    iVar7 = func_0x081eef00(*(undefined2 *)(param_1 + 6));
    piVar2 = piRam081ef364;
    if (iVar7 == 0) {
      puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa01,1,param_3);
    }
    else {
      if (*piRam081ef364 == 0) {
        iVar7 = func_0x081f3f28(0x5b,0xa01,1,param_3);
        *piVar2 = iVar7;
      }
      puVar13 = (undefined1 *)*piVar2;
    }
    if (puVar13 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    uVar11 = *(ushort *)(param_1 + 2) - 4;
    if (1000 < uVar11) {
      func_0x082eeb08(uRam081ef36c,uRam081ef368,1,1000);
      uVar11 = 1000;
    }
    uVar1 = *(undefined2 *)(param_1 + 6);
    pbVar14 = (byte *)(param_1 + 8);
    iVar7 = func_0x081eef00(uVar1);
    puVar4 = puRam081ef374;
    puVar10 = puRam081ef370;
    if (iVar7 == 0) {
      iVar7 = func_0x081c6324(uVar1,pbVar14,uVar11);
      if (iVar7 == 0) {
        func_0x081ef06c(*(undefined2 *)(param_1 + 6),pbVar14,uVar11);
        iVar7 = func_0x081c638c(*(undefined2 *)(param_1 + 6),&uStack_24);
        if (iVar7 == 0) {
          iVar7 = func_0x081ed1b4(uStack_24);
          if (iVar7 != 0) {
            iVar8 = func_0x081c62f8(*(undefined2 *)(param_1 + 6),iVar7,&uStack_24);
            uVar5 = uRam081ef37c;
            uVar3 = uRam081ef36c;
            if (iVar8 == 0) {
              for (uVar11 = 0; uVar11 < uStack_24; uVar11 = uVar11 + 1) {
                if ((uint)*(byte *)(iVar7 + uVar11) != (uint)*pbVar14) {
                  uStack_30 = (uint)*pbVar14;
                  uStack_2c = (uint)*(byte *)(iVar7 + uVar11);
                  func_0x082eeb08(uVar3,uVar5,3,*(undefined2 *)(param_1 + 6));
                  iVar8 = -1;
                }
                pbVar14 = pbVar14 + 1;
              }
            }
            *puVar13 = (char)iVar8;
            func_0x081ed1d0(iVar7);
            return puVar13;
          }
          uVar6 = 0xff;
          goto code_r0x081ef2c6;
        }
      }
      *puVar13 = (char)iVar7;
    }
    else {
      *puRam081ef370 = uVar1;
      puVar10[1] = (short)uVar11;
      *puVar4 = (char)param_3;
      func_0x082ee988(puVar10 + 2,pbVar14,uVar11);
      iVar7 = func_0x081f9b28(5,0,param_1,*(ushort *)(param_1 + 2) + 4);
      if (iVar7 != 0) {
        return (undefined1 *)0x0;
      }
      func_0x082eeb08(uRam081ef36c,uRam081ef378,0);
      uVar6 = 1;
code_r0x081ef2c6:
      *puVar13 = uVar6;
    }
    return puVar13;
  default:
    puVar13 = (undefined1 *)0x0;
    break;
  case 0xa03:
    puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa03,1,param_3);
    if (puVar13 != (undefined1 *)0x0) {
      iVar7 = func_0x081c7a5c(&stack0xffffffe8,&stack0xffffffec);
      if (iVar7 == 0) {
        if ((uint)*(ushort *)(param_1 + 6) < param_1 - param_3) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
      }
      *puVar13 = uVar6;
    }
    return puVar13;
  case 0xa07:
    func_0x081c6234(auStack_44,param_3,param_3,param_4);
    iVar7 = func_0x081ed1b4(uStack_34 + 1);
    iVar8 = func_0x081ed1b4(uStack_30 + 1);
    if (iVar7 != 0) {
      if ((iVar8 != 0) && (iVar9 = func_0x081c7554(), uVar3 = uRam081ef5fc, iVar9 == 0)) {
        do {
          iVar9 = func_0x081c778c(iVar7);
          if (iVar9 != 0) goto code_r0x081ef5c4;
          iVar9 = func_0x081a6194(iVar7,uVar3);
        } while (iVar9 != 0);
        func_0x081c7818(iVar7,&uStack_4c);
        puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa07,uStack_4c * 2 + 3 & 0xffff,param_3);
        uVar3 = uRam081ef600;
        if (puVar13 != (undefined1 *)0x0) {
          *(undefined2 *)(puVar13 + 1) = (undefined2)uStack_4c;
          uVar6 = 0;
          for (uVar11 = 0; (uVar11 & 0xffff) < uStack_4c; uVar11 = uVar11 + 1) {
            iVar9 = func_0x081c7858(iVar8);
            iVar12 = (uVar11 & 0xffff) * 2;
            if (iVar9 == 0) {
              func_0x082eb470(iVar8,uVar3,auStack_48);
              *(undefined2 *)(puVar13 + iVar12 + 3) = auStack_48[0];
            }
            else {
              uVar6 = 0xff;
              puVar13[iVar12 + 3] = 0xff;
              puVar13[iVar12 + 4] = 0xff;
            }
          }
          *puVar13 = uVar6;
          func_0x081c775c();
          func_0x081ed1d0(iVar7);
          func_0x081ed1d0(iVar8);
          return puVar13;
        }
code_r0x081ef5c4:
        func_0x081c775c();
      }
      if (iVar7 != 0) {
        func_0x081ed1d0(iVar7);
      }
    }
    if (iVar8 != 0) {
      func_0x081ed1d0(iVar8);
    }
    puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa07,4,param_3);
    if (puVar13 != (undefined1 *)0x0) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
    }
    return puVar13;
  case 0xa08:
    if (param_1 != 0) {
      if (*(byte *)(param_1 + 6) == 0) {
        func_0x082eeb08(uRam081ef624,uRam081ef620);
      }
      else if (2 < *(byte *)(param_1 + 6) - 1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    return (undefined1 *)0x0;
  case 0xa09:
    puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa09,1,param_3);
    if (puVar13 != (undefined1 *)0x0) {
      puVar10 = (undefined2 *)func_0x081ed1b4(2);
      if (puVar10 == (undefined2 *)0x0) {
        *puVar13 = 4;
      }
      else {
        *puVar10 = *(undefined2 *)(param_1 + 6);
        uVar6 = func_0x081f42d0(0x1c,puVar10);
        *puVar13 = uVar6;
      }
    }
    break;
  case 0xa0c:
    uStack_24 = param_3;
    iVar7 = func_0x081c638c(*(undefined2 *)(param_1 + 6),&stack0xffffffe4,param_3,param_4);
    if (iVar7 == 0) {
      puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa0c,in_stack_ffffffe4 + 5,uStack_24);
      if (puVar13 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      iVar7 = func_0x081c62f8(*(undefined2 *)(param_1 + 6),puVar13 + 5,&stack0xffffffe4);
      if (iVar7 == 0) {
        *puVar13 = 0;
        *(short *)(puVar13 + 3) = in_stack_ffffffe4;
      }
      else {
        puVar13[3] = 0;
        puVar13[4] = 0;
        *puVar13 = 0xff;
      }
    }
    else {
      puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa0c,5,uStack_24);
      if (puVar13 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      puVar13[3] = 0;
      puVar13[4] = 0;
      *puVar13 = (char)iVar7;
    }
    *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(param_1 + 6);
    return puVar13;
  case 0xa0d:
    iVar7 = func_0x081eef00(*(undefined2 *)(param_1 + 6),param_3,param_3,param_4);
    piVar2 = piRam081ef49c;
    if (iVar7 == 0) {
      puVar13 = (undefined1 *)func_0x081f3f28(0x5b,0xa0d,3,param_3);
    }
    else {
      if (*piRam081ef49c == 0) {
        iVar7 = func_0x081f3f28(0x5b,0xa0d,3,param_3);
        *piVar2 = iVar7;
      }
      puVar13 = (undefined1 *)*piVar2;
    }
    if (puVar13 != (undefined1 *)0x0) {
      uVar1 = *(undefined2 *)(param_1 + 6);
      *puVar13 = 1;
      *(undefined2 *)(puVar13 + 1) = uVar1;
      uVar1 = *(undefined2 *)(param_1 + 6);
      uStack_2c = *(ushort *)(param_1 + 2) - 4;
      if (999 < uStack_2c) {
        uStack_2c = 1000;
      }
      iVar8 = func_0x081eef00(uVar1);
      puVar4 = puRam081ef4a4;
      iVar7 = iRam081ef4a0;
      pbVar14 = (byte *)(param_1 + 8);
      if (iVar8 == 0) {
        iVar7 = func_0x081c6324(uVar1,pbVar14);
        if (iVar7 == 0) {
          iVar7 = func_0x081c638c(*(undefined2 *)(param_1 + 6),&uStack_24);
          if (iVar7 == 0) {
            iVar7 = func_0x081ed1b4(uStack_24);
            iVar8 = func_0x081c62f8(*(undefined2 *)(param_1 + 6),iVar7,&uStack_24);
            if (iVar8 == 0) {
              for (uVar11 = 0; uStack_24 != uVar11; uVar11 = uVar11 + 1) {
                if ((uint)*(byte *)(iVar7 + uVar11) != (uint)*pbVar14) {
                  uStack_38 = (uint)*(byte *)(iVar7 + uVar11);
                  uStack_34 = (uint)*pbVar14;
                  func_0x082eeb08(uRam081ef4ac,uRam081ef4b0,3,*(undefined2 *)(param_1 + 6));
                  uVar6 = 1;
                  goto code_r0x081ef48a;
                }
                pbVar14 = pbVar14 + 1;
              }
              uVar6 = 0;
code_r0x081ef48a:
              *puVar13 = uVar6;
            }
            func_0x081ed1d0(iVar7);
          }
          else {
            *puVar13 = (char)iVar7;
          }
        }
      }
      else {
        *(short *)(iRam081ef4a0 + 0x406) = (short)uStack_2c;
        *(undefined2 *)(iVar7 + 0x404) = uVar1;
        *puVar4 = (char)param_3;
        func_0x082ee988(iVar7 + 0x408,pbVar14);
        iVar7 = func_0x081f9b28(5,0,param_1,*(ushort *)(param_1 + 2) + 4);
        if (iVar7 == 0) {
          func_0x082eeb08(uRam081ef4ac,uRam081ef4a8,0);
          *puVar13 = 1;
        }
        else {
          puVar13 = (undefined1 *)0x0;
        }
      }
    }
    return puVar13;
  }
  return puVar13;
}

