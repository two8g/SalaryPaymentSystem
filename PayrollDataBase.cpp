//
// Created by two8g on 17-11-27.
//

#include "PayrollDataBase.h"
#include "Employee.h"

PayrollDataBase GpayrollDataBase;

PayrollDataBase::~PayrollDataBase() {

}

Employee *PayrollDataBase::GetEmployee(int empId) {
    return itsEmployees[empId];
}

void PayrollDataBase::AddEmployee(int empId, Employee *e) {
    itsEmployees[empId] = e;
}
