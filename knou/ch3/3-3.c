#include <stdio.h>

int main()
{
  // 출력 양식의 편집
  printf("|%d|\n", 123);
  printf("|%5d|\n", 123);
  printf("|%-5d|\n", 123);
  printf("|%05d|\n", 123);
  
  printf("|%6.1f|\n", 123.45);
  printf("|%07.2f|\n", 123.45);

  return 0;
}