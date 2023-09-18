// // C++ program to compute sum of series
// // 1! + 2! + 3! + ... + N!
// #include <iostream>
// using namespace std;

// // Function to return sum
// // of 1!, 2! upto N!
// long long int findFactSum(int N)
// {
// 	// Initializing the variables
// 	long long int f = 1, Sum = 0,result;

// 	// Calculate the factorial and sum
// 	// in the same loop
// 	for (int i = 1; i <= N; i++) {

// 		f = f * i;
// 		Sum += f;
// 	}
//     result = Sum % 18;
// 	// Return Sum as the final result.
// 	return Sum;
// }

// // Driver Code
// int main()
// {
// 	int N = 100;

// 	// Function call
// 	cout << findFactSum(N);

// 	return 0;
// }
// C program to illustrate
// power function
#include <math.h>
#include <stdio.h>
 
int main()
{
    long long int x = 5, y = 444;
 
    // Storing the answer in result.
    long long int result = pow(x, y);
    printf(result);
 
    return 0;
}