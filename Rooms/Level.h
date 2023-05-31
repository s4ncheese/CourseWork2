#ifndef MONKSANDDRAGONS_LEVEL_H
#define MONKSANDDRAGONS_LEVEL_H

#include "Room.h"

class Level {
public:
    Room *start;
    std::string name = "Level 0";
};

#endif //MONKSANDDRAGONS_LEVEL_H
