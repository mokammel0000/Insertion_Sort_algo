using namespace std;
#include <iostream>

void entering_array(int* arr, int len) {
    for (int i = 0; i < len; ++i) {
        cin >> arr[i];
    }
}
void print_array(int * arr, int len) {
    for (int i = 0; i < len; ++i){
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void insertion_sort(int arr[], int len) {
    cout << "with insertion sort \n";
    for (int i = 1; i < len; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]){
            arr[j + 1] = arr[j];
        --j;
    }
    arr[j + 1] = key;

    }
    print_array(arr, len);
}

int main()
{
    int arr[50];
    int n;
    cin >> n;

    entering_array(arr, n);
    print_array(arr, n);
    insertion_sort(arr, n);
   
}


