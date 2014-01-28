#ifndef imperialmarch_h
#define imperialmarch_h

class imperialmarch{

public:
  imperialmarch();
  void march();
  
private:
  void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMiliseconds);
  
};
#endif
