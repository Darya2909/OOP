#pragma once
#include "ILabel.h"

class MacOSLabel : public ILabel
{
public:
	void setText() override;
	void getText() override;
};
