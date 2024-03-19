// Copyright 2024 Nikitos


#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

enum class Sex {Male, Female, NA};


class Animal {
 private:
    float mass;
    Sex sex;
    std::string color;
    unsigned int age;

 public:
    Animal();

    Animal(Sex sex, unsigned int age, float mass, std::string color);

    Animal(const Animal& sec);

    Animal(Animal&& sec);

    ~Animal();


    float get_mass();

    std::string get_sex();

    unsigned int get_age();

    std::string get_color();


    void set_mass(float mass);

    void set_sex(Sex sex);

    void set_color(std::string color);

    void set_age(unsigned int age);


    Animal& operator= (const Animal& sec);

    Animal& operator= (Animal&& sec);


    virtual void what_does_say();
};


#endif  // ANIMAL_H
