/*
설명 : 10마일의 거리에 도착지점이 있고 이씨는 시작지점으로부터 150m 떨어진 지점에서 
       3km/h의 속도로 달리고 있다.
       이씨는 몇 시간 안에 도착지점에 도착할 수 있을까?
       1km는 0.621371마일(mile)이다.
       거리 / 속도 = 시간

출력 : 이씨가 도착지점에 도착할 때 까지 걸리는 시간을 출력한다.

예시 출력 1 : 5.314482

힌트 : 주어진 10마일을 km 단위로 변경한 뒤, 해당 값에서 150m를 빼서 총 이동 거리를 구한다.
       이씨는 시속 3km/h로 이동하므로 남은 이동 거리 / 속도 = 시간 공식을 사용하여
	   총 소요 시간을 구할 수 있다.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double distanceMile = 10.0, distanceKm, distanceKm2, timeCal;
	distanceKm = distanceMile / 0.621371; //주어진 10마일을 km 단위로 변경
	distanceKm2 = distanceKm - 0.150; //해당 값에서 150m를 빼서 총 이동 거리를 구한다
	timeCal = distanceKm2 / 3.0; //  남은 이동 거리 / 속도 = 시간 공식
	printf("\n%f\n", timeCal);
	system("pause");
	return 0;
}

