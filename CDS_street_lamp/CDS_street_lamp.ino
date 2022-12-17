void setup() {
  pinMode(13, OUTPUT);        // 디지털 13번을 출력모드로 설정
  Serial.begin(9600);
}

void loop() {
  int readValue = analogRead(A0);
  Serial.println(readValue);

  if(readValue > 100)
    digitalWrite(13, HIGH);   // 빛이 어두우면 가로등을 켠다.
  else
    digitalWrite(13, LOW);    // 빛이 밝으면 가로등을 끈다.
}
