//
// Created by two8g on 17-11-27.
//

#include "AddEmployeeTransaction.h"
#include "HoldMethod.h"
#include "Employee.h"
#include "PayrollDataBase.h"

class PaymentMethod;

class PaymentSchedule;

class PaymentClassification;

extern PayrollDataBase GpayrollDataBase;

AddEmployeeTransaction::~AddEmployeeTransaction() {

}

AddEmployeeTransaction::AddEmployeeTransaction(int empId, string name, string address)
        : itsEmpId(empId), itsName(name), itsAddress(address) {}

void AddEmployeeTransaction::Execute() {
    PaymentClassification *pc = GetClassification();
    PaymentSchedule *ps = GetSchedule();
    PaymentMethod *pm = new HoldMethod();
    Employee *e = new Employee(itsEmpId, itsName, itsAddress);
    e->SetClassification(pc);
    e->SetSchedule(ps);
    e->SetMethod(pm);
    GpayrollDataBase.AddEmployee(itsEmpId, e);
}
