#include "WindowsFactory.h"
#include "WindowsForm.h"
#include "WindowsLabel.h"
#include "WindowsTextBox.h"
#include "WindowsComboBox.h"
#include "WindowsButton.h"

IForm* WindowsFactory::createForm()
{
	return new WindowsForm;
}

ILabel* WindowsFactory::createLabel()
{
	return new WindowsLabel;
}

ITextBox* WindowsFactory::createTextBox()
{
	return new WindowsTextBox;
}

IComboBox* WindowsFactory::createComboBox()
{
	return new WindowsComboBox;
}

IButton* WindowsFactory::createButton()
{
	return new WindowsButton;
}
