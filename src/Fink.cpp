#include "employee.h"

Fink::Fink() : AbstractEmployee(), reports_to_("Default")
{}

Fink::Fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo)
    : AbstractEmployee(fn, ln, j), reports_to_(rpo)
{}

Fink::Fink(const AbstractEmployee& e, const std::string& rpo)
    : AbstractEmployee(e), reports_to_(rpo)
{}

Fink::Fink(const Fink & e)
    : AbstractEmployee(static_cast<const AbstractEmployee&>(e)), reports_to_(e.reports_to_)
{}

void Fink::showAll() const
{
	AbstractEmployee::showAll();
    std::cout << "Reports to: " << reports_to_ << std::endl;
}

void Fink::setAll()
{
	AbstractEmployee::setAll();
    std::cout << "Enter person fink report to: ";
    std::getline(std::cin, reports_to_);
}
