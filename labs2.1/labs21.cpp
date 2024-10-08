//Student: Balatsky Maksim
//Group:121

#include <iostream>
using namespace std;

int main() {
    constexpr int size = 11;
    int arr[size];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            arr[i] = 6 * i - 9; // Для парных индексов
        } else {
            arr[i] = -9 + 2 * i; // Для непарных индексов
        }
    }

    cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
