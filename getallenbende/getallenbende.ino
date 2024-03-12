void setup() {
  // put your setup code here, to run once:
pinMode(D3, OUTPUT);
pinMode(D5, OUTPUT);
pinMode(D6, OUTPUT);
Serial.begin(115200);
}

void loop() {
digitalWrite(D3, LOW ); 
digitalWrite(D5, LOW ); 
digitalWrite(D6, LOW ); 
Serial.println("hallo!");


int A = random(999);
int B = random(999);
int C = random(999);
int D = random(999);

if(A > B || A < C){
  digitalWrite(D3, HIGH ); 
}

if(C > A && C < B){
  digitalWrite(D5, HIGH ); 
}

if(B > C && B > A && C < A){
  digitalWrite(D6, HIGH );
   
}
if(D > A && D > B && D > C){
  digitalWrite(D3, HIGH ); 
   digitalWrite(D5, HIGH ); 
    digitalWrite(D6, HIGH );
    delay(250); 
    digitalWrite(D3, HIGH ); 
   digitalWrite(D5, HIGH ); 
    digitalWrite(D6, HIGH );
    delay(250);
    digitalWrite(D3, HIGH ); 
   digitalWrite(D5, HIGH ); 
    digitalWrite(D6, HIGH );
    delay(250);
    digitalWrite(D3, HIGH ); 
   digitalWrite(D5, HIGH ); 
    digitalWrite(D6, HIGH );
    delay(250);
    digitalWrite(D3, HIGH ); 
   digitalWrite(D5, HIGH ); 
    digitalWrite(D6, HIGH );
    delay(250);
  }
  delay(10000);
}
