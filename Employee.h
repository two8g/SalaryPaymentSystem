//
// Created by two8g on 17-11-27.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include "PaymentMethod.h"
#include "PaymentClassification.h"
#include "PaymentSchedule.h"
#include <string>

class Employee {

public:
    Employee(int id, string name, string address);

    int GetId();

    string GetName();

    string GetAddress();

    PaymentClassification *GetClassification();

    PaymentSchedule *GetSchedule();

    PaymentMethod *GetMethod();

    void SetClassification(PaymentClassification *pc);

    void SetSchedule(PaymentSchedule *ps);

    void SetMethod(PaymentMethod *pm);

private:
    int itsId;
    string itsName;
    string itsAddress;
    PaymentClassification *itsPc;
    PaymentSchedule *itsPs;
    PaymentMethod *itsPm;
};


#endif //EMPLOYEE_H
