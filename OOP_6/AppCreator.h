#pragma once
#include "App.h"
#include "IControlFactory.h"

class AppCreator
{
public: 
	App* createApp(IControlFactory& factory)
	{
		App * p = new App;
		p->m_forms.push_back(factory.createForm());
		p->m_buttons.push_back(factory.createButton());
		p->m_comboBoxes.push_back(factory.createComboBox());
		p->m_labels.push_back(factory.createLabel());
		p->m_textBoxes.push_back(factory.createTextBox());
		return p;
	}
};

