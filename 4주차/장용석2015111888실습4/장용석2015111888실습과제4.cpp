#include <iostream>

using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram() {};

	~Ram() {
		cout << "�޸𸮰� ���ܵǾ���" << endl;
	};

	char read(int address) {
		return this->mem[address];
	};
	void write(int address, char value) {
		this->mem[address] = value;
	};
};

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);

	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);

	cout << "102 ������ �� = " << (int)ram.read(102) << endl;
}