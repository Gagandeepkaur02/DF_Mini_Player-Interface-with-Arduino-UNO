#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(2, 3); // RX, TX
DFRobotDFPlayerMini player;

void setup() {

  Serial.begin(9600);
  mySerial.begin(9600);

  delay(3000);

  Serial.println("Starting DFPlayer...");

  if (player.begin(mySerial)) {

    Serial.println("DFPlayer detected!");

    player.volume(25);

    delay(1000);

    player.play(1);

  } else {

    Serial.println("DFPlayer NOT detected");
  }
}

void loop() {
}