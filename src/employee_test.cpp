#include "employee.h"
#include <iostream>

int main() {
    Employee employee("Rick", "Deckard", "Blade runner");
    std::cout << employee << std::endl;
    employee.showAll();
    // employee.setAll();
    // employee.showAll();
    std::cout << std::endl;

    Manager manager("Harry", "Bryant", "Captain", 5);
    std::cout << manager << std::endl;
    manager.showAll();
    // manager.setAll();
    // manager.showAll();
    std::cout << std::endl;

    Fink fink("Leon", "Kowalski", "Cargo loader", "Roy Batty");
    std::cout << fink << std::endl;
    fink.showAll();
    // fink.setAll();
    // fink.showAll();
    std::cout << std::endl;

    HighFink highFink(manager, "Eduardo Gaff");
    highFink.showAll();
    std::cout << std::endl;
    std::cout << "Press a key for next phase:" << std::endl;
    std::cin.get();
    std::cout << std::endl;

    HighFink highFink2;
    highFink2.setAll();
    std::cout << highFink2 << std::endl;
    std::cout << std::endl;

    std::cout << "Using an AbstractEmployee * pointer:" << std::endl;
    AbstractEmployee* tri[4] = { &employee, &fink, &highFink, &highFink2};
    for (auto i = 0; i < 4; i++) {
        tri[i]->showAll();
        if (i != 3) { std::cout << "-" << std::endl; }
    }
    return 0;
}
