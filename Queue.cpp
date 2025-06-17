#include "Queue.h"
#include <iostream>
#include <stack>

void Queue::tambahPasien(queue<Pasien> &antrian, const Pasien &pasien)
{
    antrian.push(pasien);
    cout << "Pasien " << pasien.nama << " ditambahkan ke antrian.\n";
}

void Queue::tampilkanAntrian(queue<Pasien> antrian)
{
    cout << "\n=== ANTRIAN PASIEN ===\n";
    if (antrian.empty())
    {
        cout << "Antrian kosong.\n\n";
        return;
    }

    int nomor = 1;
    while (!antrian.empty())
    {
        Pasien pasien = antrian.front();
        cout << nomor << ". " << pasien.nama << " (ID: " << pasien.id
             << ", Kategori: " << pasien.kategori << ")\n";
        antrian.pop();
        nomor++;
    }
    cout << "\n";
}

bool Queue::layaniPasien(queue<Pasien> &antrian, stack<Pasien> &riwayat)
{
    if (antrian.empty())
    {
        cout << "Tidak ada pasien dalam antrian.\n";
        return false;
    }

    Pasien pasien = antrian.front();
    antrian.pop();
    riwayat.push(pasien); // Tambahkan ke riwayat
    cout << "Melayani pasien: " << pasien.nama << " (ID: " << pasien.id << ")\n";
    cout << "Pasien ditambahkan ke riwayat.\n";
    return true;
}
