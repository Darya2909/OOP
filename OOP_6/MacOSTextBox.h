#pragma once
#include "ITextBox.h"

class MacOSTextBox : public ITextBox
{
public:
	void setText() override;
	void getText() override;
	void onValueChange() override;
};

