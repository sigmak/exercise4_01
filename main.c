#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *s1 = (char *) calloc(30, sizeof(char));     // char 30�� ũ�⸸ŭ ���� �޸� �Ҵ�
	char *s2 = (char *)calloc(30, sizeof(char));     // char 30�� ũ�⸸ŭ ���� �޸� �Ҵ�
	char *s3 = (char *)calloc(30, sizeof(char));     // char 30�� ũ�⸸ŭ ���� �޸� �Ҵ�
	char *sTot = (char *)calloc(30*3, sizeof(char)); // char 30 * 3�� ũ�⸸ŭ ���� �޸� �Ҵ�
	int len = 0, i;
	scanf("%s", s1);  //EnterŰ ������ �Է¹���.
	scanf("%s", s2);  //EnterŰ ������ �Է¹���.
	scanf("%s", s3);  //EnterŰ ������ �Է¹���.
	for (int i = 0; s1[i] != '\0'; i++){
		sTot[len] = s1[i];
		len = len + 1;
	}
	for (int i = 0; s2[i] != '\0'; i++){
		sTot[len] = s2[i];
		len = len + 1;
	}
	for (int i = 0; s3[i] != '\0'; i++){
		sTot[len] = s3[i];
		len = len + 1;
	}
	printf("Merged string length : %d\n", len);
	printf("Merged string : %s\n", sTot);

    // ���� �޸� ����
	free(s1);
	free(s2);
	free(s3);
	free(sTot);

	system("pause");
	return 0;
}