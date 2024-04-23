/*#include <iostream>
using std;  //seharusnya 'using namespace std;' agar fungsi dari namespace std dapat berfungsi dalam program

int main () {
    system("CLS");

    string a;

    umur;   //karena 'umur' di sini merupakan label untuk goto, maka menggunakan tanda : (titik dua) bukan ; (titik koma)
    cout << "Tebak Umur Saya: " //diakhir statement harus menggunakan tanda ; (titik koma)
    cin << a;   //tanda panah untuk cin adalah '>>' bukan '<<'
 
    if (a=20){  //karena variabel a bertipe data string maka saat pengecekan kondisi atau membandingkan nilai a pada blok if harus menggunakan tanda petik (""), selain itu juga tanda = (sama dengan) ditambah satu lagi menjadi (==) karena untuk membandingkan nilai bukan inisialisasi nilai
        cout << "Jawaban Anda Benar" << endl;
    } else if { //else if diubah menjadi else karena tidak ada kondisi tambahan yang perlu dicek atau dievaluasi lagi
        cout << "Jawaban Salah, Coba Lagi..." << endl   //diakhir statement harus menggunakan tanda ; (titik koma)
        goto umur;
    }


    cout << "Program Selesai";

    return 0;
} */

//PERBAIKAN
#include <iostream>
using namespace std;
int main () {
    system("CLS");
    string a;

    umur :
    cout << "Tebak Umur Saya: ";
    cin >> a;
    if (a == "20") {
        cout << "Jawaban Anda Benar" << endl;
    } else {
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        goto umur;
    }
    cout << "Program Selesai";
    return 0;
}