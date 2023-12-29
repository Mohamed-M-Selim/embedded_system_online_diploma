/*linker script cortexM3
Selim
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
	sram(RWX) : ORIGIN = 0x08000000, LENGTH = 20k
}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata*)
	} > flash

	.data : {
		*(.data)

	} /*> sram*/ > flash

	.bss : {
		*(.bss)
	} > sram

}