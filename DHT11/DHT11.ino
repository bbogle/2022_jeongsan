#include <DHT11.h>
int pin = A1;         // 핀 설정
DTH11 dht11(pin);

void setup() {
  Serial.begin(9600);
  delay(5000);
}

void loop() {
  int i;
  float humi, temp;
  if((i=dht11.read(humi, temp)) == 0) { // 온도, 습도 값을 읽어오면
    Serial.print("humidity: ");
    Serial.print(humi);             // 습도값 출력
    Serial.print(", temperature: ");
    Serial.println(temp);           // 온도값 출력
  }
  else {
    Serialprint("Error");
    Serial.print(i);
  }
  delay(2000);
}
