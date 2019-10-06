#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s)
	{
		coffee = c;
		water = w;
		sugar = s;
	}
	void show() {
		cout << "커피 머신 상태, 커피:" << coffee;
		cout << " 물:" << water << " 설탕:" << sugar << endl;
	}
	void drinkEspresso() {
		coffee--;
		water--;
	}
	void drinkAmericano() {
		coffee--;
		water -= 2;
	}
	void drinkSugarCoffee() {
		coffee--;
		water -= 2;
		sugar--;
	}
	void fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
	}
};



int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}