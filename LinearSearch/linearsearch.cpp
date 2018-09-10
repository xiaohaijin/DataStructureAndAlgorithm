#include "linearsearch.h"
/*!
 * \brief LinearSearch
 * \param arr the seach array
 * \param n the size of the array
 * \param x the value
 * \return pos if found the x in array, the pos is the index,
 *         else the pos is -1.
 */
int Algo::LinearSearch(const int *arr, const int n, const int x) {
  for (int i = 0; i != n; ++i) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}
