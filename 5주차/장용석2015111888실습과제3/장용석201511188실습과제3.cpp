#include <iostream>
#include <string>

using namespace std;


class Movie {
private:
	string name;
	string director;
	double point;
public:
	Movie(){}

	Movie(string name, string director, double point) {
		this->name = name;
		this->director = director;
		this->point = point;
	}

	void print() {
		cout << "��ȭ���� : " << name << endl;
		cout << "��    �� : " << director << endl;
		cout << "��    �� : " << point << endl;
	}
	double getPoint() {
		return point;
	}
	string getName() {
		return name;
	}
};

int main() {
	Movie movies[3];
	movies[0] = Movie("������", "������", 9.28);
	movies[1] = Movie("���۹��", "�ǿ��� ����", 8.96);
	movies[2] = Movie("������", "���ؼ�", 6.08);
	
	double max = movies[0].getPoint();
	int index = 0;
	for (int i = 1; i < 3; i++) {
		if (movies[i].getPoint() > max) {
			max = movies[i].getPoint();
			index++;
		}
	}

	cout << "=====================================" << endl;
	for (int i = 0; i < 3; i++) {
		movies[i].print();
	}
	cout << "=====================================" << endl;
	cout << "���� ������ ���� ��ȭ  : " << movies[index].getName() << endl;

	return 0;
}
