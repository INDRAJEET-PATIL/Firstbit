#include<stdio.h>
void main(){

 float basic = 40000;  
    float da, ta, hra, totalSalary;

    printf("Basic salary: %.f\n", basic);

    if (basic <= 50000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    totalSalary = basic + da + ta + hra;

    printf("Total Salary: %.f\n", totalSalary);
    
}