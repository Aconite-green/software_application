#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book{
        int year;
        string book_name;
        string auther;
    public:
        int getYear(){ return year;}
        string getBookName(){return book_name;}
        string getAuther(){return auther;}
};

int main(){
    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
    vector<Book> v;
    while(1){
        cout << "year>>";
        cin >> v.

    };
}