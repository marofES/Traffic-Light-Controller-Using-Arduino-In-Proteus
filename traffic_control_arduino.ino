const int g1 = 2;
const int y1 = 3; 
const int r1 = 4;
const int g2 = 5;
const int y2 = 6;
const int r2 = 7;
const int g3 = A4;
const int y3 = 9;
const int r3 = 10;
const int g4 = 11;
const int y4 = 12;
const int r4 = 13;
const int pR = A2;
const int pG = A3;
const int pin = 8;


void setup()

{
pinMode (r1, OUTPUT);
pinMode (y1, OUTPUT);
pinMode (g1, OUTPUT);
pinMode (r2, OUTPUT);
pinMode (y2, OUTPUT);
pinMode (g2, OUTPUT);
pinMode (r3, OUTPUT);
pinMode (y3, OUTPUT);
pinMode (g3, OUTPUT);
pinMode (r4, OUTPUT);
pinMode (y4, OUTPUT);
pinMode (g4, OUTPUT);
pinMode (pR, OUTPUT);
pinMode (pG, OUTPUT);
pinMode (pin, INPUT);
digitalWrite (r1, HIGH);
digitalWrite (r2, HIGH);
digitalWrite (r3, HIGH);
digitalWrite (r4, HIGH);
digitalWrite (pR, HIGH);
}

void loop() { 

int crossIn = digitalRead (pin);
if (crossIn == HIGH){
  WalkTime();}
else 
{
delay(100);
digitalWrite (r1, LOW);    
digitalWrite(g1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
delay(5000);
}
int crossIn2 = digitalRead (pin);
if (crossIn2 == HIGH){
  WalkTime();}
else 
{
digitalWrite(g1,LOW);

digitalWrite(y1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
delay(2000);
}
int crossIn3 = digitalRead (pin);
if (crossIn3 == HIGH){
  WalkTime();}
else 
{  
digitalWrite(y1,LOW);
digitalWrite(r2,LOW);

digitalWrite(r1,HIGH);
digitalWrite(g2,HIGH); 
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
delay(5000);
}
int crossIn4 = digitalRead (pin);
if (crossIn4 == HIGH){
  WalkTime();}
else 
{
digitalWrite(g2,LOW);

digitalWrite(y2,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
delay(2000);
}
int crossIn5 = digitalRead (pin);
if (crossIn5 == HIGH){
  WalkTime();}
else 
{
digitalWrite(y2,LOW);
digitalWrite(r3,LOW);

digitalWrite(g3,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r4,HIGH);
delay(5000);
}
int crossIn6 = digitalRead (pin);
if (crossIn6 == HIGH){
  WalkTime();}
else 
{
digitalWrite(g3,LOW);

digitalWrite(y3,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r4,HIGH);
delay(2000);
}
int crossIn7 = digitalRead (pin);
if (crossIn7 == HIGH){
  WalkTime();}
else 
{
digitalWrite(y3,LOW);
digitalWrite(r3,LOW);
digitalWrite(r4,LOW);

digitalWrite(g4,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
delay(5000);
}
int crossIn8 = digitalRead (pin);
if (crossIn8 == HIGH){
  WalkTime();}
else 
{
digitalWrite(g4,LOW);
digitalWrite(r4,LOW);


digitalWrite(y4,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
delay(2000);
}
digitalWrite(y4,LOW);
digitalWrite(r4,LOW);
digitalWrite(r1,LOW);

}

void WalkTime() {
  delay(350);
digitalWrite (g1, LOW);digitalWrite (g2, LOW);digitalWrite (g3, LOW);digitalWrite (g4, LOW);
digitalWrite (y1, LOW);digitalWrite (y2, LOW);digitalWrite (y3, LOW);digitalWrite (y4, LOW);
digitalWrite (r1, HIGH);digitalWrite (r2, HIGH);digitalWrite (r3, HIGH);digitalWrite (r4, HIGH);

   
  digitalWrite (pG, HIGH); 
  digitalWrite (pR, LOW);
  delay (3000);
  digitalWrite (pG, LOW); 
 
  delay(250);
  for (int x = 0; x < 5; x++) {  
    digitalWrite(pG, HIGH);
    delay(250);
    digitalWrite(pG, LOW);
    delay(250);
  }
  digitalWrite(pR, HIGH);
}
