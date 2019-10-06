#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Oval {
private:
	int width, height;
public:
	Oval() {
		width = 1;
		height = 1;
	}
	Oval(int w, int h) {
		width = w;
		height = h;
	}
	void set(int w, int h) {
		this->width = w;
		this->height = h;
	}
	void show() {
		cout << "width : " << width << " height : " << height << endl;
	}
	int getWidth() {
		return this->width;
	}
	int getHeight() {
		return this->height;
	}
	~Oval() {
		cout << "Oval ¼Ò¸ê width : " << this->width << " height : " << this->height << endl;
	}
};



int main() {
	Oval a;
	Oval b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;


	return 0;
}