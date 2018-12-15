#include "employee.h"

Employee::Employee() : AbstractEmployee()
{}

Employee::Employee(const std::string& fn, const std::string& ln, const std::string& j)
    : AbstractEmployee(fn, ln, j)
{}

void Employee::showAll() const
{
    std::cout << " --- Category: employee --- " << std::endl;
	AbstractEmployee::showAll();
}

void Employee::setAll()
{
    std::cout << " --- Category: employee --- " << std::endl;
	AbstractEmployee::setAll();
}
