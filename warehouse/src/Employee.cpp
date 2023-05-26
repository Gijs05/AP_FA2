#include "include\Employee.hpp"

Employee::Employee(std::string name, bool busy) : name(name), busy(busy){}

std::string Employee::getName(){
    return name;
}

bool Employee::getBusy(){
    return busy;
}

void Employee::setBusy(bool busy){
    this->busy = busy;
}

bool Employee::getForkliftCertificate(){
    return forkliftCertificate;
}

void Employee::setForkliftCertificate(bool forkliftcertificate){
    this->forkliftCertificate = forkliftcertificate;
}

