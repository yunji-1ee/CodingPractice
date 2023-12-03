# coding_test
#include <stdio.h>

int main(void) {
  double A,B;
  scanf("%lf %lf",&A,&B);
  printf("%.9f",A/B);
  
  return 0;
}

//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
//실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.  -> 소수 9자리 이상으로 출력시키기
// -> 문제를 꼼꼼히 읽자!! 
