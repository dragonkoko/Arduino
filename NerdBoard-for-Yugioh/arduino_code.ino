//diode pins
int led_field_one = 22;
int led_field_two = 26;
int led_field_three = 30;
int led_field_four = 34;
int led_field_five = 38;
int led_field_six = 42;
int led_field_seven = 46;
int led_field_eight = 50;
int led_field_nine = 49;
int led_field_ten = 45;
//shadow intensity setup flags
int flag1 = 0;
int flag3 = 0;
int flag4 = 0;
int flag6 = 0;
int flag7 = 0;
int flag8 = 0;
int flag9 = 0;
int flag10 = 0;
//shadow intensity at start setup
int sensor_shadow_one;
int sensor_shadow_three;
int sensor_shadow_four;
int sensor_shadow_six;
int sensor_shadow_seven;
int sensor_shadow_eight;
int sensor_shadow_nine;
int sensor_shadow_ten;

int counter = 0; //needed to setup shadows

void setup() {
  pinMode(led_field_one, OUTPUT);
  pinMode(led_field_two, OUTPUT);
  pinMode(led_field_three, OUTPUT);
  pinMode(led_field_four, OUTPUT);
  pinMode(led_field_five, OUTPUT);
  pinMode(led_field_six, OUTPUT);
  pinMode(led_field_seven, OUTPUT);
  pinMode(led_field_eight, OUTPUT);
  pinMode(led_field_nine, OUTPUT);
  pinMode(led_field_ten, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  
  // read the input on analog pin 0:
  int sensor_field_one = analogRead(A0);
  int sensor_field_two = analogRead(A1);
  int sensor_field_three = analogRead(A2);
  int sensor_field_four = analogRead(A3);
  int sensor_field_five = analogRead(A5);
  int sensor_field_six = analogRead(A7);
  int sensor_field_seven = analogRead(A8);
  int sensor_field_eight = analogRead(A9);
  int sensor_field_nine = analogRead(A15);
  int sensor_field_ten = analogRead(A11);
  
  
  //getting shadow intensity at start
  if((flag1 == 0) && (counter == 10)) {
    sensor_shadow_one = sensor_field_one;
    flag1 = 1;
  }
  
  if((flag3 == 0) && (counter == 10)) {
    sensor_shadow_three = sensor_field_three;
    flag3 = 1;
  }
  
  if((flag4 == 0) && (counter == 10)) {
    sensor_shadow_four = sensor_field_four;
    flag4 = 1;
  }
  
  
  if((flag6 == 0) && (counter == 10)) {
    sensor_shadow_six = sensor_field_six;
    flag6 = 1;
  }
  
  if((flag7 == 0) && (counter == 10)) {
    sensor_shadow_seven = sensor_field_seven;
    flag7 = 1;
  }
  
  if((flag8 == 0) && (counter == 10)) {
    sensor_shadow_eight = sensor_field_eight;
    flag8 = 1;
  }
  
  if((flag9 == 0) && (counter == 10)) {
    sensor_shadow_nine = sensor_field_nine;
    flag9 = 1;
  }
  
  if((flag10 == 0) && (counter == 10)) {
    sensor_shadow_ten = sensor_field_ten;
    flag10 = 1;
  }
  
  //check to light on and off leds
  if(sensor_field_one<sensor_shadow_one - 75) {
     digitalWrite(led_field_one, HIGH);
  } else {
     digitalWrite(led_field_one, LOW);
  }
  
  if(sensor_field_two>1015) {
     digitalWrite(led_field_two, HIGH);
  } else {
     digitalWrite(led_field_two, LOW);
  }
  
  if(sensor_field_three<sensor_shadow_three - 75) {
     digitalWrite(led_field_three, HIGH);
  } else {
     digitalWrite(led_field_three, LOW);
  }
  
  if(sensor_field_four<sensor_shadow_four - 65) {
     digitalWrite(led_field_four, HIGH);
  } else {
     digitalWrite(led_field_four, LOW);
  }
  
  if(sensor_field_five>1010) {
     digitalWrite(led_field_five, HIGH);
  } else {
     digitalWrite(led_field_five, LOW);
  }
  
  if(sensor_field_six<sensor_shadow_six - 75) {
     digitalWrite(led_field_six, HIGH);
  } else {
     digitalWrite(led_field_six, LOW);
  }
  
  if(sensor_field_seven<sensor_shadow_seven - 50) {
     digitalWrite(led_field_seven, HIGH);
  } else {
     digitalWrite(led_field_seven, LOW);
  }
  
  if(sensor_field_eight<sensor_shadow_eight - 50) {
     digitalWrite(led_field_eight, HIGH);
  } else {
     digitalWrite(led_field_eight, LOW);
  }
  
  if(sensor_field_nine<sensor_shadow_nine - 70) {
     digitalWrite(led_field_nine, HIGH);
  } else {
     digitalWrite(led_field_nine, LOW);
  }
  
  if(sensor_field_ten<sensor_shadow_ten - 50) {
     digitalWrite(led_field_ten, HIGH);
  } else {
     digitalWrite(led_field_ten, LOW);
  }
  
  //debugging
  Serial.println("1");
  Serial.println(sensor_shadow_one);
  Serial.println("3");
  Serial.println(sensor_shadow_three);
  Serial.println("4");
  Serial.println(sensor_shadow_four);
  Serial.println("6");
  Serial.println(sensor_shadow_six);
  Serial.println("7");
  Serial.println(sensor_shadow_seven);
  Serial.println("8");
  Serial.println(sensor_shadow_eight);
  Serial.println("9");
  Serial.println(sensor_shadow_nine);
  Serial.println("10");
  Serial.println(sensor_shadow_ten);
  
  delay(100);        // delay in between reads for stability
  
  if(counter < 15) {
    counter += 1;
  }
}
