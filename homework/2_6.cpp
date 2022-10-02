#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	cout << "새 암호를 입력하세요>>";
	string password0;
	getline(cin, password0);

	cout << "새 암호를 다시 한 번 입력하세요>>";

	string password1;
	getline(cin, password1);

	if (password0 == password1)
		cout << "같습니다";
	else
		cout << "같지 않습니다";

	return 0;
}
