// Buatlah program c++ dengan class barang yang memiliki atribut: namaBarang, KodeBarang
// Program memiliki constructor berparameter
// untuk mengisi nilai namaBarang dan kodeBarang
// serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class barang {
    public:
        barang(string namaBarang, int kodeBarang);
};

barang::barang (string namaBarang, int kodeBarang) {
    cout << " Constructor dengan parameter terpanggil" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

int main() {
    barang brg("Laptop", 292929);
    return 0;
}