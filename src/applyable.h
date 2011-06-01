#ifndef __APPLYABLE_H__
#define __APPLYABLE_H__

#include <string>

struct Applyable {
	virtual void each(std::string & _line) = 0;
};

#endif//__APPLYABLE_H__
