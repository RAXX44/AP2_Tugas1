#include <iostream>
using namespace std; 

int main() 
{
    //pembersih
    system ("CLS");
    int bilangan; 

    // Tanyakan pengguna untuk memasukkan bilangan bulat
    cout << "\n Masukkan bilangan bulat  : ";
    // Periksa apakah input adalah bilangan bulat
    if (cin >> bilangan) {

        // Periksa apakah bilangan genap atau ganjil
        if (bilangan % 2 == 0) {
            
            // Jika sisa bagi dua nol, maka bilangan adalah bilangan genap
            cout << bilangan << " Adalah Bilangan Genap." << endl;
        } else {

            // Sebaliknya, bilangan adalah bilangan ganjil
            cout << bilangan << " Adalah Bilangan Ganjil." << endl;
        }
    } else {

        // Jika input tidak valid, print pesan error
        cout << "Input yang Anda masukkan tidak valid. "
             << "Harap masukkan bilangan bulat." << endl;
    }

    // program selesai
    return 0; 
}