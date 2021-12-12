#include <stdio.h>
#include <stdlib.h>
/**
* my_strchr - Find the first occurrence of a character in a string
* @s: The string to be searched
* @c: The character to search for
* 출처 : https://hand-over.tistory.com/39
*/
char *my_strchr(const char *s, int c)
{
	/*
	* s 문자열의 처음 문자부터 c 문자와 같지 않으면
	* 루프를 계속 돕니다.
	* 같으면 루프를 종료하고 현재 s의 위치를 리턴합니다.
	*/
	for (; *s != (char)c; ++s)
		if (*s == '\0')
			return NULL;
	return (char *)s;
}

int main(void)
{
	char *src = (char *)calloc(80, sizeof(char)); // char 80개 크기만큼 동적 메모리 할당
	char target='0x00';

	//출처 : https://angliss.tistory.com/260
	gets_s(src, 80); //문장 입력받기 
	scanf("%c", &target); //문자 입력받기

	//출처: https://blockdmask.tistory.com/389
	char* ptr = my_strchr(src, target);
	while (ptr != NULL)
	{
		//printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *ptr, ptr);
		printf("%c ", *ptr);
		ptr = my_strchr(ptr + 1, target);    //ptr + 1 이 중요합니다.
	}
	printf("\n");

	system("pause");
	return 0;
}