// coding_test

//왜 이건 틀리고
#include <stdio.h>

int main(void) { 
  
  int dice1, dice2,dice3; 
  int price=0;
  int max=0;
  scanf("%d %d %d", &dice1, &dice2, &dice3);

  // 같은 눈이 3개가 나오는 경우
  if (( dice1 == dice2 )&&( dice2 == dice3 )&&( dice1 == dice3 )){
    price = 10000 + dice1 * 1000;
  }
  // 같은 눈이 2개만 나오는 경우
  else if ((dice1 == dice2) || (dice1 == dice3) || (dice2 == dice3)) {
  if (dice1 == dice2 || dice1 == dice3) {
    price = 1000 + dice1 * 100;
  } else {
    price = 1000 + dice2 * 100;
  }

  }
  //모두 다른 눈이 나오는 경우  
  else {
    if((dice1<dice2)&&(dice2<dice3)){ //dice3이 최대
      max=dice3;}
    else if((dice1<dice2)&&(dice3<dice2)){ //dice2가 최대
      max=dice2;}
    else {
      max=dice1;
    }
    price=max*100;
  }
  
  printf("%d",price);

return 0;
}



//이건 맞을까
#include <stdio.h>
 
int main() {
 
    int a, b, c;
    int prize = 0;
    int max = 0;
    scanf("%d %d %d", &a, &b, &c);
 
    if (a == b && b == c && a == c)
        prize = 10000 + a * 1000;
 
 
    else if (a == b || a == c)
        prize = 1000 + a * 100;
 
 
    else if (b == c)
        prize = 1000 + b * 100;
 
 
    else {
        if (a > b && a > c)
            max = a;
        else if (b > a && b > c)
            max = b;
        else if (c > a && c > b)
            max = c;
 
 
        prize = max * 100;
    }
 
 
    printf("%d", prize);
 
}
