#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


//Task 1 func
void arr_copy(int* start, int* final, int size) {
    for (int i = 0; i < size; ++i) {
        *(final + i) = *(start + i);
    }
}


//Task 2 and 3 func
void arr_copy_reverse(int* start, int* final, int size) {
    for (int i = 0; i < size; ++i) {
        *(final + i) = *(start + size - 1 - i);
    }
}

//Task 4 func
void sum_product(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
        *product *= arr[i];
    }
}


//Task 5 func
void neg_pos_zero(int* arr, int size, int* neg_count, int* zero_count, int* pos_count) {
    *neg_count = 0;
    *zero_count = 0;
    *pos_count = 0;
    for (int i = 0; i < size; i++) {
        *neg_count += (arr[i] < 0) ? 1 : 0;
        *zero_count += (arr[i] == 0) ? 1 : 0;
        *pos_count += (arr[i] > 0) ? 1 : 0;
    }
}


//Task 6 func
void max_element(int* arr, int size, int* max_index, int* max_value) {
    *max_index = 0;
    *max_value = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_value) {
            *max_value = arr[i];
            *max_index = i;
        }
    }
}


//Task 1
int main() {
     srand(time(0));
     const int size = 10;
     int first_arr[size];
     int second_arr[size];

     for (int i = 0; i < size; ++i) {
         first_arr[i] = rand() % 60;
     }

     arr_copy(first_arr, second_arr, size);

     for (int i = 0; i < size; ++i) {
         cout << second_arr[i] << ' ';
     }


     //Task 2
     srand(time(0));
     const int n = 10;
     int arr[n];

     cout << "unreversed array: ";
     for (int i = 0; i < n; i++) {
         arr[i] = rand() % 60;
         cout << arr[i] << " ";
     }
     cout << "\n";

     for (int i = 0; i < n / 2; i++) {
         int temp = *(arr + i);
         *(arr + i) = *(arr + n - 1 - i);
         *(arr + n - 1 - i) = temp;
     }

     cout << "reversed array: ";
     for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
     }


     //Task 3
    srand(time(0));
    const int size = 10;
    int first_arr[size];
    int second_arr[size];

    cout << "Unreversed array: ";
    for (int i = 0; i < size; ++i) {
        first_arr[i] = rand() % 60;
        cout << first_arr[i] << ' ';
    }
    cout << "\n";

    arr_copy_reverse(first_arr, second_arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << second_arr[i] << ' ';
    }


    //Task 4
    srand(time(0));
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 69; 
        cout << arr[i] << " ";
    }
    cout << "\n";

    int sum, product;

    sum_product(arr, size, &sum, &product);

    cout << "Sum: " << sum << "\n";
    cout << "Product of a number: " << product << "\n";


    //Task 5
    srand(time(0));
    const int size = 15;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 41 - 20; 
        cout << arr[i] << " ";
    }
    cout << "\n";

    int neg_count, zero_count, pos_count;

    neg_pos_zero(arr, size, &neg_count, &zero_count, &pos_count);

    cout << "Negative: " << neg_count << "\n";
    cout << "Zeros: " << zero_count << "\n";
    cout << "Positive: " << pos_count << "\n";


    //Task 6
    srand(time(0));
    const int size = 10;
    int arr[size];
    

    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 69;
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    int max_index, max_value;
    
    max_element(arr, size, &max_index, &max_value);
    
    cout << "Index of the max element: " << max_index << "\n";
    cout << "Value: " << max_value << "\n";

}