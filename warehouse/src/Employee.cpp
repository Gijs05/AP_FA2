#include "include\Employee.hpp"

// Variabelen om een Employee te kunnen maken
Employee::Employee(std::string name, bool forkliftCertificate) : name(name), forkliftCertificate(forkliftCertificate){}

// Return de naam
std::string Employee::getName(){
    return name;
}

// Return of de Employee druk is of niet
bool Employee::getBusy(){
    return busy;
}

// Zet de status van de Employee druk of niet
void Employee::setBusy(bool busy){
    this->busy = busy;
}

// Kijk of hij het certificaat heeft
bool Employee::getForkliftCertificate(){
    return forkliftCertificate;
}

// Zet het certificaat waar of niet waar
void Employee::setForkliftCertificate(bool forkliftcertificate){
    this->forkliftCertificate = forkliftcertificate;
}

