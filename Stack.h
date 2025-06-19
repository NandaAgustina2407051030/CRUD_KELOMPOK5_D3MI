#ifndef STACK_H
#define STACK_H

#include <stack>
#include "Pasien.h"

class Stack
{
public:
    static void tambahRiwayat(stack<Pasien> &riwayat, const Pasien &pasien); // Parameter: riwayat adalah stack Pasien yang akan ditambah, pasien adalah objek Pasien yang ingin ditambahkan
    static void tampilkanRiwayat(stack<Pasien> riwayat); // Parameter: riwayat adalah stack Pasien yang berisi riwayat pasien
};

#endif
