//
//  University of California, San Diego
//  Data Structures and Algorithms: Algorithmic Toolbox
//
//  Created by Dulio Denis on 2/24/16.
//  Copyright (c) 2016 ddApps. Licensed under the MIT License.
//  ------------------------------------------------
//   Naive Fibonacci
//   Compile: g++ -pipe -O2 -std=c++11 naive-fibonacci.cpp
//   Usage: <enter n where n is the nth Fibonacci F(n)>

#include <iostream>
using namespace std;

long long fibonacci(long long number) {
  if (number <= 1) return number;
  return (fibonacci(number - 1) + fibonacci(number - 2));
}

int main() {
  long long number;
  cout << "Enter n where n is the nth Fibonacci F(n): ";
  cin >> number;
  cout << "F(" << number << ") = " << fibonacci(number) << endl;
  return 0;
}
