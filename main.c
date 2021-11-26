#include <stdio.h>
#include <stdlib.h>

//enum Month { January = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }; //주석처리
enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec, MonthCount}; //수정일 2021.11.26 

int main(void) {

	printf("%d %d %d %d ", Jan, Feb, Mar, Apr);
	printf("%d %d %d %d ", May, Jun, Jul, Aug);
	printf("%d %d %d %d\n", Sep, Oct, Nov, Dec);

	printf("===========================================\n");

	// enum 배열 마지막에 ~Count 항목을 추가해주면 이숫자가 enum 의 갯수를 반환해줌
	// 출처 : https://dojang.io/mod/page/view.php?id=482 
	for (int i = Jan; i < MonthCount; i++) printf("%d ", i);
	printf("\n");

	system("pause");
	return 0;
}