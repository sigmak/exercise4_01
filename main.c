#include <stdio.h>
#include <stdlib.h>

/** 출처 : https://hand-over.tistory.com/26
* strcmp - Compare two strings
* @s1: One string
* @s2: Another string
*/
int MyStrcmp(const char *s1, const char *s2)
{
	unsigned char c1, c2;
	while (1) {
		/* s1, s2 문자열에서 순서대로 한글자씩 가져옵니다. */
		c1 = *s1++;
		c2 = *s2++;
		/* 한글자씩 비교하고 다르면 -1 또는 1 리턴합니다. */
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	/* 루프를 빠져나오면 두 문자열이 같다는 의미이므로 0을 리턴합니다. */
	return 0;
}

int main(void)
{
	int ret;
	char string1[20] = "";
	char string2[20] = "";

	printf("비교할 두 단어를 입력해주세요.\n");
	printf("단어를 입력해주세요. : "); 
	scanf("%s", string1);// 첫 번째 문자열 입력
	
	printf("단어를 입력해주세요. : ");
	scanf("%s", string2); // 두 번째 문자열 입력
	//출처: https://codeomni.tistory.com/67 
	ret = MyStrcmp(string1, string2);
	if (ret == 0) {
		printf("두 단어는 일치합니다.\n");
	} else {
		printf("두 단어는 일치하지 않습니다.\n");
	}
	system("pause");
	return 0;
}