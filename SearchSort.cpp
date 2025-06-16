#include "SearchSort.h"
#include <algorithm>
#include <iostream>

Pasien *SearchSort::cariPasienById(vector<Pasien> &daftar, int id)
{
    for (auto &pasien : daftar)
    {
        if (pasien.id == id)
        {
            return &pasien;
        }
    }
    return nullptr;
}
