#include <stdio.h>
#include <stdlib.h>

//참고 : https://rebas.kr/10
void secondConv(int second) {
	int sec, min, hour;
	sec = second;
	min = sec / 60;  // 입력받은 sec를 60으로 나누면 분(min)
	hour = min / 60; // min의 값을 60으로 나누면 시(hour)

	sec = sec % 60;  // 시분초로 바꿔주는 것이므로, sec를 60으로 나눠 그 나머지가 남은 초
	min = min % 60; //  min을 60으로 나눠 그 나머지가 남은 분

	if (hour > 0) { printf("%d시간 ", hour); }
	if (min > 0) { printf("%d분 ", min); }
	if (sec > 0) { printf("%d초 ", sec); }
	printf("\n");
}
int main(void) {
	int second;
	scanf("%d", &second); //초 입력
	secondConv(second);

	system("pause");
	return 0;
}