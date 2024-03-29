#include <stdio.h>
#define ADDR "서울시 종로구 대학로 86(동숭동)"
#define TEL "1577-999520"

/*
  매크로(Macro)란 선행처리기 #define을 사용하여 단순 치환되는 자료를 만한다.

  [장점]
  - 선행처리기에 의한 단순 치환 방식
  - 전달 인자의 자료형을 명시할 필요가 없고, 어떤 자료형을 전달해도 동작
  - 단순 치환 방식이므로 한두줄의 코드의 경우 함수보다 빠르다.
*/
int main()
{
  printf("한국방송통신대학교 주소 : %s \n", ADDR);
  printf("한국방송통신대학교 전화 : %s \n", TEL);
}