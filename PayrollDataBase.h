//
// Created by two8g on 17-11-27.
//

#ifndef PAYROLLDATABASE_H
#define PAYROLLDATABASE_H

#include <map>

class Employee;

class PayrollDataBase {
public:
    virtual ~PayrollDataBase();

    Employee *GetEmployee(int empId);

    void AddEmployee(int empId, Employee *);

    void clear() {
        itsEmployees.clear();
    }

private:
    map<int, Employee *> itsEmployees;
};


#endif //PAYROLLDATABASE_H
