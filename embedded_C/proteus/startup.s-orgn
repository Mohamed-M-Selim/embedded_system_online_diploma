/* startup_cortexM#.s
selim
*/

/* SRAM 0x20000000*/

.section .vectors

.word 0x20001000		/*stack top address*/
.word reset			/*1 RESET*/
.word Vector_handler  /*2 NMI*/
.word Vector_handler  /*3 HARD FAULT*/
.word Vector_handler  /*4 MM FAULT*/
.word Vector_handler  /*5 BUS FAULT*/
.word Vector_handler  /*6 USAGE FAULT*/
.word Vector_handler  /*7 RESERVED*/
.word Vector_handler  /*8 RESERVED*/
.word Vector_handler  /*9 RESERVED*/
.word Vector_handler  /*10 RESERVED*/
.word Vector_handler  /*11 SV CALL*/
.word Vector_handler  /*12 DEBUG RESERVED*/
.word Vector_handler  /*13 RESERVED*/
.word Vector_handler  /*14 PendSV*/
.word Vector_handler  /*15 SysTrick*/
.word Vector_handler  /*16 IRQ0*/
.word Vector_handler  /*17 IRQ1*/
.word Vector_handler  /*18 IRQ2*/
.word Vector_handler  /*19 IRQ3*/
.word Vector_handler  /*16 IRQ4*/
.word Vector_handler  /*17 IRQ5*/
.word Vector_handler  /*18 IRQ6*/
.word Vector_handler  /*19 IRQ7*/
.word Vector_handler  /*16 IRQ8*/
.word Vector_handler  /*17 IRQ9*/
.word Vector_handler  /*18 IRQ10*/
.word Vector_handler  /*19 IRQ11*/
.word Vector_handler  /*18 IRQ12*/
.word Vector_handler  /*19 IRQ13*/
.word Vector_handler  /*18 IRQ14*/
.word Vector_handler  /*19 IRQ15*/
.word Vector_handler  /*18 IRQ16*/
.word Vector_handler  /*19 IRQ17*/
.word Vector_handler  /*18 IRQ18*/
.word Vector_handler  /*19 IRQ19*/
.word Vector_handler  /*18 IRQ20*/
.word Vector_handler  /*19 IRQ21*/
.word Vector_handler  /*18 IRQ22*/
.word Vector_handler  /*19 IRQ23*/
.word Vector_handler  /*18 IRQ24*/
.word Vector_handler  /*19 IRQ25*/
.word Vector_handler  /*18 IRQ26*/
.word Vector_handler  /*19 IRQ27*/
.word Vector_handler  /*18 IRQ28*/
.word Vector_handler  /*19 IRQ29*/
.word Vector_handler  /*18 IRQ30*/
.word Vector_handler  /*19 IRQ31*/
.word Vector_handler  /*18 IRQ32*/
.word Vector_handler  /*19 IRQ33*/
.word Vector_handler  /*18 IRQ34*/
.word Vector_handler  /*19 IRQ35*/
.word Vector_handler  /*18 IRQ36*/
.word Vector_handler  /*19 IRQ37*/
.word Vector_handler  /*18 IRQ38*/
.word Vector_handler  /*19 IRQ39*/
.word Vector_handler  /*18 IRQ40*/
.word Vector_handler  /*19 IRQ41*/
.word Vector_handler  /*18 IRQ42*/
.word Vector_handler  /*19 IRQ43*/
.word Vector_handler  /*18 IRQ44*/
.word Vector_handler  /*19 IRQ45*/
.word Vector_handler  /*18 IRQ46*/
.word Vector_handler  /*19 IRQ47*/
.word Vector_handler  /*18 IRQ48*/
.word Vector_handler  /*19 IRQ49*/
.word Vector_handler  /*18 IRQ50*/
.word Vector_handler  /*19 IRQ51*/
.word Vector_handler  /*18 IRQ52*/
.word Vector_handler  /*19 IRQ53*/
.word Vector_handler  /*18 IRQ54*/
.word Vector_handler  /*19 IRQ55*/
.word Vector_handler  /*18 IRQ56*/
.word Vector_handler  /*19 IRQ57*/
.word Vector_handler  /*18 IRQ58*/
.word Vector_handler  /*19 IRQ59*/
.word Vector_handler  /*18 IRQ61*/
.word Vector_handler  /*19 IRQ62*/
.word Vector_handler  /*18 IRQ63*/
.word Vector_handler  /*19 IRQ64*/
.word Vector_handler  /*18 IRQ65*/
.word Vector_handler  /*19 IRQ66*/
.word Vector_handler  /*18 IRQ67*/


.section .text

reset:
	bl main
	b .

.thumb_func
Vector_handler:
	b reset