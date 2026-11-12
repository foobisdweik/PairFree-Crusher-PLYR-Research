
/Applications/Runner.app/Wrapper/Runner.app/Frameworks/AirohaUnifyLibrary.framework/AirohaUnifyLibrary:	file format mach-o arm64

Disassembly of section __TEXT,__text:

000000000037d294 <_block_destroy_helper.82>:
  38c564:      	stp	x28, x27, [sp, #-0x60]!
  38c568:      	stp	x26, x25, [sp, #0x10]
  38c56c:      	stp	x24, x23, [sp, #0x20]
  38c570:      	stp	x22, x21, [sp, #0x30]
  38c574:      	stp	x20, x19, [sp, #0x40]
  38c578:      	stp	x29, x30, [sp, #0x50]
  38c57c:      	add	x29, sp, #0x50
  38c580:      	sub	sp, sp, #0x230
  38c584:      	mov	x19, sp
  38c588:      	mov	x21, x20
  38c58c:      	mov	x20, x2
  38c590:      	mov	x22, x1
  38c594:      	mov	x23, x0
  38c598:      	adrp	x8, 0x820000 <dyld_stub_binder+0x820000>
  38c59c:      	ldr	x8, [x8, #0xe18]
  38c5a0:      	ldr	x8, [x8]
  38c5a4:      	stur	x8, [x29, #-0x60]
  38c5a8:      	mov	x0, #0x0                ; =0
  38c5ac:      	bl	0x701284 <dyld_stub_binder+0x701284>
  38c5b0:      	mov	x28, x0
  38c5b4:      	ldur	x8, [x0, #-0x8]
  38c5b8:      	str	x8, [x19, #0x68]
  38c5bc:      	ldr	x8, [x8, #0x40]
  38c5c0:      	mov	x9, sp
  38c5c4:      	add	x8, x8, #0xf
  38c5c8:      	and	x8, x8, #0xfffffffffffffff0
  38c5cc:      	sub	x8, x9, x8
  38c5d0:      	str	x8, [x19, #0x60]
  38c5d4:      	mov	sp, x8
  38c5d8:      	mov	x0, #0x0                ; =0
  38c5dc:      	bl	0x7012a8 <dyld_stub_binder+0x7012a8>
  38c5e0:      	ldur	x8, [x0, #-0x8]
  38c5e4:      	stp	x8, x0, [x19, #0x50]
  38c5e8:      	ldr	x8, [x8, #0x40]
  38c5ec:      	mov	x9, sp
  38c5f0:      	add	x8, x8, #0xf
  38c5f4:      	and	x8, x8, #0xfffffffffffffff0
  38c5f8:      	sub	x8, x9, x8
  38c5fc:      	str	x8, [x19, #0x48]
  38c600:      	mov	sp, x8
  38c604:      	adrp	x8, 0x91a000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaSpecificModeSetting+0x10>
  38c608:      	ldr	x8, [x8, #0x848]
  38c60c:      	ldr	x24, [x21, x8]
  38c610:      	str	x23, [x21, x8]
  38c614:      	mov	x0, x23
  38c618:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38c61c:      	str	x0, [x19, #0x78]
  38c620:      	mov	x0, x24
  38c624:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c628:      	adrp	x8, 0x91a000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaSpecificModeSetting+0x10>
  38c62c:      	ldr	x27, [x8, #0x8b0]
  38c630:      	strb	w22, [x21, x27]
  38c634:      	adrp	x2, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38c638:      	add	x2, x2, #0x58
  38c63c:      	adrp	x3, 0x705000 <___swift_reflection_version+0xd20>
  38c640:      	add	x3, x3, #0x700
  38c644:      	add	x1, x19, #0x90
  38c648:      	mov	x0, x20
  38c64c:      	bl	0x17294 <___swift_allocate_boxed_opaque_existential_1Tm+0x3c>
  38c650:      	adrp	x8, 0x91a000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaSpecificModeSetting+0x10>
  38c654:      	ldr	x25, [x8, #0x8c0]
  38c658:      	add	x0, x21, x25
  38c65c:      	sub	x1, x29, #0xa8
  38c660:      	mov	w2, #0x21               ; =33
  38c664:      	mov	x3, #0x0                ; =0
  38c668:      	bl	0x7021b4 <dyld_stub_binder+0x7021b4>
  38c66c:      	add	x0, x19, #0x90
  38c670:      	add	x1, x21, x25
  38c674:      	bl	0x21e78 <_block_destroy_helper.71+0x3df4>
  38c678:      	sub	x0, x29, #0xa8
  38c67c:      	bl	0x702268 <dyld_stub_binder+0x702268>
  38c680:      	adrp	x8, 0x91a000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaSpecificModeSetting+0x10>
  38c684:      	ldr	x22, [x8, #0x8d0]
  38c688:      	add	x0, x21, x22
  38c68c:      	bl	0x702478 <dyld_stub_binder+0x702478>
  38c690:      	mov	x20, x0
  38c694:      	adrp	x8, 0x912000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary23AirohaWindDetectionInfo+0x18>
  38c698:      	add	x8, x8, #0xb00
  38c69c:      	ldr	x8, [x8]
  38c6a0:      	ldr	x0, [x0, x8]
  38c6a4:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38c6a8:      	mov	x26, x0
  38c6ac:      	mov	x0, x20
  38c6b0:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c6b4:      	ldrb	w8, [x21, x27]
  38c6b8:      	cbnz	w8, 0x38c6f0 <_block_destroy_helper.82+0xf45c>
  38c6bc:      	add	x0, x21, x22
  38c6c0:      	bl	0x702478 <dyld_stub_binder+0x702478>
  38c6c4:      	mov	x20, x0
  38c6c8:      	mov	x0, x26
  38c6cc:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c6d0:      	adrp	x8, 0x912000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary23AirohaWindDetectionInfo+0x18>
  38c6d4:      	add	x8, x8, #0xaf8
  38c6d8:      	ldr	x8, [x8]
  38c6dc:      	ldr	x0, [x20, x8]
  38c6e0:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38c6e4:      	mov	x26, x0
  38c6e8:      	mov	x0, x20
  38c6ec:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c6f0:      	adrp	x8, 0x917000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary12TxPacketData+0x2e0>
  38c6f4:      	add	x8, x8, #0x6e8
  38c6f8:      	ldr	x8, [x8]
  38c6fc:      	ldr	x8, [x26, x8]
  38c700:      	lsr	x9, x8, #62
  38c704:      	cbnz	x9, 0x38ce80 <_block_destroy_helper.82+0xfbec>
  38c708:      	and	x8, x8, #0xfffffffffffff8
  38c70c:      	ldr	x0, [x8, #0x10]
  38c710:      	cbz	x0, 0x38ce94 <_block_destroy_helper.82+0xfc00>
  38c714:      	str	x28, [x19, #0x40]
  38c718:      	str	x26, [x19, #0x70]
  38c71c:      	add	x0, x21, x22
  38c720:      	bl	0x702478 <dyld_stub_binder+0x702478>
  38c724:      	mov	x23, x0
  38c728:      	adrp	x8, 0x912000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary23AirohaWindDetectionInfo+0x18>
  38c72c:      	add	x8, x8, #0xa18
  38c730:      	ldr	x25, [x8]
  38c734:      	add	x24, x19, #0x90
  38c738:      	add	x0, x0, x25
  38c73c:      	add	x1, x19, #0x90
  38c740:      	mov	w2, #0x21               ; =33
  38c744:      	mov	x3, #0x0                ; =0
  38c748:      	bl	0x7021b4 <dyld_stub_binder+0x7021b4>
  38c74c:      	ldr	x0, [x23, x25]
  38c750:      	bl	0x7023a0 <dyld_stub_binder+0x7023a0>
  38c754:      	mov	x2, x0
  38c758:      	ldr	x8, [x23, x25]
  38c75c:      	stur	x8, [x29, #-0xa8]
  38c760:      	mov	x8, #-0x8000000000000000 ; =-9223372036854775808
  38c764:      	str	x8, [x23, x25]
  38c768:      	sub	x20, x29, #0xa8
  38c76c:      	mov	w0, #0x6                ; =6
  38c770:      	mov	w1, #0x26               ; =38
  38c774:      	bl	0x10c0c <__ZN5swift19MutexPlatformHelper7destroyER16os_unfair_lock_s+0x374>
  38c778:      	ldur	x8, [x29, #-0xa8]
  38c77c:      	str	x8, [x23, x25]
  38c780:      	add	x0, x19, #0x90
  38c784:      	bl	0x702268 <dyld_stub_binder+0x702268>
  38c788:      	mov	x0, x23
  38c78c:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c790:      	mov	x0, #0x0                ; =0
  38c794:      	bl	0x26a814 <_block_destroy_helper.32+0xe4fc>
  38c798:      	bl	0x701fd4 <dyld_stub_binder+0x701fd4>
  38c79c:      	adrp	x8, 0x886000 <__IVARS__TtC18AirohaUnifyLibrary19AdaptiveAncSettings+0x4e0>
  38c7a0:      	ldr	x1, [x8, #0x518]
  38c7a4:      	bl	0x702004 <dyld_stub_binder+0x702004>
  38c7a8:      	mov	x28, x0
  38c7ac:      	mov	w0, #0x26               ; =38
  38c7b0:      	mov	x20, x28
  38c7b4:      	bl	0x26a5fc <_block_destroy_helper.32+0xe2e4>
  38c7b8:      	adrp	x8, 0x8e3000 <__OBJC_$_INSTANCE_METHODS__TtC18AirohaUnifyLibrary21AirohaAncRecordStatus(AirohaUnifyLibrary|AirohaUnifyLibrary1)+0x1c8>
  38c7bc:      	ldr	x8, [x8, #0x5f8]
  38c7c0:      	cmn	x8, #0x1
  38c7c4:      	b.ne	0x38d0e0 <_block_destroy_helper.82+0xfe4c>
  38c7c8:      	mov	w8, #0xf233             ; =62003
  38c7cc:      	strh	w8, [x19, #0x90]
  38c7d0:      	add	x0, x19, #0x90
  38c7d4:      	add	x1, x24, #0x2
  38c7d8:      	bl	0x26c1e0 <_block_destroy_helper.32+0xfec8>
  38c7dc:      	mov	x23, x0
  38c7e0:      	mov	x24, x1
  38c7e4:      	adrp	x8, 0x914000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaCoarseUserEQSetting+0x58>
  38c7e8:      	add	x8, x8, #0xeb0
  38c7ec:      	ldr	x26, [x8]
  38c7f0:      	add	x0, x28, x26
  38c7f4:      	add	x1, x19, #0x90
  38c7f8:      	mov	w2, #0x21               ; =33
  38c7fc:      	mov	x3, #0x0                ; =0
  38c800:      	bl	0x7021b4 <dyld_stub_binder+0x7021b4>
  38c804:      	mov	x0, x23
  38c808:      	mov	x1, x24
  38c80c:      	bl	0xaeec <___swift_instantiateConcreteTypeFromMangledNameV2+0x6298>
  38c810:      	mov	x2, #0x766e             ; =30318
  38c814:      	movk	x2, #0x656b, lsl #16
  38c818:      	movk	x2, #0x4979, lsl #32
  38c81c:      	movk	x2, #0x44, lsl #48
  38c820:      	sub	x8, x29, #0xa8
  38c824:      	add	x20, x28, x26
  38c828:      	mov	x0, x23
  38c82c:      	mov	x1, x24
  38c830:      	mov	x3, #-0x1900000000000000 ; =-1801439850948198400
  38c834:      	bl	0x3c0b4 <___swift_memcpy60_8+0x1acc>
  38c838:      	ldp	x20, x25, [x29, #-0xa8]
  38c83c:      	add	x0, x19, #0x90
  38c840:      	bl	0x702268 <dyld_stub_binder+0x702268>
  38c844:      	mov	x0, x20
  38c848:      	mov	x1, x25
  38c84c:      	bl	0x17230 <___swift_destroy_boxed_opaque_existential_1Tm+0x58>
  38c850:      	mov	x0, x23
  38c854:      	mov	x1, x24
  38c858:      	bl	0xae20 <___swift_instantiateConcreteTypeFromMangledNameV2+0x61cc>
  38c85c:      	adrp	x8, 0x74f000 <dyld_stub_binder+0x74f000>
  38c860:      	add	x8, x8, #0x20
  38c864:      	sub	x20, x8, #0x20
  38c868:      	adrp	x0, 0x909000 <dyld_stub_binder+0x909000>
  38c86c:      	add	x0, x0, #0xf98
  38c870:      	adrp	x1, 0x704000 <_AirohaUnifyLibraryVersionNumber+0x3b0>
  38c874:      	add	x1, x1, #0x370
  38c878:      	bl	0x4c54 <___swift_instantiateConcreteTypeFromMangledNameV2>
  38c87c:      	mov	x23, x0
  38c880:      	adrp	x1, 0x8f1000 <dyld_stub_binder+0x8f1000>
  38c884:      	add	x1, x1, #0x260
  38c888:      	bl	0x702364 <dyld_stub_binder+0x702364>
  38c88c:      	bl	0x7023e8 <dyld_stub_binder+0x7023e8>
  38c890:      	bl	0x3ad564 <___swift_memcpy12_8+0x1e2c>
  38c894:      	mov	x24, x0
  38c898:      	mov	x25, x1
  38c89c:      	add	x0, x28, x26
  38c8a0:      	add	x1, x19, #0x90
  38c8a4:      	mov	w2, #0x21               ; =33
  38c8a8:      	mov	x3, #0x0                ; =0
  38c8ac:      	bl	0x7021b4 <dyld_stub_binder+0x7021b4>
  38c8b0:      	mov	x0, x24
  38c8b4:      	mov	x1, x25
  38c8b8:      	bl	0xaeec <___swift_instantiateConcreteTypeFromMangledNameV2+0x6298>
  38c8bc:      	sub	x8, x29, #0xa8
  38c8c0:      	orr	x3, x20, #0x8000000000000000
  38c8c4:      	add	x20, x28, x26
  38c8c8:      	mov	x0, x24
  38c8cc:      	mov	x1, x25
  38c8d0:      	mov	x2, #0x11               ; =17
  38c8d4:      	movk	x2, #0xd000, lsl #48
  38c8d8:      	bl	0x3c0b4 <___swift_memcpy60_8+0x1acc>
  38c8dc:      	ldp	x20, x26, [x29, #-0xa8]
  38c8e0:      	add	x0, x19, #0x90
  38c8e4:      	bl	0x702268 <dyld_stub_binder+0x702268>
  38c8e8:      	mov	x0, x20
  38c8ec:      	mov	x1, x26
  38c8f0:      	bl	0x17230 <___swift_destroy_boxed_opaque_existential_1Tm+0x58>
  38c8f4:      	mov	x0, x24
  38c8f8:      	mov	x1, x25
  38c8fc:      	bl	0xae20 <___swift_instantiateConcreteTypeFromMangledNameV2+0x61cc>
  38c900:      	mov	w0, #0x0                ; =0
  38c904:      	mov	x20, x28
  38c908:      	bl	0x26a6b0 <_block_destroy_helper.32+0xe398>
  38c90c:      	lsr	x8, x1, #60
  38c910:      	cmp	x8, #0xe
  38c914:      	b.ls	0x38c92c <_block_destroy_helper.82+0xf698>
  38c918:      	mov	x0, x28
  38c91c:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c920:      	ldr	x0, [x19, #0x70]
  38c924:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c928:      	b	0x38d0a8 <_block_destroy_helper.82+0xfe14>
  38c92c:      	mov	x25, x0
  38c930:      	mov	x20, x1
  38c934:      	add	x0, x21, x22
  38c938:      	bl	0x702478 <dyld_stub_binder+0x702478>
  38c93c:      	mov	x24, x0
  38c940:      	adrp	x8, 0x912000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary23AirohaWindDetectionInfo+0x18>
  38c944:      	add	x8, x8, #0xb30
  38c948:      	ldr	x8, [x8]
  38c94c:      	ldr	x26, [x0, x8]
  38c950:      	mov	x0, x26
  38c954:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38c958:      	str	x0, [x19, #0x38]
  38c95c:      	mov	x0, x24
  38c960:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38c964:      	cbz	x26, 0x38d114 <_block_destroy_helper.82+0xfe80>
  38c968:      	mov	x0, #0x0                ; =0
  38c96c:      	bl	0x2b9d44 <_block_destroy_helper.23+0x1648>
  38c970:      	mov	x24, x0
  38c974:      	bl	0x701fd4 <dyld_stub_binder+0x701fd4>
  38c978:      	mov	x26, x0
  38c97c:      	adrp	x8, 0x916000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x18ResetEQSettingTask+0x888>
  38c980:      	add	x8, x8, #0xd08
  38c984:      	ldr	x8, [x8]
  38c988:      	str	xzr, [x0, x8]
  38c98c:      	adrp	x9, 0x916000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x18ResetEQSettingTask+0x888>
  38c990:      	add	x9, x9, #0xd10
  38c994:      	ldr	x9, [x9]
  38c998:      	add	x9, x0, x9
  38c99c:      	stp	xzr, xzr, [x9]
  38c9a0:      	adrp	x10, 0x916000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x18ResetEQSettingTask+0x888>
  38c9a4:      	add	x10, x10, #0xd00
  38c9a8:      	ldr	x10, [x10]
  38c9ac:      	add	x10, x0, x10
  38c9b0:      	stp	x25, x20, [x10]
  38c9b4:      	str	xzr, [x0, x8]
  38c9b8:      	stp	xzr, xzr, [x9]
  38c9bc:      	adrp	x8, 0x916000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x18ResetEQSettingTask+0x888>
  38c9c0:      	add	x8, x8, #0xd18
  38c9c4:      	ldr	x8, [x8]
  38c9c8:      	strb	wzr, [x0, x8]
  38c9cc:      	mov	x0, x25
  38c9d0:      	mov	x1, x20
  38c9d4:      	bl	0xaeec <___swift_instantiateConcreteTypeFromMangledNameV2+0x6298>
  38c9d8:      	stp	x26, x24, [x19, #0x80]
  38c9dc:      	adrp	x8, 0x886000 <__IVARS__TtC18AirohaUnifyLibrary19AdaptiveAncSettings+0x4e0>
  38c9e0:      	ldr	x1, [x8, #0x518]
  38c9e4:      	add	x0, x19, #0x80
  38c9e8:      	bl	0x702010 <dyld_stub_binder+0x702010>
  38c9ec:      	str	x0, [x19, #0x30]
  38c9f0:      	ldrb	w27, [x21, x27]
  38c9f4:      	movi.16b	v0, #0x0
  38c9f8:      	stp	q0, q0, [x29, #-0x80]
  38c9fc:      	bl	0x3927a8 <_block_destroy_helper.82+0x15514>
  38ca00:      	adrp	x8, 0x839000 <_block_descriptor+0x78>
  38ca04:      	add	x8, x8, #0xce0
  38ca08:      	stp	x0, x8, [x29, #-0x90]
  38ca0c:      	stur	x21, [x29, #-0xa8]
  38ca10:      	adrp	x8, 0x912000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary23AirohaWindDetectionInfo+0x18>
  38ca14:      	add	x8, x8, #0x4c0
  38ca18:      	ldr	x8, [x8]
  38ca1c:      	mov	x26, x25
  38ca20:      	ldr	x25, [x19, #0x78]
  38ca24:      	ldr	x24, [x25, x8]
  38ca28:      	cbz	x24, 0x38ce18 <_block_destroy_helper.82+0xfb84>
  38ca2c:      	adrp	x1, 0x8f1000 <dyld_stub_binder+0x8f1000>
  38ca30:      	add	x1, x1, #0x290
  38ca34:      	mov	x0, x23
  38ca38:      	bl	0x702364 <dyld_stub_binder+0x702364>
  38ca3c:      	mov	x23, x0
  38ca40:      	bl	0x7023e8 <dyld_stub_binder+0x7023e8>
  38ca44:      	mov	x0, x21
  38ca48:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38ca4c:      	mov	x0, x24
  38ca50:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38ca54:      	str	x0, [x19, #0x18]
  38ca58:      	mov	x0, x23
  38ca5c:      	bl	0x3ad564 <___swift_memcpy12_8+0x1e2c>
  38ca60:      	mov	x23, x0
  38ca64:      	mov	x24, x1
  38ca68:      	bl	0xf4fc0 <_block_destroy_helper.25+0x1ac4>
  38ca6c:      	str	w0, [x19, #0x14]
  38ca70:      	mov	x0, x23
  38ca74:      	mov	x1, x24
  38ca78:      	bl	0xae20 <___swift_instantiateConcreteTypeFromMangledNameV2+0x61cc>
  38ca7c:      	adrp	x0, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38ca80:      	add	x0, x0, #0x138
  38ca84:      	adrp	x1, 0x705000 <___swift_reflection_version+0xd20>
  38ca88:      	add	x1, x1, #0xe40
  38ca8c:      	bl	0x4c54 <___swift_instantiateConcreteTypeFromMangledNameV2>
  38ca90:      	add	x1, x19, #0x138
  38ca94:      	bl	0x702358 <dyld_stub_binder+0x702358>
  38ca98:      	mov	x24, x0
  38ca9c:      	adrp	x8, 0x704000 <_AirohaUnifyLibraryVersionNumber+0x3b0>
  38caa0:      	ldr	q0, [x8, #0x310]
  38caa4:      	str	q0, [x0, #0x10]
  38caa8:      	mov	x8, #0x6564             ; =25956
  38caac:      	movk	x8, #0x656c, lsl #16
  38cab0:      	movk	x8, #0x6167, lsl #32
  38cab4:      	movk	x8, #0x6574, lsl #48
  38cab8:      	mov	x23, x0
  38cabc:      	str	x8, [x23, #0x20]!
  38cac0:      	mov	x8, #-0x1800000000000000 ; =-1729382256910270464
  38cac4:      	str	x8, [x0, #0x28]
  38cac8:      	str	x26, [x19, #0x28]
  38cacc:      	ldur	x26, [x29, #-0x90]
  38cad0:      	sub	x0, x29, #0xa8
  38cad4:      	mov	x1, x26
  38cad8:      	bl	0x16f28 <___swift_project_boxed_opaque_existential_1Tm>
  38cadc:      	str	x20, [x19, #0x20]
  38cae0:      	mov	x20, x0
  38cae4:      	str	x26, [x24, #0x48]
  38cae8:      	add	x0, x24, #0x30
  38caec:      	bl	0x17258 <___swift_allocate_boxed_opaque_existential_1Tm>
  38caf0:      	ldur	x8, [x26, #-0x8]
  38caf4:      	ldr	x8, [x8, #0x10]
  38caf8:      	mov	x1, x20
  38cafc:      	mov	x2, x26
  38cb00:      	blr	x8
  38cb04:      	mov	x8, #0x746f             ; =29807
  38cb08:      	movk	x8, #0x6568, lsl #16
  38cb0c:      	movk	x8, #0x7372, lsl #32
  38cb10:      	mov	x9, #-0x1a00000000000000 ; =-1873497444986126336
  38cb14:      	stp	x8, x9, [x24, #0x50]
  38cb18:      	adrp	x26, 0x909000 <dyld_stub_binder+0x909000>
  38cb1c:      	add	x26, x26, #0xe78
  38cb20:      	adrp	x22, 0x703000 <dyld_stub_binder+0x703000>
  38cb24:      	add	x22, x22, #0xfa0
  38cb28:      	sub	x0, x29, #0x80
  38cb2c:      	add	x1, x24, #0x60
  38cb30:      	mov	x2, x26
  38cb34:      	mov	x3, x22
  38cb38:      	bl	0x17294 <___swift_allocate_boxed_opaque_existential_1Tm+0x3c>
  38cb3c:      	mov	x0, x24
  38cb40:      	bl	0x514c0 <_objectdestroy.2Tm+0x8b44>
  38cb44:      	mov	x20, x0
  38cb48:      	mov	x0, x24
  38cb4c:      	bl	0x702400 <dyld_stub_binder+0x702400>
  38cb50:      	adrp	x0, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cb54:      	add	x0, x0, #0x140
  38cb58:      	adrp	x1, 0x704000 <_AirohaUnifyLibraryVersionNumber+0x3b0>
  38cb5c:      	add	x1, x1, #0x520
  38cb60:      	bl	0x4c54 <___swift_instantiateConcreteTypeFromMangledNameV2>
  38cb64:      	mov	x2, x0
  38cb68:      	mov	x0, x23
  38cb6c:      	mov	w1, #0x2                ; =2
  38cb70:      	bl	0x702184 <dyld_stub_binder+0x702184>
  38cb74:      	adrp	x0, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cb78:      	add	x0, x0, #0x148
  38cb7c:      	adrp	x1, 0x705000 <___swift_reflection_version+0xd20>
  38cb80:      	add	x1, x1, #0xe50
  38cb84:      	bl	0x4c54 <___swift_instantiateConcreteTypeFromMangledNameV2>
  38cb88:      	stur	x0, [x29, #-0xb0]
  38cb8c:      	stur	x20, [x29, #-0xc8]
  38cb90:      	mov	x0, #0x0                ; =0
  38cb94:      	bl	0xccf9c <_block_destroy_helper.76+0x1a7a4>
  38cb98:      	adrp	x8, 0x826000 <_block_descriptor+0x38>
  38cb9c:      	add	x8, x8, #0xb08
  38cba0:      	stp	x0, x8, [x19, #0x128]
  38cba4:      	ldr	x23, [x19, #0x38]
  38cba8:      	str	x23, [x19, #0x110]
  38cbac:      	mov	x0, #0x0                ; =0
  38cbb0:      	bl	0x1d04c <_block_destroy_helper.39+0x5c44>
  38cbb4:      	mov	x20, x0
  38cbb8:      	mov	x0, x23
  38cbbc:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38cbc0:      	str	x0, [x19, #0x38]
  38cbc4:      	bl	0x701878 <dyld_stub_binder+0x701878>
  38cbc8:      	str	x0, [x19, #0x8]
  38cbcc:      	add	x0, x19, #0x110
  38cbd0:      	add	x1, x19, #0xe8
  38cbd4:      	bl	0x172dc <___swift_allocate_boxed_opaque_existential_1Tm+0x84>
  38cbd8:      	sub	x0, x29, #0xc8
  38cbdc:      	add	x1, x19, #0xc8
  38cbe0:      	mov	x2, x26
  38cbe4:      	mov	x3, x22
  38cbe8:      	bl	0x17294 <___swift_allocate_boxed_opaque_existential_1Tm+0x3c>
  38cbec:      	adrp	x0, 0x839000 <_block_descriptor+0x78>
  38cbf0:      	add	x0, x0, #0xf88
  38cbf4:      	mov	w1, #0x91               ; =145
  38cbf8:      	mov	w2, #0x7                ; =7
  38cbfc:      	bl	0x702160 <dyld_stub_binder+0x702160>
  38cc00:      	mov	x20, x0
  38cc04:      	ldr	x23, [x19, #0x18]
  38cc08:      	stp	x23, x25, [x0, #0x10]
  38cc0c:      	ldr	w8, [x19, #0x14]
  38cc10:      	strh	w8, [x0, #0x20]
  38cc14:      	ldr	x22, [x19, #0x30]
  38cc18:      	str	x22, [x0, #0x28]
  38cc1c:      	strb	w27, [x0, #0x30]
  38cc20:      	add	x0, x19, #0xe8
  38cc24:      	add	x1, x20, #0x38
  38cc28:      	bl	0x16f4c <___swift_project_boxed_opaque_existential_1Tm+0x24>
  38cc2c:      	mov	x8, #0x6572             ; =25970
  38cc30:      	movk	x8, #0x6461, lsl #16
  38cc34:      	movk	x8, #0x564e, lsl #32
  38cc38:      	movk	x8, #0x656b, lsl #48
  38cc3c:      	mov	x9, #0x79               ; =121
  38cc40:      	movk	x9, #0xe900, lsl #48
  38cc44:      	stp	x8, x9, [x20, #0x60]
  38cc48:      	ldur	q0, [x19, #0xc8]
  38cc4c:      	ldur	q1, [x19, #0xd8]
  38cc50:      	stp	q0, q1, [x20, #0x70]
  38cc54:      	strb	wzr, [x20, #0x90]
  38cc58:      	adrp	x8, 0x17000 <___swift_project_boxed_opaque_existential_1Tm+0xd8>
  38cc5c:      	add	x8, x8, #0x3e0
  38cc60:      	stp	x8, x20, [x19, #0xb0]
  38cc64:      	adrp	x8, 0x820000 <dyld_stub_binder+0x820000>
  38cc68:      	ldr	x8, [x8, #0xe08]
  38cc6c:      	str	x8, [x19, #0x90]
  38cc70:      	adrp	x8, 0x704000 <_AirohaUnifyLibraryVersionNumber+0x3b0>
  38cc74:      	ldr	d0, [x8, #0x388]
  38cc78:      	str	d0, [x19, #0x98]
  38cc7c:      	adrp	x8, 0x1e000 <_block_copy_helper.10>
  38cc80:      	add	x8, x8, #0x40
  38cc84:      	adrp	x9, 0x839000 <_block_descriptor+0x78>
  38cc88:      	add	x9, x9, #0xfa0
  38cc8c:      	stp	x8, x9, [x19, #0xa0]
  38cc90:      	add	x0, x19, #0x90
  38cc94:      	bl	0x701d94 <dyld_stub_binder+0x701d94>
  38cc98:      	mov	x24, x0
  38cc9c:      	ldr	x20, [x19, #0xb8]
  38cca0:      	mov	x0, x25
  38cca4:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38cca8:      	mov	x0, x23
  38ccac:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38ccb0:      	str	x0, [x19, #0x78]
  38ccb4:      	mov	x0, x22
  38ccb8:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38ccbc:      	mov	x26, x0
  38ccc0:      	mov	x0, x20
  38ccc4:      	bl	0x7023d0 <dyld_stub_binder+0x7023d0>
  38ccc8:      	ldr	x23, [x19, #0x48]
  38cccc:      	mov	x8, x23
  38ccd0:      	bl	0x70129c <dyld_stub_binder+0x70129c>
  38ccd4:      	adrp	x20, 0x821000 <dyld_stub_binder+0x821000>
  38ccd8:      	ldr	x20, [x20, #0x238]
  38ccdc:      	str	x20, [x19, #0x90]
  38cce0:      	adrp	x0, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cce4:      	add	x0, x0, #0x110
  38cce8:      	adrp	x1, 0x821000 <dyld_stub_binder+0x821000>
  38ccec:      	ldr	x1, [x1, #0x280]
  38ccf0:      	adrp	x2, 0x821000 <dyld_stub_binder+0x821000>
  38ccf4:      	ldr	x2, [x2, #0x290]
  38ccf8:      	bl	0x485c <__text+0x85c>
  38ccfc:      	mov	x25, x0
  38cd00:      	mov	x0, x20
  38cd04:      	bl	0x7023e8 <dyld_stub_binder+0x7023e8>
  38cd08:      	adrp	x0, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cd0c:      	add	x0, x0, #0x118
  38cd10:      	adrp	x1, 0x704000 <_AirohaUnifyLibraryVersionNumber+0x3b0>
  38cd14:      	add	x1, x1, #0x510
  38cd18:      	bl	0x4c54 <___swift_instantiateConcreteTypeFromMangledNameV2>
  38cd1c:      	mov	x20, x0
  38cd20:      	adrp	x0, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cd24:      	add	x0, x0, #0x120
  38cd28:      	adrp	x1, 0x17000 <___swift_project_boxed_opaque_existential_1Tm+0xd8>
  38cd2c:      	add	x1, x1, #0x138
  38cd30:      	adrp	x2, 0x820000 <dyld_stub_binder+0x820000>
  38cd34:      	ldr	x2, [x2, #0xf68]
  38cd38:      	bl	0x485c <__text+0x85c>
  38cd3c:      	mov	x2, x0
  38cd40:      	add	x0, x19, #0x90
  38cd44:      	ldr	x27, [x19, #0x60]
  38cd48:      	mov	x8, x27
  38cd4c:      	mov	x1, x20
  38cd50:      	ldr	x22, [x19, #0x40]
  38cd54:      	mov	x20, x22
  38cd58:      	mov	x3, x22
  38cd5c:      	mov	x4, x25
  38cd60:      	bl	0x7019bc <dyld_stub_binder+0x7019bc>
  38cd64:      	mov	x0, #0x0                ; =0
  38cd68:      	mov	x1, x23
  38cd6c:      	mov	x2, x27
  38cd70:      	mov	x3, x24
  38cd74:      	ldr	x20, [x19, #0x8]
  38cd78:      	bl	0x701890 <dyld_stub_binder+0x701890>
  38cd7c:      	mov	x0, x24
  38cd80:      	bl	0x701da0 <dyld_stub_binder+0x701da0>
  38cd84:      	mov	x0, x26
  38cd88:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cd8c:      	ldr	x0, [x19, #0x70]
  38cd90:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cd94:      	mov	x0, x28
  38cd98:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cd9c:      	ldr	x0, [x19, #0x38]
  38cda0:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cda4:      	ldr	x0, [x19, #0x78]
  38cda8:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cdac:      	mov	x0, x20
  38cdb0:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cdb4:      	ldp	x1, x0, [x19, #0x20]
  38cdb8:      	bl	0x17244 <___swift_destroy_boxed_opaque_existential_1Tm+0x6c>
  38cdbc:      	ldr	x8, [x19, #0x68]
  38cdc0:      	ldr	x8, [x8, #0x8]
  38cdc4:      	mov	x0, x27
  38cdc8:      	mov	x1, x22
  38cdcc:      	blr	x8
  38cdd0:      	ldp	x8, x1, [x19, #0x50]
  38cdd4:      	ldr	x8, [x8, #0x8]
  38cdd8:      	mov	x0, x23
  38cddc:      	blr	x8
  38cde0:      	sub	x0, x29, #0x80
  38cde4:      	adrp	x20, 0x909000 <dyld_stub_binder+0x909000>
  38cde8:      	add	x20, x20, #0xe78
  38cdec:      	mov	x1, x20
  38cdf0:      	adrp	x22, 0x703000 <dyld_stub_binder+0x703000>
  38cdf4:      	add	x22, x22, #0xfa0
  38cdf8:      	mov	x2, x22
  38cdfc:      	bl	0x4ca0 <___swift_instantiateConcreteTypeFromMangledNameV2+0x4c>
  38ce00:      	add	x0, x19, #0x110
  38ce04:      	bl	0x171d8 <___swift_destroy_boxed_opaque_existential_1Tm>
  38ce08:      	sub	x0, x29, #0xc8
  38ce0c:      	mov	x1, x20
  38ce10:      	mov	x2, x22
  38ce14:      	b	0x38ce60 <_block_destroy_helper.82+0xfbcc>
  38ce18:      	mov	x0, x21
  38ce1c:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38ce20:      	ldr	x0, [x19, #0x70]
  38ce24:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38ce28:      	mov	x0, x26
  38ce2c:      	mov	x1, x20
  38ce30:      	bl	0x17244 <___swift_destroy_boxed_opaque_existential_1Tm+0x6c>
  38ce34:      	ldr	x0, [x19, #0x38]
  38ce38:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38ce3c:      	mov	x0, x28
  38ce40:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38ce44:      	ldr	x0, [x19, #0x30]
  38ce48:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38ce4c:      	adrp	x1, 0x909000 <dyld_stub_binder+0x909000>
  38ce50:      	add	x1, x1, #0xe78
  38ce54:      	adrp	x2, 0x703000 <dyld_stub_binder+0x703000>
  38ce58:      	add	x2, x2, #0xfa0
  38ce5c:      	sub	x0, x29, #0x80
  38ce60:      	bl	0x4ca0 <___swift_instantiateConcreteTypeFromMangledNameV2+0x4c>
  38ce64:      	sub	x0, x29, #0xa8
  38ce68:      	bl	0x171d8 <___swift_destroy_boxed_opaque_existential_1Tm>
  38ce6c:      	adrp	x8, 0x91a000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaSpecificModeSetting+0x10>
  38ce70:      	ldr	x8, [x8, #0x880]
  38ce74:      	mov	w9, #0x1                ; =1
  38ce78:      	str	x9, [x21, x8]
  38ce7c:      	b	0x38d0a8 <_block_destroy_helper.82+0xfe14>
  38ce80:      	and	x9, x8, #0xffffffffffffff8
  38ce84:      	cmp	x8, #0x0
  38ce88:      	csel	x0, x9, x8, ge
  38ce8c:      	bl	0x701b0c <dyld_stub_binder+0x701b0c>
  38ce90:      	cbnz	x0, 0x38c714 <_block_destroy_helper.82+0xf480>
  38ce94:      	adrp	x8, 0x8e3000 <__OBJC_$_INSTANCE_METHODS__TtC18AirohaUnifyLibrary21AirohaAncRecordStatus(AirohaUnifyLibrary|AirohaUnifyLibrary1)+0x1c8>
  38ce98:      	ldr	x8, [x8, #0x6f0]
  38ce9c:      	cmn	x8, #0x1
  38cea0:      	b.ne	0x38d0f8 <_block_destroy_helper.82+0xfe64>
  38cea4:      	adrp	x8, 0x97a000 <__ZZ24parallel_FF_response_appPKddddS0_dPdPiS1_S2_S1_S2_E4dcv1+0x1f350>
  38cea8:      	ldr	x8, [x8, #0xf00]
  38ceac:      	adrp	x9, 0x925000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB15858BandInfo+0x8>
  38ceb0:      	add	x9, x9, #0x870
  38ceb4:      	ldr	x9, [x9]
  38ceb8:      	ldr	x20, [x8, x9]
  38cebc:      	mov	x0, x20
  38cec0:      	bl	0x7023e8 <dyld_stub_binder+0x7023e8>
  38cec4:      	adrp	x23, 0x821000 <dyld_stub_binder+0x821000>
  38cec8:      	ldr	x23, [x23, #0x238]
  38cecc:      	mov	x0, x23
  38ced0:      	bl	0x7023e8 <dyld_stub_binder+0x7023e8>
  38ced4:      	bl	0x1c304 <_block_destroy_helper.39+0x4efc>
  38ced8:      	mov	x24, x0
  38cedc:      	mov	x0, x23
  38cee0:      	bl	0x7023d0 <dyld_stub_binder+0x7023d0>
  38cee4:      	ldr	x8, [x20]
  38cee8:      	ldr	x8, [x8, #0x2d8]
  38ceec:      	mov	w9, #0x61               ; =97
  38cef0:      	adrp	x0, 0x395000 <_block_destroy_helper.82+0x17d6c>
  38cef4:      	add	x0, x0, #0x98
  38cef8:      	adrp	x2, 0x779000 <dyld_stub_binder+0x779000>
  38cefc:      	add	x2, x2, #0xe20
  38cf00:      	stp	x9, x24, [sp, #-0x10]!
  38cf04:      	adrp	x5, 0x779000 <dyld_stub_binder+0x779000>
  38cf08:      	add	x5, x5, #0xc80
  38cf0c:      	mov	x1, #0x0                ; =0
  38cf10:      	mov	w3, #0x31               ; =49
  38cf14:      	mov	w4, #0x2                ; =2
  38cf18:      	mov	w6, #0xb2               ; =178
  38cf1c:      	mov	w7, #0x2                ; =2
  38cf20:      	blr	x8
  38cf24:      	add	sp, sp, #0x10
  38cf28:      	mov	x0, x20
  38cf2c:      	bl	0x7023d0 <dyld_stub_binder+0x7023d0>
  38cf30:      	mov	x0, x24
  38cf34:      	bl	0x7021c0 <dyld_stub_binder+0x7021c0>
  38cf38:      	adrp	x8, 0x91a000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary27AirohaHaSpecificModeSetting+0x10>
  38cf3c:      	ldr	x8, [x8, #0x888]
  38cf40:      	ldr	x20, [x21, x8]
  38cf44:      	movi.16b	v0, #0x0
  38cf48:      	stp	q0, q0, [x19, #0x110]
  38cf4c:      	ldrb	w23, [x21, x27]
  38cf50:      	adrp	x2, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cf54:      	add	x2, x2, #0x58
  38cf58:      	adrp	x3, 0x705000 <___swift_reflection_version+0xd20>
  38cf5c:      	add	x3, x3, #0x700
  38cf60:      	add	x0, x21, x25
  38cf64:      	sub	x1, x29, #0xa8
  38cf68:      	bl	0x17294 <___swift_allocate_boxed_opaque_existential_1Tm+0x3c>
  38cf6c:      	ldur	x8, [x29, #-0x90]
  38cf70:      	cbz	x8, 0x38cfec <_block_destroy_helper.82+0xfd58>
  38cf74:      	sub	x0, x29, #0xa8
  38cf78:      	add	x1, x19, #0x90
  38cf7c:      	bl	0x16f4c <___swift_project_boxed_opaque_existential_1Tm+0x24>
  38cf80:      	ldp	x21, x24, [x19, #0xa8]
  38cf84:      	add	x0, x19, #0x90
  38cf88:      	mov	x1, x21
  38cf8c:      	bl	0x16f28 <___swift_project_boxed_opaque_existential_1Tm>
  38cf90:      	mov	x6, x0
  38cf94:      	ldr	x8, [x24, #0x8]
  38cf98:      	add	x1, x19, #0x110
  38cf9c:      	mov	x0, x20
  38cfa0:      	mov	w2, #0x3                ; =3
  38cfa4:      	mov	x3, #0x0                ; =0
  38cfa8:      	mov	w4, #0x4                ; =4
  38cfac:      	mov	x5, x23
  38cfb0:      	mov	x20, x6
  38cfb4:      	mov	x6, x21
  38cfb8:      	mov	x7, x24
  38cfbc:      	blr	x8
  38cfc0:      	mov	x0, x26
  38cfc4:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38cfc8:      	adrp	x1, 0x909000 <dyld_stub_binder+0x909000>
  38cfcc:      	add	x1, x1, #0xe78
  38cfd0:      	adrp	x2, 0x703000 <dyld_stub_binder+0x703000>
  38cfd4:      	add	x2, x2, #0xfa0
  38cfd8:      	add	x0, x19, #0x110
  38cfdc:      	bl	0x4ca0 <___swift_instantiateConcreteTypeFromMangledNameV2+0x4c>
  38cfe0:      	add	x0, x19, #0x90
  38cfe4:      	bl	0x171d8 <___swift_destroy_boxed_opaque_existential_1Tm>
  38cfe8:      	b	0x38d0a8 <_block_destroy_helper.82+0xfe14>
  38cfec:      	adrp	x1, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38cff0:      	add	x1, x1, #0x58
  38cff4:      	adrp	x2, 0x705000 <___swift_reflection_version+0xd20>
  38cff8:      	add	x2, x2, #0x700
  38cffc:      	sub	x0, x29, #0xa8
  38d000:      	bl	0x4ca0 <___swift_instantiateConcreteTypeFromMangledNameV2+0x4c>
  38d004:      	add	x0, x21, x22
  38d008:      	bl	0x702478 <dyld_stub_binder+0x702478>
  38d00c:      	mov	x23, x0
  38d010:      	adrp	x8, 0x912000 <_OBJC_METACLASS_$__TtC18AirohaUnifyLibrary23AirohaWindDetectionInfo+0x18>
  38d014:      	add	x8, x8, #0xb20
  38d018:      	ldr	x8, [x8]
  38d01c:      	ldr	x24, [x0, x8]
  38d020:      	mov	x0, x24
  38d024:      	bl	0x702028 <dyld_stub_binder+0x702028>
  38d028:      	mov	x21, x0
  38d02c:      	mov	x0, x23
  38d030:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38d034:      	cbz	x24, 0x38d118 <_block_destroy_helper.82+0xfe84>
  38d038:      	str	xzr, [x19, #0xb0]
  38d03c:      	movi.16b	v0, #0x0
  38d040:      	stp	q0, q0, [x19, #0x90]
  38d044:      	add	x1, x19, #0x110
  38d048:      	add	x6, x19, #0x90
  38d04c:      	mov	x0, x20
  38d050:      	mov	w2, #0x3                ; =3
  38d054:      	mov	x3, #0x0                ; =0
  38d058:      	mov	w4, #0x4                ; =4
  38d05c:      	mov	w5, #0x0                ; =0
  38d060:      	mov	x20, x21
  38d064:      	bl	0x82700 <_keypath_setTm+0x204>
  38d068:      	mov	x0, x26
  38d06c:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38d070:      	mov	x0, x21
  38d074:      	bl	0x70201c <dyld_stub_binder+0x70201c>
  38d078:      	adrp	x1, 0x90a000 <_OBJC_METACLASS_$__TtCV18AirohaUnifyLibrary6AB155x16SetEQSettingFlow+0xa0>
  38d07c:      	add	x1, x1, #0x58
  38d080:      	adrp	x2, 0x705000 <___swift_reflection_version+0xd20>
  38d084:      	add	x2, x2, #0x700
  38d088:      	add	x0, x19, #0x90
  38d08c:      	bl	0x4ca0 <___swift_instantiateConcreteTypeFromMangledNameV2+0x4c>
  38d090:      	adrp	x1, 0x909000 <dyld_stub_binder+0x909000>
  38d094:      	add	x1, x1, #0xe78
  38d098:      	adrp	x2, 0x703000 <dyld_stub_binder+0x703000>
  38d09c:      	add	x2, x2, #0xfa0
  38d0a0:      	add	x0, x19, #0x110
  38d0a4:      	bl	0x4ca0 <___swift_instantiateConcreteTypeFromMangledNameV2+0x4c>
  38d0a8:      	ldur	x8, [x29, #-0x60]
  38d0ac:      	adrp	x9, 0x820000 <dyld_stub_binder+0x820000>
  38d0b0:      	ldr	x9, [x9, #0xe18]
  38d0b4:      	ldr	x9, [x9]
  38d0b8:      	cmp	x9, x8
  38d0bc:      	b.ne	0x38d110 <_block_destroy_helper.82+0xfe7c>
  38d0c0:      	sub	sp, x29, #0x50
  38d0c4:      	ldp	x29, x30, [sp, #0x50]
  38d0c8:      	ldp	x20, x19, [sp, #0x40]
  38d0cc:      	ldp	x22, x21, [sp, #0x30]
  38d0d0:      	ldp	x24, x23, [sp, #0x20]
  38d0d4:      	ldp	x26, x25, [sp, #0x10]
  38d0d8:      	ldp	x28, x27, [sp], #0x60
  38d0dc:      	ret
  38d0e0:      	adrp	x0, 0x8e3000 <__OBJC_$_INSTANCE_METHODS__TtC18AirohaUnifyLibrary21AirohaAncRecordStatus(AirohaUnifyLibrary|AirohaUnifyLibrary1)+0x1c8>
  38d0e4:      	add	x0, x0, #0x5f8
  38d0e8:      	adrp	x1, 0xf5000 <_block_destroy_helper.25+0x1b04>
  38d0ec:      	add	x1, x1, #0x730
  38d0f0:      	bl	0x7023c4 <dyld_stub_binder+0x7023c4>
  38d0f4:      	b	0x38c7c8 <_block_destroy_helper.82+0xf534>
  38d0f8:      	adrp	x0, 0x8e3000 <__OBJC_$_INSTANCE_METHODS__TtC18AirohaUnifyLibrary21AirohaAncRecordStatus(AirohaUnifyLibrary|AirohaUnifyLibrary1)+0x1c8>
  38d0fc:      	add	x0, x0, #0x6f0
  38d100:      	adrp	x1, 0x6cd000 <_block_destroy_helper.32+0x3ed4>
  38d104:      	add	x1, x1, #0x230
  38d108:      	bl	0x7023c4 <dyld_stub_binder+0x7023c4>
  38d10c:      	b	0x38cea4 <_block_destroy_helper.82+0xfc10>
  38d110:      	bl	0x701e6c <dyld_stub_binder+0x701e6c>
  38d114:      	brk	#0x1
  38d118:      	brk	#0x1
