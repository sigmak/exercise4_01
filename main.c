#define CRTSECURENOWARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inputWords(char* words[], char contents[]) {
	char* word;
	word = contents;
	words[0] = (char)calloc(strlen(contents) + 1, sizeof(char)); //words = (char)calloc(strlen(contents) + 1, sizeof(char));
	// 할당해준 메모리는 총 12바이트
	strcpy(&words[0], word); // strcpy(words, word);
}

int main(void){

	char* arrptr[3];
	inputWords(arrptr, "hello world");

	printf("(1)%s\n", arrptr);
	// arrptr[0]에서 가리키는게 "hello world"

	printf("(2)%d\n", sizeof("hello world"));
	// 당연히 12가 나옴

	printf("(3)%d\n", sizeof(*arrptr));   // 4
	// "hello world"의 크기니까... 12가 나오겠지...? 엥 4가 나오네
	printf("(4)%d\n", sizeof(arrptr));   // 12 

	//arrptr[0] 으로 접근하기
	printf("(5)%d\n", strlen(&arrptr[0])+1); //12
	// strlen 은 문자열 마지막 NULL값을 제외한 크기임.
	// sizof 는 문자열의 길이를 가져올때는 문자열 마지막 NULL값을 포함한 크기임.

	printf("(6)%s\n", &arrptr[0]); // hello world

	system("pause");
	return 0;
}

