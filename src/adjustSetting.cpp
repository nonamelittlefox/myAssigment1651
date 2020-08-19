#include "../include/adjustSetting.h"
#include "../include/SettingSystem.h"
#include "../include/settingMenu.h"

AdjustSetting::AdjustSetting()
{
    // default constructor
}

void AdjustSetting::displayAdjustSettingMenu() const
{   
    AdjustSetting adjust;
    adjust.displayAdjustSettingMenu();
}

AdjustSetting::~AdjustSetting()
{
    // _Deconstructor - nothing to do
}

void AdjustSetting::process_adjustMenuSetting() const
{
    SettingSystem *settings = SettingSystem::get_instance();

    SettingMenu menu;

    int adjustSetting_Choice;
    cout << "|------ + ------ + ------ +    << Adjust Setting Menu  >>  + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        1. Language             + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        2. Music                + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        3. Subtitle             + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        4. Width                + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        5. Height               + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        6. Brightness           + ------ + ------ + ------|" << endl;
    cout << "|------ + ------ + ------->        7. Save & Apply Setting + ------ + ------ + ------|" << endl;
    cout << "--> Enter Your Choice: " << endl;
    cin >> adjustSetting_Choice;

    switch (adjustSetting_Choice)
    {
    case ADJUST_LANGUAGE:
        {   
            adjustLanguage();
            break;
        }
    case ADJUST_MUSIC:
        {   
            string music;
            cout << "<< Turn (ON/OFF) Music >>: " << endl;
            cin >> music;
            settings->setMusic(music);
            process_adjustMenuSetting();
            break;
        }
    case ADJUST_SUBTITLE:
        {   
            string subtitle;
            cout << "<< Turn (ON/OFF) Subtitle >>: " << endl;
            cin >> subtitle;
            settings->setSubTitle(subtitle);
            process_adjustMenuSetting();
            break;
        }
     case ADJUST_WIDTH:
        {   
            int width;
            cout <<"<< Set Width >>: " << endl;
            cin >> width;
            settings->setWidth(width);
            process_adjustMenuSetting();
            break;
        }
     case ADJUST_HEIGHT:
        {   
            int height;
            cout <<"<< Set Height >>: " << endl;
            cin >> height;
            settings->setHeight(height);
            process_adjustMenuSetting();
            break;
        }
     case ADJUST_BRIGHTNESS:
        {   
            int brightness;
            cout <<"<< Set Brightness >>: " << endl;
            cin >> brightness;
            settings->setBrightness(brightness);
            process_adjustMenuSetting();
            break;
        }
    case SAVE_APPLY_SETTING:
        {   
            cout << "<< All Settings Have Been Applied ! >>" << endl;
            menu.process_SettingMenuChoice();
            break;
        }
    default:
        {   
            cout << " <<< Unavailable Choice >>> " << endl;
            process_adjustMenuSetting();
            break;
        }
    }
}

// adjust language function
void AdjustSetting::adjustLanguage() const
{
    SettingSystem *settings = SettingSystem::get_instance();
    string language;
    cout << " << Choose A Language >> (English/Vietnamese/Japanese): " << endl;
    cin >> language;
    settings->setLanguage(language);
    process_adjustMenuSetting();
}