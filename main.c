#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *s1 = (char *) calloc(30, sizeof(char));     // char 30개 크기만큼 동적 메모리 할당
	char *s2 = (char *)calloc(30, sizeof(char));     // char 30개 크기만큼 동적 메모리 할당
	char *s3 = (char *)calloc(30, sizeof(char));     // char 30개 크기만큼 동적 메모리 할당
	char *sTot = (char *)calloc(30*3, sizeof(char)); // char 30 * 3개 크기만큼 동적 메모리 할당
	int len = 0, i;
	scanf("%s", s1);  //Enter키 전까지 입력받음.
	scanf("%s", s2);  //Enter키 전까지 입력받음.
	scanf("%s", s3);  //Enter키 전까지 입력받음.
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

    // 동적 메모리 해제
	free(s1);
	free(s2);
	free(s3);
	free(sTot);

	system("pause");
	return 0;
}