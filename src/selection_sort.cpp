//
// Created by Семен Соколов on 08.05.2021.
//
#include <iostream>
#include <vector>
#include "selection_sort.hpp"
using namespace std;
namespace itis {

  void selectionSort(vector<int> vector, int n) {
    for (int i = 0; i < n; i++)
    {
      int min_index = i;
      int min_element = vector[i];
      for (int j = i + 1; j < n; j++)
      {
        if (vector[j] < min_element)
        {
          min_element = vector[j];
          min_index = j;
        }
      }
      swap(vector[i], vector[min_index]);
    }
  }
} // namespace itis
