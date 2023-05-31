#ifndef MONKSANDDRAGONS_SETTINGSSINGLETON_H
#define MONKSANDDRAGONS_SETTINGSSINGLETON_H

#include "SettingsModel.h"
#include <iostream>

class SettingsSingleton {
private:
    SettingsSingleton() = default;

public:
    Settings settings;

    static SettingsSingleton &getInstance() {
        static SettingsSingleton instance;
        return instance;
    }

    void initialize() {
        settings.randomLevel = false;
        settings.title = Title::ASCII;
        SettingsJSON json{};
        json.loadJSON();
        json.fromJSON(settings);
    }
};

#endif //MONKSANDDRAGONS_SETTINGSSINGLETON_H
