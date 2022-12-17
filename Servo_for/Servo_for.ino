#include<Servo.h> //Servo 라이브러리를 추가
Servo servo;      //Servo 클래스로 servo객체 생성
int value = 0;    // 각도를 조절할 변수 value
int ii = 0;     // for 구문의 변수 선언


void setup() {
  servo.attach(7);     //맴버함수인 attach : 핀 설정
}

void loop() {
  for(ii = 0; ii < 180 ; ii++)
  {
    servo.write(ii);
    delay(30);
  }

  for(ii = 179; ii > 0; ii--) // ii-- : ii가 1씩 작아진다.
  {
    servo.write(ii);
    delay(30);
  }
}
