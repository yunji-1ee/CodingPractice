// coding_test
//문자열을 입력할 땐 변수 앞에 &를 붙이지 않음! 그리고 문자열 변수를 선언할 때에는 []로 크기지정을 같이 해줘야 함
#include <stdio.h>


int main(void) {
   char name[50];
   scanf("%s",name);

  printf("%s??!",name);

  
  return 0;
}
