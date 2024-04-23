#include <iostream> //header untuk fungsi-fungsi standar dalam C++, seperti cin dan cout
using namespace std;
int main () 
{   //begin program utama
    system("CLS");  //membersihkan layar
    string nama, nim, matkul, dosenPA, nakhir;  //deklarasi variabel nama, nim, matkul, dosenPA, dan nakhir yang bertipe data string
    char kom;   //deklarasi variabel kom yang bertipe data char
    float ntugas, nquis, nuts, nuas, nilai; //deklarasi variabel ntugas, nquis, nuts, nuas yang bertipe data float
    cout << "Program Kartu Hasil Studi (KHS) Mahasiswa" << endl;    //menampilkan teks
    cout << "Masukkan Nama          : "; getline (cin, nama);   //menampilkan teks, mengambil inputan nama, dan inputan disimpan dalam variabel nama  |||  getline digunakan agar program dapat membaca spasi atau inputan lebih dari satu kata
    cout << "Masukkan NIM           : "; getline (cin, nim);    //menampilkan teks, mengambil inputan nim, dan inputan disimpan dalam variabel nim
    cout << "Masukkan Nama Dosen PA : "; getline (cin, dosenPA);    //menampilkan teks, mengambil inputan nama dosen PA, dan inputan disimpan dalam variabel dosenPA
    cout << "Masukkan Mata Kuliah   : "; getline (cin, matkul); //menampilkan teks, mengambil inputan mata kuliah, dan inputan disimpan dalam variabel matkul
    cout << "Masukkan KOM           : "; cin >> kom;    //menampilkan teks, mengambil inputan kom, dan inputan disimpan dalam variabel kom
    cout << "Masukkan Nilai Tugas   : "; cin >> ntugas; //menampilkan teks, mengambil inputan nilai tugas, dan inputan disimpan dalam variabel ntugas (nilai tugas)
    cout << "Masukkan Nilai Quis    : "; cin >> nquis;  //menampilkan teks, mengambil inputan nilai quis, dan inputan disimpan dalam variabel nquis (nilai quis)
    cout << "Masukkan Nilai UTS     : "; cin >> nuts;   //menampilkan teks, mengambil inputan nilai uts, dan inputan disimpan dalam variabel nuts (nilai uts)
    cout << "Masukkan Nilai UAS     : "; cin >> nuas;   //menampilkan teks, mengambil inputan nilai uas, dan inputan disimpan dalam variabel nuas (nilai uas)
    nilai = (ntugas + nquis + nuts + nuas) / 4; // menghitung nilai akhir dengan mencari rata, yaitu dengan cara menjumlahkan semua nilai yang sudah diinput lalu dibagi 4
    if (nilai >= 80 && nilai <= 100) {  //memulai else if untuk seleksi kondisi, untuk menentukan indeks nilai akhir yang akan ditampilkan (A/B+/B/C+/C/D/E)
        nakhir = "A";   //jika nakhir (nilai akhir) bernilai >= 80 dan <= 100 maka indeks nilai yang akan ditampilkan adalah A
    }   //end blok if
    else if (nilai >= 75 && nilai <= 80) {  //begin blok else if
        nakhir = "B+";  //jika nakhir (nilai akhir) bernilai >= 75 dan <= 80 maka indeks nilai yang akan ditampilkan adalah B+
    }   //end blok else if
    else if (nilai >= 70 && nilai <=75) {   //begin blok else if
        nakhir = "B";   //jika nakhir (nilai akhir) bernilai >= 70 dan <= 75 maka indeks nilai yang akan ditampilkan adalah B
    }   //end blok else if
    else if (nilai >= 65 && nilai <=70) {   //begin blok else if
        nakhir = "C+";  //jika nakhir (nilai akhir) bernilai >= 65 dan <= 70 maka indeks nilai yang akan ditampilkan adalah C+
    }   //end blok else if
    else if (nilai >= 60 && nilai <=65) {   //begin blok else if
        nakhir = "C";   //jika nakhir (nilai akhir) bernilai >= 60 dan <= 65 maka indeks nilai yang akan ditampilkan adalah C
    }   //end blok else if
    else if (nilai >= 50 && nilai <=60) {   //begin blok else if
        nakhir = "D";   //jika nakhir (nilai akhir) bernilai >= 50 dan <= 60 maka indeks nilai yang akan ditampilkan adalah D
    }   //end blok else if
    else if (nilai < 50 && nilai >= 0) {    //begin blok else if
        nakhir = "E";   //jika nakhir (nilai akhir) bernilai < 50 dan >= 0 maka indeks nilai yang akan ditampilkan adalah 
    }   //end blok else if
    system("CLS");  //membersihkan layar
    cout << "Program Kartu Hasil Studi (KHS) Mahasiswa" << endl;    //menampilkan teks
    cout << "Nama \t\t: " << nama << endl;  //menampilkan teks lalu menampilkan isi variabel nama  |||  \t digunakan untuk tab agar : (titik dua) sejajar, \t = satu kali tab, \t\t = dua kali tab
    cout << "NIM \t\t: " << nim << endl;    //menampilkan teks lalu menampilkan isi variabel nim
    cout << "KOM \t\t: " << kom << endl;    //menampilkan teks lalu menampilkan isi variabel kom
    cout << "Mata Kuliah \t: " << matkul << endl;   //menampilkan teks lalu menampilkan isi variabel matkul
    cout << "Nilai \t\t: " << nakhir << endl;   //menampilkan teks lalu menampilkan isi variabel nakhir (nilai akhir)
    cout << "Dosen PA \t: " << dosenPA << endl; //menampilkan teks lalu menampilkan isi variabel dosenPA
}   //end program utama