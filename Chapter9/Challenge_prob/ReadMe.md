## __Human의 Food 먹기 게임__
### 게임에는 Human, Monster, Food의 객체가 등장하며, 이들은 10x20 격저판에서 각각 정해진 규칙에 의해 움직인다. Human 객체는 사용자의 키에 의해 왼쪽(a 키), 아래(s 키), 위(d 키), 오른쪽(f 키)으로 한칸씩 움직이고, Monster는 한 번에 2칸씩, 왼쪽, 아래, 위, 오른쪽 방향으로 랜덤하게 움직인다. Food는 5번 중에 3번은 제자리에 있고, 나머지 2번은 4가지 방향 중 랜덤하게 한 칸씩 움직인다.

 
### 게임은 Hyman이 Monster를 피해 Food를 먹으면(Food의 위치로 이동) 성공으로 끝나고, Monster가 Food를 먹거나 Human이 Monster에게 잡히면 실패로 끝난다.

 
### 다음은 각 객체의 이동을 정의하는 move()와 각 객체의 모양을 정의하는 getShape() 함수를 순수 가상 함수로 가진 추상 클래스 GameObject이다. GameObject를 상속받아 Human, Monster, Food 클래스를 작성하라. 그리고 전체적인 게임을 진행하는 Game 클래스와 main() 함수를 작성하고 프로그램을 완성하라.

```C++
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
    
    // 이 객체가 객체 p와 충돌했으면 true 리턴
    bool collide(GameObject *p) { 
        if (this->x == p->getX() && this->y == p->getY())
            return true;
        else
            return false;
    }
};
```