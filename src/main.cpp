#include <Arduino.h>
#include <stdbool.h>

// void setup() {
//   // put your setup code here, to run once:
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }
#define BLINK_MS 150

int main (){
  DDRB |= 0b00100000;
  //Serial.begin(9600);


  while(true){

    PORTB |= 0b00100000;
    _delay_ms(BLINK_MS);
    PORTB &= ~0b00100000;
    _delay_ms(BLINK_MS);
    Serial.println("loop completed");
  }
}