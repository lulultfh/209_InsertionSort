#include <iostream>
using namespace std;

int arr[40];
int n;

void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 40)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 40 elemen.\n";
		}
	}

	cout << endl;
	cout << "==========" << endl;
	cout << "masukan elemen Array" << endl;
	cout << "==========" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionSort() {
    int i, n, j, temp;
    int arr[40];

    for (i = 1; i <= n - 1; i++) { //step1
        temp = arr[i]; //step2

        j = i - 1; //step3

        while (j >= 0 && arr[j] > temp); //step4
        {
            arr[j + 1] = arr[j]; //step4a
            j--; //step4b
        }

		arr[j + 1] = temp; //step5
    }
}


    
int main()
{
    std::cout << "Hello World!\n";
}

