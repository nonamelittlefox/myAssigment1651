#ifndef _SETTING_SYSTEM_H_
#define _SETTING_SYSTEM_H_

#include <string>
#include <vector>
#include <iostream>
#include <thread>

using namespace std;

class SettingSystem
{ 
private:
    static SettingSystem *instance; 
    string language;
    string music;
    string subtitle;
    int brightness;
    int width;
    int height;
    SettingSystem()
    {
        language = "English";
        music = "ON";
        subtitle = "ON";
        brightness = 60;
        width = 720;
        height = 1280;
    };
public:
    // function to provide global access the the instance
    // static synchronized SettingSystem *get_instance();
    static SettingSystem *get_instance();

    // Setters
    void setLanguage(const string &language);
    void setMusic(const string &music);
    void setSubTitle(const string &subtitle);
    void setBrightness(const int &brightness);
    void setWidth(const int &width);
    void setHeight(const int &height);

    // Getters
    string getLanguage() const;
    string getMusic() const;
    string getSubTitle() const;
    int getWidth() const;
    int getHeight() const;
    int getBrightness() const;

  // Display All Settings
    void displaySettings() const;
    // someFunction - use to test the instance of the SettingSystem
    void someFuction() const;
    ~SettingSystem();
};
#endif