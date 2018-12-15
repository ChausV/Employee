#include "employee.h"

AbstractEmployee::AbstractEmployee()
    : first_name_("Default name"), last_name_("Default surname"), job_("Default job")
{}

AbstractEmployee::AbstractEmployee(const std::string& fn, const std::string& ln, const std::string& j)
    : first_name_(fn), last_name_(ln), job_(j)
{}

void AbstractEmployee::showAll() const
{
    std::cout << "First name: " << first_name_ << std::endl
    << "Last name: " << last_name_ << std::endl
    << "Job title: " << job_ << std::endl;
}

void AbstractEmployee::setAll()
{
    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name_);
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name_);
    std::cout << "Enter job title: ";
    std::getline(std::cin, job_);
}

std::ostream& operator<<(std::ostream& os, const AbstractEmployee& e)
{
    os << e.first_name_ << " " << e.last_name_;
    return os;
}

AbstractEmployee::~AbstractEmployee()
{}
