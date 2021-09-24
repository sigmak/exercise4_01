#include <iostream>
using namespace std;

class CoffeeMachine {
public:
	int Coffee;
	int Water;
	int Sugar;
	CoffeeMachine();
	CoffeeMachine(int C, int W, int S);
	int drinkAmericano();
	int drinkSugarCoffee();
	int drinkEspresso();
	int show();
	int none();
	int fill();
};

CoffeeMachine::CoffeeMachine() {
	Coffee = 0;
	Water = 0;
	Sugar = 0;
}

CoffeeMachine::CoffeeMachine(int C, int W, int S) {
	Coffee = C;
	Water = W;
	Sugar = S;
}

int CoffeeMachine::show() {
	cout << "커피머신 상태 : 커피 = " << Coffee << "물 = " << Water << "설탕 = " << Sugar << endl;
	return Coffee; //반환값 오류 때문에 추가
}

int CoffeeMachine::none() {
	if (Coffee < 0)
	{
		Coffee += 1;
		return 1;
	}
	if (Water < 0)
	{
		Water += 1;
		return 1;
	}
	if (Sugar < 0)
	{
		Sugar += 1;
		return 1;
	}
	return 0;
}

int CoffeeMachine::drinkAmericano() {
	Coffee -= 1;
	Water -= 2;
	if (none() == 1)
	{
		cout << "재료가 부족하여 아메리카노를 만들 수 없습니다." << endl;
		show(); //show;//오류	C3867	'CoffeeMachine::show': 비표준 구문입니다. '&'를 사용하여 멤버 포인터를 만드세요.	CoffeeMachine	main.cpp	60	
	}
	return Coffee;// 반환값 오류로 인해 추가
}

int CoffeeMachine::drinkSugarCoffee() {
	Coffee -= 1;
	Water -= 2;
	Sugar -= 1;
	if (none() == 1)
	{
		cout << "재료가 부족하여 설탕커피를 만들 수 없습니다." << endl;
		show();//show;
	}
	return Coffee; //반환값 오류 때문체 추가
}

int CoffeeMachine::drinkEspresso() {
	Coffee -= 1;
	Water -= 1;
	if (none() == 1)
	{
		cout << "재료가 부족하여 설탕커피를 만들 수 없습니다." << endl;
		show();//show;
	}
	return Coffee; //반환값 오류때문체 추가
}

int CoffeeMachine::fill() {
	Coffee = 10;
	Water = 10;
	Sugar = 10;
	return Coffee; //반환값 오류때문에 추가
}

int main() {
	CoffeeMachine java(5, 8, 2);
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.drinkEspresso();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.drinkSugarCoffee();
	java.drinkAmericano();
	java.fill();
	java.show();

	system("pause"); //도스창 출력후 키누를때까지 멈추게 하는 함수사용 추가
	return 0;
}