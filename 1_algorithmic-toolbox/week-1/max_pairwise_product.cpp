//
//  University of California, San Diego
//  Data Structures and Algorithms: Algorithmic Toolbox
//
//  Created by Dulio Denis on 2/17/16.
//  Copyright (c) 2016 ddApps. Licensed under the MIT License.
//  ------------------------------------------------
//   Problem: Given a sequence of non-negative integers a0,…,an−1,
//   find the maximum pairwise product, that is, the largest integer
//   that can be obtained by multiplying two different elements from
//   the sequence.
//   Compile: g++ -pipe -O2 -std=c++11 max_pairwise_product.cpp

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int MaxPairwiseProduct(const vector<int>& numbers) {
  int result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
