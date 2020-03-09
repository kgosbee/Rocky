#include <Balboa32U4.h>

Balboa32U4Buzzer buzzer;

const char fugue[] PROGMEM =
"T98 L4 rr L8 f#ef#ef#e L16 f# L8 ef#a L4 g# L2 r" 
"L16 a L8 ag#. L16 f# L8 f#. L16 e L8 f#ef#a L4 g# L4 r. L16 r"
"L8 ef#ef#ef#e L16 f# L8 ef#a L4 g# L4 r. L16 r"
"L16 f#g# L8 ag#. L16 f# L8 f#. L16 e L8 f#. L16e L8f#a. L4 g#r>c#b "
"L8 bababa L16 g# L8 g# g#.e L4 f# L8 r. L16 f#e L8 a L4 g# L8 ra.g#. L16 f# L8 f#f#. L4 arb"
"L8 rag#f#g#f#g#f# L16 f# L8 f# L4 a L2 r L16 f#a L8 ag#. L16 f# L8 g#. L16 f# L8 g# L16 f# L8 f#.a. L4 g# L8 r. MS f# L4 f#f#" 
"ML L8 a L16 aa L8 g# L16 g#g# L8 g# L16 f#f# L8 a. L4 f# L2 r L16 f#a L8 ag#. L16 g#f#g#f#g# L8 f#g# L16 f# L8 ag#f#a L4 rf#f#"
"L8 a L16 aa L8 g# L16 g#g# L8 g# L16 f#f# L8 a. L4 f# L2 r L16 f#a L8 ag#. L8 f#g#f# L16 g# L8 f#a.g#f#a";

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  // Start playing a fugue from program space.
  buzzer.playFromProgramSpace(fugue);

  // Wait until it is done playing.
  while(buzzer.isPlaying()){ }

}
