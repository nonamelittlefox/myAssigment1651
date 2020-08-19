#ifndef _ADJUST_SETTING_H_
#define _ADJUST_SETTING_H_

#include <string>
#include <vector>
#include <iostream>
using namespace std; 

#define ADJUST_LANGUAGE 1
#define ADJUST_MUSIC 2
#define ADJUST_SUBTITLE 3
#define ADJUST_WIDTH 4
#define ADJUST_HEIGHT 5
#define ADJUST_BRIGHTNESS 6
#define SAVE_APPLY_SETTING 7

class AdjustSetting
{
public:
    void displayAdjustSettingMenu() const;
    void process_adjustMenuSetting() const;
    void adjustLanguage() const;
    AdjustSetting();
    ~AdjustSetting();
};

#endif // !1