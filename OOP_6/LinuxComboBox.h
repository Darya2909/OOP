#pragma once
#include "IComboBox.h"

class LinuxComboBox : public IComboBox
{
public:
	void setSelectedIndex() override;
	void getSelectedIndex() override;
	void setItems() override;
	void getItems() override;
};
