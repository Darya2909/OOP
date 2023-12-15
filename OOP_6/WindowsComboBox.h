#pragma once
#include "IComboBox.h"

class WindowsComboBox : public IComboBox
{
public:
	void setSelectedIndex() override;
	void getSelectedIndex() override;
	void setItems() override;
	void getItems() override;
};

