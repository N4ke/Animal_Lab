// Copyright 2024 Nikitos


#ifndef FOX_H
#define FOX_H

#include <string>
#include "../include/Animal.h"


enum class TypeFox {           // Vulpes с лат. - лиса, далее сокращенно - V
    VVulpes,   // лисица обыкновенная
    VZerda,   // фенек
    VLagopus,   // песец
    VCorsak,   // степная лисица, корсак
    VPallida,   // африканская лисица
    NA
};


class Fox : public Animal {
 private:
    std::string name;
    TypeFox type;
    unsigned int number_of_eaten_rabbits;

 public:
    Fox();

    Fox(Sex sex, unsigned int age, float mass,
        std::string color, std::string name, TypeFox type);

    Fox(const Fox& sec);

    Fox(Fox&& sec);

    ~Fox();


    std::string get_name();

    std::string get_type();

    unsigned int get_number_of_eaten_rabbits();


    void set_name(std::string name);

    void set_type(TypeFox type);

    void eat();


    Fox& operator= (const Fox& sec);

    Fox& operator= (Fox&& sec);


    void what_does_say() override;
};


#endif  // FOX_H
