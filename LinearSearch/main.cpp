#include <iostream>

#include "linearsearch.h"

using namespace Algo;

int main(int argc, char *argv[]) {
  const int n = 7;
  int arr[n] = {12, 23, 34, 45, 56, 67, 91};

  std::cout << LinearSearch(arr, n, 56) << std::endl;
  std::cout << LinearSearch(arr, n, 43) << std::endl;
  return 0;
}
