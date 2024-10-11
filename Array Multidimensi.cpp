#include <iostream>
using namespace std;

void Contoh1() {
cout << "Array 2 dimensi" << endl;

    std::cout << "Ini Contoh 1" << std::endl;

    string alfabet[2][4]={
    {"A","B","C","D"},
    {"E","F","G","Y"}};

    cout << alfabet[1][3];
    cout << endl;
}

void Contoh2() {
    std::cout << "Ini COntoh 2" << std::endl;

    int matrik[3][2] = {{1,2},
                        {3,4},
                        {5,6}};
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "Matrik["<< i << "]["<< j << "] = " << matrik[i][j] << endl;
        }
    }
    cout << endl;
    }

int main() {
    Contoh1();
    Contoh2();

    return 0;
}
