//
// Created by two8g on 17-11-27.
//
#include <assert.h>
#include "PaymentTest.h"
#include "AddSalariedEmployee.h"
#include "Employee.h"
#include "MonthlySchedule.h"
#include "HoldMethod.h"
#include "SalariedClassification.h"
#include "PayrollDataBase.h"

extern PayrollDataBase GpayrollDataBase;

void PaymentTest::TestAddSalariedEmployee() {
    int empId = 1;
    AddSalariedEmployee t(empId, "BOb", "Home", 1000.00);
    t.Execute();

    Employee *e = GpayrollDataBase.GetEmployee(empId);
    assert("Bob" == e->GetName());

    PaymentClassification *pc = e->GetClassification();
    SalariedClassification *sc = dynamic_cast<SalariedClassification *>(pc);
    assert(sc);

    assertEquals(1000.00, sc->GetSalary(), 0.01);
    PaymentSchedule *ps = e->GetSchedule();
    MonthlySchedule *ms = dynamic_cast<MonthlySchedule *>(ps);
    assert(ms);
    PaymentMethod *pm = e->GetMethod();
    HoldMethod *hm = dynamic_cast<HoldMethod *>(pm);
    assert(hm);
}
