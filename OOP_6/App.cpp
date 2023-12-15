#include "App.h"

App::~App()
{
	for (IButton* b : m_buttons) { delete b; }
	for (IComboBox* cb : m_comboBoxes) { delete cb; }
	for (ILabel* l : m_labels) { delete l; }
	for (ITextBox* tb : m_textBoxes) { delete tb; }
	for (IForm* f : m_forms) { delete f; }
}
