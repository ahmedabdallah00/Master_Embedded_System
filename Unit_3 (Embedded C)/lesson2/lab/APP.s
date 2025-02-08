
APP.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f000c 	ldr	r0, [pc, #12]	@ 1c <main+0x1c>
   c:	ebfffffe 	bl	0 <Uart_Send_String>
  10:	e3a03000 	mov	r3, #0
  14:	e1a00003 	mov	r0, r3
  18:	e8bd8800 	pop	{fp, pc}
  1c:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
   4:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
   8:	70656420 	rsbvc	r6, r5, r0, lsr #8
   c:	203a6874 	eorscs	r6, sl, r4, ror r8
  10:	454d4841 	strbmi	r4, [sp, #-2113]	@ 0xfffff7bf
  14:	00000044 	andeq	r0, r0, r4, asr #32
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	@ 0x3700
   4:	4128203a 			@ <UNDEFINED> instruction: 0x4128203a
   8:	47206d72 			@ <UNDEFINED> instruction: 0x47206d72
   c:	5420554e 	strtpl	r5, [r0], #-1358	@ 0xfffffab2
  10:	636c6f6f 	cmnvs	ip, #444	@ 0x1bc
  14:	6e696168 	powvsez	f6, f1, #0.0
  18:	2e323120 	rsfcssp	f3, f2, f0
  1c:	504d2e32 	subpl	r2, sp, r2, lsr lr
  20:	54424341 	strbpl	r4, [r2], #-833	@ 0xfffffcbf
  24:	65522d49 	ldrbvs	r2, [r2, #-3401]	@ 0xfffff2b7
  28:	2820316c 	stmdacs	r0!, {r2, r3, r5, r6, r8, ip, sp}
  2c:	6c697542 	cfstr64vs	mvdx7, [r9], #-264	@ 0xfffffef8
  30:	72612064 	rsbvc	r2, r1, #100	@ 0x64
  34:	32312d6d 	eorscc	r2, r1, #6976	@ 0x1b40
  38:	61706d2d 	cmnvs	r0, sp, lsr #26
  3c:	69746263 	ldmdbvs	r4!, {r0, r1, r5, r6, r9, sp, lr}^
  40:	2934332e 	ldmdbcs	r4!, {r1, r2, r3, r5, r8, r9, ip, sp}
  44:	32312029 	eorscc	r2, r1, #41	@ 0x29
  48:	312e322e 			@ <UNDEFINED> instruction: 0x312e322e
  4c:	32303220 	eorscc	r3, r0, #32, 4
  50:	31323033 	teqcc	r2, r3, lsr r0
  54:	Address 0x54 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002b41 	andeq	r2, r0, r1, asr #22
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000021 	andeq	r0, r0, r1, lsr #32
  10:	45543505 	ldrbmi	r3, [r4, #-1285]	@ 0xfffffafb
  14:	0506004a 	streq	r0, [r6, #-74]	@ 0xffffffb6
  18:	01090108 	tsteq	r9, r8, lsl #2
  1c:	01140412 	tsteq	r4, r2, lsl r4
  20:	03170115 	tsteq	r7, #1073741829	@ 0x40000005
  24:	01190118 	tsteq	r9, r8, lsl r1
  28:	061e011a 			@ <UNDEFINED> instruction: 0x061e011a
