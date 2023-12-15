#pragma once
#include "ITextBox.h"

class WindowsTextBox : public ITextBox
{
public:
	void setText() override;
	void getText() override;
	void onValueChange() override;
};

