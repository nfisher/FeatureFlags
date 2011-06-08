#include <iostream>
#include <string>
#include <signal.h>
#include <line_reader.h>
#include <output.h>

using namespace std;

void sighandler(int sig) {
	cout << "Signal " << sig << " caught." << endl;
}

int main(char ** argv, int argc) {
	signal(SIGINT, &sighandler);
	signal(SIGTERM, &sighandler);
	signal(SIGABRT, &sighandler);

	LineReader * reader = new LineReader(cin);
	Output * out = new Output();

	reader->apply(out);

	return 0;
}
