#include <stdio.h>
#include <stdlib.h>

//참고1 : https://dojang.io/mod/page/view.php?id=337
//참고2 : https://m.blog.naver.com/timesea821/220971085446

int main(void) {
	char *s1; //배열 이름을 포인터 변수로
	int n;     //배열의 크기를 받을 변수
	scanf("%d", &n);

	s1 = (char *)calloc(n+1,sizeof(char)); //char 형 배열을 n개의 크기로 만듦
	scanf("%s", s1);

	//for (int i = 0; i < n; i++) printf("%c", s1[i]);
	printf("%s\n", s1);

	free(s1);
	system("pause");
	return 0;
}
