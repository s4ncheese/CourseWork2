#ifndef MONKSANDDRAGONS_MONSTERROOM_H
#define MONKSANDDRAGONS_MONSTERROOM_H

#include "Room.h"

class MonsterRoom : public Room {
public:
    void log(Subject &subject) override;

    MonsterRoom();

    void roomSpeciality(MovingEntity &player) override;

    void confrontGoblins(MovingEntity &player);
};


#endif //MONKSANDDRAGONS_MONSTERROOM_H
