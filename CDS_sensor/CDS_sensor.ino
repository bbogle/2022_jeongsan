void setup() {
  Serial.begin(9600);             // 시리얼 통신 초기화
}

void loop() {
  int readValue = analogRead(A0); // 조도센서 값 측정
  Serial.println(readValue);      // 조도센서 값 출력
}
