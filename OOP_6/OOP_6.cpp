#include <iostream>
#include "AppCreator.h"
#include "WindowsFactory.h"
#include "LinuxFactory.h"
#include "MacOSFactory.h"

int main()
{
	AppCreator creator;
	IControlFactory* factory;
	int systemNum = -1;
	std::cout << "Choose an OS by entering a number: Windows(0), Linux(1), MacOS(2): ";
	std::cin >> systemNum;
	switch (systemNum)
	{
	case 0:
	{
		factory = new WindowsFactory;
		break;
	}
	case 1:
	{
		factory = new LinuxFactory;
		break;
	}
	case 2:
	{
		factory = new MacOSFactory;
		break;
	}
	default:
		std::cout << "ERROR: Incorrect OS number enetered!" << std::endl;
		return -1;
	}
	App* app = creator.createApp(*factory);
	app->m_buttons[0]->click();
	app->m_comboBoxes[0]->getSelectedIndex();
	app->m_labels[0]->getText();
	app->m_textBoxes[0]->onValueChange();
	delete factory;
}
