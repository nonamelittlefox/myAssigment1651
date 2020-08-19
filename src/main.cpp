#include "../include/SettingSystem.h"
#include "../include/mainMenu.h"

int main(int argc, char *argv[])
{	
	// SettingSystem setting1 = new SettingSystem(); // cannot create more object
	// setting1.displaySettings();

	// SettingSystem *Settings = SettingSystem::get_instance();
	// Settings->displaySettings();
	// // or SettingSystem::get_instance()->displaySettings();
	// Settings->someFuction();
	// cout << "<<------------------------------->>" << endl;
	// Settings->displaySettings();

	MainMenu menu;	
	menu.displayMenu();
}
