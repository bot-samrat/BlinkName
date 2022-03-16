//initialising led pins
int led1 = D0; 
int led2 = D7; 

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
//dot and dash for morse
void light_on_dot(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(200);
}
void light_on_dash(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(600);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(200);
}

void loop() {
    //s
    light_on_dot();
    light_on_dot();
    light_on_dot();
    delay(200);
    
    //a
    light_on_dot();
    light_on_dash();
    delay(200);
    
    //m
    light_on_dash();
    light_on_dash();
    delay(200);
    
    //r
    light_on_dot();
    light_on_dash();
    light_on_dot();
    delay(200);
    
    //a
    light_on_dot();
    light_on_dash();
    delay(200);
    
    //t
    light_on_dash();
    delay(200);
}
