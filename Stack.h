#ifndef STACK_H
#define STACK_H

#include <stack>
#include "Pasien.h"

class Stack
{
public:
    static void tambahRiwayat(stack<Pasien> &riwayat, const Pasien &pasien);
    static void tampilkanRiwayat(stack<Pasien> riwayat);
};

#endif
