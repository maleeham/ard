int data;
void setup() {
  
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
data=Serial.read();
if(data=='s')
digitalWrite(13,HIGH);
//Serial.println(data);

if(data=='b')
digitalWrite(13,LOW);
//Serial.println(data);
}

