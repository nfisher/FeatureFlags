#include <iostream>
#include <string>
#include <line_reader.h>
#include <output.h>

using namespace std;

int main(char ** argv, int argc) {
	LineReader * reader = new LineReader(cin);
	Output * out = new Output();

	reader->apply(out);

	return 0;
}
