#include "CRUD.h"
#include <iostream>

void CRUD::tambahPasien(vector<Pasien> &daftar, int id, string nama, int usia, string kategori)
{
    daftar.push_back(Pasien(id, nama, usia, kategori));
    cout << "Pasien " << nama << " berhasil ditambahkan.\n";
}

void CRUD::tampilkanPasien(const vector<Pasien> &daftar)
{
    cout << "\n=== DAFTAR PASIEN ===\n";
    if (daftar.empty())
    {
        cout << "Belum ada data pasien.\n\n";
        return;
    }

    cout << "ID\tNama\t\t\tUsia\tKategori\n";
    cout << "------------------------------------------------\n";
    for (const auto &pasien : daftar)
    {
        cout << pasien.id << "\t" << pasien.nama;
        if (pasien.nama.length() < 16)
            cout << "\t\t";
        else
            cout << "\t";
        cout << pasien.usia << "\t" << pasien.kategori << "\n";
    }
    cout << "\n";
}

bool CRUD::ubahPasien(vector<Pasien> &daftar, int id, string namaBaru, int usiaBaru, string kategoriBaru)
{
    for (auto &pasien : daftar)
    {
        if (pasien.id == id)
        {
            pasien.nama = namaBaru;
            pasien.usia = usiaBaru;
            pasien.kategori = kategoriBaru;
            cout << "Data pasien ID " << id << " berhasil diubah.\n";
            return true;
        }
    }
    cout << "Pasien dengan ID " << id << " tidak ditemukan.\n";
    return false;
}

bool CRUD::hapusPasien(vector<Pasien> &daftar, int id)
{
    for (auto it = daftar.begin(); it != daftar.end(); ++it)
    {
        if (it->id == id)
        {
            cout << "Pasien " << it->nama << " berhasil dihapus.\n";
            daftar.erase(it);
            return true;
        }
    }
    cout << "Pasien dengan ID " << id << " tidak ditemukan.\n";
    return false;
}
