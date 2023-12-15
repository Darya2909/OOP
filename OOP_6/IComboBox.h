#pragma once
#include <iostream>

class IComboBox
{
public:
	virtual void setSelectedIndex() = 0;
	virtual void getSelectedIndex() = 0;
	virtual void setItems() = 0;
	virtual void getItems() = 0;
	virtual ~IComboBox() {}
};