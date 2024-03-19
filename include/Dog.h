// Copyright 2024 Nikitos


#ifndef DOG_H
#define DOG_H

#include <string>
#include "../include/Animal.h"


enum class Breed {
    GermanShepherd,
    Corgi,
    SibaInu,
    Labrador,
    Bulldog,
    Pug,
    Chihuahua,
    GoldenRetriver,
    Pitbull,
    Husky,
    NA
};


class Dog : public Animal {
 private:
    std::string name;
    Breed race;

 public:
    Dog();

    Dog(Sex sex, unsigned int age, float mass,
        std::string color, std::string name, Breed breed);

    Dog(const Dog& sec);

    Dog(Dog&& sec);

    ~Dog();


    std::string get_name();

    std::string get_race();


    Dog& operator= (const Dog& sec);

    Dog& operator= (Dog&& sec);


    void set_name(std::string name);

    void set_race(Breed breed);

    void what_does_say() override;
};


#endif  // DOG_H
