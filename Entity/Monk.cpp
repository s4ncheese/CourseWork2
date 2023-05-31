#include "Monk.h"

Monk::Monk() {
    healthPoints = 15;
    attackPoints = 3;
    maxHealthPoints = 15;
}

const std::__cxx11::basic_string<char> &Monk::getName() const {
    return name;
}

void Monk::setName(const std::__cxx11::basic_string<char> &name) {
    Monk::name = name;
}

const std::__cxx11::basic_string<char> &Monk::getDescription() const {
    return description;
}

void Monk::setDescription(const std::__cxx11::basic_string<char> &des) {
    Monk::description = des;
}

void Monk::healMonk() {
    healthPoints = maxHealthPoints;
}

void Monk::attack(MovingEntity &another, Subject &c) {
    c.notify(name + std::string(" attacked ") + another.name, Events::FIGHT);
    another.setHealthPoints(another.getHealthPoints() - getAttackPoints());
}

