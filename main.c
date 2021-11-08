#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Âü°í : https://m.blog.naver.com/ahalinux/220836057791
	char ch = 'A';
	void *p = &ch;
	printf("%c\n", *(char *)p); //printf("%c\n",*p);

	system("pause");
	return 0;
}
