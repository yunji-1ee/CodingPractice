// coding_test

#include <stdio.h>

int main(void)
{
	int temp;
	int hour, min, time;	//현재 시각(시, 분), 요리 시간

	scanf("%d %d", &hour, &min);
	scanf("%d", &time);

	temp = hour * 60 + min + time;	//분으로 환산해 더하기

	hour = temp / 60;	//시간으로 변환
	if (hour > 23) hour -= 24;	//24시가 넘으면 0으로 바꾸기
	min = temp % 60;	//나머지는 분

	printf("%d %d", hour, min);

	return 0;
}
