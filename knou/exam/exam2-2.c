/*
  예제 : C언어의 선행처리기인 #define문을 이용한 상수 정의 및 
        반지름을 입력받아 원의 면적을 구하는 프로그램
  파일 이름 : exam2-2.c
  수정 일자 : 2024년 5월 5일
  작성자 : 박진호
*/
#include <stdio.h>
#define IN  "원의 반지름은 100입니다. \n"
#define PI  3.1415926535
#define AREA(X) (PI*(X)*(X))
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다. \n");
/*
  [선행처리기]
  - 컴파일에 앞서 프로그램 선두에 선언된 지시자들을 미리 처리하는 역할

  [선행처리기 종류]
  - #include  : 파일 포함
  - #define : 매크로 정의
  - #if, #else, #elif, #endif : 조건부 컴파일

  [주의점]
  - 반드시 #로 시작
  - 명령문 끝에는 세미콜론을 붙이지 않음
  - 한 줄에 하나의 명령만 쓴다
  - 소스 프로그램 첫 부분에 위치한다
*/
void main() {
  printf("%s \n", IN);  // IN = "원의 반지름은 100입니다. \n"
  printf("원의 면적은 %10.5f입니다. \n\n", AREA(100)); 
  /*
  AREA(100) => #define AREA(X) (PI*(X)*(X)) => AREA(100)  PI * 100 * 100
  3.1415926535 * 100 * 100
  3.1415926535 * 10000 = 31415.926535 을 소수점이하 5자리까지 표기
  */

  OUT;  //printf("원의 면적을 구하고 프로그램을 종료합니다. \n");
}