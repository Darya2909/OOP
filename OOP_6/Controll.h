#pragma once
#include "IControll.h"

class Controll : public IControll
{
public:
	void setPosition() override;
	void getPosition() override;
};

