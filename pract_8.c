#include <stdio.h>
int main()
{
    int id;
    float salary, house_rent, dearn_allow, tax, basic_salary;

    printf("Enter employee ID and basic salary: ");
    scanf("%d %f", &id, &basic_salary);

    house_rent = 0.10f * basic_salary;
    dearn_allow  = 0.30f * basic_salary;
    tax = 0.05f * basic_salary;

    salary = basic_salary +house_rent +dearn_allow- tax;

    printf("Employee ID: %d\n", id);
    printf("Take Home Salary = %.2f", salary);
    return 0;
}
