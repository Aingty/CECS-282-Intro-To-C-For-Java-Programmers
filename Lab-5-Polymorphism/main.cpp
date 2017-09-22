/*
 Aingty Eung
 CECS 282 Lab 5
 */
#include "Payroll_System.hpp"

int main() {
    Employee *employeeArray[9];
    //Declaring Staffs
    Staff staff1 = Staff("Allen", "Paita", "123", 'M', 2, 23, 59, 50.00);
    Staff staff2 = Staff("Zapata", "Steven", "456", 'F', 7, 12, 64, 35.00);
    Staff staff3 = Staff("Rios", "Enrique", "789", 'M', 6, 2, 70, 40.00);
    //Declaring Faculties
    Faculty faculty1 = Faculty("Johnson", "Anne", "243", 'F', 4, 27, 62, "Full", "Ph.D", "Engineering", 3);
    Faculty faculty2 = Faculty("Bouris", "William", "791", 'F', 3, 14, 75, "AO", "Ph.D", "English", 1);
    Faculty faculty3 = Faculty("Andrade", "Christopher", "623", 'F', 5, 22, 80, "AS", "MS", "Physical Education", 1);
    //Declaring Part-Time
    Partime partime1 = Partime("Guzman", "Augusto", "455", 'F', 8, 10, 77, 35.00, 30);
    Partime partime2 = Partime("Depirro", "Martin", "678", 'F', 9, 15, 87, 30.00, 15);
    Partime partime3 = Partime("Aldaco", "Marque", "945", 'M', 11, 24, 88, 20.00, 35);
    //Assigning the Employees
    employeeArray[0] = &staff1;
    employeeArray[1] = &staff2;
    employeeArray[2] = &staff3;
    employeeArray[3] = &faculty1;
    employeeArray[4] = &faculty2;
    employeeArray[5] = &faculty3;
    employeeArray[6] = &partime1;
    employeeArray[7] = &partime2;
    employeeArray[8] = &partime3;
    double totalSalary = 0;
    cout << "All Employees: \n";
    //Printing out all the Employees
    for (int i = 0; i <= sizeof(*employeeArray); i++)
    {
        totalSalary = totalSalary + employeeArray[i]->monthlyEarning();
        employeeArray[i] -> putData();
        cout <<"\n";
    }
    cout << "-------------------------------------------------------------\n\n";
    //Printing out the Staff Employees
    cout << "Staff: \n";
    for (int i = 0; i <= sizeof(*employeeArray); i++)
    {
        if (typeid(*employeeArray[i]) == typeid(Staff))
            {
                employeeArray[i]->putData();
                cout << "\n";
            }
    }
    cout << "-------------------------------------------------------------\n\n";
    cout << "Faculty: \n";
    for (int i = 0; i <= sizeof(*employeeArray); i++)
    {
        if (typeid(*employeeArray[i]) == typeid(Faculty))
        {
            employeeArray[i]->putData();
            cout << "\n";
        }
    }
    cout << "-------------------------------------------------------------\n\n";
    cout << "Part-Time: \n";
    double partSalary = 0;
    for (int i = 0; i <= sizeof(*employeeArray); i++)
    {
        if (typeid(*employeeArray[i]) == typeid(Partime))
        {
            partSalary = partSalary + employeeArray[i]->monthlyEarning();
            employeeArray[i]->putData();
            cout << "\n";
        }
    }
    cout << "-------------------------------------------------------------\n \n";
    
    cout << "Total Monthly Salary of All Part-Time: $" << partSalary <<endl;
    cout << "Total Monthly Salary of All Employees: $" << totalSalary <<"\n"<<endl;
    return 0;
}
