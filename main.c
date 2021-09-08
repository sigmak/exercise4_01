/*
어떤 건물에 엘리베이터는 최대 190Kg까지 사람이 탑승할 수 있다.
김씨의 몸무게는 70Kg이고, 한씨의 몸무게는 80Kg이라고 하자.
이 두 사람이 동시에 엘리베이터에 탑승이 가능한지 알기 위해 총 몸무게를 계산하고자 한다.
두 사람의 몸무게 합을 구하는 프로그램을 작성하시오.단, 3개의 변수만을 사용하시오.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float elevatorMAX = 190.0; //변수 1
	float KimKG = 70.0;        //변수 2     
	float HanKG = 80.0;        //변수 3 
    
	printf("\n두사람의 몸무게 합 = %f KG ", (KimKG + HanKG));
	if (elevatorMAX >= (KimKG + HanKG) ) {
		printf("\n elevator (%f KG) 탑승 가능\n", elevatorMAX);
	}else{
		printf("\n elevator (%f KG) 탑승 불가\n", elevatorMAX);
	}
	system("pause");
	return 0;
}