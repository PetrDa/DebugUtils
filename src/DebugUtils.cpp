
#if ARDUINO >= 100
#include "Arduino.h"
#else
extern "C" {
#include "WConstants.h"
}
#endif

#if DEBUG_LEVEL > 0       // level 1 a vyse, aby nezabirala pamet pri level 0
	#include <MemoryFree.h>
#endif

void freemem() {
	#if DEBUG_LEVEL > 0       // level 1 a vyse, aby nezabirala pamet pri level 0
		Serial.print(F("Free RAM = ")); //F function does the same and is now a built in library, in IDE > 1.0.0
		Serial.println(freeMemory(), DEC);  // print how much RAM is available.
	#endif
}