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
		cout << "영화제목 : " << name << endl;
		cout << "감    독 : " << director << endl;
		cout << "평    점 : " << point << endl;
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
	movies[0] = Movie("아저씨", "이정범", 9.28);
	movies[1] = Movie("슈퍼배드", "피에르 꼬팽", 8.96);
	movies[2] = Movie("무적자", "송해성", 6.08);
	
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
	cout << "가장 평점이 좋은 영화  : " << movies[index].getName() << endl;

	return 0;
}
