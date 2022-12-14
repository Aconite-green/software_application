#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class GameObject { // 추상 클래스
protected:
    int distance; // 한 번 이동 거리
    int x, y; // 현재 위치
public:
    GameObject(int startX, int startY, int distance) { // 초기 위치와 이동거리 설정
        this->x = startX; this->y = startY;
        this->distance = distance;
    }
    virtual ~GameObject() {}; // 가상 소멸자
    virtual void move() = 0; // 이동한 후 새로운 위치로 x, y 변경
    virtual char getShape() = 0; // 객체의 모양을 나타내는 문자 리턴
    int getX() { return x; }
    int getY() { return y; }
    bool collide(GameObject *p) { // 이 객체가 객체 p와 충돌했으면 true 리턴
        if (this->x == p->getX() && this->y == p->getY())
            return true;
        else
            return false;
    }
};
class Human : public GameObject { // 휴먼 클래스
public:
    Human(int x, int y, int dis) :GameObject(x, y, dis){} // 처음 위치와 이동거리를 기본 클래스에 넘겨줌
    void move();
    char getShape() { return 'H'; }
};
void Human::move() {
    string key;
    for (;;) {
        cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
        cin >> key;
        if (key == "a") { // 왼쪽으로 이동
            if (y != 0) {
                y -= distance;
                break;
            }
            else cout << "이동불가" << endl;
        }
        else if (key == "s") { // 아래로 이동
            if (x != 9) {
                x += distance;
                break;
            }
            else cout << "이동불가" << endl;
        }
        else if (key == "d") { // 위로 이동
            if (x != 0) {
                x -= distance;
                break;
            }
            else cout << "이동불가" << endl;
        }
        else if (key == "f") { // 오른쪽으로 이동
            if (y != 19) {
                y += distance;
                break;
            }
            else cout << "이동불가" << endl;
        }
        else
            cout << "입력 에러" << endl;
    }
}
class Monster : public GameObject {
public:
    Monster(int x, int y, int dis) :GameObject(x, y, dis) { srand((unsigned)time(0)); } // 랜덤하게 이동하기때문에
    void move();
    char getShape() { return 'M'; }
};
void Monster::move() {
    for (;;) {
        int n = rand() % 4; // 4가지의 랜덤한 경우
        if (n == 0) { // 왼쪽으로 이동
            if (y > 1) {
                y -= distance;
                break;
            }
        }
        else if (n == 1) { // 아래쪽으로 이동
            if (x < 8) { 
                x += distance;
                break;
            }
        }
        else if (n == 2) { // 위쪽으로 이동
            if (x > 1) {
                x -= distance;
                break;
            }
        }
        else {
            if (y < 18) { // 오른쪽으로 이동
                y += distance;
                break;
            }
        }
    }
}
class Food : public GameObject {
public:
    Food(int x, int y, int dis) :GameObject(x, y, dis) {}
    void move();
    char getShape() { return '@'; }
};
void Food::move() {
    for (;;) {
        int n = rand() % 4;
        if (n == 0) { // 왼쪽으로 이동
            if (y != 0) {
                y -= distance;
                break;
            }
        }
        else if (n == 1) { // 아래로 이동
            if (x != 9) {
                x += distance;
                break;
            }
        }
        else if (n == 2) { // 위로 이동
            if (x != 0) {
                x -= distance;
                break;
            }
        }
        else {
            if (y != 19) { // 오른쪽으로 이동
                y += distance;
                break;
            }
        }
    }
}
class Game {
    string board[10][20]; // 10x20 격자판
    Human *h = new Human(0, 0, 1); // 휴먼 객체 시작 위치 0,0 이동거리 1
    Monster *m = new Monster(5, 7, 2); // 몬스터 객체 시작 위치 5,7 이동거리 2
    Food *f = new Food(8, 10, 1); // 음식 객체 시작 위치 8, 10 이동거리 1
public:
    Game() {
        srand((unsigned)time(0));
        cout << "** Human의 Food 먹기 게임을 시작합니다. **" << endl << endl;
        for (int i = 0; i < 10; ++i) { // 격자판 배열 초기화
            for (int j = 0; j < 20; ++j)
                board[i][j] = "-";
        }
    }
    ~Game() { delete h; delete m; delete f; }
    void game(); // 게임 진행 함수
    void clr1() {
        board[h->getX()][h->getY()] = "-";
        board[m->getX()][m->getY()] = "-";
    }
    void clr2() { // food 객체의 이동은 5번중 2번 만이기 때문에 따로 만듬
        board[f->getX()][f->getY()] = "-";
    }
    void setXY() {
        board[h->getX()][h->getY()] = h->getShape();
        board[m->getX()][m->getY()] = m->getShape();
        board[f->getX()][f->getY()] = f->getShape();
    }
    void show() {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 20; ++j)
                cout << board[i][j];
            cout << endl;
        }
    }
};
void Game::game() {
    int count = 0, gamecount = 0;
    for (;;) {
        setXY();
        show();
        clr1();
        h->move(); m->move();
        int n = rand();
        cout << endl;
        if (n % 2 == 0 && count<2 && gamecount<=3) { // 5번중 처음 세번에 랜덤하게 food 이동
            clr2();
            f->move();
            ++count;
        }
        if (gamecount > 3 && count < 2) { // 3번을 돌았는데 2번을 다 못 돌았다면 남은 두 번 다 움직여야한다
            clr2();
            f->move(); 
            ++count;
        }
        if (f->collide(h)) { // 휴먼이 food를 먹으면
            setXY();
            board[f->getX()][f->getY()] = "H";
            show();
            cout << "Human is Winner!!" << endl;
            break;
        }
        else if (h->collide(m)) { // 몬스터가 사람을 먹으면
            setXY();
            board[f->getX()][f->getY()] = "M";
            show();
            cout << "Monster is Winner!!" << endl;
            break;
        }
        else if (f->collide(m)) { // 몬스터가 food 를 먹으면
            setXY();
            board[f->getX()][f->getY()] = "M";
            show();
            cout << "Monster is Winner!!" << endl;
            break;
        }
        ++gamecount;
        if ((gamecount % 5) == 0) { // food가 5번중 2번움직이게끔 하는것을 만들기위해
            count = 0;
            gamecount = 0;
        }
    }
}
int main() {
    Game *g=new Game;
    g->game();
    delete g;
}
