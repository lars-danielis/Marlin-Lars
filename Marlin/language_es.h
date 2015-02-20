/**
 * Spanish
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_ES_H
#define LANGUAGE_ES_H

#define WELCOME_MSG                         MACHINE_NAME " lista."
#define MSG_SD_INSERTED                     "Tarjeta colocada"
#define MSG_SD_REMOVED                      "Tarjeta retirada"
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       " Autostart"
#define MSG_DISABLE_STEPPERS                "Apagar motores"
#define MSG_AUTO_HOME                       "Llevar al origen"
#define MSG_SET_HOME_OFFSETS                "Ajustar offsets"
#define MSG_SET_ORIGIN                      "Establecer cero"
#define MSG_PREHEAT_PLA                     "Precalentar PLA"
#define MSG_PREHEAT_PLA0                    "Precalentar PLA 1"
#define MSG_PREHEAT_PLA1                    "Precalentar PLA 2"
#define MSG_PREHEAT_PLA2                    "Precalentar PLA 3"
#define MSG_PREHEAT_PLA012                  "Precal. PLA Todo"
#define MSG_PREHEAT_PLA_BEDONLY             "Precal. PLA Base"
#define MSG_PREHEAT_PLA_SETTINGS            "Ajustar temp. PLA"
#define MSG_PREHEAT_ABS                     "Precalentar ABS"
#define MSG_PREHEAT_ABS0                    "Precalentar ABS 1"
#define MSG_PREHEAT_ABS1                    "Precalentar ABS 2"
#define MSG_PREHEAT_ABS2                    "Precalentar ABS 3"
#define MSG_PREHEAT_ABS012                  "Precal. ABS Todo"
#define MSG_PREHEAT_ABS_BEDONLY             "Precal. ABS Base"
#define MSG_PREHEAT_ABS_SETTINGS            "Ajustar temp. ABS"
#define MSG_COOLDOWN                        "Enfriar"
#define MSG_SWITCH_PS_ON                    "Encender"
#define MSG_SWITCH_PS_OFF                   "Apagar"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Retraer"
#define MSG_MOVE_AXIS                       "Mover ejes"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_E1                         "Extrusor2"
#define MSG_MOVE_E2                         "Extrusor3"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidad"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_NOZZLE1                         "Nozzle2"
#define MSG_NOZZLE2                         "Nozzle3"
#define MSG_BED                             "Base"
#define MSG_FAN_SPEED                       "Ventilador"
#define MSG_FLOW                            "Flujo"
#define MSG_FLOW0                           "Flujo 0"
#define MSG_FLOW1                           "Flujo 1"
#define MSG_FLOW2                           "Flujo 2"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             "\002 Min"
#define MSG_MAX                             "\002 Max"
#define MSG_FACTOR                          "\002 Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On"
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Acel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax"
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vvacio min"
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-retrac."
#define MSG_XSTEPS                          "X pasos/mm"
#define MSG_YSTEPS                          "Y pasos/mm"
#define MSG_ZSTEPS                          "Z pasos/mm"
#define MSG_ESTEPS                          "E pasos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimiento"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Dia. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Dia. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Dia. 3"
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EPROM                     "Guardar memoria"
#define MSG_LOAD_EPROM                      "Cargar memoria"
#define MSG_RESTORE_FAILSAFE                "Rest. de emergen."
#define MSG_REFRESH                         "Volver a cargar"
#define MSG_WATCH                           "Monitorizar"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Ajustar"
#define MSG_PAUSE_PRINT                     "Pausar impresion"
#define MSG_RESUME_PRINT                    "Reanudar impres."
#define MSG_STOP_PRINT                      "Detener impresion"
#define MSG_CARD_MENU                       "Menu de SD"
#define MSG_NO_CARD                         "No hay tarjeta SD"
#define MSG_DWELL                           "Reposo..."
#define MSG_USERWAIT                        "Esperando ordenes"
#define MSG_RESUMING                        "Resumiendo impre."
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Sin movimiento"
#define MSG_KILLED                          "PARADA DE EMERG."
#define MSG_STOPPED                         "PARADA"
#define MSG_CONTROL_RETRACT                 "Retraer mm"
#define MSG_CONTROL_RETRACT_SWAP            "Interc. Retraer mm"
#define MSG_CONTROL_RETRACTF                "Retraer  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Interc. DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Cambiar filamento"
#define MSG_INIT_SDCARD                     "Iniciando tarjeta"
#define MSG_CNG_SDCARD                      "Cambiar tarjeta"
#define MSG_ZPROBE_OUT                      "sonda Z fuera"
#define MSG_POSITION_UNKNOWN                "Reiniciar X/Y y Z"
#define MSG_ZPROBE_ZOFFSET                  "Offset Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_RECTRACT                        "Retraer"
#define MSG_RECTRACT_WIDE                   "Retraer"
#define MSG_TEMPERATURE_WIDE                "Temperatura"
#define MSG_TEMPERATURE_RTN                 "Temperatura"
#define MSG_MAIN_WIDE                       "Menu principal"
#define MSG_MOTION_WIDE                     "Movimiento"
#define MSG_PREPARE_ALT                     "Preparar"
#define MSG_CONTROL_ARROW                   "Control \x7E"
#define MSG_RETRACT_ARROW                   "Retraer \x7E"
#define MSG_STEPPER_RELEASED                "Desacoplada."

#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_ES_H
