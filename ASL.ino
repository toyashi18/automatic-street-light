#define relay 10
int LED=9;
int LDR=A0;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(relay,OUTPUT);
  pinMode(LDR,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  int LDRValue=analogRead(LDR);
  Serial.print("sensor=");
  Serial.print(LDRValue);
  if(LDRValue<=20)
{
  
  digitalWrite(LED,HIGH);
  digitalWrite(relay,HIGH);
  Serial.println("Dark:ON");
}
else
{
  
  digitalWrite(LED,LOW);
  digitalWrite(relay,LOW);
  Serial.println("BRIGHT:OFF");
}
}
  
