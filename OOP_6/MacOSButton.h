#pragma once
#include "IButton.h"

class MacOSButton : public IButton
{
public:
	void setText() override;
	void getText() override;
	void click() override;
};

