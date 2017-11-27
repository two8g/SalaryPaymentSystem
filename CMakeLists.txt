cmake_minimum_required(VERSION 3.8)
project(SalaryPaymentSystem)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Trasation.h PaymentTest.cpp PaymentTest.h AddSalariedEmployee.cpp AddSalariedEmployee.h Employee.cpp Employee.h PayrollDataBase.cpp PayrollDataBase.h AddEmployeeTransaction.cpp AddEmployeeTransaction.h HoldMethod.cpp HoldMethod.h PaymentMethod.cpp PaymentMethod.h PaymentClassification.cpp PaymentClassification.h PaymentSchedule.cpp PaymentSchedule.h SalariedClassification.cpp SalariedClassification.h MonthlySchedule.cpp MonthlySchedule.h)
add_executable(SalaryPaymentSystem ${SOURCE_FILES})