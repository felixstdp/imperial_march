#include <Arduino.h>
#include <imperialmarch.h>
#include "imperialmarch.h"

#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

imperialmarch::imperialmarch(int speakerPin)
{
  pinMode(speakerPin, OUTPUT);
  _speakerPin=speakerPin;
}

void imperialmarch::march()
{
  beep(_speakerPin, a, 500);
  beep(_speakerPin, a, 500);
  beep(_speakerPin, a, 500);
  beep(_speakerPin, f, 350);
  beep(_speakerPin, cH, 150);
  beep(_speakerPin, a, 500);
  beep(_speakerPin, f, 350);
  beep(_speakerPin, cH, 150);
  beep(_speakerPin, a, 1000);
  beep(_speakerPin, eH, 500);
  beep(_speakerPin, eH, 500);
  beep(_speakerPin, eH, 500);
  beep(_speakerPin, fH, 350);
  beep(_speakerPin, cH, 150);
  beep(_speakerPin, gS, 500);
  beep(_speakerPin, f, 350);
  beep(_speakerPin, cH, 150);
  beep(_speakerPin, a, 1000);
  beep(_speakerPin, aH, 500);
  beep(_speakerPin, a, 350);
  beep(_speakerPin, a, 150);
  beep(_speakerPin, aH, 500);
  beep(_speakerPin, gSH, 250);
  beep(_speakerPin, gH, 250);
  beep(_speakerPin, fSH, 125);
  beep(_speakerPin, fH, 125);
  beep(_speakerPin, fSH, 250);
  delay(250);
  beep(_speakerPin, aS, 250);
  beep(_speakerPin, dSH, 500);
  beep(_speakerPin, dH, 250);
  beep(_speakerPin, cSH, 250);
  beep(_speakerPin, cH, 125);
  beep(_speakerPin, b, 125);
  beep(_speakerPin, cH, 250);
  delay(250);
  beep(_speakerPin, f, 125);
  beep(_speakerPin, gS, 500);
  beep(_speakerPin, f, 375);
  beep(_speakerPin, a, 125);
  beep(_speakerPin, cH, 500);
  beep(_speakerPin, a, 375);
  beep(_speakerPin, cH, 125);
  beep(_speakerPin, eH, 1000);
  beep(_speakerPin, aH, 500);
  beep(_speakerPin, a, 350);
  beep(_speakerPin, a, 150);
  beep(_speakerPin, aH, 500);
  beep(_speakerPin, gSH, 250);
  beep(_speakerPin, gH, 250);
  beep(_speakerPin, fSH, 125);
  beep(_speakerPin, fH, 125);
  beep(_speakerPin, fSH, 250);
  delay(250);
  beep(_speakerPin, aS, 250);
  beep(_speakerPin, dSH, 500);
  beep(_speakerPin, dH, 250);
  beep(_speakerPin, cSH, 250);
  beep(_speakerPin, cH, 125);
  beep(_speakerPin, b, 125);
  beep(_speakerPin, cH, 250);
  delay(250);
  beep(_speakerPin, f, 250);
  beep(_speakerPin, gS, 500);
  beep(_speakerPin, f, 375);
  beep(_speakerPin, cH, 125);
  beep(_speakerPin, a, 500);
  beep(_speakerPin, f, 375);
  beep(_speakerPin, c, 125);
  beep(_speakerPin, a, 1000);
}

void imperialmarch::beep (unsigned char _speakerPin, int frequencyInHertz, long timeInMilliseconds)
{
  int x;
  long delayAmount = (long)(1000000/frequencyInHertz);
  long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
  for (x=0;x<loopTime;x++)
  {
    digitalWrite(_speakerPin,HIGH);
    delayMicroseconds(delayAmount);
    digitalWrite(_speakerPin,LOW);
    delayMicroseconds(delayAmount);
  }
  delay(20);
}
