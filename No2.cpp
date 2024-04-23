#include <iostream> //header untuk fungsi-fungsi standar dalam C++, seperti cin dan cout
using namespace std;
main ()
{   //begin program utama
    system("CLS");  //membersihkan layar
    char pilihan;   //deklarasi variabel pilihan yang bertipe char
    string namaPresiden;    //deklarasi variabel namaPresiden yang bertipe data string
    cout << "Daftar Calon Presiden" << endl;    //menampilkan teks dan memindahkan kursor ke baris berikutnya
    cout << "1. Soekarno" << endl;  //menampilkan teks dan memindahkan kursor ke baris berikutnya
    cout << "2. Soeharto" << endl;  //menampilkan teks dan memindahkan kursor ke baris berikutnya
    cout << "3. Bj. Habibie" << endl;   //menampilkan teks dan memindahkan kursor ke baris berikutnya
    cout << "Masukkan Pilihan Presiden Anda (1/2/3) : "; cin >> pilihan;    //menampilkan teks, mengambil inputan pilihan presiden dan inputan disimpan dalam variabel pilihan
    switch (pilihan) {  //memulai swicth dengan variabel pilihan sebagai kondisi
        case '1' : //jika inputan pilihan adalah 1 
            namaPresiden = "1. Soekarno";   //maka variabel namaPresiden akan diisi dengan "1. Soekarno"
            break;  //menghentikan eksekusi switch dan melanjutkan eksekusi setelah blok switch
        case '2' :  //jika inputan pilihan adalah 2 
            namaPresiden = "2. Soeharto";   //maka variabel namaPresiden akan diisi dengan "2. Soeharto"
            break;  //menghentikan eksekusi switch dan melanjutkan eksekusi setelah blok switch
        case '3' :  //jika inputan pilihan adalah 3
            namaPresiden = "3. Bj. Habibie";    //maka variabel namaPresiden akan diisi dengan "3. Bj. Habibie"
            break;  //menghentikan eksekusi switch dan melanjutkan eksekusi setelah blok switch
        default :   //jika inputan pilihan tidak sama dengan 1, 2, atau 3
            cout << "Pilihan anda tidak valid"; //maka tampilkan teks "Pilihan anda tidak valid" 
            break;  //menghentikan eksekusi switch dan melanjutkan eksekusi setelah blok switch
    }   //end blok switch
    system("CLS");  //membersihkan layar
    cout << "Pilihan anda telah disimpan, pilihan anda adalah " << namaPresiden << endl;    //menampilkan teks "Pilihan anda telah disimpan, pilihan anda adalah " lalu menampilkan isi variabel namaPresiden ke layar
}   //end program utama