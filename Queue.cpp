#include "Queue.h" // gunakan header queue karena header ini berisi fungsi queue
#include <iostream>
#include <stack>

void Queue::tambahPasien(queue<Pasien> &antrian, const Pasien &pasien) // pakai referensi &antrian agar perubahan yang dilakukan (push) langsung berdampak pada antrian asli, bukan salinan
{
    antrian.push(pasien); // menambahkan objek Pasien ke antrian,
    cout << "Pasien " << pasien.nama << " ditambahkan ke antrian.\n"; // menampilkan pesan konfirmasi ke layar
}

void Queue::tampilkanAntrian(queue<Pasien> antrian) // menampilkan isi antrian dari pasien pertama hingga terakhir
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
        cout << nomor << ". " << pasien.nama << " (ID: " << pasien.id // menampilkan nama, ID, dan kategori pasien.
             << ", Kategori: " << pasien.kategori << ")\n";
        antrian.pop(); // parameter dikirim sebagai salinan (pass by value), sehingga isi asli antrian tidak berubah ketika di-pop di sini
        nomor++;
    }
    cout << "\n";
}

bool Queue::layaniPasien(queue<Pasien> &antrian, stack<Pasien> &riwayat) //fungsi 
{
    if (antrian.empty()) // jika antrian kosong
    {
        cout << "Tidak ada pasien dalam antrian.\n";
        return false; //mengembalikan nilai false jika pasien kosong
    }

    Pasien pasien = antrian.front(); // melayani pasien pertama (depan antrian)
    antrian.pop();
    riwayat.push(pasien); // Tambahkan ke riwayat
    cout << "Melayani pasien: " << pasien.nama << " (ID: " << pasien.id << ")\n"; // menampilkan pesan pasien yang sedang dilayani
    cout << "Pasien ditambahkan ke riwayat.\n"; 
    return true; // mengembalikan nilai true jika pasien berhasil dilayani
}

/*
    Kode ini menyimulasikan sistem antrian pasien di rumah sakit atau klinik. Ada tiga fungsinya yaitu :
    Menambah pasien baru ke antrian.
    Menampilkan daftar pasien yang sedang menunggu.
    Melayani pasien dan menyimpan riwayat pelayanan.
*/
