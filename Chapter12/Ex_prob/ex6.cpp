#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

void fileRead(vector<string> &v, ifstream &fin ){
    string line;
    while(true){
        getline(fin, line);
        if(fin.eof()) break;
        v.push_back(line);
}
}

void search(vector <string> &v, string word) {
    for(int i=0; i < v.size(); i++){
        int index = v[i].find(word);
        if(index != -1) cout << v[i] << endl;
    }
}

int main(){
    vector <string> wordVector;
    ifstream fin("words.txt");
    if(!fin){
        cout << "Cant open file" << endl;
        return 0;
    }
    fileRead(wordVector, fin);
    fin.close();

cout << "Read words.txt" << endl;
while(true){
    cout << "put the word you want to find" << '\n';
    string word;
    getline(cin, word);
    if(word == "exit") break;
    search(wordVector, word);

}
cout << "end program";
}

