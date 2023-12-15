#pragma once
#include "IForm.h"

class MacOSForm : public IForm
{
public:
	void addControl(IControll* controll) override;
private:
	std::vector<IControll*> m_controlls;
};

