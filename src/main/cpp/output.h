#ifndef __OUTPUT_H__
#define __OUTPUT_H__

#include <string>
#include <applyable.h>

struct Output : Applyable {
	void each(std::string & _line); 
};

#endif//__OUTPUT_H__
