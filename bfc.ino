//generic template for blower. Features can be added to all blowers and blowers can be added as memory/GPIOs allow
struct blower {
  //TODO add external interupts for fan speed control, but this limits 2 blowers to 1 uno
  //power switch for each blower
  bool pwr_switch;
  //alive led, gpio output to verify the blower is initialized 
  bool alive_led;
  
  //physical on off switch to turn blower motors on nned?
  //bool on_off;
  
  //analog input read from potentiometer
  unsigned int speed_set;
  //variable used for actual output
  unsigned int output;
} blower_a, blower_b;

//inputs
unsigned int blower_a.speed_set = A0;
unsigned int blower_b.speed_set = A1; 
bool blower_a.pwr_switch = 2;
bool blower_b.pwr_switch = 4;

//outputs
unsigned int blower_a.output = 3;
unsigned int blower_b.output = 5;
bool blower_a.alive_led = 7;  
bool blower_b.alive_led = 8);

bool val;

void setup() {
  // put your setup code here, to run once:
  
  //LED to verify the Arduino is on and working
  pinMode(LED_BUILTIN, OUTPUT);
  writePin(LED_BUILTIN, HIGH);

  //set up inputs
  pinMode(blower_a.speed_set, INPUT);
  pinMode(blower_b.speed_set, INPUT);
  pinMode(blower_a.pwr_switch, INPUT);
  pinMode(blower_b.pwr_switch, INPUT);

  //set up outputs NOTE:pwm mode avaialable on pins D3,5,6,9,10,11
  pinMode(blower_a.output, OUTPUT);
  pinMode(blower_a.output, OUTPUT);
  pinMode(blower_a.alive_led, OUTPUT);
  pinMode(blower_b.alive_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //read if the power switch is on
  if(digitalRead(blower_a.pwr_switch)){
    digitalWrite(blower_a.alive_led, HIGH)
    //check the pot? TODO set the usable range a bit higher so below a threshold is a default value
    //if statements for VOC level checks?
    //wrap all this in a function? Avoid jumps if we can avoid it
  }

  //repeat
 
  
}
