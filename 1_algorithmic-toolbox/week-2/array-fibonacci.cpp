//
//  University of California, San Diego
//  Data Structures and Algorithms: Algorithmic Toolbox
//
//  Created by Dulio Denis on 2/24/16.
//  Copyright (c) 2016 ddApps. Licensed under the MIT License.
//  ------------------------------------------------
//   Array Based Fibonacci
//   Compile: g++ -pipe -O2 -std=c++11 array-fibonacci.cpp
//   Usage: <enter n where n is the nth Fibonacci F(n)>

#include <iostream>
using namespace std;

// Naive Approach uses Recursion
long long fibonacci(long long number) {
  if (number <= 1) return number;
  return (fibonacci(number - 1) + fibonacci(number - 2));
}

// Faster Approach uses Arrays
long long arrayFibonacci(long long number) {
  long long numbers[number+1];

  numbers[0] = 0;
  numbers[1] = 1;

  for (int i=2; i <= number; i++) {
    numbers[i] = numbers[i - 1] + numbers[i - 2];
  }

  return numbers[number];
}

int main() {
  long long number;
  cout << "Enter n where n is the nth Fibonacci F(n): ";
  cin >> number;
  cout << "Fast  F(" << number << ") = " << arrayFibonacci(number) << endl;
  cout << "Naive F(" << number << ") = " << fibonacci(number) << endl;
  return 0;
}
