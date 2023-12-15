#pragma once
#include <iostream>

class IButton
{
public:
	virtual void setText() = 0;
	virtual void getText() = 0;
	virtual void click() = 0;
	virtual ~IButton() {}
};