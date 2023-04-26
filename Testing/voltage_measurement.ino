
int v1;
int v2;
float current;

void setup() {
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);

}

void loop() {
  v1 = analogRead(A1);
  v2 = analogRead(A2);
  current = analogRead(A0);
 float voltage1 = v1 * (3.3 / 1023.0);
 float voltage2 = v2 * (3.3 / 1023.0);
 
  Serial.println("V1: ");
  Serial.println(voltage1);
  Serial.println("V2: ");
  Serial.println(voltage2);
  Serial.println("Current: ");
  Serial.println(current);
}
