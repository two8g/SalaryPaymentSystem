//
// Created by two8g on 17-11-27.
//

#ifndef ADDEMPLOYEETRANSACTION_H
#define ADDEMPLOYEETRANSACTION_H

#include <string>
#include "Trasation.h"

class PaymentClassification;

class PaymentSchedule;

class AddEmployeeTransaction : public Transaction {
public:
    virtual ~AddEmployeeTransaction();

    AddEmployeeTransaction(int empId, char *name, char *address);

    virtual PaymentClassification *GetClassification() const = 0;

    virtual PaymentSchedule *GetSchedule() const = 0;

    virtual void Execute();

private:
    int itsEmpId;
    char *itsName;
    char *itsAddress;
};


#endif //ADDEMPLOYEETRANSACTION_H
