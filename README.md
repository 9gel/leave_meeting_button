# Zoom Leave Meeting Button

<img src="./images/switch.jpg?raw=true" width="400" height="400"/>

Files for building your own Single-button "keyboard" that does only one thing - leave any Zoom meetings.

See demo here: https://www.youtube.com/watch?v=0GqqAG8KL6Q

## What it is

* A single-switch mechanical keyboard / macropad with a large 3D-printed keycap
* Supported by 3 stabilizers so you can press anywhere
* Powered by a Pro Micro
* Really only sends an Alt-F4 to the active window. So this assumes the Zoom window is the current focus
* A prototype - not for sale (yet) - if you would rather buy something like this, [let me know here](https://us7.list-manage.com/survey?u=ac16f42c5affbb6b6658ad19d&id=0ef51ae243) . If there's enough interest, I'll figure out how to mass-produce this

## How to build (TL;DR)

* Procure:
  * A standard Cherry switch
  * One 6.25x plate-mounted stabilizer
  * Two 2x plate-mounted stabilizer
  * A Sparkfun Pro Micro, clone, or a microcontroller of your choosing
  * A 10K resistor - 1/4 W worked for me
  * Two M3x10 countersunk screws
  * Two M3 nuts
* Print the 3 STL files
* Wire up the switch and program
  * Flash the Pro Micro - included `leavemeeting` file is an example
  * Wire up the Pro Micro
* Assemble the thing like the above image

## Outstanding items

If you can help out here it will be much appreciated:

* Complete the detailed version of the build
* Use [Autohotkey](https://www.autohotkey.com/) for more reliable scripting
* Test on a Mac with different key presses
* Use a cheaper microcontroller - some suggested digispark / Attiny85
* RGB lighting effects?
* Figure out if I should get it mass produced (?)

## How to build (Detailed version)

TODO - circuit diagram, etc.

