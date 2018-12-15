#include "employee.h"
#include <iostream>

int main() {
    Employee employee("Rick", "Deckard", "Blade runner");
    std::cout << employee << std::endl;
    employee.showAll();
    std::cout << std::endl;

    Manager manager("Harry", "Bryant", "Captain", 5);
    std::cout << manager << std::endl;
    manager.showAll();
    std::cout << std::endl;

    Fink fink("Leon", "Kowalski", "Cargo loader", "Roy Batty");
    std::cout << fink << std::endl;
    fink.showAll();
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
    }
    std::cout << std::endl;

    std::cout << "Press a key for next phase:" << std::endl;
    std::cin.get();
    std::cout << std::endl;

    std::cout << " ###################### additional ###################### " << std::endl;
    std::cout << std::endl;

    Employee employee11;
    employee11.showAll();
    // employee11.setAll();
    // employee11.showAll();
    std::cout << std::endl;

    Manager manager11;
    manager11.showAll();
    // manager11.setAll();
    // manager11.showAll();
    Manager manager12(employee, 33);
    manager12.showAll();
    Manager manager13(manager);
    manager13.showAll();
    std::cout << std::endl;

    Fink fink11;
    fink11.showAll();
    // fink11.setAll();
    // fink11.showAll();
    Fink fink12(employee, "John Doe");
    fink12.showAll();
    Fink fink13(fink);
    fink13.showAll();
    std::cout << std::endl;

    std::cout << "Press a key for next phase:" << std::endl;
    std::cin.get();
    std::cout << std::endl;

    HighFink hf11;
    hf11.showAll();
    // hf11.setAll();
    // hf11.showAll();
    HighFink hf12("John", "Smith", "hf12", "Somebody Else", 100);
    hf12.showAll();
    HighFink hf13(employee, "Smbd Els", 200);
    hf13.showAll();
    HighFink hf14(fink, 42);
    hf14.showAll();
    HighFink hf15(hf12);
    hf15.showAll();

    std::cout << std::endl;
    // hf12.setAll();
    // hf15.showAll();
    // hf12.showAll();

    return 0;
}
