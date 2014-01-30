#ifndef imperialmarch_h
#define imperialmarch_h

class imperialmarch{

public:
  imperialmarch(int speakerPin);
  void march();
  
private:
  void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMiliseconds);
  int _speakerPin;
  
};
#endif
