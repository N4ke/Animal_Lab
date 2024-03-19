#include "../src/Animal.cpp"
#include "../src/Dog.cpp"
#include "../src/Fox.cpp"


int main() {
    // так как класс Animal является дочерним для Dog и Fox, то его демонстрацию можно показать на примере последних

    Dog Neighbor_dog;

    Neighbor_dog.set_sex(Sex::Female);
    Neighbor_dog.set_age(5);
    Neighbor_dog.set_mass(18);
    Neighbor_dog.set_color("Black and white");
    Neighbor_dog.set_race(Breed::Husky);
    Neighbor_dog.set_name("Manya");

    std::cout<< "Neighbor dog information:\n" <<
        "Name: " << Neighbor_dog.get_name() << "\n" <<
        "Sex: " << Neighbor_dog.get_sex() << "\n" <<
        "Age: " << Neighbor_dog.get_age() << "\n" <<
        "Mass: " << Neighbor_dog.get_mass() << "\n" <<
        "Color: " << Neighbor_dog.get_color() << "\n" <<
        "Breed: " << Neighbor_dog.get_race() << "\n";

    Neighbor_dog.what_does_say();


    Fox fox_from_zoo;

    fox_from_zoo.set_sex(Sex::Male);
    fox_from_zoo.set_age(3);
    fox_from_zoo.set_mass(9);
    fox_from_zoo.set_color("Orange, white and black");
    fox_from_zoo.set_type(TypeFox::VVulpes);
    fox_from_zoo.set_name("Ben");

    fox_from_zoo.eat();
    fox_from_zoo.eat();

    std::cout<< "\n\nFox from zoo information:\n" <<
        "Name: " << fox_from_zoo.get_name() << "\n" <<
        "Sex: " << fox_from_zoo.get_sex() << "\n" <<
        "Age: " << fox_from_zoo.get_age() << "\n" <<
        "Mass: " << fox_from_zoo.get_mass() << "\n" <<
        "Color: " << fox_from_zoo.get_color() << "\n" <<
        "Type: " << fox_from_zoo.get_type() << "\n" <<
        "Number of eaten rabbits: " << fox_from_zoo.get_number_of_eaten_rabbits() << "\n";

    fox_from_zoo.what_does_say();
}