#include <stdio.h>

int main(void)
{
  // 실수의 출력을 위한 서식문자들 : %f, %e, %g
  printf("%f \n", 0.1234);  // 0.123400
  printf("%e \n", 0.1234);   //1.234000e-001
  printf("%f \n", 0.12345678);  //0.123457
  printf("%e \n", 0.12345678);  //1.234568e-001 e표기법 -> 지수형태의 출력

  /*
  0.123400 
  1.234000e-01 
  0.123457 
  1.234568e-01 
  */

  return 0;
}