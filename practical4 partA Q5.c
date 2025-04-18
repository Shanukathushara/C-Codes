
#include <stdio.h>

int main() {

    int employeeNo;
    float hoursWorked, overtimePayment, totalOvertimePayment = 0;
    int countOver4000 = 0;
    const float normalRate = 150.0, extraRate = 200.0;
    const float overtimeThreshold = 40.0;


    printf("Enter Employee No and Hours Worked (enter -999 to end):\n");
    while (1) {
        printf("Employee No: ");
        scanf("%d", &employeeNo);



        if (employeeNo == -999) {
            break;
        }

        printf("Hours Worked: ");
        scanf("%f", &hoursWorked);


        if (hoursWorked > overtimeThreshold) {
            overtimePayment = (hoursWorked - overtimeThreshold) * extraRate + (overtimeThreshold * normalRate);
        } else {
            overtimePayment = hoursWorked * normalRate;
        }


        totalOvertimePayment += overtimePayment;
        if (overtimePayment > 4000) {
            countOver4000++;
        }


        printf("Employee No: %d\n", employeeNo);
        printf("Overtime Payment: Rs. %.2f\n\n", overtimePayment);
    }


    int totalEmployees = countOver4000;
    float percentageOver4000 = (countOver4000 / (float)totalEmployees) * 100;


    printf("\nTotal Overtime Payment: Rs. %.2f\n", totalOvertimePayment);
    printf("Percentage of Employees with Overtime Payment > Rs. 4000: %.2f%%\n", percentageOver4000);


}

