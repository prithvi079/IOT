const int ldr = 22;
const int led = 21;
//int val;
bool val;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(ldr,INPUT);
pinMode(led,OUTPUT);

  //Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(ldr);
  //Serial.println(brihghtness level);
  //Serial.println(val);

  if(val==1)
  {
    digitalWrite(led,1);
    delay(1000);
  }

  else
  {
    digitalWrite(led,0);
    delay(1000);
  }

}
