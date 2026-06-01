#include <iostream>

using namespace std;

int main()
{
    // membuat isi dari try untuk pengujian error
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;

        // melempar exception bertipe integer
        throw 5;

        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }

