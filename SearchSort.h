#ifndef SEARCHSORT_H
#define SEARCHSORT_H

#include <vector>
#include "Pasien.h"

class SearchSort
{
public:
    static Pasien *cariPasienById(vector<Pasien> &daftar, int id);
    static void urutkanPasienBerdasarkanUsia(vector<Pasien> &daftar);
    static void urutkanPasienBerdasarkanNama(vector<Pasien> &daftar);
};

#endif
