#include <iostream>
using namespace std;

int *apply_all(int *a, int size_a, int *b, int size_b);
void print(int *r, int r_size);

int main()
{
  const size_t array1_size {5};
  const size_t array2_size {3};
  
  int array1[] {1, 2, 3, 4, 5};
  int array2[] {10, 20, 30};

  cout << "Array 1: ";
  print(array1, array1_size);

  cout << "Array 2: ";
  print(array2, array2_size);

  int *results = apply_all(array1, array1_size, array2, array2_size);
  constexpr size_t results_size {array1_size * array2_size};

  cout << "Result: ";
  print(results, results_size);

  cout << endl;

  delete [] results;

  return 0;
}

int *apply_all(int *a, int size_a, int *b, int size_b) {
  int *int_ptr{nullptr};
  int k {0};
  int_ptr = new int[size_a * size_b];
  
  for (auto i = 0; i < size_b; i++) {
    for (auto j = 0; j < size_a; j++) {
      int_ptr[k] = a[j] * b[i];
      k++;
    }
  }

  return int_ptr;
}

void print(int *r, int r_size) {
  cout << "[ ";
  for (auto i = 0; i < r_size; i++) {
    cout << r[i] << " "; 
  }
  cout << "]" << endl;
}
