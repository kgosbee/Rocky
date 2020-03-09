#include <Balboa32U4.h>

Balboa32U4Buzzer buzzer;

const char fugue[] PROGMEM =
  "T98 L8 f#ef#ef#e L16 f# L8 e f#.a L2 g# L4 r L16 r L16 a L8 ag#. L16 f# L8 f#. L16 e L8 f#ef#ag# L16 g# L2 g#";

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  // Start playing a fugue from program space.
  buzzer.playFromProgramSpace(fugue);

  // Wait until it is done playing.
  while(buzzer.isPlaying()){ }

  delay(1000);
}
