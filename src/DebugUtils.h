/*
DebugUtils.h - Simple debugging utilities.
*/

#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H


// **************************************************************************************************
// ********************** makra pro debugovaci tisk - jeden level ***********************************
// **************************************************************************************************
#ifdef DEBUG
  #define SERIAL_INIT
  #define DEBUG_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define DEBUG_PRINTF(...) Serial.printf(__VA_ARGS__)
#else
  #define DEBUG_PRINT(...)
  #define DEBUG_PRINTLN(...)
  #define DEBUG_PRINF(...)
#endif


//#define DEBUG_LEVEL 1 		// tuto definici dat do kodu pred #include <DebugUtils.h>

#ifndef DEBUG_LEVEL
    #define DEBUG_LEVEL 0      // default debug level - zadny tisk
#endif

// **************************************************************************************************
// ********************** makra pro debugovaci tisk vice levelu *************************************
// **************************************************************************************************
#if DEBUG_LEVEL < 1       // level 0
  #define DEBUG_L1_PRINT(...)
  #define DEBUG_L1_PRINTLN(...)
  #define DEBUG_L2_PRINT(...)
  #define DEBUG_L2_PRINTLN(...)
  #define DEBUG_L3_PRINT(...)
  #define DEBUG_L3_PRINTLN(...)
#elif DEBUG_LEVEL == 1        // level 1
  #define DEBUG_L1_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_L1_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define DEBUG_L2_PRINT(...)
  #define DEBUG_L2_PRINTLN(...)
  #define DEBUG_L3_PRINT(...)
  #define DEBUG_L3_PRINTLN(...)
#elif DEBUG_LEVEL == 2        // level 2
  #define DEBUG_L1_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_L1_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define DEBUG_L2_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_L2_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define DEBUG_L3_PRINT(...)
  #define DEBUG_L3_PRINTLN(...)
#else                       // level 3
  #define DEBUG_L1_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_L1_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define DEBUG_L2_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_L2_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define DEBUG_L3_PRINT(...) Serial.print(__VA_ARGS__)
  #define DEBUG_L3_PRINTLN(...) Serial.println(__VA_ARGS__)
#endif

void freemem();

#endif	//DEBUGUTILS_H

