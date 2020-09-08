// IMPORTANT: Never change this header manually, it was generated by the call of "conf2build.sh  ./conf_ecu_simple_section_control_win32" 


#ifndef INCLUDED_FROM_ISOAGLIB_CONFIG
#error Do not include this file directly!
#endif
// These defines are needed for inclusion of the correct HAL modules:
#define HAL_PATH_ISOAGLIB ../../../IsoAgLib-tutorial-private/src/IsoAgLib/hal/esp32
#define HAL_PATH_ISOAGLIB_SYSTEM ../../../IsoAgLib-tutorial-private/src/IsoAgLib/hal/esp32/system
#define HAL_PATH_ISOAGLIB_CAN ../../../IsoAgLib-tutorial-private/src/IsoAgLib/hal/esp32/can
#define HAL_PATH_SUPPLEMENTARY_EEPROM ../../../IsoAgLib-tutorial-private/src/supplementary_driver/hal/esp32/eeprom
#define HAL_PATH_SUPPLEMENTARY_RS232 ../../../IsoAgLib-tutorial-private/src/supplementary_driver/hal/esp32/rs232
#define HAL_PATH_SUPPLEMENTARY_OUTPUTS ../../../IsoAgLib-tutorial-private/src/supplementary_driver/hal/esp32/outputs
#define HAL_PATH_SUPPLEMENTARY_INPUTS ../../../IsoAgLib-tutorial-private/src/supplementary_driver/hal/esp32/inputs
#define HAL_PATH_SUPPLEMENTARY_DATASTREAMS ../../../IsoAgLib-tutorial-private/src/supplementary_driver/hal/esp32/datastreams


// Switches


// Defining number of instances and channels:
#define CAN_INSTANCE_CNT 1
#define PRT_INSTANCE_CNT 1
#define RS232_CHANNEL_CNT 1
#define RS232_INSTANCE_CNT 1
#define CAN_DRIVER_SOCKET


#define USE_EEPROM_IO
#define USE_ISO_11783
#define USE_TRACTOR_GENERAL
#define USE_TRACTOR_MOVE
#define USE_ISO_TASKCONTROLLER_CLIENT
#define DEF_Stream_h_IMPL streamchunk_c.h
#define DEF_Stream_c_IMPL StreamChunk_c
