#pragma once
#include <iostream>

class ILabel
{
public:
	virtual void setText() = 0;
	virtual void getText() = 0;
	virtual ~ILabel() {}
};