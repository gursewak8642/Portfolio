
/*Take income and number of years with companyaas input from
the user and wap which updates income in the following manner 

#If years of work with the company are more than 5 or equal
 #If the income is more than 100 and less than 200 30% increment
 #If the income is more than 200 and less than 300 25% increment
 #If the income is more than 300 and less than 500 20% increment
 #If the income is more than 500 and  15% increment

#If years of work with the company are less than 5 but greater then 2
 #If the income is more than 100 and less than 200 25% increment
 #If the income is more than 200 and less than 300 20% increment
 #If the income is more than 300 and less than 500 15% increment
 #If the income is more than 500 and  10% increment

#If years of work with the company are less than 2 or equal
 #If the income is more than 100 and less than 200 20% increment
 #If the income is more than 200 and less than 300 15% increment
 #If the income is more than 300 and less than 500 10% increment
 #If the income is more than 500 and   5% increment
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int income, number_of_years, result;
    cin >> number_of_years >> income;

    if (number_of_years >= 5)
    {
        if (income > 100 && income < 200)
        {
            result = income + income * 30 / 100;
            cout << result << endl;
        }

        else if (income > 200 && income < 300)
        {
            result = income + income * 25 / 100;
            cout << result << endl;
        }

        else if (income > 300 && income < 500)
        {
            result = income + income * 20 / 100;
            cout << result << endl;
        }

        else if (income > 500)
        {
            result = income + income * 15 / 100;
            cout << result << endl;
        }
    }

    else if (number_of_years < 5 && number_of_years > 2)
    {
        if (income > 100 && income < 200)
        {
            result = income + income * 25 / 100;
            cout << result << endl;
        }

        else if (income > 200 && income < 300)
        {
            result = income + income * 20 / 100;
            cout << result << endl;
        }

        else if (income > 300 && income < 500)
        {
            result = income + income * 15 / 100;
            cout << result << endl;
        }

        else if (income > 500)
        {
            result = income + income * 10 / 100;
            cout << result << endl;
        }
    }

    else if (number_of_years <= 2)
    {
        if (income > 100 && income < 200)
        {
            result = income + income * 20 / 100;
            cout << result << endl;
        }

        else if (income > 200 && income < 300)
        {
            result = income + income * 15 / 100;
            cout << result << endl;
        }

        else if (income > 300 && income < 500)
        {
            result = income + income * 10 / 100;
            cout << result << endl;
        }

        else if (income > 500)
        {
            result = income + income * 5 / 100;
            cout << result << endl;
        }
    }

    return 0;
}