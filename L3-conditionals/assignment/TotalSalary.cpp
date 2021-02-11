/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so.
*/

//SOL
#include<iostream>
#include <cmath> 
using namespace std;

int main() {
	// Write your code here
	double basic;
    double da , hra , pf;
    char Grade;
    double totalSalary;
    double allow;
	    
    cin>>basic>>Grade;

    hra = (20.0/100)*basic;
	da = (50.0/100)*basic;
    pf = (11.0/100)*basic;
    
    if(Grade == 'A')
    {
        allow = 1700;
    }
	else if(Grade == 'B')
    {
        allow = 1500;        
    }
    else{
        allow = 1300;
    }
    
    
    totalSalary = basic + hra + da + allow - pf;
    totalSalary = round(totalSalary);
    cout<<(int)totalSalary;
    
}

