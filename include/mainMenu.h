#ifndef _MAIN_MENU_H_
#define _MAIN_MENU_H_

#include <string>
#include <vector>
#include <iostream>

#define NEW_GAME 1
#define CONTINUE 2
#define SETTINGS 3
#define ABOUT_US 4
#define EXIT_GAME 0

class MainMenu
{
public:
    void displayMenu() const; // use to display the mainMenu for the client
    void process_MainMenuChoice() const; // use to process the choice of the user
    MainMenu();  // default constructor
    ~MainMenu(); // deconstructor
};

#endif // !_MAIN_MENU_H_