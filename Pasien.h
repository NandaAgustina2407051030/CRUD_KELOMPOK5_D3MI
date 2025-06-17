#ifndef PASIEN_H
#define PASIEN_H

#include <string>
using namespace std;

struct Pasien
{
    int id;
    string nama;
    int usia;
    string kategori;

    // Constructor
    Pasien(int id = 0, string nama = "", int usia = 0, string kategori = "")
        : id(id), nama(nama), usia(usia), kategori(kategori) {}
};

#endif
