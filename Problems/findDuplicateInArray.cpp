/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int MissingNumber (int arr[], int size)
{
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
   */

  int temp = arr[0];

  for (int i = 0; i < size; i++)
    {
      if (arr[abs(arr[i])] > 0)
    	arr[abs(arr[i])] = -arr[abs (arr[i])];
      else
	    return abs(arr[i]);

	}
}

int main ()
{
	int size;
	cin >> size;
	int *input = new int[1 + size];

	for (int i = 0; i < size; i++)
	  cin >> input[i];

	cout << MissingNumber (input, size);

	delete[]input;

	return 0;
}
