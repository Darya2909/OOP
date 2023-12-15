#include "MacOSFactory.h"
#include "MacOSForm.h"
#include "MacOSLabel.h"
#include "MacOSTextBox.h"
#include "MacOSComboBox.h"
#include "MacOSButton.h"

IForm* MacOSFactory::createForm()
{
	return new MacOSForm;
}

ILabel* MacOSFactory::createLabel()
{
	return new MacOSLabel;
}

ITextBox* MacOSFactory::createTextBox()
{
	return new MacOSTextBox;
}

IComboBox* MacOSFactory::createComboBox()
{
	return new MacOSComboBox;
}

IButton* MacOSFactory::createButton()
{
	return new MacOSButton;
}
