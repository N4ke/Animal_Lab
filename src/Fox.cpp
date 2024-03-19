// Copyright 2024 Nikitos


#include "../include/Fox.h"


Fox::Fox() : Animal(), name("n/a"), type(TypeFox::NA) {}

Fox::Fox(Sex s, unsigned int a, float m,
        std::string c, std::string n, TypeFox t) {
    Animal(s, a, m, c);
    name = n;
    type = t;
}

Fox::Fox(const Fox& sec) : Animal(sec) {
    this->name = sec.name;
    this->type = sec.type;
}

Fox::Fox(Fox&& sec) : Animal(sec) {
    this->name = std::move(sec.name);
    this->type = std::move(sec.type);
}

Fox::~Fox() {}


std::string Fox::get_name() {
    return name;
}

std::string Fox::get_type() {
    switch (type) {
        case TypeFox::VCorsak:
            return (std::string)"Vuples Corsak";
            break;
        case TypeFox::VLagopus:
            return (std::string)"Vulpes Lagopus";
            break;
        case TypeFox::VPallida:
            return (std::string)"Vulpes Pallida";
            break;
        case TypeFox::VVulpes:
            return (std::string)"Vulpes Vulpes";
            break;
        case TypeFox::VZerda:
            return (std::string)"Vulpes Zerda";
            break;
        default:
            return (std::string)"N/A";
    }
}

unsigned int Fox::get_number_of_eaten_rabbits() {
    return number_of_eaten_rabbits;
}


void Fox::set_name(std::string n) {
    name = n;
}

void Fox::set_type(TypeFox t) {
    type = t;
}

void Fox::eat() {
    number_of_eaten_rabbits++;
}


Fox& Fox::operator= (const Fox& sec) {
    if (this != &sec) {
        Animal::operator=(sec);
        this->name = sec.name;
        this->type = sec.type;
        this->number_of_eaten_rabbits = sec.number_of_eaten_rabbits;
    }
    return *this;
}

Fox& Fox::operator= (Fox&& sec) {
    if (this != &sec) {
        Animal::operator=(std::move(sec));
        this->name = std::move(sec.name);
        this->type = std::move(sec.type);
        this->number_of_eaten_rabbits = std::move(sec.number_of_eaten_rabbits);
    }
    return *this;
}


void Fox::what_does_say() {
    switch (type) {
    case TypeFox::VVulpes:
        std::cout << "Gering-ding-ding-ding-dingeringeding!\n";
        break;

    case TypeFox::VZerda:
        std::cout << "Wa-pa-pa-pa-pa-pa-pow!\n";
        break;

    case TypeFox::VLagopus:
        std::cout << "Hatee-hatee-hatee-ho!\n";
        break;

    case TypeFox::VCorsak:
        std::cout << "Tchoff-tchoff-tchoffo-tchoffo-tchoff!\n";
        break;

    case TypeFox::VPallida:
        std::cout << "Chacha-chacha-chacha-chow!\n";
        break;
    default:
        std::cout << "Says nothing\n";
    }
}
