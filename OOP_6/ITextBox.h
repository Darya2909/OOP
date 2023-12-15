#pragma once
#include <iostream>

class ITextBox
{
public:
	virtual void setText() = 0;
	virtual void getText() = 0;
	virtual void onValueChange() = 0;
	virtual ~ITextBox() {}
};