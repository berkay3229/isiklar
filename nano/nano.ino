int r_pin = 9;
int g_pin = 5;
int b_pin = 11;
int w_pin = 6;

int r_parlak =255;
int g_parlak =255;
int b_parlak =255;
int w_parlak =255;

byte anahtar = 2;

void setup() {
  pinMode(r_pin,OUTPUT);
  pinMode(g_pin,OUTPUT);
  pinMode(b_pin,OUTPUT);
  pinMode(w_pin,OUTPUT);

  pinMode(anahtar,INPUT);

  analogWrite(r_pin,r_parlak);
  analogWrite(g_pin,g_parlak);
  analogWrite(b_pin,b_parlak);
  analogWrite(w_pin,w_parlak);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(anahtar=1){
    //serial haberleşmeden veri al 
    }

}
