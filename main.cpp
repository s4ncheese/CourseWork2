#include <iostream>
//#include "TUI/SplashScreen.h"
#include "Entity/MovingEntity.h"
#include "Entity/Monk.h"
#include "Rooms/Room.h"
#include "Rooms/RoomNavigator.h"
#include "SubjectInstance.h"
#include "Settings/settingsSingleton.h"
#include "Rooms/Level1.h"
#include "Rooms//Level2.h"
#include "Rooms/Level.h"
#include "Rooms/RandomLevelGenerator.h"
#include <cstdlib>
#include "TUI/SplashScreen.h"
#include <string>

Subject SubjectInstance::subject{};

void GameLogic(RoomNavigator &navigator);

using namespace std;

void startGame() {
    Monk player{};

    std::string buffer;
    std::cout << "enter the name of player >" << std::endl;
    std::cin >> buffer;
    std::cin.ignore();
    player.setName(buffer);

    std::string desc;
    std::cout << "Customized Description of player > " << std::endl;
    std::getline(std::cin, desc);
    player.setDescription(desc);

    TraverseLogger lg{};
    FightLogger fg{};
    SubjectInstance::subject.addObserver(&lg);
    SubjectInstance::subject.addObserver(&fg);
    std::array<Level *, 2> levels = {new Level1{}, new Level2{}};

    if (SettingsSingleton::getInstance().settings.randomLevel) {
        std::cout << "You are now playing a random level. You want to play level by level, you can configure settings "
                  << std::endl;
        Level *coolRandomLevel = new RandomLevel();
        RoomNavigator navigator(&player, coolRandomLevel, false);
        GameLogic(navigator);
    } else {
        for (Level *a: levels) {
            std::cout << "You are now playing " << a->name << std::endl;
            RoomNavigator navigator(&player, a, false);
            GameLogic(navigator);
        }
    }
}

void GameLogic(RoomNavigator &navigator) {
    while (true) {
        auto getPreviousAndNextRooms = navigator.getPreviousAndNextRooms();
        cout << "choose which room to go into" << endl;
        if (getPreviousAndNextRooms[0] != NULLROOM) {
            cout << "1. Get to previous room" << endl;
        }
        if (getPreviousAndNextRooms[1] != NULLROOM) {
            cout << "2. Get to next room" << endl;
        }

        int roomChoose;
        cin >> roomChoose;
        if (roomChoose == 1) {
            if (navigator.getPreviousRoom()) {
                cout << "changing rooms " << endl;
            } else {
                cout << "wrong choice" << endl;
            }
        }

        if (roomChoose == 2) {
            if (navigator.getNextRoom()) {
                cout << "changing rooms " << endl;
            } else {
                cout << "wrong choice" << endl;
            }
        }
        if (navigator.getPreviousAndNextRooms()[1] == NULLROOM || navigator.getLevel()->start->roomType == TREASURE) {
            cout << "you won " << navigator.getLevel()->name << endl;
            cout << "------------------------------x-----------------------------" << endl;

            if (SettingsSingleton::getInstance().settings.title == Title::ASCII) {
                cout << TUIComponent::AsciiLevel << endl;
            }
            break;
        }
    }
}

int main() {
    SplashScreen s{};
    s.showTitle();
    startGame();

    return 0;
};
