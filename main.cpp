#include <iostream>
#include <vector>

using namespace std;
#include "selection_sort.hpp"
using namespace itis;
int main() {
  vector<int> abs = {65,6,5345,234,7643,1};
  int n = abs.size();
  selectionSort(abs, n);
  for (int i = 0; i < abs.size(); i++) {
    cout<<abs[i]<<endl;
  }
  return 0;
}