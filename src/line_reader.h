#ifndef __LINE_READER_H__
#define __LINE_READER_H__

#include <istream>
#include <applyable.h>

class LineReader {
		std::auto_ptr<std::istream> m_input;

	public:
		LineReader(std::istream & _input);
		void apply(Applyable * _functor);

};

#endif//__LINE_READER_H__
