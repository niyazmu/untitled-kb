MCU = STM32F072

BOOTLOADER = stm32-dfu

BOOTMAGIC_ENABLE = yes      
MOUSEKEY_ENABLE = yes          
EXTRAKEY_ENABLE = yes         
CONSOLE_ENABLE = no            
COMMAND_ENABLE = no           
NKRO_ENABLE = no           

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE