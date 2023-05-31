#include "Goblin.h"

Goblin::Goblin() {
    setHealthPoints(10);
    maxHealthPoints = 10;
    setAttackPoints(2);
    name = "Goblin";
    setType(MonsterTypes::GOBLIN);
}

void Goblin::attack(MovingEntity &another, Subject &c) {
    Monster::attack(another, c);
}

