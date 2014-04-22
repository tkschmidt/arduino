/*
  HSN5643AS Counter
  Counts up from 0 to 9, and then back to zero.
  Created by Melchior M. Philips for Melchilib.
  Feel free to use and modify this code to your hearts content.
  Do not reupload or host this code elsewhere, thank you.
*/
 
// Here we set the segments to the corresponding pins on the Arduino.
// Modify to fit your set-up.
int a = 4;
int b = 6;
int c = 11;
int d = 7;
int e = 9;
int f = 5;
int g = 13;
int h = 10;

// All Segments Off
void char_off() {
  digitalWrite(a, LOW); 
  digitalWrite(b, LOW); 
  digitalWrite(c, LOW); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);  
}

// Zero
void char_zero() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);  
}

// One
void char_one() {
  digitalWrite(a, LOW); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);  
}

// Two
void char_two() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, LOW); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// Three
void char_three() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// Four
void char_four() {
  digitalWrite(a, LOW); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// Five
void char_five() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// Six
void char_six() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// Seven
void char_seven() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);  
}

// Eight
void char_eight() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// Nine
void char_nine() {
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);  
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT); 
  pinMode(c, OUTPUT); 
  pinMode(d, OUTPUT); 
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT); 
  pinMode(g, OUTPUT); 
  pinMode(h, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  char_zero();    // Zero
  delay(500);     // Wait for 500 miliseconds (1/5th of a second)
  char_one();     // One
  delay(500);  
  char_two();     // Two
  delay(500);  
  char_three();   // Three
  delay(500);  
  char_four();    // Four
  delay(500);  
  char_five();    // Five
  delay(500);  
  char_six();     // Six
  delay(500);  
  char_seven();   // Seven
  delay(500);    
  char_eight();   // Eight
  delay(500);  
  char_nine();    // Nine
  delay(500);  
}
