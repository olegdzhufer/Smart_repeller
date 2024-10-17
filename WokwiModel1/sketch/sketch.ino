void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(15, OUTPUT);
  pinMode(21, INPUT);
}
int b = 0;
int a = 0;
bool run = false;
void loop() {
  a = digitalRead(3);
  b = digitalRead(21);
  if (b) {
    b = 0;
    run = !run;
    Serial.println(run);
    delay(1000);
  }
  if (a && run){
    a = 0;
    tone(15, 100, 5000);
    delay(5000);
  }
}
