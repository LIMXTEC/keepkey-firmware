/* STM32F205RG - 1MB Flash, 128K RAM */
/* program starts at 0x08060100 (FLASH_APP_START) */
/* 1MB = 0x00100000 ;640K=0x000A0000; 384K = 0x00060000 ; 256K = 0x00040000; 128K = 0x00020000  */

MEMORY
{
    /* Bootloader Updater */
    rom (rx)   : ORIGIN = 0x08060100, LENGTH = 0x00100000 - 0x00060100
    ram (rwx)  : ORIGIN = 0x20000000, LENGTH = 0x00020000
}

INCLUDE libopencm3_stm32f2.ld

SECTIONS
{
    .version : {
        KEEP(*(version))
    } >rom
}

_ram_start = ORIGIN(ram);
_ram_end = ORIGIN(ram) + LENGTH(ram);
_stack = _ram_end - 8;
__stack_chk_guard = _ram_end - 8;

_data_size = SIZEOF(.data);
