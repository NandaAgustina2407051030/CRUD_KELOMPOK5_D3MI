#include "Stack.h"
#include <iostream>

void Stack::tambahRiwayat(stack<Pasien> &riwayat, const Pasien &pasien)
{
    riwayat.push(pasien);
    cout << "Pasien " << pasien.nama << " ditambahkan ke riwayat.\n";
}

void Stack::tampilkanRiwayat(stack<Pasien> riwayat)
{
    cout << "\n=== RIWAYAT PASIEN (LIFO) ===\n";
    if (riwayat.empty())
    {
        cout << "Riwayat kosong.\n\n";
        return;
    }

    int nomor = 1;
    while (!riwayat.empty())
    {
        Pasien pasien = riwayat.top();
        cout << nomor << ". " << pasien.nama << " (ID: " << pasien.id
             << ", Usia: " << pasien.usia << ", Kategori: " << pasien.kategori << ")\n";
        riwayat.pop();
        nomor++;
    }
    cout << "\n";
}
