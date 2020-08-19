#include "../include/mainMenu.h"
#include "../include/SettingSystem.h"
#include "../include/settingMenu.h"

MainMenu::MainMenu()
{
    // default constructor
}

void MainMenu::displayMenu() const
{
    process_MainMenuChoice();
}

MainMenu::~MainMenu()
{
    // _Deconstructor - no thing to do
}

void MainMenu::process_MainMenuChoice() const
{   
    int mainMenu_choice;
    cout << "|------ + ------ + ------ + << Main Menu >> + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 1. New Game     + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 2. Continue     + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 3. Settings     + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 4. About Us     + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + -------> 0. Quit Game    + ------ + ------ + ------|\n" << endl;
    cout << "--> Enter Your Choice: " << endl;
    cin >> mainMenu_choice;

    switch (mainMenu_choice)
    {
    case NEW_GAME:
        {   
            cout << " << This is the demo version, therefore this function is unavailable >>" << endl;
            process_MainMenuChoice();
            break;
        }
    case CONTINUE:
        {   
            cout << " << This is the demo version, therefore this function is unavailable >>" << endl;
            process_MainMenuChoice();
            break;
        }
    case SETTINGS:
        {   
            SettingMenu showMenu;
            showMenu.displaySettingMenu();
            break;
        }   
    case ABOUT_US:
        {   
            cout << " << Singleton Desing Pattern Code by @HaThaiViet >>" << endl;
            process_MainMenuChoice();
            break;
        }
    case EXIT_GAME:
        {
            cout << " <<< Exiting Game... >>> " << endl;
            break;
        }
    default:
        {
            cout << " <<< Unavailable Choice >>> " << endl;
            break;
        }
    }
}