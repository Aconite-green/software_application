/*3.문자열을 두 개 입력받고 두 개의 문자열이 같은지 검사하는 프로그램을 작성하라
만일 같으면 "같습니다", 아니면 "같지 않습니다"를 출력하라*/

#include <iostream>
#include <cstring>
using namespace std;

void main(){
    cout << "새 암호를 입력하세요>>";
    
    char pw[10];
    cin.getline(pw, 10);

    cout << "새 암호를 다시 한 번 입력하세요>>";
    
    char pw_re[10];
    cin.getline(pw_re, 10);

    if (strcmp(pw, pw_re) == 0) cout << "같습니다";
    else cout << "같지 않습니다";

}