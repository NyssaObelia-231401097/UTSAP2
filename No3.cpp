#include <iostream> //header untuk fungsi-fungsi standar dalam C++, seperti cin dan cout
using namespace std;
main ()
{   //begin program utama
    system("CLS");  //membersihkan layar
    int i, n, jumlah;   //deklarasi variabel i, n, jumlah yang bertipe integer
    cout << "Masukkan sebuah bilangan : "; cin >> n;    //menampilkan teks, mengambil inputan bilangan, dan inputan disimpan dalam variabel n
    jumlah = 0; //inisialisasi variabel jumlah dengan nilai 0
    for (i=1; i<=n; i++)    //Inisialisasi variabel dengan nilai 1, selama i kurang dari atau sama dengan n maka loop akan terus dieksekusi. Setiap iterasi, nilai i akan diincrement atau bertambah satu
    {   //begin blok for
        if (i % 2 == 1) {   //memulai blok if dan memeriksa apakah nilai i merupakan bilangan ganjil? 
            jumlah += i * i;    //jika i adalah benar merupakan bilangan ganjil maka kuadrat dari i akan disimpan dalam variabel jumlah
        }   //end blok if
    }   //end blok for
    system("CLS") ;  //membersihkan layar
    cout << "n : " << n << endl;    //menampilkan teks dan menampilkan isi variabel n, lalu kursor pindah ke baris baru
    cout << "Jumlah kuadrat bilangan ganjil dari 1 sampai " << n << " adalah " << jumlah;   //menampilkan teks dan menampilkan isi variabel n lalu menampilkan teks lagi dan menampilkan isi variabel jumlah
}   //end program utama