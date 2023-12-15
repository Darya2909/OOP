#pragma once
#include "IForm.h"
#include "ILabel.h"
#include "ITextBox.h"
#include "IComboBox.h"
#include "IButton.h"

class IControlFactory
{
public:
	virtual IForm* createForm() = 0;
	virtual ILabel* createLabel() = 0;
	virtual ITextBox* createTextBox() = 0;
	virtual IComboBox* createComboBox() = 0;
	virtual IButton* createButton() = 0;
	virtual ~IControlFactory() {}
};