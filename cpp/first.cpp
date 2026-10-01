#include <iostream>

using namespace std;
int main(void) {
  int n;

  cout << "Enter number of elements: ";
  cin >> n;

  int numbers[100];
  cout << "Enter " << n << " numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  // Bubble sort: repeatedly swap adjacent elements that are out of order.
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }

  cout << "Sorted numbers: ";
  for (int i = 0; i < n; i++) {
    cout << numbers[i] << " ";
  }
  return 0;
}
