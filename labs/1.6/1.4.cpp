//Студент: Балацький Максим
//Приймав: Малькевич Роман Ігорович
//Б-121-24-1


#include <iostream>
using namespace std;

int main() {
    // 1. Опис змінних напередвизначених типів
    unsigned int wA;
    int nB;
    float fltC;

    // 2. Опис вказівних змінних відповідних типів
    unsigned int *pwA;
    int *pnB;
    float *pfltC;

    // 3. Опис нетипізованої вказівної змінної
    void *pV;

    // 4. Ініціалізація вказівних змінних адресами змінних
    pwA = &wA;
    pnB = &nB;
    pfltC = &fltC;

    // 5. Присвоєння значень змінним через вказівники (розіменування)
    *pwA = 10;
    *pnB = -20;
    *pfltC = 3.14;

    // 6. Визначення розміру всіх змінних
    int sizewA = sizeof(wA);
    int sizenB = sizeof(nB);
    int sizefltC = sizeof(fltC);
    int sizepwA = sizeof(pwA);
    int sizepnB = sizeof(pnB);
    int sizepfltC = sizeof(pfltC);

    // 7. Ініціалізація нетипізованої вказівної змінної адресою типізованої змінної
    pV = &pwA;

    // Виведення результатів
    cout << "Значення wA: " << *pwA << ", Розмір: " << sizewA << " байт" << endl;
    cout << "Значення nB: " << *pnB << ", Розмір: " << sizenB << " байт" << endl;
    cout << "Значення fltC: " << *pfltC << ", Розмір: " << sizefltC << " байт" << endl;
    cout << "Розмір вказівника pwA: " << sizepwA << " байт" << endl;
    cout << "Розмір вказівника pnB: " << sizepnB << " байт" << endl;
    cout << "Розмір вказівника pfltC: " << sizepfltC << " байт" << endl;

    return 0;
}
