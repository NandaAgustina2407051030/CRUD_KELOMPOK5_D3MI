#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
#include <stack>
#include "Pasien.h"

class Queue
{
public:
    static void tambahPasien(queue<Pasien> &antrian, const Pasien &pasien);
    static void tampilkanAntrian(queue<Pasien> antrian);
    static bool layaniPasien(queue<Pasien> &antrian, stack<Pasien> &riwayat);
};

#endif
