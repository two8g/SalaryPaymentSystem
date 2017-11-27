//
// Created by two8g on 17-11-27.
//

#ifndef SALARIEDCLASSIFICATION_H
#define SALARIEDCLASSIFICATION_H

#include "PaymentClassification.h"

class SalariedClassification : public PaymentClassification {

public:
    SalariedClassification(double salary);

    double getSalary();

    void GetSalary();

private:
    double itsSalary;
};


#endif //SALARIEDCLASSIFICATION_H
