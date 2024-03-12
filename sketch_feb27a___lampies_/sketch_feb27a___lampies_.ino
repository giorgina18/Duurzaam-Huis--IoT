#include  <ArduinoJson.h>

JsonDocument doc;
char jsonOut[128];


void setup() {
Serial.begin(115200); 
pinMode(D3, OUTPUT);
pinMode(D5, OUTPUT);
pinMode(D6, OUTPUT);

}

void loop() {
  int idr_value = analogRead(A0);
  Serial.println(idr_value);
 CreateJSON();
 delay(100);

 if(idr_value < 500){
   digitalWrite(D3, HIGH ); 
    delay(200);
    digitalWrite(D3, LOW);
   digitalWrite(D5, HIGH ); 
   delay(500);
    digitalWrite(D5, LOW);
     digitalWrite(D6, HIGH ); 
   delay(100);
    digitalWrite(D6, LOW);
   
 };
}

void CreateJSON(){
  doc["licht"] = "193";
   doc["licht2"] = "320";
   serializeJson(doc, jsonOut);
   
   serializeJson(doc, Serial);
}
