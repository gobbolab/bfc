//generic template for blower. Features can be added to all blowers and blowers can be added as memory/GPIOs allow
#include <Wire.h>
//physical power switch blower
bool pwr_switch = 2;
//gpio input indicating web ui start blower
bool web_start = 4;
//alive led, gpio output to verify the blower is initialized 
bool on_led = 7;
//variable used for actual output
int output = 3;
int LED_BUILTIN;
bool run;

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(115200);
  //LED for quick visual feedback arduino is on
  pinMode(LED_BUILTIN, OUTPUT);
  writePin(LED_BUILTIN, HIGH);

  //set up inputs
  pinMode(pwr_switch, INPUT);
  pinMode(web_start, INPUT);
  

  //set up outputs NOTE:pwm mode avaialable on pins D3,5,6,9,10,11
  pinMode(output, OUTPUT);
  pinMode(on_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //read if the power switch is on
  if(digitalRead(pwr_switch) || digialRead(web_start){
    analogWrite(output, 255);
    digitalWrite(on_led, HIGH);
  } else{
    analogWrite(output, 0);
    digitalWrite(on_led, LOW);
  }
  
  //repeat
}


