#ifndef CRUD_H
#define CRUD_H

#include <vector>
#include "Pasien.h"

class CRUD
{
public:
    static void tambahPasien(vector<Pasien> &daftar, int id, string nama, int usia, string kategori);
    static void tampilkanPasien(const vector<Pasien> &daftar);
    static bool ubahPasien(vector<Pasien> &daftar, int id, string namaBaru, int usiaBaru, string kategoriBaru);
    static bool hapusPasien(vector<Pasien> &daftar, int id);
};

#endif
