#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include "CRUD.h"
#include "Queue.h"
#include "Stack.h"
#include "SearchSort.h"

using namespace std;

void tampilkanMenu()
{
    cout << "\n=== MENU SISTEM MANAJEMEN PASIEN ===\n";
    cout << "1. Tambah Pasien Baru\n";
    cout << "2. Tampilkan Semua Pasien\n";
    cout << "3. Ubah Data Pasien\n";
    cout << "4. Hapus Pasien\n";
    cout << "5. Tambah ke Antrian\n";
    cout << "6. Tampilkan Antrian\n";
    cout << "7. Layani Pasien (dari antrian)\n";
    cout << "8. Tampilkan Riwayat\n";
    cout << "9. Cari Pasien (by ID)\n";
    cout << "10. Urutkan Pasien (by Usia)\n";
    cout << "11. Urutkan Pasien (by Nama)\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

int main()
{
cout << "=== SISTEM MANAJEMEN PASIEN RUMAH SAKIT ===\n";

    // Data structures
    vector<Pasien> daftarPasien;
    queue<Pasien> antrianPasien;
    stack<Pasien> riwayatPasien;

    int pilihan;

    do
    {
        tampilkanMenu();
        cin >> pilihan;
        cin.ignore(); // Clear input buffer

        switch (pilihan)
        {
        case 1:
        {
            // Tambah Pasien Baru
            int id, usia;
            string nama, kategori;

            cout << "\n=== TAMBAH PASIEN BARU ===\n";
            cout << "Masukkan ID Pasien: ";
            cin >> id;
            cin.ignore();

            cout << "Masukkan Nama Pasien: ";
            getline(cin, nama);

            cout << "Masukkan Usia Pasien: ";
            cin >> usia;
            cin.ignore();

            cout << "Masukkan Kategori (Darurat/Rawat Jalan/Rawat Inap): ";
            getline(cin, kategori);

            CRUD::tambahPasien(daftarPasien, id, nama, usia, kategori);
            break;
        }

        case 2:
        {
            CRUD::tampilkanPasien(daftarPasien);
            break;
        }

        case 3:
        {
            int id, usiaBaru;
            string namaBaru, kategoriBaru;

            cout << "\n=== UBAH DATA PASIEN ===\n";
            CRUD::tampilkanPasien(daftarPasien);
            cout << "Masukkan ID Pasien yang akan diubah: ";
            cin >> id;
            cin.ignore();

            cout << "Masukkan Nama Baru: ";
            getline(cin, namaBaru);

            cout << "Masukkan Usia Baru: ";
            cin >> usiaBaru;
            cin.ignore();

            cout << "Masukkan Kategori Baru: ";
            getline(cin, kategoriBaru);

            CRUD::ubahPasien(daftarPasien, id, namaBaru, usiaBaru, kategoriBaru);
            break;
        }
        
        case 4:
        {
            int id;
            cout << "\n=== HAPUS PASIEN ===\n";
            CRUD::tampilkanPasien(daftarPasien);
            cout << "Masukkan ID Pasien yang akan dihapus: ";
            cin >> id;

            CRUD::hapusPasien(daftarPasien, id);
            break;
        }

        case 5:
        {
            int id;
            cout << "\n=== TAMBAH KE ANTRIAN ===\n";
            CRUD::tampilkanPasien(daftarPasien);
            cout << "Masukkan ID Pasien yang akan ditambah ke antrian: ";
            cin >> id;

            Pasien *pasien = SearchSort::cariPasienById(daftarPasien, id);
            if (pasien != nullptr)
            {
                Queue::tambahPasien(antrianPasien, *pasien);
            }
            else
            {
                cout << "Pasien dengan ID " << id << " tidak ditemukan!\n";
            }
            break;
        }

        case 6:
        {
            Queue::tampilkanAntrian(antrianPasien);
            break;
        }
        
        case 7:
        {
            cout << "\n=== LAYANI PASIEN ===\n";
            Queue::layaniPasien(antrianPasien, riwayatPasien);
            break;
        }

        case 8:
        {
            Stack::tampilkanRiwayat(riwayatPasien);
            break;
        }

        case 9:
        {
            int id;
            cout << "\n=== CARI PASIEN ===\n";
            cout << "Masukkan ID Pasien yang dicari: ";
            cin >> id;

            Pasien *pasien = SearchSort::cariPasienById(daftarPasien, id);
            if (pasien != nullptr)
            {
                cout << "\nPasien ditemukan:\n";
                cout << "ID: " << pasien->id << "\n";
                cout << "Nama: " << pasien->nama << "\n";
                cout << "Usia: " << pasien->usia << "\n";
                cout << "Kategori: " << pasien->kategori << "\n";
            }
            else
            {
                cout << "Pasien dengan ID " << id << " tidak ditemukan!\n";
            }
            break;
        }

        case 10:
        {
            cout << "\n=== URUTKAN BERDASARKAN USIA ===\n";
            SearchSort::urutkanPasienBerdasarkanUsia(daftarPasien); // Mengurutkan daftar pasien berdasarkan usia menggunakan algoritma sorting
            CRUD::tampilkanPasien(daftarPasien); // Menampilkan daftar pasien yang sudah diurutkan
            break;
        }

        case 11:
        {
            cout << "\n=== URUTKAN BERDASARKAN NAMA ===\n";
            SearchSort::urutkanPasienBerdasarkanNama(daftarPasien);
            CRUD::tampilkanPasien(daftarPasien);
            break;
        }

        case 0:
        {
            cout << "\nTerima kasih telah menggunakan Sistem Manajemen Pasien!\n";
            break;
        }

        default:
        {
            cout << "\nPilihan tidak valid! Silakan pilih menu yang tersedia.\n";
            break;
        }
        }

        if (pilihan != 0)
        {
            cout << "\nTekan Enter untuk melanjutkan...";
            cin.get();
        }

    } while (pilihan != 0);

    return 0;
}
