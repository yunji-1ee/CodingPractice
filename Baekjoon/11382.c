// coding_test
//간단한 입출력 문제이지만10¹² x 3일 경우 int 자료형의 범위를 초과하기 때문에 int 보다 더 큰 범위인 long long으로 변수를 선언한다.

#include <stdio.h>

int main(void) {
  long long A,B,C;
   scanf("%lld %lld %lld",&A,&B,&C);
  
  printf("%lld",A+B+C);
  
  return 0;
}
