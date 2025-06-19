#include "Stack.h"
#include <iostream>

void Stack::tambahRiwayat(stack<Pasien> &riwayat, const Pasien &pasien)
{
    riwayat.push(pasien); // push pasien ke paling atas (top of stack istilahnya)
    cout << "Pasien " << pasien.nama << " ditambahkan ke riwayat.\n";
}

void Stack::tampilkanRiwayat(stack<Pasien> riwayat)
{
    cout << "\n=== RIWAYAT PASIEN (LIFO) ===\n";
    if (riwayat.empty()) // cek apakah stack kosong atau tidak sebelum memproses
    {
        cout << "Riwayat kosong.\n\n";
        return;
    }

    int nomor = 1;
    while (!riwayat.empty()) // looping untuk menampilkan semua data (elemen) yang ada pada stack
    {
        Pasien pasien = riwayat.top(); // mengambil elemen teratas stack tanpa menghapus apa-apa
        cout << nomor << ". " << pasien.nama << " (ID: " << pasien.id
             << ", Usia: " << pasien.usia << ", Kategori: " << pasien.kategori << ")\n";
        riwayat.pop(); // menghapus elemen stack teratas (top)
        nomor++;
    }
    cout << "\n";
}
