//coding_test
//(A+B)%C는 ((A%C) + (B%C))%C 와 같을까? (A×B)%C는 ((A%C) × (B%C))%C 와 같을까? 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void) {
  int A,B;
   scanf("%d %d",&A,&B);
  
  int a = B%10; //5
  int b = B%100-a;//80
  int c = B-b-a; //300
  
  
  printf("%d\n",A*a);
  printf("%d\n",(A*b)/10);
  printf("%d\n",(A*c)/100);
  printf("%d",A*a+A*b+A*c);
  return 0;
}
