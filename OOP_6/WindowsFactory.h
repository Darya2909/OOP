#pragma once
#include "IControlFactory.h"

class WindowsFactory : public IControlFactory
{
public:
	IForm* createForm() override;
	ILabel* createLabel() override;
	ITextBox* createTextBox() override;
	IComboBox* createComboBox() override;
	IButton* createButton() override;
}; 