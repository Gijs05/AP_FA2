#include "include\Employee.hpp"

Employee::Employee(std::string name, bool busy, bool forkliftCertificate) : name(name), busy(busy), forkliftCertificate(forkliftCertificate){
}
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
};
void Employee::setForkliftCertificate(bool forkliftcertificate){
    this->forkliftCertificate = forkliftcertificate;
};

