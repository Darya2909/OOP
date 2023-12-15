#pragma once
#include "IButton.h"

class WindowsButton : public IButton
{
public:
	void setText() override;
	void getText() override;
	void click() override;
};


