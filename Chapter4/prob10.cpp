#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string sentence;
public:
	Histogram(string a);
	void put(string a);
	void putc(char a);
	void print();
};

void main(void) {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}

Histogram::Histogram(string a) {
	sentence = a;
}

void Histogram::put(string a) {
	sentence += a;
}

void Histogram::putc(char a) {
	sentence += a;
}
void Histogram::print() {
	int alphabet[26]={ 0 };
	int sum=0;
	for (int i = 0; i < sentence.length(); i++) {
		sentence[i] = tolower(sentence[i]);
		if (sentence[i] != ' ') { alphabet[(int)sentence[i] - 'a']++; }
	}
	for (int i = 0; i < 26; i++) {
		sum += alphabet[i];
	}
	cout << "총 알파벳 수 " << sum<<endl<<endl;

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 'a') << " (" << alphabet[i] << ")    : ";
		for (int j = 0; j < alphabet[i]; j++) {
			cout << '*';
		}
		cout << endl;
	}
}
