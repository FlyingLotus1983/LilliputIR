# LilliputIR

A blatantly-hacked together Arduino library that outputs Lilliput TFT LCD infrared remote codes #noshame

### Context and Usage

This library will output infrared remote control codes to control a Lilliput TFT LCD.  You may either use an infrared LED near the IR receiver, or use some resistors to inject the signal directly.  The library supports:

* Power on/off
* Mute
* Left
* Right
* Up
* Down
* Menu
* Input

### Other Musings on the Hackathon-Level Coding Quality

This library was hacked together some time back in 2012, in the span of a half-hour (if that), including reverse-engineering time.  It was done by recording the pulse train as measured by an IR photodetector wired to an Arduino with a badly-written sketch.  The timing values were output to the serial port, ran through a shell script that formatted them into a long chain of `digitalWrite()`'s and `delayMicroseconds()` ... It was ugly as sin, but it worked, and I had memory to spare.  I never got around to re-writing it, as I could never get the touchscreen working on that monitor with OSX.  
