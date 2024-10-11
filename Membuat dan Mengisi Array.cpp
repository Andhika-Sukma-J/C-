#include <iostream>
using namespace std;

void fungsi1() {
    std::cout << "Ini contoh 1" << std::endl;
    int angka[5];

    angka[0] = 10;
    angka[1] = 20;
    angka[2] = 30;
    angka[3] = 40;
    angka[4] = 50;

    for(int i = 0; i < 5; i++)
    {
        cout << angka[i]<<" ";
    }
    cout << endl;
}

void fungsi2() {
    std::cout << "Ini contoh 2" << std::endl;
    int angka[5] = {10,20,30,40,50};

    cout << "Nilai dalam Array adalah: ";

    for(int i = 0; i < 5; i++)
    {
        cout << angka[i]<<" ";
    }
    cout << endl;
}
void fungsi3() {
    std::cout << "Ini contoh 3" << std::endl;
    int nilai[5];
    cout << "Masukkan nilai 5 mahasiswa: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout <<"Nilai ke - "<< i <<" :";
        cin >> nilai[i];
    }
    cout << "Nilai Mahasiswa UNSIKA: " << endl;
    for (int n = 0; n < 5; ++n)
    {
        cout << "Nilai ke - "<< n <<":";
        cout << nilai[n] << endl;
    }
    cout << endl;
}
int main() {
    fungsi1();
    fungsi2();
    fungsi3();
    return 0;
}
