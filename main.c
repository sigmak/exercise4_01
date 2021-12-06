#include <stdio.h>
#include <stdlib.h>

/** ��ó : https://hand-over.tistory.com/26
* strcmp - Compare two strings
* @s1: One string
* @s2: Another string
*/
int MyStrcmp(const char *s1, const char *s2)
{
	unsigned char c1, c2;
	while (1) {
		/* s1, s2 ���ڿ����� ������� �ѱ��ھ� �����ɴϴ�. */
		c1 = *s1++;
		c2 = *s2++;
		/* �ѱ��ھ� ���ϰ� �ٸ��� -1 �Ǵ� 1 �����մϴ�. */
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	/* ������ ���������� �� ���ڿ��� ���ٴ� �ǹ��̹Ƿ� 0�� �����մϴ�. */
	return 0;
}

int main(void)
{
	int ret;
	char string1[20] = "";
	char string2[20] = "";

	printf("���� �� �ܾ �Է����ּ���.\n");
	printf("�ܾ �Է����ּ���. : "); 
	scanf("%s", string1);// ù ��° ���ڿ� �Է�
	
	printf("�ܾ �Է����ּ���. : ");
	scanf("%s", string2); // �� ��° ���ڿ� �Է�
	//��ó: https://codeomni.tistory.com/67 
	ret = MyStrcmp(string1, string2);
	if (ret == 0) {
		printf("�� �ܾ�� ��ġ�մϴ�.\n");
	} else {
		printf("�� �ܾ�� ��ġ���� �ʽ��ϴ�.\n");
	}
	system("pause");
	return 0;
}