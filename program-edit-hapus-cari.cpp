//Oleh muhammad dicky garcia
//STT PELITA BANGSA
#include <iostream>
using namespace std;

int main() {
  /* code */
  int B[10],jumlah,ganti,hapus,cari,ketemu=0;
  //user memasukan jumlah data yang akan dimasukan
  std::cout << "Masukkan jumlah data :" << '\n';
  std::cin >> jumlah;

  //jumlah data dibatasi 10 data, dari B[0] sampai B[9]
  if (jumlah > 9)
  {
    //jika data melebihi dari batas yang ditentukan maka tampilkan pesan
    std::cout << "\nMaaf maximal data adalah 10\n" << '\n';
    //meminta user mengulagi input data
  }
else
{
  //jika jumlah data kurang atau sama dengan batas jumlah data maka user
  //dapat memasukan data satu persatu sesuai jumlah data yang diminta
  for (int i = 0; i < jumlah; i++) {
    /* code */
    std::cout << "masukan data ke-"<<i+1 << ":";
    std::cin >> B[i];
  }
  //menampilkan hasil inputan data user
  std::cout << "data yang telah dimasukan :" << '\n';
  for (int j = 0; j < jumlah; j++) {
    /* code */
    std::cout << "B["<<j<<"]="<<B[j] << '\n';
  }
}
//Edit elemen Array
//user memasukan nilai data yang akan diedit
std::cout << "\n\n Masukan nilai data yang akan diubah :" << '\n';
std::cin >> ganti;

//perulangan untuk mencari nilai data yang sesuai dengan yang dimaksud user
for (int g = 0; g < jumlah; g++) {
  /* code */
  if (B[g]==ganti) {
    /* code */
    //jika data yang dimasukan user ada disalah satu indeks Array
    //maka minta user mensuliskan data baru sebagai penggantinya
    std::cout << "masukan nilai baru :" << '\n';
    std::cin >> B[g];
  }
}
//menampilkan semua data baru setelah diedit
std::cout << "\n\nData setelah diubah" << '\n';
for (int h = 0; h < jumlah; h++) {
  /* code */std::cout << "\nB["<<h<<"]="<<B[h] << '\n';
}
//menghapus elemen Array
//user memasukan nilai data yang akan dihapus
std::cout << "\n\nMasukan data yang akan dihapus :" << '\n';
std::cin >> hapus;

//peulangan untuk mencari data yang diinputakan user di indeks Array
for (int j = 0; j < jumlah; j++) {
  /* code */if (hapus==B[j]) {
    /* code *///jika nilai yang dimasukan user sesuai dengan salah satu
    //nilai data di indeks Array
    for (int k = j /*dimulai dari indeks nilai yang ditentukan*/; k < jumlah; k++) {
      //menggeser nilai data pada indeks Array sampai jumlah maksimal data Array
      B[k]=B[k+1];
    }
    //mengurangi jumlah array karena salah satu datanya telah dihapus
    jumlah -=1;
    break;
  }
}
//menampilkan data baru setelah salah satu indeks dihapus
std::cout << "\n\nData baru :" << '\n';
for (int p = 0; p < jumlah; p++) {
  /* code */std::cout << "\nB["<<p<<"]="<<B[p] << '\n';
}
//Cari elemen array
//user memasukan nilai yang akan dicari
std::cout << "\n\nMasukan nilai data yang akan dicari :" << '\n';
std::cin >> cari;

//perulangan untuk mencari data yang cocok
for (int n = 0; n < jumlah; n++) {
  /* code */if (cari==B[n]) {
    //jika data cocok dengan nilai yang dicari user lanjutkan tampilkan pesan
    //dimana indeks data ditemukan
    std::cout << "\nNilai "<<cari<<"ditemukan pada indeks :"<<n << '\n';
    ketemu=1;//tambahan untuk memastikan data telah ditemukan
    break;
  }
}
//jika tidak ada data yang ditemukan tampilkan pesan
if (ketemu==0)
std::cout << "Maaf data yang anda cari tidak ditemukan" << '\n';
  return 0;
}
