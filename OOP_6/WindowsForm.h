#pragma once
#include "IForm.h"

class WindowsForm : public IForm
{
public:
	void addControl(IControll* controll) override;
private:
	std::vector<IControll*> m_controlls;
};

