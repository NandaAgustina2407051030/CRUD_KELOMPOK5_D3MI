#include "SearchSort.h"
#include <algorithm>
#include <iostream>

Pasien *SearchSort::cariPasienById(vector<Pasien> &daftar, int id)
{
    for (auto &pasien : daftar)
    {
        if (pasien.id == id)
        {
            return &pasien;
        }
    }
    return nullptr;
}
void SearchSort::urutkanPasienBerdasarkanUsia(vector<Pasien> &daftar)
{
    sort(daftar.begin(), daftar.end(), [](const Pasien &a, const Pasien &b)
         { return a.usia < b.usia; });
    cout << "Daftar pasien berhasil diurutkan berdasarkan usia.\n";
}

void SearchSort::urutkanPasienBerdasarkanNama(vector<Pasien> &daftar)
{
    sort(daftar.begin(), daftar.end(), [](const Pasien &a, const Pasien &b)
         { return a.nama < b.nama; });
    cout << "Daftar pasien berhasil diurutkan berdasarkan nama.\n";
}
