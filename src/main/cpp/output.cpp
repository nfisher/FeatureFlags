#include <output.h>

#include <iostream>

using namespace std;

void Output::each(string & _line) {
	string property;
	string value;
	size_t split_at = _line.find_first_of("=");

	if(split_at == string::npos) {
		property = _line;
	} else {
		property = _line.substr(0, split_at);
		value = _line.substr(split_at + 1, _line.size() - split_at);
	}

	cout << ":" << property << ":" << value << ":" << endl;
}
