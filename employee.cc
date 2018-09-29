// An Employee has a name, and ID number, title, department hourly rate and number of hours worked per week. Write a class for employee, and print using functions, employee details with their weekly wages in the descending order.

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
        string name;
        string title;
        int idNum;
        float departmentHourlyRate;
        float hoursWorkedWeek;
};



 void swap(Employee employees[], int maxValue, int i, int &count)
{
    Employee swap1= employees[i];
    employees[i] = employees[maxValue];
    employees[maxValue] = swap1;
}

void sortWages(Employee employees[], int &count)
{
    for (int i = 0; i < count; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < count; j++)
        {
            int employeeWagei = (employees[i].departmentHourlyRate * employees[i].hoursWorkedWeek);
            int employeeWageJ = (employees[j].departmentHourlyRate * employees[j].hoursWorkedWeek);
            if(employeeWageJ > employeeWagei)
            {
                maxIndex = j;
            }
        }

        swap(employees, maxIndex, i, count);
    }

}

void listAllEmployees(Employee employees[], int &count)
{
    sortWages(employees, count);

    for (int i = 0; i < count; i++)
    {
        cout << "Employee: " << i+1 << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Title: " << employees[i].title << endl;
        cout << "ID: " << employees[i].idNum << endl;
        cout << "Department Hourly Rate: $" << employees[i].departmentHourlyRate << endl;
        cout << "Hours Worked Per Week: " << employees[i].hoursWorkedWeek << endl;
        cout << "Wages Per Week: $" << employees[i].departmentHourlyRate * employees[i].hoursWorkedWeek << endl << endl;
    }

}

void addEmployee(Employee employees[], int &count)
{
    string name, title;
    int idNum;
    float departmentHourlyRate, hoursWorkedWeek;

    cout << "Add the name of the employee:" << endl;
    getline(cin, name);

    cout << "Add the title of the employee:" << endl;
    getline(cin, title);

    cout << "Add the id number of the employee:" << endl;
    cin >> idNum;
    cin.ignore();

    cout << "Add the department hourly rate of the employee:" << endl;
    cin >> departmentHourlyRate;
    cin.ignore();

    cout << "Add the hours worked per week of the employee:" << endl;
    cin >> hoursWorkedWeek;
    cin.ignore();


    Employee newEmployee;

    newEmployee.name = name;
    newEmployee.title = title;
    newEmployee.idNum = idNum;
    newEmployee.departmentHourlyRate = departmentHourlyRate;
    newEmployee.hoursWorkedWeek = hoursWorkedWeek;
   
   employees[count] = newEmployee;
   count++;
   cout << "New employee successfully created" << endl << endl;
     
}

int main() 
{
    Employee employees[100];
    int count = 0;
    int employeesToAdd;

    cout << "How many employees would you like to add?" << endl;
    cin >> employeesToAdd;
    cin.ignore();

    for (int i = 1; i <= employeesToAdd; i++)
    {
        addEmployee(employees, count);
    }

    listAllEmployees(employees, count);

    return 0;
}
