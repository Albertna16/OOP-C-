#include <iostream>
using namespace std;

class Bangun{
public:
    class bangunDatar{
    public:
        class Persegi{
        public:
            int sisi;
            double luasPersegi(int sisi){
                return sisi * sisi;
            };
            double kelilingPersegi(int sisi){
                return sisi * 4;
            };
        };
        class PersegiPanjang{
        public:
            int panjang;
            int lebar;
            double luasPersegiPanjang(int panjang, int lebar){
                return panjang * lebar;
            };
            double kelilingPersegiPanjang(int panjang, int lebar){
                return 2 * (panjang + lebar);
            };
        };
        class Lingkaran{
        public:
            int jari;
            double luasLingkaran(int jari){
                return 3.14 * jari * jari;
            };
            double kelilingLingkaran(int jari){
                return 3.14 * jari * 2;
            };
        };
    };

    class bangunRuang{
    public:
        class Kubus{
        public:
            int sisi;
            double volumeKubus(int sisi){
                return sisi * sisi * sisi;
            };
        };
        class Balok{
        public:
            int panjang;
            int lebar;
            int tinggi;
            double volumeBalok(int panjang, int lebar, int tinggi){
                return panjang * lebar * tinggi;
            };
        };
        class Bola{
        public:
            int jari;
            double volumeBola(int jari){
                return 1.33 * 3.14 * this->jari * this->jari * this->jari;
            };
        };
        class Tabung{
            public:
            int tinggi;
            int jari;
            double volumeTabung(int jari, int tinggi){
                return 3.14 * this->jari * this->jari *this->tinggi;
            };
        };
    };
};

int main(){
    Bangun::bangunDatar::Persegi persegi;
    Bangun::bangunDatar::PersegiPanjang persegiPanjang;
    Bangun::bangunDatar::Lingkaran lingkaran;
    Bangun::bangunRuang::Kubus kubus;
    Bangun::bangunRuang::Balok balok;
    Bangun::bangunRuang::Bola bola;
    Bangun::bangunRuang::Tabung tabung;
    int menuUtama, subMenu;
    char ulang = 'y';
    do{
        cout << "\nPROGRAM BANGUN DATAR DAN BANGUN RUANG" << endl;
        cout << "PILIHAN MENU : " << endl;
        cout << "1. Bangun Datar" << endl;
        cout << "2. Bangun Ruang" << endl;
        cout << "Masukkan pilihan anda\t\t: ";
        cin >> menuUtama;
        if (menuUtama == 1){
            cout << "\nPilihan menu bangun datar\t: " << endl;
            cout << "1. Persegi" << endl;
            cout << "2. Persegi Panjang" << endl;
            cout << "3. Lingkaran" << endl;
            cout << "Masukkan pilihan anda\t\t: ";
            cin >> subMenu;
            if (subMenu == 1){
                cout << "\nPersegi" << endl;
                cout << "Masukkan panjang sisi\t\t: ";
                cin >> persegi.sisi;
                cout << "Luas Persegi\t\t\t: " << persegi.luasPersegi(persegi.sisi) << endl;
                cout << "Keliling Persegi\t\t: " << persegi.kelilingPersegi(persegi.sisi) << endl;
            }else if (subMenu == 2){
                cout << "\nPersegi Panjang" << endl;
                cout << "Masukkan nilai panjang\t\t: ";
                cin >> persegiPanjang.panjang;
                cout << "Masukkan nilai lebar\t\t: ";
                cin >> persegiPanjang.lebar;
                cout << "Luas Persegi Panjang\t\t: " << persegiPanjang.luasPersegiPanjang(persegiPanjang.panjang, persegiPanjang.lebar) << endl;
                cout << "Keliling Persegi Panjang\t: " << persegiPanjang.kelilingPersegiPanjang(persegiPanjang.panjang, persegiPanjang.lebar) << endl;
            }else if (subMenu == 3){
                cout << "\nLingkaran" << endl;
                cout << "Masukkan nilai jari-jari\t: ";
                cin >> lingkaran.jari;
                cout << "Luas lingkaran\t\t\t: " << lingkaran.luasLingkaran(lingkaran.jari) << endl;
                cout << "Keliling lingkaran\t\t: " << lingkaran.kelilingLingkaran(lingkaran.jari) << endl;
            }
        }else if (menuUtama == 2){
            cout << "\nPilihan menu bangun ruang\t: " << endl;
            cout << "1. Kubus" << endl;
            cout << "2. Balok" << endl;
            cout << "3. Bola" << endl;
            cout << "4. Tabung" << endl;
            cout << "Masukkan pilihan anda\t\t: ";
            cin >> subMenu;
            if (subMenu == 1){
                cout << "\nKubus" << endl;
                cout << "Masukkan panjang sisi\t\t: ";
                cin >> kubus.sisi;
                cout << "Volume kubus\t\t\t: " << kubus.volumeKubus(kubus.sisi) << endl;
            }else if (subMenu == 2){
                cout << "\nBalok" << endl;
                cout << "Masukkan nilai panjang\t\t: ";
                cin >> balok.panjang;
                cout << "Masukkan nilai lebar\t\t: ";
                cin >> balok.lebar;
                cout << "Masukkan nilai tinggi\t\t: ";
                cin >> balok.tinggi;
                cout << "Volume balok\t\t\t: " << balok.volumeBalok(balok.panjang, balok.lebar, balok.tinggi);
            }else if (subMenu == 3){
                cout << "\nbola" << endl;
                cout << "Masukkan nilai jari-jari\t: ";
                cin >> bola.jari;
                cout << "Volume bola\t\t\t: " << bola.volumeBola(bola.jari) << endl;
            }else if(subMenu == 4){
                cout << "\nTabung" << endl;
                cout << "Masukkan nilai jari-jari\t: ";
                cin >> tabung.jari;
                cout << "Masukkan  nilai tinggi\t\t: ";
                cin >> tabung.tinggi;
                cout << "Volume tabung\t\t\t: " << tabung.volumeTabung(tabung.jari, tabung.tinggi) << endl;
            }
        }else if (menuUtama == 3){
            cout << "PROGRAM SELESAI" << endl;
        }else{
            cout << "Kode yang anda masukkan salah!!" << endl;
        }
        cout << "\nIngin mengulang program (y/t)\t: ";
        cin >> ulang;
    } while (ulang == 'y');
    cout << "\n        TERIMA KASIH    \n" << endl;
    return 0;
}