// Copyright 2024 Nikitos


#include "../include/Animal.h"


Animal::Animal(): mass(0), sex(Sex::NA), color("n/a"), age(0) {}

Animal::Animal(Sex s, unsigned int a, float m, std::string c) {
    sex = s;
    age = a;
    mass = m;
    color = c;
}

Animal::Animal(const Animal& sec) {
    this->sex = sec.sex;
    this->age = sec.age;
    this->mass = sec.mass;
    this->color = sec.color;
}

Animal::Animal(Animal&& sec) {
    this->sex = std::move(sec.sex);
    this->age = std::move(sec.age);
    this->mass = std::move(sec.mass);
    this->color = std::move(sec.color);
}

Animal::~Animal() {}


std::string Animal::get_sex() {
    switch (sex) {
    case Sex::Male:
        return (std::string)"Male";
        break;
    case Sex::Female:
        return (std::string)"Female";
        break;
    default:
        return (std::string)"N/A";
    }
}

unsigned int Animal::get_age() {
    return age;
}

float Animal::get_mass() {
    return mass;
}

std::string Animal::get_color() {
    return color;
}


void Animal::set_mass(float m) {
    mass = m;
}

void Animal::set_age(unsigned int a) {
    age = a;
}

void Animal::set_sex(Sex s) {
    sex = s;
}

void Animal::set_color(std::string c) {
    color = c;
}


Animal& Animal::operator= (const Animal& sec) {
    if (this != &sec) {
        this->sex = sec.sex;
        this->age = sec.age;
        this->mass = sec.mass;
        this->color = sec.color;
    }
    return *this;
}

Animal& Animal::operator= (Animal&& sec) {
    if (this != &sec) {
        this->sex = std::move(sec.sex);
        this->age = std::move(sec.age);
        this->mass = std::move(sec.mass);
        this->color = std::move(sec.color);
    }
    return *this;
}


void Animal::what_does_say() {}
