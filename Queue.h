#ifndef QUEUE_H // mengecek apakah makro belum didefinisikan, cara bacanya jika belum ada makro bernama QUEUE_H...
#define QUEUE_H // menandai bahwa file sudah pernah di-include,  lalu sekarang definisikan QUEUE_H agar kalau nanti file ini dipanggil lagi, bagian ini dilewati.

#include <queue>
#include <stack>
#include "Pasien.h" // Gunakan header ini karena program ini membutuhkan struktur data Pasien.

class Queue //ini adalah deklarasi class Queue, berisi 3 fungsi yaitu:
{
public:
    static void tambahPasien(queue<Pasien> &antrian, const Pasien &pasien); //Menambahkan pasien ke antrian
    static void tampilkanAntrian(queue<Pasien> antrian); //Menampilkan semua pasien dalam antrian
    static bool layaniPasien(queue<Pasien> &antrian, stack<Pasien> &riwayat); //Melayani pasien pertama di antrian dan memasukkannya ke riwayat (stack)
};

#endif // menutup blok include guard, Include guard berfungsi mencegah duplikasi isi file header saat di-include berkali-kali
