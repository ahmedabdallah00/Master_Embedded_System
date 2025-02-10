/*startup-cortexM3.sp
Ahmed Abdallah
*/

/*SRAM 0x20000000*/

.section .vectors

.word 0x20001000
.word _reset
.word Vector_handler
.word Vector_handler

.section .text

_reset:
	 bl main
	 b  .
 
Vector_handler:
     b _reset