#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

template<typename T>
int LinearSearch(T *arr, int n, T x){
  int i = 0;
  for(i = 0; i != n; ++i){
    if(arr[i] == x){
      return i;
    }
  }
  return -1;
}

#endif /* LINEARSEARCH_H */
