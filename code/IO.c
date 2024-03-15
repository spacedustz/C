#include <stdio.h>
// 권장하지 않는 함수 사용에 대한 경고 무시
#pragma warning(disable:4996)

void main() {
  int jsu1, jsu2;
  float ssu1, ssu2;

  printf("\n정수를 입력하세요");
  scanf("%d %d", &jsu1, &jsu2);

  printf("\n실수를 입력하세요");
  scanf("%f %f", &ssu1, &ssu2);

  printf("\n정수는 %d %d\n", jsu1, jsu2);
  printf("실수는 %f %f\n", ssu1, ssu2);
}