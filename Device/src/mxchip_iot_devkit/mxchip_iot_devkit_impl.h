﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.0.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: Tuesday, August 13, 2019
 ***********************************************************************************************/

#ifndef MXCHIP_IOT_DEVKIT_IMPL
#define MXCHIP_IOT_DEVKIT_IMPL

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"
#include "parson.h"

/**
* Type definition
*/

typedef struct POSITION_LOCATION_TAG
{
    double lat;
    double lon;
    double alt;

} POSITION_LOCATION;

typedef struct SENSORS_MAGNETOMETER_TAG
{
    int x;
    int y;
    int z;

} SENSORS_MAGNETOMETER;

typedef struct SENSORS_GYROSCOPE_TAG
{
    int x;
    int y;
    int z;

} SENSORS_GYROSCOPE;

typedef struct SENSORS_ACCELEROMETER_TAG
{
    int x;
    int y;
    int z;

} SENSORS_ACCELEROMETER;

/**
* @brief Result of DigitalTwin command execution.
*/
typedef enum DIGITALTWIN_COMMAND_RESULT_TAG
{
    DIGITALTWIN_COMMAND_OK,
    DIGITALTWIN_COMMAND_TIMEOUT,
    DIGITALTWIN_COMMAND_ERROR
} DIGITALTWIN_COMMAND_RESULT;

typedef struct LEDS_BLINK_blinkResponse_TAG
{
    char* description;

} LEDS_BLINK_blinkResponse;

typedef struct SCREEN_ECHO_echoResponse_TAG
{
    char* echo;

} SCREEN_ECHO_echoResponse;

// Device telemetries related APIs

double Sensors_Telemetry_ReadHumidity();

double Sensors_Telemetry_ReadTemperature();

double Sensors_Telemetry_ReadPressure();

void Sensors_Telemetry_ReadMagnetometer(SENSORS_MAGNETOMETER * magnetometer);

void Sensors_Telemetry_ReadGyroscope(SENSORS_GYROSCOPE * gyroscope);

void Sensors_Telemetry_ReadAccelerometer(SENSORS_ACCELEROMETER * accelerometer);

// Callbacks to handle the confirmation result of sending telemetry
void SendTelemetry_Succeeded_Callback(const char* interfaceName, const char* telemetryName);
void SendTelemetry_Error_Callback(const char* interfaceName, const char* telemetryName);

// Callbacks to handle the confirmation result of reporting property
void ReportProperty_Succeeded_Callback(const char* interfaceName, const char* telemetryName);
void ReportProperty_Error_Callback(const char* interfaceName, const char* telemetryName);

// Device properties related APIs

char* Deviceinfo_Property_GetManufacturer();

char* Deviceinfo_Property_GetModel();

char* Deviceinfo_Property_GetSwVersion();

char* Deviceinfo_Property_GetOsName();

char* Deviceinfo_Property_GetProcessorArchitecture();

char* Deviceinfo_Property_GetProcessorManufacturer();

long Deviceinfo_Property_GetTotalStorage();

long Deviceinfo_Property_GetTotalMemory();

bool Settings_Property_FanSpeedCallback(double fanSpeed);

bool Settings_Property_VoltageCallback(double voltage);

bool Settings_Property_CurrentCallback(double current);

bool Settings_Property_IrSwitchCallback(bool irSwitch);

// Device commands related APIs

DIGITALTWIN_COMMAND_RESULT ModelDefinition_Command_GetModelDefinition(char* id, char** response, unsigned int* statusCode);

DIGITALTWIN_COMMAND_RESULT Leds_Command_Blink(long interval, LEDS_BLINK_blinkResponse* response, unsigned int* statusCode);

DIGITALTWIN_COMMAND_RESULT Leds_Command_TurnOnLed(unsigned int* statusCode);

DIGITALTWIN_COMMAND_RESULT Leds_Command_TurnOffLed(unsigned int* statusCode);

DIGITALTWIN_COMMAND_RESULT Screen_Command_Echo(char* text, SCREEN_ECHO_echoResponse* response, unsigned int* statusCode);

DIGITALTWIN_COMMAND_RESULT Screen_Command_Countdown(int number, unsigned int* statusCode);

#ifdef __cplusplus
}
#endif

#endif // MXCHIP_IOT_DEVKIT_IMPL
