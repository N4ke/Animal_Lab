// Copyright 2024 Nikitos


#include "../include/Dog.h"


Dog::Dog() : Animal(), name("n/a"), race(Breed::NA) {}

Dog::Dog(Sex s, unsigned int a, float m,
        std::string c, std::string n, Breed b) {
    Animal(s, a, m, c);
    race = b;
}

Dog::Dog(const Dog& sec) : Animal(sec) {
    this->name = sec.name;
    this->race = sec.race;
}

Dog::Dog(Dog&& sec) : Animal(sec) {
    this->name = std::move(sec.name);
    this->race = std::move(sec.race);
}

Dog::~Dog() {}


std::string Dog::get_name() {
    return name;
}

std::string Dog::get_race() {
    switch (race) {
        case Breed::Bulldog:
            return (std::string)"Bulldog";
            break;
        case Breed::Chihuahua:
            return (std::string)"Chihuahua";
            break;
        case Breed::Corgi:
            return (std::string)"Corgi";
            break;
        case Breed::GermanShepherd:
            return (std::string)"German Shepherd";
            break;
        case Breed::GoldenRetriver:
            return (std::string)"Golden Retriver";
            break;
        case Breed::Husky:
            return (std::string)"Husky";
            break;
        case Breed::Labrador:
            return (std::string)"Labrador";
            break;
        case Breed::Pitbull:
            return (std::string)"Pitbull";
            break;
        case Breed::Pug:
            return (std::string)"Pug";
            break;
        case Breed::SibaInu:
            return (std::string)"Siba-Inu";
            break;
        default:
            return (std::string)"N/A";
    }
}


void Dog::set_name(std::string n) {
    name = n;
}

void Dog::set_race(Breed b) {
    race = b;
}


Dog& Dog::operator= (const Dog& sec) {
    if (this != &sec) {
        Animal::operator=(sec);
        this->name = sec.name;
        this->race = sec.race;
    }
    return *this;
}

Dog& Dog::operator= (Dog&& sec) {
    if (this != &sec) {
        Animal::operator=(std::move(sec));
        this->name = std::move(sec.name);
        this->race = std::move(sec.race);
    }
    return *this;
}


void Dog::what_does_say() {
    std::cout << "Woof-woof!\n";
}
