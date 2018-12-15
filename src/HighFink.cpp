#include "employee.h"

HighFink::HighFink() : AbstractEmployee(), Manager(), Fink()
{}

HighFink::HighFink(const std::string& fn, const std::string& ln,const std::string& j, const std::string& rpo, int ico)
    : AbstractEmployee(fn, ln, j), Manager(fn, ln, j, ico), Fink(fn, ln, j, rpo)
{}

HighFink::HighFink(const AbstractEmployee& e, const std::string& rpo, int ico)
    : AbstractEmployee(e), Manager(e, ico), Fink(e, rpo)
{}

HighFink::HighFink(const Fink& f, int ico)
    : AbstractEmployee(f), Manager(f, ico), Fink(f)
{}

HighFink::HighFink(const Manager& m, const std::string& rpo)
    : AbstractEmployee(m), Manager(m), Fink(m, rpo)
{}

HighFink::HighFink(const HighFink& h)
    : AbstractEmployee(h), Manager(h), Fink(h)
{}

void HighFink::showAll() const
{
    std::cout << " --- Category: high fink --- " << std::endl;
	AbstractEmployee::showAll();
    std::cout << "Subordinate employees: " << Manager::inChargeOf() << std::endl;
    std::cout << "Reports to: " << Fink::reportsTo() << std::endl;
}

void HighFink::setAll()
{
    std::cout << " --- Category: high fink --- " << std::endl;
	AbstractEmployee::setAll();

    std::cout << "Enter number of employees: ";
    int ico{0};
    std::cin >> ico;
    while (std::cin.get() != '\n') continue;
    Manager::setInChargeOf(ico);

    std::cout << "Enter person fink report to: ";
    std::string rpo;
    std::getline(std::cin, rpo);
    Fink::setReportsTo(rpo);
}
