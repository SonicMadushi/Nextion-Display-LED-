#include <EasyNextionLibrary.h>
EasyNex n = EasyNex(Serial); //Obj  ekk hadanava(Data communicate karanne serial vidihata)


void setup() {
  // put your setup code here, to run once:
  n.begin(9600);//default 9600 Data trafer karana speed eka
  pinMode(13, OUTPUT); //port eka define kala

}

void loop() {
  // put your main code here, to run repeatedly:
  n.NextionListen();//hama velema input ekk enava da kiyala loop eke balanava






}
void trigger0() {
  digitalWrite(13, HIGH);

}

void trigger1() {
  digitalWrite(13, LOW);
}
