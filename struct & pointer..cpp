#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilai;
};

int main() {
    Mahasiswa mhs;

    // Meminta pengguna untuk memasukkan data mahasiswa
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mhs.nama);

    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, mhs.nim);

    cout << "Masukkan nilai mahasiswa: ";
    cin >> mhs.nilai;

    // Menampilkan informasi mahasiswa
    cout << "\nInformasi Mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nilai: " << mhs.nilai << endl;

    return 0;
}
