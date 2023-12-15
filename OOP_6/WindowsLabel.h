#pragma once
#include "ILabel.h"

class WindowsLabel : public ILabel
{
public:
	void setText() override;
	void getText() override;
};

