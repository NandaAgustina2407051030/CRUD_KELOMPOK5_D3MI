# Project SMARS : Sistem Manajemen Antrian Rumah Sakit Menggunakan Pemrograman Modular

Anggota Kelompok:
- Amrullah Azzaky	    2407051027
- Fauzan Adzim	        2407051014
- Nandaa Agustina	    2407051030
- Astianingrum Widanti	2407051013

# Apa itu Pemrogrman Modular?

Pemrograman Modular (Modular Programming) adalah pendekatan pemrograman yang membagi sebuah program besar menjadi beberapa modul yang lebih kecil dan independen, jadi setiap modul memiliki fungsi khusus dan dapat beroperasi secara terpisah.

Dengan membagi masalah menjadi beberapa modul, maka masalah tersebut akan menjadi lebih sederhana sehingga program dapat menjadi lebih mudah disusun dan dipahami.

# Tutorial Kompilasi 

## Compile semua file .cpp menjadi object files
g++ -c CRUD.cpp -o CRUD.o
g++ -c Queue.cpp -o Queue.o
g++ -c Stack.cpp -o Stack.o
g++ -c SearchSort.cpp -o SearchSort.o
g++ -c main.cpp -o main.o

## Link semua object files menjadi executable
g++ CRUD.o Queue.o Stack.o SearchSort.o main.o -o CRUD_KELOMPOK5_D3MI.exe

## Jalankan program
CRUD_KELOMPOK5_D3MI.exe