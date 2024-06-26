#include <stdio.h>

int score_sum(int gr[], int); //score_sum 함수 원형


/**
 * 배열이 함수의 매개변수로 사용된 예시
*/
void main() {
  int score[5] = {10, 20, 30, 40, 50};
  int sum;
  sum = score_sum(score, 5);
  printf("sum = %d \n", sum);
  printf("score[0] = %d \n", score[0]);
}

/*
  함수의 헤더에 매개변수 gr의 배열의 크기를 명시하지 않아도 됨
  만약 크기를 명시할 경우, 매개변수 배열의 크기는 항상 한 크기로만 고정됨
  배열이 매개변수로 전달될 때에는 배열의 값이 복사되어 전달되는 것이 아니라,
  배열의 위치만 전달(즉, 참조에 의한 자료 전달 방법 사용)
*/
int score_sum(int gr[], int size) {
  int sum = 0;
  int i;
  for (i = 0; i < size; i++)
    sum += gr[i];
  gr[0] = 0;
  return sum;
}