#include <iostream>

using namespace std;
int main() {
	int my_arr[7] = { 7,2,5,1,9,11,4 };
	my_sort(my_arr, 7);
	for (int i = 0; i < 7; i++) {
		cout << my_arr[i] << " ";
	}
	return 0;
}
void my_sort(int arr[], int size) {
	int temp;
	for (int i = 1; i < size; i++) {
		temp = arr[i];
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > temp) {
				arr[j] = arr[j - 1];
				if (j == 1) {
					arr[j - 1] = temp;
					break;
					}
			}
			else {
				arr[j] = temp;
				break;
			}
		}
	}
}