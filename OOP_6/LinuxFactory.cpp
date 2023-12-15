#include "LinuxFactory.h"
#include "LinuxForm.h"
#include "LinuxLabel.h"
#include "LinuxTextBox.h"
#include "LinuxComboBox.h"
#include "LinuxButton.h"

IForm* LinuxFactory::createForm()
{
	return new LinuxForm;
}

ILabel* LinuxFactory::createLabel()
{
	return new LinuxLabel;
}

ITextBox* LinuxFactory::createTextBox()
{
	return new LinuxTextBox;
}

IComboBox* LinuxFactory::createComboBox()
{
	return new LinuxComboBox;
}

IButton* LinuxFactory::createButton()
{
	return new LinuxButton;
}
