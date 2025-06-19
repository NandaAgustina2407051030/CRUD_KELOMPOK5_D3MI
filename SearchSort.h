#ifndef SEARCHSORT_H //mencegah file header ini agar tidak disertakan lebih dari sekali
#define SEARCHSORT_H 

#include <vector> //untuk menyimpan kayak array dinamis
#include "Pasien.h"

class SearchSort
{
public:
    static Pasien *cariPasienById(vector<Pasien> &daftar, int id); //fungsi buat mencari pasien berdasarkan id
    static void urutkanPasienBerdasarkanUsia(vector<Pasien> &daftar); //fungsi buat ngurutin pasien berdasarkan usia bisa dari terkecil atau terbesar tergantung implementasi
    static void urutkanPasienBerdasarkanNama(vector<Pasien> &daftar); //buat ururtin berdasarkan nama
// pakai static biar tidak perlu buat objek tinggal panggil aja
};

#endif
