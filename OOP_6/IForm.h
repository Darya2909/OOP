#pragma once
#include <vector>
#include "IControll.h"
#include "IButton.h"
#include "IComboBox.h"
#include "ILabel.h"
#include "ITextBox.h"

class IForm
{
public:
	virtual void addControl(IControll* controll) = 0;
	virtual ~IForm() {}
};