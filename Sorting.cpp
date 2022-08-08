#include <iostream>
using namespace std;

// Driver main
int main(){
  int n;
  int arr[100];

  // Enter size...
  cout << "Enter the size  : ";
  cin >> n;

  // Enter elements..
  cout << "Enter the elements : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Sorting logic...
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[min] > arr[j])
      {
        int temp = arr[j];
        arr[j] = arr[min];
        arr[min] = temp;
      }
    }
  }

  // printing sorted array...
  cout << "................" <<endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}