#include "../include/settingMenu.h"
#include "../include/mainMenu.h"
#include "../include/SettingSystem.h"
#include "../include/adjustSetting.h"

SettingMenu::SettingMenu()
{
    // default constructor
}

void SettingMenu::displaySettingMenu() const
{
    SettingMenu menu;
    menu.process_SettingMenuChoice();
}

SettingMenu::~SettingMenu()
{
    // _Deconstructor - nothing to do
}

void SettingMenu::process_SettingMenuChoice() const
{   
    MainMenu menu;
    
    int settingMenu_Choice;
    cout << "|------ + ------ + ------ +      << Settings Menu  >>  + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 1. Show All Settings       + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 2. Adjust Settings         + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 3. Back To << MainMenu>>   + ------ + ------ + ------|" << endl;
    cout << "--> Enter Your Choice: " << endl;
    cin >> settingMenu_Choice;

    switch (settingMenu_Choice)
    {
    case SHOW_ALL_SETTINGS:
        {
            SettingSystem *settings = SettingSystem::get_instance();
            settings->displaySettings();

            // back to settingMenu
            comeBackMenu();
            break;
        }
    case ADJUST_SETTINGS:
        {    
            AdjustSetting adjust;
            adjust.process_adjustMenuSetting();
            // back to settingMenu
            comeBackMenu();
            break;
        }
    case BACK_TO_MAIN_MENU:
        {
            menu.process_MainMenuChoice();
            break;
        }
    default:
        {
            cout << " <<< Unavailable Choice >>> " << endl;
            break;
        }
    }
}

void SettingMenu::comeBackMenu() const
{
    string ques;
    cout << "Back To The << SettingMenu >> (Y/N) ?" << endl;
    cin >> ques;
    SettingMenu menu;
    if (ques == "Y" || ques == "y") menu.process_SettingMenuChoice(); 
}
