#include <stdio.h>
#include <stdlib.h>
/**
* my_strchr - Find the first occurrence of a character in a string
* @s: The string to be searched
* @c: The character to search for
* ��ó : https://hand-over.tistory.com/39
*/
char *my_strchr(const char *s, int c)
{
	/*
	* s ���ڿ��� ó�� ���ں��� c ���ڿ� ���� ������
	* ������ ��� ���ϴ�.
	* ������ ������ �����ϰ� ���� s�� ��ġ�� �����մϴ�.
	*/
	for (; *s != (char)c; ++s)
		if (*s == '\0')
			return NULL;
	return (char *)s;
}

int main(void)
{
	char *src = (char *)calloc(80, sizeof(char)); // char 80�� ũ�⸸ŭ ���� �޸� �Ҵ�
	char target='0x00';

	//��ó : https://angliss.tistory.com/260
	gets_s(src, 80); //���� �Է¹ޱ� 
	scanf("%c", &target); //���� �Է¹ޱ�

	//��ó: https://blockdmask.tistory.com/389
	char* ptr = my_strchr(src, target);
	while (ptr != NULL)
	{
		//printf("ã�� ���� : %c, ã�� ���ڿ� : %s\n", *ptr, ptr);
		printf("%c ", *ptr);
		ptr = my_strchr(ptr + 1, target);    //ptr + 1 �� �߿��մϴ�.
	}
	printf("\n");

	system("pause");
	return 0;
}