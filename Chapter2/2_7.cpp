#include <iostream>
#include <string>

using namespace std;

int main(){
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song << "is a song by ";
    cout << "(Hint : first word " << elvis[0] << ")?";

    getline(cin, singer);
    if(singer == elvis) cout << "correct";
    else cout << "Your wrong, the answer is " + elvis << endl;
      
}