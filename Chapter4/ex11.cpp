#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name;
public:
	void getName();

};

class GamblingGame {
	int random[3];
public:
	void putRandom();
	void run();
};

void main(void)
{
	srand((unsigned)time(0));
	GamblingGame a;
	a.run();
}

void GamblingGame::run() {
	cout << "**** 갬블링 게임을 시작합니다. *****" << endl;
	string name[2];
	cout << "첫번째 선수 이름>>";
	cin >> name[0];
	cout << "두번째 선수 이름>>";
	cin >> name[1];
	cin.ignore(1, '\n');

	while (1) {
		for (int i = 0; i < 2; i++) {
			cout << name[i] << ":<ENTER>";
			char n;
			n = cin.get();
			if (n == '\n') {
				putRandom();
				cout << random[0] << "    " << random[1] << "    " << random[2] << "   ";
				if (random[0] == random[1] && random[1] == random[2]) {
					cout << name[i] << "님 승리!!";
					exit(0);
				}
				else
					cout << "아쉽군요!"<<endl;
			}
		}
	}
}

void GamblingGame::putRandom() {
	for (int i = 0; i < 3; i++) {
		random[i] = rand() % 3;
	}
}
