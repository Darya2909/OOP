#pragma once
#include "IButton.h"

class LinuxButton : public IButton
{
public:
	void setText() override;
	void getText() override;
	void click() override;
};

