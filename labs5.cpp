//Студент-Балацький Максим
//Приймав: Малькевич Роман Ігорович
//Б-121-24-1
#include <iostream>

int main() {
    // Опис константи
    const int CONSTA = 85;

    // Опис змінних
    int nB = 27, nE = 6;
    int nC;
    int* pnC;

    // Ініціалізація вказівної змінної
    pnC = &nC;
    *pnC = -16;

    // Обчислення виразу
    bool bRez = ((CONSTA ^ ~nB) + *pnC) < (1 * (nE << sizeof(short)));

    // Виведення результату
    std::cout << "Результат: " << (bRez ? "true" : "false") << std::endl;

    return 0;
}
