/*

입력 : 점의 좌표(x,y)와 다른 두점의 좌표(x1,y1),(x2,y2)를 입력받는다
출력 : 검사하여 직사각형 내에 해당점이 있다면 True를 출력, 아니라면 False를 출력

예시입력1
10 10
100 100 200 200
예시출력1
False

예시입력2
100 100
100 100 200 200
예시출력2
True

예시입력3
150 150
100 100 200 200
예시출력3
True

예시입력4
200 200
100 100 200 200
예시출력4
True

*/


#include <stdio.h>
#include <stdlib.h>

// 리턴값이 0 이면 FALSE , 1이면 TRUE
// 함수 원문 출처 : http://m.todayhumor.co.kr/view.php?table=programmer&no=11164
int IsPointInRect(int x, int y, int x1, int y1, int x2, int y2) {
	return (x >= x1 
		 && x <= x2
		 && y >= y1
		 && y <= y2);
}

int main(void) {
	int x, y;
	int x1, y1, x2, y2;
	//printf("점의 좌료(x, y)를 입력해주세요.\n");
	scanf("%d %d", &x, &y);
	//printf("다른 두점의 좌표(x1, y1), (x2, y2) 좌표를 입력해주세요.\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if (IsPointInRect(x, y, x1, y1, x2, y2)) {
		printf("True\n");//printf("점은 직사각형 내부에 있습니다. \n");
	} else {
		printf("False\n");//printf("점은 직사각형 외부에 있습니다. \n");
	}

	system("pause");
	return 0;
}