#include <iostream>

using namespace std

//***************************************************************************80
// Haven't use C++ before so might as well try it
//***************************************************************************80

//***************************************************************************80
//                           F U N C T I O N S
//***************************************************************************80
/*
    insertionSort(a[], n)

	Utilize the insertion strategy on an array arr[] of size n to sort
	the array. If arr[i+1] is smaller than arr[i] then move it to that 
	position, else leave it.
*/
void insertionSort(int arr[], int n) {

	int i, j, temp;
	for (int i = 1; i < n; i++) {
		
		// temp holds the current value and j will point to the previous value
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp) {
			// since arr[j] is greater than temp, shift arr[j] up and move back
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		// finally found where to put temp now that everyone else has been moved up
		arr[j + 1] = temp;
	}
}

//***************************************************************************80
//                                M A I N 
//***************************************************************************80
int main() {

	return 0;
}
