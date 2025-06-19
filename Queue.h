#ifndef QUEUE_H
#define QUEUE_H

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

#endif
