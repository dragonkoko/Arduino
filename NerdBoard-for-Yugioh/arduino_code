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
  
  if(sensor_field_one<400) {
     digitalWrite(led_field_one, HIGH);
  } else {
     digitalWrite(led_field_one, LOW);
  }
  
  if(sensor_field_two>1015) {
     digitalWrite(led_field_two, HIGH);
  } else {
     digitalWrite(led_field_two, LOW);
  }
  
  if(sensor_field_three<100) {
     digitalWrite(led_field_three, HIGH);
  } else {
     digitalWrite(led_field_three, LOW);
  }
  
  if(sensor_field_four<700) {
     digitalWrite(led_field_four, HIGH);
  } else {
     digitalWrite(led_field_four, LOW);
  }
  
  if(sensor_field_five>1015) {
     digitalWrite(led_field_five, HIGH);
  } else {
     digitalWrite(led_field_five, LOW);
  }
  
  if(sensor_field_six<600) {
     digitalWrite(led_field_six, HIGH);
  } else {
     digitalWrite(led_field_six, LOW);
  }
  
  if(sensor_field_seven<200) {
     digitalWrite(led_field_seven, HIGH);
  } else {
     digitalWrite(led_field_seven, LOW);
  }
  
  if(sensor_field_eight<700) {
     digitalWrite(led_field_eight, HIGH);
  } else {
     digitalWrite(led_field_eight, LOW);
  }
  
  if(sensor_field_nine<150) {
     digitalWrite(led_field_nine, HIGH);
  } else {
     digitalWrite(led_field_nine, LOW);
  }
  
  if(sensor_field_ten<200) {
     digitalWrite(led_field_ten, HIGH);
  } else {
     digitalWrite(led_field_ten, LOW);
  }
  Serial.println("1");
  Serial.println(sensor_field_one);
  Serial.println("2");
  Serial.println(sensor_field_two);
  Serial.println("3");
  Serial.println(sensor_field_three);
  Serial.println("4");
  Serial.println(sensor_field_four);
  Serial.println("5");
  Serial.println(sensor_field_five);
  Serial.println("6");
  Serial.println(sensor_field_six);
  Serial.println("7");
  Serial.println(sensor_field_seven);
  Serial.println("8");
  Serial.println(sensor_field_eight);
  Serial.println("9");
  Serial.println(sensor_field_nine);
  Serial.println("10");
  Serial.println(sensor_field_ten);
  
  delay(100);        // delay in between reads for stability
}
