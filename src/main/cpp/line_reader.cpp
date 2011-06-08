#include <line_reader.h>

#include <string>

using namespace std;

LineReader::LineReader(istream & _input) : m_input(&_input) {}

void LineReader::apply(Applyable * f) {
	while(m_input->good() && !m_input->eof()) {
		string line;
		getline(*m_input, line);
		f->each(line);
	}
}
