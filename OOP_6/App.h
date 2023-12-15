#pragma once
#include <vector>
#include "IForm.h"


class App
{
public:
	~App();
	std::vector<IForm*> m_forms;
	std::vector<IButton*> m_buttons;
	std::vector<IComboBox*> m_comboBoxes;
	std::vector<ILabel*> m_labels;
	std::vector<ITextBox*> m_textBoxes;
};

