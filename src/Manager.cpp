#include "employee.h"

Manager::Manager() : AbstractEmployee(), in_charge_of_(0)
{}

Manager::Manager(const std::string& fn, const std::string& ln,const std::string& j, int ico)
    : AbstractEmployee(fn, ln, j), in_charge_of_(ico)
{}

// will use automatically generated copy constructor
Manager::Manager(const AbstractEmployee& e, int ico)
    : AbstractEmployee(e), in_charge_of_(ico)
{}

// check this
Manager::Manager(const Manager& m)
    : AbstractEmployee(static_cast<const AbstractEmployee&>(m)), in_charge_of_(m.in_charge_of_)
{}

void Manager::showAll() const
{
	AbstractEmployee::showAll();
    std::cout << "Subordinate employees: " << in_charge_of_ << std::endl;
}

void Manager::setAll()
{
	AbstractEmployee::setAll();
    std::cout << "Enter number of employees: ";
    // very bad, but without validation and stream state checking this time
    std::cin >> in_charge_of_;
    while (std::cin.get() != '\n') continue;
}
