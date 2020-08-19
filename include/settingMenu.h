#ifndef _SETTING_MENU_H_
#define _SETTING_MENU_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define SHOW_ALL_SETTINGS 1
#define ADJUST_SETTINGS 2
#define BACK_TO_MAIN_MENU 3

class SettingMenu
{
public:
    void comeBackMenu() const;                   // use to comeback the it's menu
    void displaySettingMenu() const;             // use to display the mainMenu for the client
    void process_SettingMenuChoice() const;      // use to process the choice of the user
    SettingMenu();                               // default constructor
    ~SettingMenu();                              // deconstructor
};

#endif // !_SETTING_MENU_H_