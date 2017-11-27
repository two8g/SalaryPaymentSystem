//
// Created by two8g on 17-11-27.
//

#ifndef ADDSALARIEDEMPLOYEE_H
#define ADDSALARIEDEMPLOYEE_H

#include "AddEmployeeTransaction.h"
#include <string>

class AddSalariedEmployee : public AddEmployeeTransaction {
public:
    virtual ~AddSalariedEmployee();

    AddSalariedEmployee(int empId, string name, string address, double salary);

    PaymentClassification *GetClassification() const;

    PaymentSchedule *GetSchedule() const;

private:
    double itsSalary;
};


#endif //ADDSALARIEDEMPLOYEE_H
