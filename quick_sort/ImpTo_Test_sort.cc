#include "test_sort.h"

namespace jw {

bool is_sorted(int *numbers, int count) {
  double last_num = -INFINITY;
  bool sorted = true;

  for (int i = 0; i < count; ++i) {
    if (numbers[i] < (int)last_num) {
      sorted = false;
      break;
    }

    last_num = numbers[i];
  }

  return sorted;
}

void print_ints(int numbers[], int count) {
  for (int i = 0; i < count; ++i) {
    std::cout << numbers[i];
    if (i < count - 1) {
      std::cout << ", ";
    }
  }
}

bool contain_same_ints(int arr1[], int arr2[], int count) { //what if some numbers are equal to each other. 
  for (int i = 0; i < count; ++i) {
    bool found = false;
    for (int j = 0; j < count; ++j) {
      if (arr1[i] == arr2[j]) {
        found = true;
        arr2[j] = -1;     //assign some value won't appear in your array to it. Maybe there have some better idea.
        break;            //But I don't figure out at moment.
      }
    }
    if (!found) {
      return false;
    }
  }

  return true;
}

}  // namespace jw
