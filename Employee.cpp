//
// Created by two8g on 17-11-27.
//

#include "Employee.h"

class PyamnetClassification;

Employee::Employee(int id, string name, string address) : itsId(id), itsName(name), itsAddress(address) {

}

void Employee::SetClassification(PaymentClassification *pClassifation) {

}

void Employee::SetSchedule(PaymentSchedule *pSchedule) {

}

void Employee::SetMethod(PaymentMethod *pm) {

}

PaymentClassification *Employee::GetClassification() {
    return nullptr;
}

PaymentSchedule *Employee::GetSchedule() {
    return nullptr;
}

PaymentMethod *Employee::GetMethod() {
    return nullptr;
}

string Employee::GetName() {
    return itsName;
}

string Employee::GetAddress() {
    return itsAddress;
}

int Employee::GetId() {
    return itsId;
}
