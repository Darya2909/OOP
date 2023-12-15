#pragma once
#include "ITextBox.h"

class LinuxTextBox : public ITextBox
{
public:
	void setText() override;
	void getText() override;
	void onValueChange() override;
};

