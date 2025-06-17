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
