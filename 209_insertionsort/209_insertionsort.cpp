#include <iostream>
using namespace std;

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
    }
}
    
int main()
{
    std::cout << "Hello World!\n";
}

