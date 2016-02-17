//
//  University of California, San Diego
//  Data Structures and Algorithms: Algorithmic Toolbox
//
//  Created by Dulio Denis on 2/17/16.
//  Copyright (c) 2016 ddApps. Licensed under the MIT License.
//  ------------------------------------------------
//   Problem: Given two digits a and b, find a+b.
//   Compile: g++ -pipe -O2 -std=c++11 APlusB.cpp

#include <iostream>

int main(){
    int a = 0;
    int b = 0;
    int sum = 0;
    std::cin >> a;
    std::cin >> b;
    sum = a + b;
    std::cout << sum << "\n";
    return 0;
}
