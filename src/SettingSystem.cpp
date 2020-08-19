#include "../include/SettingSystem.h"

// initiate static variable
// SettingSystem *SettingSystem::instance = new SettingSystem(); // eager initialization
SettingSystem *SettingSystem::instance = NULL;

// lazy initialization but cause multi-thread risk
// SettingSystem synchronized *SettingSystem::get_instance()
SettingSystem *SettingSystem::get_instance()
{   
    if (instance == NULL)
        instance = new SettingSystem();
    return instance;
}

// Setters
void SettingSystem::setLanguage(const string &language)
{
    this->language = language;
}

void SettingSystem::setMusic(const string &music)
{
    this->music = music;
}

void SettingSystem::setSubTitle(const string &subtitle)
{
    this->subtitle = subtitle;
}

void SettingSystem::setBrightness(const int &brightness)
{
    this->brightness = brightness;
}

void SettingSystem::setWidth(const int &width)
{
    this->width = width;
}

void SettingSystem::setHeight(const int &height)
{
    this->height = height;
}

// Getters
string SettingSystem::getLanguage() const
{
    return language;
}

string SettingSystem::getMusic() const
{
    return music;
}

string SettingSystem::getSubTitle() const
{
    return subtitle;
}

int SettingSystem::getWidth() const
{
    return width;
}

int SettingSystem::getHeight() const
{
    return height;
}

int SettingSystem::getBrightness() const
{
    return brightness;
}

void SettingSystem::displaySettings() const
{
    cout << "Brightness: " << brightness << endl;
    cout << "Language: " << language << endl;
    cout << "SubTitles: " << subtitle << endl;
    cout << "Music: " << music << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
}

void SettingSystem::someFuction() const
{
    cout << "------ + ------ + ------ + ------" << endl;
	SettingSystem *settings = SettingSystem::get_instance();
	settings->setBrightness(-60);
    settings->setMusic("ON");
    settings->setLanguage("Vietnamese");
    settings->displaySettings();
}

SettingSystem::~SettingSystem()
{
    // _Deconstructor - nothing to do
}
