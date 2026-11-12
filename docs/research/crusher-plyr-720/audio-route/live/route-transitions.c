/* Selected Master .35 functions. Static evidence only. */

/* Function at 08246be4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08246be4(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x082ee038(_DAT_08246c0c,_DAT_08246c08,3,*param_1,param_1[0x24],param_2,param_3);
  param_1[0x24] = (char)param_2;
  return;
}


/* Literal references and instructions */
08246be4 push {r0,r1,r2,r4,r5,lr}
08246be6 str r1,[sp,#0x4]
08246be8 ldrb.w r3,[r0,#0x24]
08246bec mov r4,r0
08246bee str r3,[sp,#0x0]
08246bf0 mov r5,r1
08246bf2 ldrb r3,[r0,#0x0]
08246bf4 movs r2,#0x3
08246bf6 ldr r1,[0x08246c08]
literal 08246c08 = 60ddc81
08246bf8 ldr r0,[0x08246c0c]
literal 08246c0c = 83171ec
08246bfa bl 0x082ee038
08246bfe strb.w r5,[r4,#0x24]
08246c02 add sp,#0xc
08246c04 pop {r4,r5,pc}

/* Function at 08246d4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08246d4c(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [24];
  undefined1 uStack_14;
  
  func_0x082528d0(&uStack_34,0,0x24);
  cVar1 = param_1[0x13];
  if ((*(int *)(param_1 + 0x18) == 0xe) || (*(int *)(param_1 + 0x18) == 4)) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uStack_34 = _DAT_08246e04;
    if (cVar1 == '\0') {
      uStack_34 = uVar3;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uStack_30 = _DAT_08246e04;
    if (cVar1 == '\0') {
      uStack_30 = uVar2;
    }
    for (iVar6 = 2; iVar6 != 8; iVar6 = iVar6 + 1) {
      (&uStack_34)[iVar6] = uStack_30;
    }
    func_0x082ee038(_DAT_08246e0c,_DAT_08246e08,4,*param_1,cVar1,uVar3,uVar2);
    uStack_14 = param_1[0x12];
  }
  else {
    if (cVar1 == '\0') {
      uVar5 = param_1[0x10];
      uVar4 = param_1[0x11];
    }
    else {
      uVar5 = 0;
      uVar4 = 0;
    }
    uStack_34._0_2_ = CONCAT11(uVar4,uVar5);
    if (cVar1 == '\0') {
      uVar5 = param_1[0x11];
    }
    else {
      uVar5 = 0;
    }
    func_0x082528d0((int)&uStack_34 + 2,uVar5,6);
    auStack_2c[0] = param_1[0x12];
  }
  uVar3 = func_0x0822824c((int)(char)param_1[0x36],*(undefined4 *)(param_1 + 0x18),&uStack_34);
  func_0x082ee038(_DAT_08246e0c,_DAT_08246e10,5,*param_1,param_1[0x13],param_1[0x10],param_1[0x11],
                  uVar3);
  return;
}


/* Literal references and instructions */
08246d4c push {r4,r5,r6,lr}
08246d4e mov r4,r0
08246d50 sub sp,#0x38
08246d52 add r5,sp,#0x14
08246d54 movs r2,#0x24
08246d56 movs r1,#0x0
08246d58 mov r0,r5
08246d5a bl 0x082528d0
08246d5e ldr r2,[r4,#0x18]
08246d60 ldrb r3,[r4,#0x13]
08246d62 cmp r2,#0xe
08246d64 beq 0x08246d6a
08246d66 cmp r2,#0x4
08246d68 bne 0x08246dd2
08246d6a ldr r2,[0x08246e04]
literal 08246e04 = ffea0700
08246d6c ldr r1,[r4,#0x8]
08246d6e cmp r3,#0x0
08246d70 ite ne
08246d72 mov.ne r0,r2
08246d74 mov.eq r0,r1
08246d76 str r0,[sp,#0x14]
08246d78 ldr r0,[r4,#0xc]
08246d7a it eq
08246d7c mov.eq r2,r0
08246d7e str r2,[sp,#0x18]
08246d80 movs r2,#0x2
08246d82 cmp r2,#0x8
08246d84 bne 0x08246dc8
08246d86 strd r1,r0,[sp,#0x4]
08246d8a str r3,[sp,#0x0]
08246d8c movs r2,#0x4
08246d8e ldrb r3,[r4,#0x0]
08246d90 ldr r1,[0x08246e08]
literal 08246e08 = 60dde17
08246d92 ldr r0,[0x08246e0c]
literal 08246e0c = 83171ec
08246d94 bl 0x082ee038
08246d98 ldrb r3,[r4,#0x12]
08246d9a strb.w r3,[sp,#0x34]
08246d9e mov r2,r5
08246da0 ldr r1,[r4,#0x18]
08246da2 ldrsb.w r0,[r4,#0x36]
08246da6 bl 0x0822824c
08246daa ldrb r3,[r4,#0x11]
08246dac str r0,[sp,#0xc]
08246dae str r3,[sp,#0x8]
08246db0 ldrb r3,[r4,#0x10]
08246db2 movs r2,#0x5
08246db4 str r3,[sp,#0x4]
08246db6 ldrb r3,[r4,#0x13]
08246db8 ldr r1,[0x08246e10]
literal 08246e10 = 60dde6c
08246dba str r3,[sp,#0x0]
08246dbc ldr r0,[0x08246e0c]
literal 08246e0c = 83171ec
08246dbe ldrb r3,[r4,#0x0]
08246dc0 bl 0x082ee038
08246dc4 add sp,#0x38
08246dc6 pop {r4,r5,r6,pc}
08246dc8 ldr r6,[sp,#0x18]
08246dca str.w r6,[r5,r2,lsl #0x2]
08246dce adds r2,#0x1
08246dd0 b 0x08246d82
08246dd2 cbnz r3,0x08246df8
08246dd4 ldrb r2,[r4,#0x10]
08246dd6 strb.w r2,[sp,#0x14]
08246dda cbnz r3,0x08246dfc
08246ddc ldrb r2,[r4,#0x11]
08246dde strb.w r2,[sp,#0x15]
08246de2 cbnz r3,0x08246e00
08246de4 ldrb r1,[r4,#0x11]
08246de6 movs r2,#0x6
08246de8 add.w r0,sp,#0x16
08246dec bl 0x082528d0
08246df0 ldrb r3,[r4,#0x12]
08246df2 strb.w r3,[sp,#0x1c]
08246df6 b 0x08246d9e
08246df8 movs r2,#0x0
08246dfa b 0x08246dd6
08246dfc movs r2,#0x0
08246dfe b 0x08246dde
08246e00 movs r1,#0x0
08246e02 b 0x08246de6

/* Function at 08246e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08246e98(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [64];
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  func_0x082528d0(auStack_5c,0,0x4c);
  (**(code **)(param_1 + 4))(*param_1,auStack_5c);
  uStack_1c = _DAT_08247034;
  pcStack_18 = param_1;
  cVar2 = func_0x08227f60(auStack_5c);
  param_1[0x36] = cVar2;
  route_candidate_08246be4(param_1,1);
  iVar3 = *(int *)(param_1 + 0x38);
  if (((iVar3 == 0) || (*(char *)(iVar3 + 7) != (char)uStack_14)) && (param_1[0x15] == '\0')) {
    if (iVar3 != 0) {
      func_0x08219328();
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
    }
    if (*param_1 == '\x02') {
      iVar3 = *(int *)(_DAT_08247038 + 0x104);
LAB_08246ef8:
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x38) = iVar3;
        goto LAB_08246efe;
      }
    }
    else if (*param_1 == '\x03') {
      iVar3 = *(int *)(_DAT_08247038 + 0xc0);
      goto LAB_08246ef8;
    }
    iVar3 = func_0x082192bc((char)uStack_14,*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x10) = _DAT_08247048;
      *(undefined1 *)(*(int *)(param_1 + 0x38) + 0xc) = uStack_14._1_1_;
      goto LAB_08246efe;
    }
    cVar1 = param_1[0x36];
    cVar2 = *param_1;
    uVar4 = _DAT_08247044;
LAB_08246f70:
    func_0x082eeb08(_DAT_08247040,uVar4,2,cVar2,(int)cVar1);
  }
  else {
LAB_08246efe:
    if ((*(int *)(param_1 + 0x3c) == 0) && (param_1[0x15] == '\x02')) {
      if (*param_1 == '\x02') {
        iVar3 = *(int *)(_DAT_08247038 + 0x108);
LAB_08246f14:
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x3c) = iVar3;
          goto LAB_08246f1a;
        }
      }
      else if (*param_1 == '\x03') {
        iVar3 = *(int *)(_DAT_08247038 + 0xc4);
        goto LAB_08246f14;
      }
      uStack_6c = uStack_14;
      uStack_6a = uStack_11;
      uStack_68 = *(undefined4 *)(param_1 + 0x1c);
      uStack_60 = _DAT_0824704c;
      pcStack_64 = param_1;
      iVar3 = func_0x08233544(&uStack_6c);
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 == 0) {
        func_0x082eeb08(_DAT_08247040,_DAT_08247050,2,*param_1,(int)param_1[0x36]);
      }
    }
LAB_08246f1a:
    if ((*(int *)(param_1 + 0x40) == 0) && (param_1[0x15] == '\x01')) {
      if (*param_1 == '\x02') {
        iVar3 = *(int *)(_DAT_08247038 + 0x10c);
LAB_08246f30:
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x40) = iVar3;
          goto LAB_08246f36;
        }
      }
      else if (*param_1 == '\x03') {
        iVar3 = *(int *)(_DAT_08247038 + 200);
        goto LAB_08246f30;
      }
      iVar3 = func_0x082190d8(uStack_12);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0) {
        cVar1 = param_1[0x36];
        cVar2 = *param_1;
        uVar4 = _DAT_08247054;
        goto LAB_08246f70;
      }
      *(undefined1 *)(iVar3 + 8) = uStack_12;
      *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x12) = uStack_14._1_1_;
      uVar4 = _DAT_08247058;
      iVar3 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) = uVar4;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24) = _DAT_0824705c;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28) = _DAT_08247060;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c) = _DAT_08247064;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x30) = _DAT_08247068;
      func_0x08219250(*(undefined4 *)(param_1 + 0x40),1);
    }
LAB_08246f36:
    func_0x082ee038(_DAT_08247040,_DAT_0824703c,2,*param_1,(int)param_1[0x36]);
  }
  return;
}


/* Literal references and instructions */
08246e98 push {r4,r5,lr}
08246e9a mov r4,r0
08246e9c sub sp,#0x6c
08246e9e cmp r0,#0x0
08246ea0 beq 0x08246f76
08246ea2 ldr r3,[r0,#0x4]
08246ea4 cmp r3,#0x0
08246ea6 beq 0x08246f76
08246ea8 movs r2,#0x4c
08246eaa movs r1,#0x0
08246eac add r0,sp,#0x1c
08246eae bl 0x082528d0
08246eb2 add r1,sp,#0x1c
08246eb4 ldr r3,[r4,#0x4]
08246eb6 ldrb r0,[r4,#0x0]
08246eb8 blx r3
08246eba ldr r3,[0x08247034]
literal 08247034 = 8246e45
08246ebc add r0,sp,#0x1c
08246ebe strd r3,r4,[sp,#0x5c]
08246ec2 bl 0x08227f60
08246ec6 movs r1,#0x1
08246ec8 strb.w r0,[r4,#0x36]
08246ecc mov r0,r4
08246ece bl 0x08246be4
08246ed2 ldr r0,[r4,#0x38]
08246ed4 cbz r0,0x08246ee0
08246ed6 ldrb r2,[r0,#0x7]
08246ed8 ldrb.w r3,[sp,#0x64]
08246edc cmp r2,r3
08246ede beq 0x08246efe
08246ee0 ldrb r5,[r4,#0x15]
08246ee2 cbnz r5,0x08246efe
08246ee4 cbz r0,0x08246eec
08246ee6 bl 0x08219328
08246eea str r5,[r4,#0x38]
08246eec ldrb r3,[r4,#0x0]
08246eee cmp r3,#0x2
08246ef0 bne 0x08246f4a
08246ef2 ldr r3,[0x08247038]
literal 08247038 = 42479b8
08246ef4 ldr.w r3,[r3,#0x104]
08246ef8 cmp r3,#0x0
08246efa beq 0x08246f56
08246efc str r3,[r4,#0x38]
08246efe ldr r3,[r4,#0x3c]
08246f00 cbnz r3,0x08246f1a
08246f02 ldrb r3,[r4,#0x15]
08246f04 cmp r3,#0x2
08246f06 bne 0x08246f1a
08246f08 ldrb r3,[r4,#0x0]
08246f0a cmp r3,#0x2
08246f0c bne 0x08246f88
08246f0e ldr r3,[0x08247038]
literal 08247038 = 42479b8
08246f10 ldr.w r3,[r3,#0x108]
08246f14 cmp r3,#0x0
08246f16 beq 0x08246f94
08246f18 str r3,[r4,#0x3c]
08246f1a ldr r3,[r4,#0x40]
08246f1c cbnz r3,0x08246f36
08246f1e ldrb r3,[r4,#0x15]
08246f20 cmp r3,#0x1
08246f22 bne 0x08246f36
08246f24 ldrb r3,[r4,#0x0]
08246f26 cmp r3,#0x2
08246f28 bne 0x08246fce
08246f2a ldr r3,[0x08247038]
literal 08247038 = 42479b8
08246f2c ldr.w r3,[r3,#0x10c]
08246f30 cmp r3,#0x0
08246f32 beq 0x08246fda
08246f34 str r3,[r4,#0x40]
08246f36 ldrsb.w r3,[r4,#0x36]
08246f3a movs r2,#0x2
08246f3c str r3,[sp,#0x0]
08246f3e ldrb r3,[r4,#0x0]
08246f40 ldr r1,[0x0824703c]
literal 0824703c = 60de097
08246f42 ldr r0,[0x08247040]
literal 08247040 = 83171ec
08246f44 bl 0x082ee038
08246f48 b 0x08246f76
08246f4a cmp r3,#0x3
08246f4c bne 0x08246f56
08246f4e ldr r3,[0x08247038]
literal 08247038 = 42479b8
08246f50 ldr.w r3,[r3,#0xc0]
08246f54 b 0x08246ef8
08246f56 ldr r1,[r4,#0x1c]
08246f58 ldrb.w r0,[sp,#0x64]
08246f5c bl 0x082192bc
08246f60 str r0,[r4,#0x38]
08246f62 cbnz r0,0x08246f7a
08246f64 movs r2,#0x2
08246f66 ldrsb.w r3,[r4,#0x36]
08246f6a ldr r1,[0x08247044]
literal 08247044 = 60ddf88
08246f6c str r3,[sp,#0x0]
08246f6e ldrb r3,[r4,#0x0]
08246f70 ldr r0,[0x08247040]
literal 08247040 = 83171ec
08246f72 bl 0x082eeb08
08246f76 add sp,#0x6c
08246f78 pop {r4,r5,pc}
08246f7a ldr r3,[0x08247048]
literal 08247048 = 8246ce9
08246f7c str r3,[r0,#0x10]
08246f7e ldr r3,[r4,#0x38]
08246f80 ldrb.w r2,[sp,#0x65]
08246f84 strb r2,[r3,#0xc]
08246f86 b 0x08246efe
08246f88 cmp r3,#0x3
08246f8a bne 0x08246f94
08246f8c ldr r3,[0x08247038]
literal 08247038 = 42479b8
08246f8e ldr.w r3,[r3,#0xc4]
08246f92 b 0x08246f14
08246f94 ldrh.w r3,[sp,#0x64]
08246f98 add r0,sp,#0xc
08246f9a strh.w r3,[sp,#0xc]
08246f9e ldrb.w r3,[sp,#0x67]
08246fa2 strb.w r3,[sp,#0xe]
08246fa6 ldr r3,[r4,#0x1c]
08246fa8 strd r3,r4,[sp,#0x10]
08246fac ldr r3,[0x0824704c]
literal 0824704c = 8246e15
08246fae str r3,[sp,#0x18]
08246fb0 bl 0x08233544
08246fb4 str r0,[r4,#0x3c]
08246fb6 cmp r0,#0x0
08246fb8 bne 0x08246f1a
08246fba ldrsb.w r3,[r4,#0x36]
08246fbe movs r2,#0x2
08246fc0 str r3,[sp,#0x0]
08246fc2 ldrb r3,[r4,#0x0]
08246fc4 ldr r1,[0x08247050]
literal 08247050 = 60ddfe4
08246fc6 ldr r0,[0x08247040]
literal 08247040 = 83171ec
08246fc8 bl 0x082eeb08
08246fcc b 0x08246f1a
08246fce cmp r3,#0x3
08246fd0 bne 0x08246fda
08246fd2 ldr r3,[0x08247038]
literal 08247038 = 42479b8
08246fd4 ldr.w r3,[r3,#0xc8]
08246fd8 b 0x08246f30
08246fda ldrb.w r0,[sp,#0x66]
08246fde bl 0x082190d8
08246fe2 str r0,[r4,#0x40]
08246fe4 cbnz r0,0x08246ff4
08246fe6 ldrsb.w r3,[r4,#0x36]
08246fea movs r2,#0x2
08246fec str r3,[sp,#0x0]
08246fee ldrb r3,[r4,#0x0]
08246ff0 ldr r1,[0x08247054]
literal 08247054 = 60de03d
08246ff2 b 0x08246f70
08246ff4 ldrb.w r3,[sp,#0x66]
08246ff8 movs r1,#0x0
08246ffa strb r3,[r0,#0x8]
08246ffc movs r0,#0x0
08246ffe ldr r3,[r4,#0x40]
08247000 ldrb.w r2,[sp,#0x65]
08247004 strb r2,[r3,#0x12]
08247006 ldr r3,[r4,#0x40]
08247008 ldr r2,[0x08247058]
literal 08247058 = 8246ce1
0824700a strd r0,r1,[r3,#0x18]
0824700e ldr r3,[r4,#0x40]
08247010 movs r1,#0x1
08247012 str r2,[r3,#0x20]
08247014 ldr r3,[r4,#0x40]
08247016 ldr r2,[0x0824705c]
literal 0824705c = 8246cdb
08247018 str r2,[r3,#0x24]
0824701a ldr r3,[r4,#0x40]
0824701c ldr r2,[0x08247060]
literal 08247060 = 8246cd5
0824701e str r2,[r3,#0x28]
08247020 ldr r3,[r4,#0x40]
08247022 ldr r2,[0x08247064]
literal 08247064 = 8246d39
08247024 str r2,[r3,#0x2c]
08247026 ldr r3,[r4,#0x40]
08247028 ldr r2,[0x08247068]
literal 08247068 = 8246cb1
0824702a str r2,[r3,#0x30]
0824702c ldr r0,[r4,#0x40]
0824702e bl 0x08219250
08247032 b 0x08246f36

/* Function at 0824706c */

/* WARNING: Possible PIC construction at 0x082470f2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x082470f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * route_candidate_0824706c
                 (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  byte *unaff_r4;
  int iVar8;
  undefined4 unaff_r5;
  undefined4 *puVar9;
  undefined4 unaff_lr;
  byte abStack_70 [96];
  undefined4 uStack_10;
  
  puVar9 = &uStack_10;
  pbVar4 = param_1;
  if (param_1 != (byte *)0x0) {
    uStack_10 = param_4;
    if (param_1[0x15] == 0) {
      route_candidate_08246be4(param_1,3);
      pbVar4 = (byte *)func_0x0821943c(*(undefined4 *)(param_1 + 0x38));
    }
    if (param_1[0x15] == 1) {
      bVar3 = true;
      if (*param_1 - 2 < 2) {
        bVar3 = false;
        if (**(int **)(param_1 + 0x40) != 0x3000000) {
          bVar3 = true;
        }
      }
      route_candidate_08246be4(param_1,3);
      if (!bVar3) {
        bVar2 = param_1[0x36];
        unaff_lr = 0x82470f7;
        unaff_r5 = 0;
        goto SUB_0822803c;
      }
      pbVar4 = (byte *)func_0x08219250(*(undefined4 *)(param_1 + 0x40),2);
    }
    if (param_1[0x15] == 2) {
      route_candidate_08246be4(param_1,3);
      uVar5 = func_0x082335ac(*(undefined4 *)(param_1 + 0x3c),0);
      pbVar4 = (byte *)func_0x082ee038(_DAT_08247100,_DAT_082470fc,1,uVar5);
    }
    if (param_1[0x15] == 0xff) {
      route_candidate_08246be4(param_1,3);
      bVar2 = param_1[0x36];
      param_1 = unaff_r4;
      puVar9 = (undefined4 *)register0x00000054;
SUB_0822803c:
      puVar9[-1] = unaff_lr;
      puVar9[-2] = unaff_r5;
      puVar9[-3] = param_1;
      func_0x082528d0(puVar9 + -0x18,0,0x50);
      *(undefined1 *)(puVar9 + -0x18) = 0xc;
      iVar6 = (char)bVar2 * 0x54;
      iVar8 = _DAT_082280b4 + iVar6;
      if (*(char *)(_DAT_082280b4 + iVar6) == '\x01') {
        *(undefined1 *)(_DAT_082280b4 + iVar6) = 2;
        bVar2 = *(byte *)(iVar8 + 0xc);
        *(byte *)(puVar9 + -0x17) = bVar2;
        pcVar7 = *(code **)((uint)bVar2 * 0x14 + _DAT_082280b8 + 8);
        cVar1 = *(char *)(iVar8 + 1);
        *(undefined1 *)((int)puVar9 + -0x5b) = *(undefined1 *)(iVar8 + 0xd);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)();
        }
        pbVar4 = (byte *)func_0x0821f5f4((int)cVar1,puVar9 + -0x18);
        puVar9[-0x1a] = pbVar4;
        func_0x082ee038(_DAT_082280c0,_DAT_082280bc,2,(int)cVar1);
      }
      else {
        func_0x082eeb08(_DAT_082280c0,_DAT_082280c4,1);
        pbVar4 = (byte *)0xffffffff;
      }
      return pbVar4;
    }
  }
  return pbVar4;
}


/* Literal references and instructions */
0822803c push {r4,r5,lr}
0822803e sub sp,#0x5c
08228040 mov r5,r0
08228042 movs r2,#0x50
08228044 movs r1,#0x0
08228046 add r0,sp,#0x8
08228048 bl 0x082528d0
0822804c movs r3,#0xc
0822804e strb.w r3,[sp,#0x8]
08228052 movs r3,#0x54
08228054 mul r2,r3,r5
08228058 ldr r4,[0x082280b4]
literal 082280b4 = 423f72c
0822805a ldrb r3,[r4,r2]
0822805c adds r5,r4,r2
0822805e cmp r3,#0x1
08228060 bne 0x0822809c
08228062 movs r3,#0x2
08228064 strb r3,[r4,r2]
08228066 movs r2,#0x14
08228068 ldrb r1,[r5,#0xc]
0822806a ldr r3,[0x082280b8]
literal 082280b8 = 82fc22c
0822806c strb.w r1,[sp,#0xc]
08228070 mla r1,r2,r1,r3
08228074 ldrb r0,[r5,#0xd]
08228076 ldr r3,[r1,#0x8]
08228078 ldrsb.w r5,[r5,#0x1]
0822807c strb.w r0,[sp,#0xd]
08228080 cbnz r3,0x082280b0
08228082 add r1,sp,#0x8
08228084 mov r0,r5
08228086 bl 0x0821f5f4
0822808a mov r3,r5
0822808c mov r4,r0
0822808e str r0,[sp,#0x0]
08228090 movs r2,#0x2
08228092 ldr r1,[0x082280bc]
literal 082280bc = 60b8810
08228094 ldr r0,[0x082280c0]
literal 082280c0 = 8317400
08228096 bl 0x082ee038
0822809a b 0x082280aa
0822809c movs r2,#0x1
0822809e ldr r1,[0x082280c4]
literal 082280c4 = 60b87bc
082280a0 ldr r0,[0x082280c0]
literal 082280c0 = 8317400
082280a2 bl 0x082eeb08
082280a6 mov.w r4,#0xffffffff
082280aa mov r0,r4
082280ac add sp,#0x5c
082280ae pop {r4,r5,pc}
082280b0 blx r3
082280b2 b 0x08228082
0824706c push {r3,r4,r5,lr}
0824706e mov r4,r0
08247070 cmp r0,#0x0
08247072 beq 0x082470f8
08247074 ldrb r3,[r0,#0x15]
08247076 cbnz r3,0x08247084
08247078 movs r1,#0x3
0824707a bl 0x08246be4
0824707e ldr r0,[r4,#0x38]
08247080 bl 0x0821943c
08247084 ldrb r5,[r4,#0x15]
08247086 cmp r5,#0x1
08247088 bne 0x082470b0
0824708a ldrb r3,[r4,#0x0]
0824708c subs r3,#0x2
0824708e cmp r3,#0x1
08247090 bhi 0x0824709e
08247092 ldr r3,[r4,#0x40]
08247094 ldr r5,[r3,#0x0]
08247096 subs.w r5,r5,#0x3000000
0824709a it ne
0824709c mov.ne r5,#0x1
0824709e movs r1,#0x3
082470a0 mov r0,r4
082470a2 bl 0x08246be4
082470a6 cbz r5,0x082470ee
082470a8 movs r1,#0x2
082470aa ldr r0,[r4,#0x40]
082470ac bl 0x08219250
082470b0 ldrb r3,[r4,#0x15]
082470b2 cmp r3,#0x2
082470b4 bne 0x082470d4
082470b6 movs r1,#0x3
082470b8 mov r0,r4
082470ba bl 0x08246be4
082470be movs r2,#0x0
082470c0 ldr r0,[r4,#0x3c]
082470c2 mov r1,r2
082470c4 bl 0x082335ac
082470c8 movs r2,#0x1
082470ca mov r3,r0
082470cc ldr r1,[0x082470fc]
literal 082470fc = 60de0de
082470ce ldr r0,[0x08247100]
literal 08247100 = 83171ec
082470d0 bl 0x082ee038
082470d4 ldrb r3,[r4,#0x15]
082470d6 cmp r3,#0xff
082470d8 bne 0x082470f8
082470da mov r0,r4
082470dc movs r1,#0x3
082470de bl 0x08246be4
082470e2 ldrsb.w r0,[r4,#0x36]
082470e6 pop.w {r3,r4,r5,lr}
082470ea b.w 0x0822803c
082470ee ldrsb.w r0,[r4,#0x36]
082470f2 bl 0x0822803c
082470f6 b 0x082470b0
082470f8 pop {r3,r4,r5,pc}

/* Function at 08247104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int route_candidate_08247104(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 extraout_r2;
  code *pcVar4;
  undefined4 unaff_r4;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x15) == '\0') {
      iVar2 = func_0x082193f4(*(undefined4 *)(param_1 + 0x38));
    }
    if (*(char *)(param_1 + 0x15) == '\x01') {
      iVar2 = func_0x08219208(*(undefined4 *)(param_1 + 0x40));
    }
    if (*(char *)(param_1 + 0x15) == '\x02') {
      iVar2 = func_0x082335ac(*(undefined4 *)(param_1 + 0x3c),3,0);
    }
    if (*(char *)(param_1 + 0x24) != '\x02') {
      route_candidate_08246be4(param_1,5);
      iVar2 = *(char *)(param_1 + 0x36) * 0x54;
      iVar3 = _DAT_08228120 + iVar2;
      if (*(char *)(_DAT_08228120 + iVar2) == '\x03') {
        *(undefined1 *)(_DAT_08228120 + iVar2) = 4;
        cVar1 = *(char *)(iVar3 + 1);
        pcVar4 = *(code **)((uint)*(byte *)(iVar3 + 0xc) * 0x14 + _DAT_08228124 + 0x10);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(*(undefined1 *)(iVar3 + 0xd));
        }
        iVar2 = func_0x0821f6c8((int)cVar1);
        func_0x082ee038(_DAT_0822812c,_DAT_08228128,2,(int)cVar1,iVar2);
      }
      else {
        func_0x082eeb08(_DAT_0822812c,_DAT_08228130,1,*(char *)(_DAT_08228120 + iVar2),
                        (int)*(char *)(param_1 + 0x36),extraout_r1,extraout_r2,unaff_r4);
        iVar2 = -1;
      }
      return iVar2;
    }
  }
  return iVar2;
}


/* Literal references and instructions */
082280c8 movs r3,#0x54
082280ca push {r0,r1,r2,r4,r5,lr}
082280cc muls r0,r3
082280ce ldr r1,[0x08228120]
literal 08228120 = 423f72c
082280d0 ldrb r3,[r1,r0]
082280d2 adds r2,r1,r0
082280d4 cmp r3,#0x3
082280d6 bne 0x08228106
082280d8 movs r3,#0x4
082280da strb r3,[r1,r0]
082280dc movs r0,#0x14
082280de ldr r3,[0x08228124]
literal 08228124 = 82fc22c
082280e0 ldrb r1,[r2,#0xc]
082280e2 ldrsb.w r5,[r2,#0x1]
082280e6 mla r1,r0,r1,r3
082280ea ldr r3,[r1,#0x10]
082280ec cbnz r3,0x0822811a
082280ee mov r0,r5
082280f0 bl 0x0821f6c8
082280f4 mov r3,r5
082280f6 mov r4,r0
082280f8 str r0,[sp,#0x0]
082280fa movs r2,#0x2
082280fc ldr r1,[0x08228128]
literal 08228128 = 60b88d3
082280fe ldr r0,[0x0822812c]
literal 0822812c = 8317400
08228100 bl 0x082ee038
08228104 b 0x08228114
08228106 movs r2,#0x1
08228108 ldr r1,[0x08228130]
literal 08228130 = 60b8880
0822810a ldr r0,[0x0822812c]
literal 0822812c = 8317400
0822810c bl 0x082eeb08
08228110 mov.w r4,#0xffffffff
08228114 mov r0,r4
08228116 add sp,#0xc
08228118 pop {r4,r5,pc}
0822811a ldrb r0,[r2,#0xd]
0822811c blx r3
0822811e b 0x082280ee
08247104 push {r4,lr}
08247106 mov r4,r0
08247108 cbz r0,0x0824714c
0824710a ldrb r3,[r0,#0x15]
0824710c cbnz r3,0x08247114
0824710e ldr r0,[r0,#0x38]
08247110 bl 0x082193f4
08247114 ldrb r3,[r4,#0x15]
08247116 cmp r3,#0x1
08247118 bne 0x08247120
0824711a ldr r0,[r4,#0x40]
0824711c bl 0x08219208
08247120 ldrb r3,[r4,#0x15]
08247122 cmp r3,#0x2
08247124 bne 0x08247130
08247126 movs r2,#0x0
08247128 movs r1,#0x3
0824712a ldr r0,[r4,#0x3c]
0824712c bl 0x082335ac
08247130 ldrb.w r3,[r4,#0x24]
08247134 cmp r3,#0x2
08247136 beq 0x0824714c
08247138 mov r0,r4
0824713a movs r1,#0x5
0824713c bl 0x08246be4
08247140 ldrsb.w r0,[r4,#0x36]
08247144 pop.w {r4,lr}
08247148 b.w 0x082280c8
0824714c pop {r4,pc}

/* Function at 0824714e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_0824714e(undefined1 *param_1)

{
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  
  if (param_1 != (undefined1 *)0x0) {
    func_0x08228134((int)(char)param_1[0x36]);
    func_0x082ee038(_DAT_08246c0c,_DAT_08246c08,3,*param_1,param_1[0x24],0,extraout_r2,unaff_r4);
    param_1[0x24] = 0;
    return;
  }
  return;
}


/* Literal references and instructions */
0824714e push {r4,lr}
08247150 mov r4,r0
08247152 cbz r0,0x08247168
08247154 ldrsb.w r0,[r0,#0x36]
08247158 bl 0x08228134
0824715c mov r0,r4
0824715e pop.w {r4,lr}
08247162 movs r1,#0x0
08247164 b.w 0x08246be4
08247168 pop {r4,pc}
