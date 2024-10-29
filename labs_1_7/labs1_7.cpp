#include <iostream>
using namespace std;

int globalVar = 10;
static int externalStaticVar = 5;

int main() {
    cout << "Main block\n";

    {
        int block1Var = 1;
        cout << "Block 1 variable: " << block1Var << endl;

        {
            int block2Var = 2;
            cout << "Block 2 variable: " << block2Var << endl;
        }
    }

    static int mainStaticVar = 0;
    cout << "External static variable: " << externalStaticVar << endl;
    cout << "Main static variable: " << mainStaticVar << endl;

    mainStaticVar += 10;
    cout << "Updated main static variable: " << mainStaticVar << endl;

    for (int i = 0; i < 5; i++) {
        int dynamicVar = i;
        cout << "Dynamic variable in block (iteration " << i << "): " << dynamicVar << endl;

        static int iA = 0;
        int iB = 0;
        iA = iA + 1;
        iB = iB + 1;
        cout << "Static iA: " << iA << ", Dynamic iB: " << iB << endl;
    }

    int var = 10;
    {
        int var = 20;
        cout << "Inner block var: " << var << endl;
    }
    cout << "Outer block var: " << var << endl;

    int nA = 5;
    int nC = 60;
    cout << "Local nA: " << nA << endl;
    cout << "Global nA: " << ::globalVar << endl;

    int *ptr = new int(25);
    cout << "Pointer value: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}
