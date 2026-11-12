/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */

/* Function at 08237fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08237fe0(int *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined1 uStack_4c;
  
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  iVar4 = func_0x082ee408(0x408);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  func_0x082528d0(iVar4,0,0x408);
  *(undefined4 *)(iVar4 + 0x404) = 0x40;
  iVar13 = param_1[2] + 1 + *param_1;
  iVar5 = func_0x082ea724(iVar13,_DAT_08238308,4);
  if (iVar5 == 0) {
    iVar5 = func_0x082eb4cc(iVar13,0x2c);
    iVar5 = iVar5 + 1;
    uVar6 = func_0x082ea724(iVar5,_DAT_0823830c,3);
    if (uVar6 == 0) {
      uStack_54 = uVar6;
      func_0x082528d0(&uStack_50,0,0x2e);
      func_0x08237e78(&uStack_64);
      func_0x082eb3c8(&uStack_54,0x32,_DAT_08238310,uStack_64 & 0xff,uStack_64 >> 8 & 0xff,
                      uStack_64 >> 0x10 & 0xff,uStack_64 >> 0x18,uStack_60 & 0xff,
                      uStack_60 >> 8 & 0xff,uStack_60 >> 0x10 & 0xff,uStack_60 >> 0x18,
                      uStack_5c & 0xff,uStack_5c >> 8 & 0xff,uStack_5c >> 0x10 & 0xff,
                      uStack_5c >> 0x18,uStack_58 & 0xff,uStack_58 >> 8 & 0xff,
                      uStack_58 >> 0x10 & 0xff,uStack_58 >> 0x18);
      func_0x082eb3c8(iVar4,0x400,_DAT_08238314,&uStack_54);
    }
    else {
      iVar13 = func_0x082ea724(iVar5,_DAT_08238318,3);
      if (iVar13 != 0) goto LAB_082381ba;
      iVar5 = func_0x082eb4cc(iVar5,0x2c);
      iVar5 = func_0x082eb470(iVar5 + 1,_DAT_0823831c,&uStack_64,(int)&uStack_64 + 1,
                              (int)&uStack_64 + 2,(int)&uStack_64 + 3,&uStack_60,(int)&uStack_60 + 1
                              ,(int)&uStack_60 + 2,(int)&uStack_60 + 3,&uStack_5c,
                              (int)&uStack_5c + 1,(int)&uStack_5c + 2,(int)&uStack_5c + 3,&uStack_58
                              ,(int)&uStack_58 + 1,(int)&uStack_58 + 2,(int)&uStack_58 + 3);
      if (iVar5 != 0x10) goto LAB_08238794;
      func_0x08237eaa(&uStack_64);
    }
    goto LAB_082380d0;
  }
  iVar5 = func_0x082ea724(iVar13,_DAT_08238320,3);
  if (iVar5 == 0) {
    iVar5 = func_0x082eb4cc(iVar13,0x2c);
    iVar5 = iVar5 + 1;
    iVar13 = func_0x082ea724(iVar5,_DAT_0823830c,3);
    if (iVar13 != 0) {
      iVar13 = func_0x082ea724(iVar5,_DAT_08238330,5);
      if (iVar13 == 0) {
        func_0x08237f3c(1,0,0);
        puVar11 = _DAT_08238334;
        *(undefined4 *)(iVar4 + 0x404) = 0x40;
        *puVar11 = 0;
        func_0x0823724c();
        goto LAB_082381ba;
      }
      iVar5 = func_0x082ea724(iVar5,_DAT_08238338,4);
      if (iVar5 == 0) {
        func_0x08237f3c(0,0,0);
        puVar11 = _DAT_08238334;
        *(undefined4 *)(iVar4 + 0x404) = 0x40;
        *puVar11 = 1;
        func_0x082372f0();
        goto LAB_082381ba;
      }
      goto LAB_08238794;
    }
    uVar12 = _DAT_0823832c;
    if (*_DAT_08238324 != '\0') {
      uVar12 = _DAT_08238328;
    }
    func_0x082eb3c8(iVar4,0x400,uVar12);
    uVar12 = 2;
LAB_0823818c:
    *(undefined4 *)(iVar4 + 0x404) = uVar12;
  }
  else {
    iVar7 = func_0x082ea724(iVar13,_DAT_0823833c,6);
    puVar2 = _DAT_08238368;
    puVar11 = _DAT_0823835c;
    iVar5 = _DAT_08238340;
    pcVar1 = _DAT_08238324;
    if (iVar7 == 0) {
      func_0x082eb3c8(iVar4,0x400,_DAT_08238344,*_DAT_08238324,*(undefined1 *)(_DAT_08238340 + 6),
                      *_DAT_0823835c,*_DAT_08238368);
      func_0x082ee038(_DAT_0823834c,_DAT_08238348,4,*pcVar1,*(undefined1 *)(iVar5 + 6),*puVar11,
                      *puVar2);
    }
    else {
      iVar5 = func_0x082ea724(iVar13,_DAT_08238350,10);
      if (iVar5 != 0) {
        iVar5 = func_0x082ea724(iVar13,_DAT_08238354,7);
        if (iVar5 == 0) {
          iVar5 = func_0x082eb4cc(iVar13,0x2c);
          iVar13 = func_0x082ea724(iVar5 + 1,_DAT_08238358,2);
          puVar11 = _DAT_0823835c;
          if (iVar13 == 0) {
LAB_08238298:
            uVar10 = 1;
LAB_0823829a:
            *puVar11 = uVar10;
          }
          else {
            iVar5 = func_0x082ea724(iVar5 + 1,_DAT_08238360,3);
            if (iVar5 == 0) {
              *_DAT_0823835c = 0;
            }
          }
        }
        else {
          iVar5 = func_0x082ea724(iVar13,_DAT_08238364,0xb);
          if (iVar5 != 0) {
            iVar5 = func_0x082ea724(iVar13,_DAT_0823865c,0xb);
            if (iVar5 == 0) {
              iVar5 = func_0x082eb4cc(iVar13,0x2c);
              iVar13 = func_0x082ea724(iVar5 + 1,_DAT_08238660,2);
              puVar11 = _DAT_08238664;
              if (iVar13 == 0) goto LAB_08238298;
              iVar5 = func_0x082ea724(iVar5 + 1,_DAT_08238668,3);
              if (iVar5 != 0) goto LAB_082382ae;
              uVar10 = 0;
              puVar11 = _DAT_08238664;
              goto LAB_0823829a;
            }
            iVar5 = func_0x082ea724(iVar13,_DAT_0823866c,7);
            if (iVar5 == 0) {
              iVar5 = func_0x082eb4cc(iVar13,0x2c);
              iVar13 = func_0x082ea724(iVar5 + 1,_DAT_08238670,2);
              if (iVar13 == 0) {
                uVar12 = 0x26;
                uVar14 = 1;
              }
              else {
                iVar5 = func_0x082ea724(iVar5 + 1,_DAT_08238674,3);
                if (iVar5 != 0) goto LAB_08238794;
                uVar12 = 0x26;
LAB_082383f8:
                uVar14 = 0;
              }
LAB_082383d4:
              func_0x0823181c(0,4,1,uVar12,uVar14,0,0,0);
            }
            else {
              iVar5 = func_0x082ea724(iVar13,_DAT_08238678,6);
              if (iVar5 == 0) {
                iVar5 = func_0x082eb4cc(iVar13,0x2c);
                iVar13 = func_0x082ea724(iVar5 + 1,_DAT_08238670,2);
                if (iVar13 != 0) {
                  iVar5 = func_0x082ea724(iVar5 + 1,_DAT_08238674,3);
                  if (iVar5 == 0) {
                    uVar12 = 0x28;
                    goto LAB_082383f8;
                  }
                  goto LAB_08238794;
                }
                uVar12 = 0x28;
                uVar14 = 1;
                goto LAB_082383d4;
              }
              iVar5 = func_0x082ea724(iVar13,_DAT_0823867c,4);
              if (iVar5 == 0) {
                iVar5 = func_0x082eb4cc(iVar13,0x2c);
                uVar6 = func_0x082ea724(iVar5 + 1,_DAT_08238680,3);
                if (uVar6 != 0) goto LAB_082381ba;
                uStack_54 = uVar6;
                func_0x082528d0(&uStack_50,0,0x10);
                iVar5 = func_0x08237054(1);
                if (iVar5 != 0) {
                  func_0x082ee988(&uStack_54,iVar5,6);
                }
                func_0x082eb3c8(&uStack_54,0x14,_DAT_08238684,uStack_54 & 0xff,uStack_54 >> 8 & 0xff
                                ,uStack_54 >> 0x10 & 0xff,uStack_54 >> 0x18,(undefined1)uStack_50,
                                uStack_50._1_1_);
                func_0x082eb3c8(iVar4,0x400,_DAT_08238688,&uStack_54);
              }
              else {
                iVar5 = func_0x082ea724(iVar13,_DAT_0823868c,5);
                if (iVar5 != 0) {
                  iVar5 = func_0x082ea724(iVar13,_DAT_08238698,3);
                  if (iVar5 == 0) {
                    iVar5 = func_0x082eb4cc(iVar13,0x2c);
                    uVar12 = _DAT_0823869c;
                    iVar5 = iVar5 + 1;
                    *(undefined4 *)(iVar4 + 0x404) = 0x40;
                    iVar13 = func_0x082ea724(iVar5,uVar12,3);
                    pcVar1 = _DAT_082386a0;
                    if (iVar13 == 0) {
                      *_DAT_082386a0 = '\x01';
                    }
                    else {
                      iVar13 = func_0x082ea724(iVar5,_DAT_082386b0,3);
                      if (iVar13 == 0) {
                        *pcVar1 = '\0';
                      }
                      else {
                        iVar5 = func_0x082ea724(iVar5,_DAT_08238680,3);
                        if (iVar5 == 0) {
                          func_0x082ee038(_DAT_082386ac,_DAT_082386b4,1,*pcVar1);
                          func_0x082eb3c8(iVar4,0x400,_DAT_082386b8,*pcVar1);
                          goto LAB_082381ba;
                        }
                        *(undefined4 *)(iVar4 + 0x404) = 0x80;
                      }
                    }
                    if ((*(char *)(_DAT_082386a4 + 6) == '\x01') && (*pcVar1 == '\x01')) {
                      puVar8 = (undefined2 *)func_0x082ee408(2);
                      if (puVar8 != (undefined2 *)0x0) {
                        *puVar8 = 0x9b;
                        func_0x082ee038(_DAT_082386ac,_DAT_082386a8,1);
                        func_0x0823181c(0,2,2,0xffff,puVar8,2,0,0);
                      }
                      uVar12 = 500;
                    }
                    else {
                      uVar12 = 0;
                    }
                    func_0x0823181c(0,4,1,0x6f,*pcVar1,0,0,uVar12);
                    goto LAB_082381ba;
                  }
                  iVar5 = func_0x082ea724(iVar13,_DAT_082386bc,3);
                  if (iVar5 == 0) {
                    iVar5 = func_0x082eb4cc(iVar13,0x2c);
                    iVar5 = iVar5 + 1;
                    uVar6 = func_0x082ea724(iVar5,_DAT_082386c0,6);
                    if (uVar6 == 0) {
                      iVar5 = func_0x082eb4cc(iVar5,0x2c);
                      uStack_68 = uVar6;
                      func_0x082eb470(iVar5 + 1,_DAT_082386c4,&uStack_68);
                      uStack_54 = CONCAT31(uStack_54._1_3_,1);
                      uStack_50 = (undefined2)(((uStack_68 / 5) * 0x2d) / 100);
                      uStack_4c = (undefined1)(((uStack_68 / 5) * 0xf) / 100);
                      uStack_54 = CONCAT22((short)uStack_68,(undefined2)uStack_54);
                      uStack_4e = uStack_50;
                    }
                    else {
                      iVar5 = func_0x082ea724(iVar5,_DAT_082387a0,7);
                      if (iVar5 != 0) goto LAB_08238794;
                      uStack_54 = uStack_54 & 0xffffff00;
                    }
                    iVar5 = func_0x081e4af4(&uStack_54);
                  }
                  else {
                    uVar6 = func_0x082ea724(iVar13,_DAT_082387a4,7);
                    if (uVar6 == 0) {
                      iVar5 = func_0x082eb4cc(iVar13,0x2c);
                      uStack_54 = uVar6;
                      func_0x082eb470(iVar5 + 1,_DAT_082387a8,&uStack_54);
                      puVar9 = &uStack_68;
                      uStack_68 = CONCAT31(uStack_68._1_3_,(char)uStack_54);
LAB_08238708:
                      uVar12 = 0x14;
                    }
                    else {
                      iVar5 = func_0x082ea724(iVar13,_DAT_082387ac,9);
                      if (iVar5 == 0) {
                        iVar5 = func_0x082eb4cc(iVar13,0x2c);
                        iVar13 = func_0x082ea724(iVar5 + 1,_DAT_082387b0,2);
                        if (iVar13 == 0) {
                          uStack_54 = CONCAT31(uStack_54._1_3_,6);
                        }
                        else {
                          iVar5 = func_0x082ea724(iVar5 + 1,_DAT_082387b4,3);
                          if (iVar5 != 0) goto LAB_08238794;
                          uStack_54 = CONCAT31(uStack_54._1_3_,1);
                        }
                        puVar9 = &uStack_54;
                        goto LAB_08238708;
                      }
                      iVar5 = func_0x082ea724(iVar13,_DAT_082387b8,0xf);
                      if (iVar5 != 0) {
LAB_08238794:
                        uVar12 = 0x80;
                        goto LAB_0823818c;
                      }
                      iVar5 = func_0x082eb4cc(iVar13,0x2c);
                      iVar13 = func_0x082ea724(iVar5 + 1,_DAT_082387b0,2);
                      if (iVar13 == 0) {
                        uStack_54 = CONCAT31(uStack_54._1_3_,1);
                      }
                      else {
                        iVar5 = func_0x082ea724(iVar5 + 1,_DAT_082387b4,3);
                        if (iVar5 != 0) goto LAB_08238794;
                        uStack_54 = uStack_54 & 0xffffff00;
                      }
                      uVar12 = 0x17;
                      puVar9 = &uStack_54;
                    }
                    iVar5 = func_0x081e3dd0(uVar12,puVar9,1);
                  }
                  if (iVar5 == 0) {
                    uVar12 = 0x40;
                  }
                  else {
                    uVar12 = 0x80;
                  }
                  goto LAB_0823818c;
                }
                iVar5 = func_0x082eb4cc(iVar13,0x2c);
                iVar13 = func_0x082ea724(iVar5 + 1,_DAT_08238690,4);
                if (iVar13 == 0) {
                  func_0x081e500c(1);
                  func_0x081e6eb8();
                }
                else {
                  iVar5 = func_0x082ea724(iVar5 + 1,_DAT_08238694,7);
                  if (iVar5 != 0) goto LAB_08238794;
                  func_0x081e500c();
                  func_0x081e7104();
                }
              }
            }
            uVar12 = 0x40;
            goto LAB_0823818c;
          }
          iVar5 = func_0x082eb4cc(iVar13,0x2c);
          iVar13 = func_0x082ea724(iVar5 + 1,_DAT_08238358,2);
          if (iVar13 == 0) {
            *_DAT_08238368 = 1;
            func_0x08279800();
            uVar12 = 0;
          }
          else {
            iVar5 = func_0x082ea724(iVar5 + 1,_DAT_08238360,3);
            if (iVar5 != 0) goto LAB_082382ae;
            *_DAT_08238368 = 0;
            func_0x08279800();
            uVar12 = 1;
          }
          func_0x0827cc72(uVar12);
        }
LAB_082382ae:
        func_0x08237d6c();
        goto LAB_082381ba;
      }
      *_DAT_08238334 = 1;
      func_0x08237f3c(0,0,0);
      func_0x08237fb4();
    }
LAB_082380d0:
    *(undefined4 *)(iVar4 + 0x404) = 0x40;
  }
LAB_082381ba:
  uVar3 = func_0x081a61a8(iVar4);
  *(undefined2 *)(iVar4 + 0x400) = uVar3;
  func_0x081d27e8(iVar4);
  func_0x082ee4a8(iVar4);
  return 0;
}


/* Function at 08246928 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_08246928(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = func_0x082ee408(0x408);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  func_0x082528d0(iVar2,0,0x408);
  *(undefined4 *)(iVar2 + 0x404) = 0x40;
  iVar5 = *param_1 + param_1[2] + 1;
  iVar3 = func_0x082ea724(iVar5,_DAT_082469ec,2,param_1[2] + 1,param_4);
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  else {
    iVar3 = func_0x082ea724(iVar5,_DAT_082469f0,3);
    uVar4 = 0;
    if (iVar3 != 0) {
      iVar3 = func_0x082ea724(iVar5,_DAT_082469f4,8);
      if (iVar3 == 0) {
        iVar3 = func_0x082eb4cc(iVar5,0x2c);
        func_0x082ee038(_DAT_082469fc,_DAT_082469f8,0);
        iVar5 = func_0x082ea724(iVar3 + 1,_DAT_082469ec,2);
        if (iVar5 == 0) {
          uVar4 = 1;
          *(undefined4 *)(iVar2 + 0x404) = 0x40;
        }
        else {
          iVar3 = func_0x082ea724(iVar3 + 1,_DAT_082469f0,3);
          if (iVar3 != 0) goto LAB_082469dc;
          *(undefined4 *)(iVar2 + 0x404) = 0x40;
          uVar4 = 0;
        }
        func_0x08245c28(uVar4);
      }
      else {
LAB_082469dc:
        *(undefined4 *)(iVar2 + 0x404) = 0x80;
      }
      goto LAB_08246968;
    }
  }
  func_0x0824690c(uVar4);
  *(undefined4 *)(iVar2 + 0x404) = 0x40;
LAB_08246968:
  uVar1 = func_0x081a61a8(iVar2);
  *(undefined2 *)(iVar2 + 0x400) = uVar1;
  func_0x081d27e8(iVar2);
  func_0x082ee4a8(iVar2);
  return 0;
}

