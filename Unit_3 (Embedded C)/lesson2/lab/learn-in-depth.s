
learn-in-depth.elf:     file format elf32-littlearm


Disassembly of section .startup:

00000000 <reset>:
   0:	e3a0da11 	mov	sp, #69632	@ 0x11000
   4:	eb000000 	bl	c <main>

00000008 <stop>:
   8:	eafffffe 	b	8 <stop>

Disassembly of section .text:

0000000c <main>:
   c:	e92d4800 	push	{fp, lr}
  10:	e28db004 	add	fp, sp, #4
  14:	e59f000c 	ldr	r0, [pc, #12]	@ 28 <main+0x1c>
  18:	eb000003 	bl	2c <Uart_Send_String>
  1c:	e3a03000 	mov	r3, #0
  20:	e1a00003 	mov	r0, r3
  24:	e8bd8800 	pop	{fp, pc}
  28:	00000084 	andeq	r0, r0, r4, lsl #1

0000002c <Uart_Send_String>:
  2c:	e52db004 	push	{fp}		@ (str fp, [sp, #-4]!)
  30:	e28db000 	add	fp, sp, #0
  34:	e24dd00c 	sub	sp, sp, #12
  38:	e50b0008 	str	r0, [fp, #-8]
  3c:	ea000006 	b	5c <Uart_Send_String+0x30>
  40:	e51b3008 	ldr	r3, [fp, #-8]
  44:	e5d32000 	ldrb	r2, [r3]
  48:	e59f3030 	ldr	r3, [pc, #48]	@ 80 <Uart_Send_String+0x54>
  4c:	e5832000 	str	r2, [r3]
  50:	e51b3008 	ldr	r3, [fp, #-8]
  54:	e2833001 	add	r3, r3, #1
  58:	e50b3008 	str	r3, [fp, #-8]
  5c:	e51b3008 	ldr	r3, [fp, #-8]
  60:	e5d33000 	ldrb	r3, [r3]
  64:	e3530000 	cmp	r3, #0
  68:	1afffff4 	bne	40 <Uart_Send_String+0x14>
  6c:	e1a00000 	nop			@ (mov r0, r0)
  70:	e1a00000 	nop			@ (mov r0, r0)
  74:	e28bd000 	add	sp, fp, #0
  78:	e49db004 	pop	{fp}		@ (ldr fp, [sp], #4)
  7c:	e12fff1e 	bx	lr
  80:	101f1000 	andsne	r1, pc, r0

Disassembly of section .data:

00000084 <string_buffer>:
  84:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
  88:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
  8c:	70656420 	rsbvc	r6, r5, r0, lsr #8
  90:	203a6874 	eorscs	r6, sl, r4, ror r8
  94:	454d4841 	strbmi	r4, [sp, #-2113]	@ 0xfffff7bf
  98:	00000044 	andeq	r0, r0, r4, asr #32
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002d41 	andeq	r2, r0, r1, asr #26
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000023 	andeq	r0, r0, r3, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	@ 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	@ 0xfffffdc7
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	@ 0xfffffef7
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	Address 0x2c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <string_buffer+0x10d0ca0>
   4:	72412820 	subvc	r2, r1, #32, 16	@ 0x200000
   8:	4e47206d 	cdpmi	0, 4, cr2, cr7, cr13, {3}
   c:	6f542055 	svcvs	0x00542055
  10:	68636c6f 	stmdavs	r3!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
  14:	206e6961 	rsbcs	r6, lr, r1, ror #18
  18:	322e3231 	eorcc	r3, lr, #268435459	@ 0x10000003
  1c:	41504d2e 	cmpmi	r0, lr, lsr #26
  20:	49544243 	ldmdbmi	r4, {r0, r1, r6, r9, lr}^
  24:	6c65522d 	sfmvs	f5, 2, [r5], #-180	@ 0xffffff4c
  28:	42282031 	eormi	r2, r8, #49	@ 0x31
  2c:	646c6975 	strbtvs	r6, [ip], #-2421	@ 0xfffff68b
  30:	6d726120 	ldfvse	f6, [r2, #-128]!	@ 0xffffff80
  34:	2d32312d 	ldfcss	f3, [r2, #-180]!	@ 0xffffff4c
  38:	6361706d 	cmnvs	r1, #109	@ 0x6d
  3c:	2e697462 	cdpcs	4, 6, cr7, cr9, cr2, {3}
  40:	29293433 	stmdbcs	r9!, {r0, r1, r4, r5, sl, ip, sp}
  44:	2e323120 	rsfcssp	f3, f2, f0
  48:	20312e32 	eorscs	r2, r1, r2, lsr lr
  4c:	33323032 	teqcc	r2, #50	@ 0x32
  50:	34313230 	ldrtcc	r3, [r1], #-560	@ 0xfffffdd0
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000056 	andeq	r0, r0, r6, asr r0
   4:	04010005 	streq	r0, [r1], #-5
   8:	00000000 	andeq	r0, r0, r0
   c:	00005801 	andeq	r5, r0, r1, lsl #16
  10:	001f1d00 	andseq	r1, pc, r0, lsl #26
  14:	00320000 	eorseq	r0, r2, r0
  18:	002c0000 	eoreq	r0, ip, r0
  1c:	00580000 	subseq	r0, r8, r0
  20:	00000000 	andeq	r0, r0, r0
  24:	0e020000 	cdpeq	0, 0, cr0, cr2, cr0, {0}
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	002c0605 	eoreq	r0, ip, r5, lsl #12
  30:	00580000 	subseq	r0, r8, r0
  34:	9c010000 	stcls	0, cr0, [r1], {-0}
  38:	0000004c 	andeq	r0, r0, ip, asr #32
  3c:	00002603 	andeq	r2, r0, r3, lsl #12
  40:	26050100 	strcs	r0, [r5], -r0, lsl #2
  44:	0000004c 	andeq	r0, r0, ip, asr #32
  48:	00749102 	rsbseq	r9, r4, r2, lsl #2
  4c:	00520404 	subseq	r0, r2, r4, lsl #8
  50:	01050000 	mrseq	r0, (UNDEF: 5)
  54:	00000008 	andeq	r0, r0, r8
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	@ 0xfffffeff
   4:	030b130e 	movweq	r1, #45838	@ 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10061201 	andne	r1, r6, r1, lsl #4
  10:	02000017 	andeq	r0, r0, #23
  14:	193f012e 	ldmdbne	pc!, {r1, r2, r3, r5, r8}	@ <UNPREDICTABLE>
  18:	0b3a0e03 	bleq	e8382c <string_buffer+0xe837a8>
  1c:	0b390b3b 	bleq	e42d10 <string_buffer+0xe42c8c>
  20:	01111927 	tsteq	r1, r7, lsr #18
  24:	18400612 	stmdane	r0, {r1, r4, r9, sl}^
  28:	1301197a 	movwne	r1, #6522	@ 0x197a
  2c:	05030000 	streq	r0, [r3, #-0]
  30:	3a0e0300 	bcc	380c38 <string_buffer+0x380bb4>
  34:	390b3b0b 	stmdbcc	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  38:	0213490b 	andseq	r4, r3, #180224	@ 0x2c000
  3c:	04000018 	streq	r0, [r0], #-24	@ 0xffffffe8
  40:	0b0b000f 	bleq	2c0084 <string_buffer+0x2c0000>
  44:	00001349 	andeq	r1, r0, r9, asr #6
  48:	0b002405 	bleq	9064 <string_buffer+0x8fe0>
  4c:	030b3e0b 	movweq	r3, #48651	@ 0xbe0b
  50:	0000000e 	andeq	r0, r0, lr

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
   c:	00000000 	andeq	r0, r0, r0
  10:	0000002c 	andeq	r0, r0, ip, lsr #32
  14:	00000058 	andeq	r0, r0, r8, asr r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0000004a 	andeq	r0, r0, sl, asr #32
   4:	001d0003 	andseq	r0, sp, r3
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	54524155 	ldrbpl	r4, [r2], #-341	@ 0xfffffeab
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	05000000 	streq	r0, [r0, #-0]
  28:	02050001 	andeq	r0, r5, #1
  2c:	0000002c 	andeq	r0, r0, ip, lsr #32
  30:	83070517 	movwhi	r0, #29975	@ 0x7517
  34:	05300d05 	ldreq	r0, [r0, #-3333]!	@ 0xfffff2fb
  38:	0b054a03 	bleq	15284c <string_buffer+0x1527c8>
  3c:	2f0e052e 	svccs	0x000e052e
  40:	05630805 	strbeq	r0, [r3, #-2053]!	@ 0xfffff7fb
  44:	01054a15 	tsteq	r5, r5, lsl sl
  48:	000c024f 	andeq	r0, ip, pc, asr #4
  4c:	Address 0x4c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
   4:	64656e67 	strbtvs	r6, [r5], #-3687	@ 0xfffff199
   8:	61686320 	cmnvs	r8, r0, lsr #6
   c:	61550072 	cmpvs	r5, r2, ror r0
  10:	535f7472 	cmppl	pc, #1912602624	@ 0x72000000
  14:	5f646e65 	svcpl	0x00646e65
  18:	69727453 	ldmdbvs	r2!, {r0, r1, r4, r6, sl, ip, sp, lr}^
  1c:	5500676e 	strpl	r6, [r0, #-1902]	@ 0xfffff892
  20:	2e545241 	cdpcs	2, 5, cr5, cr4, cr1, {2}
  24:	5f500063 	svcpl	0x00500063
  28:	735f7874 	cmpvc	pc, #116, 16	@ 0x740000
  2c:	6e697274 	mcrvs	2, 3, r7, cr9, cr4, {3}
  30:	3a450067 	bcc	11401d4 <string_buffer+0x1140150>
  34:	7469675c 	strbtvc	r6, [r9], #-1884	@ 0xfffff8a4
  38:	706f725f 	rsbvc	r7, pc, pc, asr r2	@ <UNPREDICTABLE>
  3c:	6e555c65 	cdpvs	12, 5, cr5, cr5, cr5, {3}
  40:	32207469 	eorcc	r7, r0, #1761607680	@ 0x69000000
  44:	696e555c 	stmdbvs	lr!, {r2, r3, r4, r6, r8, sl, ip, lr}^
  48:	5c335f74 	ldcpl	15, cr5, [r3], #-464	@ 0xfffffe30
  4c:	7373656c 	cmnvc	r3, #108, 10	@ 0x1b000000
  50:	5c326e6f 	ldcpl	14, cr6, [r2], #-444	@ 0xfffffe44
  54:	0062616c 	rsbeq	r6, r2, ip, ror #2
  58:	20554e47 	subscs	r4, r5, r7, asr #28
  5c:	20373143 	eorscs	r3, r7, r3, asr #2
  60:	322e3231 	eorcc	r3, lr, #268435459	@ 0x10000003
  64:	3220312e 	eorcc	r3, r0, #-2147483637	@ 0x8000000b
  68:	30333230 	eorscc	r3, r3, r0, lsr r2
  6c:	20343132 	eorscs	r3, r4, r2, lsr r1
  70:	70636d2d 	rsbvc	r6, r3, sp, lsr #26
  74:	72613d75 	rsbvc	r3, r1, #7488	@ 0x1d40
  78:	3632396d 	ldrtcc	r3, [r2], -sp, ror #18
  7c:	732d6a65 			@ <UNDEFINED> instruction: 0x732d6a65
  80:	666d2d20 	strbtvs	r2, [sp], -r0, lsr #26
  84:	74616f6c 	strbtvc	r6, [r1], #-3948	@ 0xfffff094
  88:	6962612d 	stmdbvs	r2!, {r0, r2, r3, r5, r8, sp, lr}^
  8c:	666f733d 			@ <UNDEFINED> instruction: 0x666f733d
  90:	6d2d2074 	stcvs	0, cr2, [sp, #-464]!	@ 0xfffffe30
  94:	206d7261 	rsbcs	r7, sp, r1, ror #4
  98:	72616d2d 	rsbvc	r6, r1, #2880	@ 0xb40
  9c:	613d6863 	teqvs	sp, r3, ror #16
  a0:	35766d72 	ldrbcc	r6, [r6, #-3442]!	@ 0xfffff28e
  a4:	206a6574 	rsbcs	r6, sl, r4, ror r5
  a8:	Address 0xa8 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			@ <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	0000001c 	andeq	r0, r0, ip, lsl r0
  14:	00000000 	andeq	r0, r0, r0
  18:	0000002c 	andeq	r0, r0, ip, lsr #32
  1c:	00000058 	andeq	r0, r0, r8, asr r0
  20:	8b040e42 	blhi	103930 <string_buffer+0x1038ac>
  24:	0b0d4201 	bleq	350830 <string_buffer+0x3507ac>
  28:	420d0d62 	andmi	r0, sp, #6272	@ 0x1880
  2c:	00000ecb 	andeq	r0, r0, fp, asr #29

learn-in-depth.elf:     file format elf32-littlearm


Disassembly of section .startup:

00010000 <reset>:
   10000:	e3a0da11 	mov	sp, #69632	@ 0x11000
   10004:	eb000000 	bl	1000c <main>

00010008 <stop>:
   10008:	eafffffe 	b	10008 <stop>

Disassembly of section .text:

0001000c <main>:
   1000c:	e92d4800 	push	{fp, lr}
   10010:	e28db004 	add	fp, sp, #4
   10014:	e59f000c 	ldr	r0, [pc, #12]	@ 10028 <main+0x1c>
   10018:	eb000003 	bl	1002c <Uart_Send_String>
   1001c:	e3a03000 	mov	r3, #0
   10020:	e1a00003 	mov	r0, r3
   10024:	e8bd8800 	pop	{fp, pc}
   10028:	00010084 	andeq	r0, r1, r4, lsl #1

0001002c <Uart_Send_String>:
   1002c:	e52db004 	push	{fp}		@ (str fp, [sp, #-4]!)
   10030:	e28db000 	add	fp, sp, #0
   10034:	e24dd00c 	sub	sp, sp, #12
   10038:	e50b0008 	str	r0, [fp, #-8]
   1003c:	ea000006 	b	1005c <Uart_Send_String+0x30>
   10040:	e51b3008 	ldr	r3, [fp, #-8]
   10044:	e5d32000 	ldrb	r2, [r3]
   10048:	e59f3030 	ldr	r3, [pc, #48]	@ 10080 <Uart_Send_String+0x54>
   1004c:	e5832000 	str	r2, [r3]
   10050:	e51b3008 	ldr	r3, [fp, #-8]
   10054:	e2833001 	add	r3, r3, #1
   10058:	e50b3008 	str	r3, [fp, #-8]
   1005c:	e51b3008 	ldr	r3, [fp, #-8]
   10060:	e5d33000 	ldrb	r3, [r3]
   10064:	e3530000 	cmp	r3, #0
   10068:	1afffff4 	bne	10040 <Uart_Send_String+0x14>
   1006c:	e1a00000 	nop			@ (mov r0, r0)
   10070:	e1a00000 	nop			@ (mov r0, r0)
   10074:	e28bd000 	add	sp, fp, #0
   10078:	e49db004 	pop	{fp}		@ (ldr fp, [sp], #4)
   1007c:	e12fff1e 	bx	lr
   10080:	101f1000 	andsne	r1, pc, r0

Disassembly of section .data:

00010084 <string_buffer>:
   10084:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
   10088:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
   1008c:	70656420 	rsbvc	r6, r5, r0, lsr #8
   10090:	203a6874 	eorscs	r6, sl, r4, ror r8
   10094:	454d4841 	strbmi	r4, [sp, #-2113]	@ 0xfffff7bf
   10098:	00000044 	andeq	r0, r0, r4, asr #32
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002d41 	andeq	r2, r0, r1, asr #26
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000023 	andeq	r0, r0, r3, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	@ 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	@ 0xfffffdc7
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	@ 0xfffffef7
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	Address 0x2c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <stack_top+0x10bfc3c>
   4:	72412820 	subvc	r2, r1, #32, 16	@ 0x200000
   8:	4e47206d 	cdpmi	0, 4, cr2, cr7, cr13, {3}
   c:	6f542055 	svcvs	0x00542055
  10:	68636c6f 	stmdavs	r3!, {r0, r1, r2, r3, r5, r6, sl, fp, sp, lr}^
  14:	206e6961 	rsbcs	r6, lr, r1, ror #18
  18:	322e3231 	eorcc	r3, lr, #268435459	@ 0x10000003
  1c:	41504d2e 	cmpmi	r0, lr, lsr #26
  20:	49544243 	ldmdbmi	r4, {r0, r1, r6, r9, lr}^
  24:	6c65522d 	sfmvs	f5, 2, [r5], #-180	@ 0xffffff4c
  28:	42282031 	eormi	r2, r8, #49	@ 0x31
  2c:	646c6975 	strbtvs	r6, [ip], #-2421	@ 0xfffff68b
  30:	6d726120 	ldfvse	f6, [r2, #-128]!	@ 0xffffff80
  34:	2d32312d 	ldfcss	f3, [r2, #-180]!	@ 0xffffff4c
  38:	6361706d 	cmnvs	r1, #109	@ 0x6d
  3c:	2e697462 	cdpcs	4, 6, cr7, cr9, cr2, {3}
  40:	29293433 	stmdbcs	r9!, {r0, r1, r4, r5, sl, ip, sp}
  44:	2e323120 	rsfcssp	f3, f2, f0
  48:	20312e32 	eorscs	r2, r1, r2, lsr lr
  4c:	33323032 	teqcc	r2, #50	@ 0x32
  50:	34313230 	ldrtcc	r3, [r1], #-560	@ 0xfffffdd0
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000056 	andeq	r0, r0, r6, asr r0
   4:	04010005 	streq	r0, [r1], #-5
   8:	00000000 	andeq	r0, r0, r0
   c:	00005801 	andeq	r5, r0, r1, lsl #16
  10:	001f1d00 	andseq	r1, pc, r0, lsl #26
  14:	00320000 	eorseq	r0, r2, r0
  18:	002c0000 	eoreq	r0, ip, r0
  1c:	00580001 	subseq	r0, r8, r1
  20:	00000000 	andeq	r0, r0, r0
  24:	0e020000 	cdpeq	0, 0, cr0, cr2, cr0, {0}
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	002c0605 	eoreq	r0, ip, r5, lsl #12
  30:	00580001 	subseq	r0, r8, r1
  34:	9c010000 	stcls	0, cr0, [r1], {-0}
  38:	0000004c 	andeq	r0, r0, ip, asr #32
  3c:	00002603 	andeq	r2, r0, r3, lsl #12
  40:	26050100 	strcs	r0, [r5], -r0, lsl #2
  44:	0000004c 	andeq	r0, r0, ip, asr #32
  48:	00749102 	rsbseq	r9, r4, r2, lsl #2
  4c:	00520404 	subseq	r0, r2, r4, lsl #8
  50:	01050000 	mrseq	r0, (UNDEF: 5)
  54:	00000008 	andeq	r0, r0, r8
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	@ 0xfffffeff
   4:	030b130e 	movweq	r1, #45838	@ 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10061201 	andne	r1, r6, r1, lsl #4
  10:	02000017 	andeq	r0, r0, #23
  14:	193f012e 	ldmdbne	pc!, {r1, r2, r3, r5, r8}	@ <UNPREDICTABLE>
  18:	0b3a0e03 	bleq	e8382c <stack_top+0xe72744>
  1c:	0b390b3b 	bleq	e42d10 <stack_top+0xe31c28>
  20:	01111927 	tsteq	r1, r7, lsr #18
  24:	18400612 	stmdane	r0, {r1, r4, r9, sl}^
  28:	1301197a 	movwne	r1, #6522	@ 0x197a
  2c:	05030000 	streq	r0, [r3, #-0]
  30:	3a0e0300 	bcc	380c38 <stack_top+0x36fb50>
  34:	390b3b0b 	stmdbcc	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  38:	0213490b 	andseq	r4, r3, #180224	@ 0x2c000
  3c:	04000018 	streq	r0, [r0], #-24	@ 0xffffffe8
  40:	0b0b000f 	bleq	2c0084 <stack_top+0x2aef9c>
  44:	00001349 	andeq	r1, r0, r9, asr #6
  48:	0b002405 	bleq	9064 <reset-0x6f9c>
  4c:	030b3e0b 	movweq	r3, #48651	@ 0xbe0b
  50:	0000000e 	andeq	r0, r0, lr

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
   c:	00000000 	andeq	r0, r0, r0
  10:	0001002c 	andeq	r0, r1, ip, lsr #32
  14:	00000058 	andeq	r0, r0, r8, asr r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0000004a 	andeq	r0, r0, sl, asr #32
   4:	001d0003 	andseq	r0, sp, r3
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	54524155 	ldrbpl	r4, [r2], #-341	@ 0xfffffeab
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	05000000 	streq	r0, [r0, #-0]
  28:	02050001 	andeq	r0, r5, #1
  2c:	0001002c 	andeq	r0, r1, ip, lsr #32
  30:	83070517 	movwhi	r0, #29975	@ 0x7517
  34:	05300d05 	ldreq	r0, [r0, #-3333]!	@ 0xfffff2fb
  38:	0b054a03 	bleq	15284c <stack_top+0x141764>
  3c:	2f0e052e 	svccs	0x000e052e
  40:	05630805 	strbeq	r0, [r3, #-2053]!	@ 0xfffff7fb
  44:	01054a15 	tsteq	r5, r5, lsl sl
  48:	000c024f 	andeq	r0, ip, pc, asr #4
  4c:	Address 0x4c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
   4:	64656e67 	strbtvs	r6, [r5], #-3687	@ 0xfffff199
   8:	61686320 	cmnvs	r8, r0, lsr #6
   c:	61550072 	cmpvs	r5, r2, ror r0
  10:	535f7472 	cmppl	pc, #1912602624	@ 0x72000000
  14:	5f646e65 	svcpl	0x00646e65
  18:	69727453 	ldmdbvs	r2!, {r0, r1, r4, r6, sl, ip, sp, lr}^
  1c:	5500676e 	strpl	r6, [r0, #-1902]	@ 0xfffff892
  20:	2e545241 	cdpcs	2, 5, cr5, cr4, cr1, {2}
  24:	5f500063 	svcpl	0x00500063
  28:	735f7874 	cmpvc	pc, #116, 16	@ 0x740000
  2c:	6e697274 	mcrvs	2, 3, r7, cr9, cr4, {3}
  30:	3a450067 	bcc	11401d4 <stack_top+0x112f0ec>
  34:	7469675c 	strbtvc	r6, [r9], #-1884	@ 0xfffff8a4
  38:	706f725f 	rsbvc	r7, pc, pc, asr r2	@ <UNPREDICTABLE>
  3c:	6e555c65 	cdpvs	12, 5, cr5, cr5, cr5, {3}
  40:	32207469 	eorcc	r7, r0, #1761607680	@ 0x69000000
  44:	696e555c 	stmdbvs	lr!, {r2, r3, r4, r6, r8, sl, ip, lr}^
  48:	5c335f74 	ldcpl	15, cr5, [r3], #-464	@ 0xfffffe30
  4c:	7373656c 	cmnvc	r3, #108, 10	@ 0x1b000000
  50:	5c326e6f 	ldcpl	14, cr6, [r2], #-444	@ 0xfffffe44
  54:	0062616c 	rsbeq	r6, r2, ip, ror #2
  58:	20554e47 	subscs	r4, r5, r7, asr #28
  5c:	20373143 	eorscs	r3, r7, r3, asr #2
  60:	322e3231 	eorcc	r3, lr, #268435459	@ 0x10000003
  64:	3220312e 	eorcc	r3, r0, #-2147483637	@ 0x8000000b
  68:	30333230 	eorscc	r3, r3, r0, lsr r2
  6c:	20343132 	eorscs	r3, r4, r2, lsr r1
  70:	70636d2d 	rsbvc	r6, r3, sp, lsr #26
  74:	72613d75 	rsbvc	r3, r1, #7488	@ 0x1d40
  78:	3632396d 	ldrtcc	r3, [r2], -sp, ror #18
  7c:	732d6a65 			@ <UNDEFINED> instruction: 0x732d6a65
  80:	666d2d20 	strbtvs	r2, [sp], -r0, lsr #26
  84:	74616f6c 	strbtvc	r6, [r1], #-3948	@ 0xfffff094
  88:	6962612d 	stmdbvs	r2!, {r0, r2, r3, r5, r8, sp, lr}^
  8c:	666f733d 			@ <UNDEFINED> instruction: 0x666f733d
  90:	6d2d2074 	stcvs	0, cr2, [sp, #-464]!	@ 0xfffffe30
  94:	206d7261 	rsbcs	r7, sp, r1, ror #4
  98:	72616d2d 	rsbvc	r6, r1, #2880	@ 0xb40
  9c:	613d6863 	teqvs	sp, r3, ror #16
  a0:	35766d72 	ldrbcc	r6, [r6, #-3442]!	@ 0xfffff28e
  a4:	206a6574 	rsbcs	r6, sl, r4, ror r5
  a8:	Address 0xa8 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			@ <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	0000001c 	andeq	r0, r0, ip, lsl r0
  14:	00000000 	andeq	r0, r0, r0
  18:	0001002c 	andeq	r0, r1, ip, lsr #32
  1c:	00000058 	andeq	r0, r0, r8, asr r0
  20:	8b040e42 	blhi	103930 <stack_top+0xf2848>
  24:	0b0d4201 	bleq	350830 <stack_top+0x33f748>
  28:	420d0d62 	andmi	r0, sp, #6272	@ 0x1880
  2c:	00000ecb 	andeq	r0, r0, fp, asr #29
