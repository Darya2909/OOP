#pragma once
#include "ILabel.h"

class LinuxLabel : public ILabel
{
public:
	void setText() override;
	void getText() override;
};

