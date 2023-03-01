#include <iostream>
using namespace std;

class bangunDatar{
    public: 
    class Persegi{
        public:
        int sisi;
        double luasPersegi(int sisi){
            return sisi*sisi;
        };
        double kelilingPersegi(int sisi){
            return sisi*4;
        };
    };
    class PersegiPanjang{
        public:
        int panjang;
        int lebar;
        double luasPersegiPanjang(int panjang, int lebar){
            return panjang*lebar;
        };
        double kelilingPersegiPanjang(int panjang, int lebar){
            return 2*(panjang+lebar);
        };
    };
    class Segitiga{
        public:
        int alas;
        int tinggi;
        double luasSegitiga(int alas, int tinggi){
            return 0.5*alas*tinggi; 
        };
        double kelilingSegitiga(int alas, int tinggi){
            float sisiMiring = (alas^2 + tinggi^2)^1/2;
            return alas + tinggi + sisiMiring;
        };
    };
};

class bangunRuang{
    public:
    class Kubus{
        public:
        int sisi;
        double volumeKubus(int sisi){
            return sisi^3;
        };
    };
    class Balok{
        public:
        int panjang;
        int lebar;
        int tinggi;
        double volumeBalok(int panjang, int lebar, int tinggi){
            return panjang*lebar*tinggi;
        };
    };
};

int main(){
    bangunDatar::Persegi persegi;
    bangunDatar::PersegiPanjang persegiPanjang;
    bangunDatar::Segitiga segitiga;
    
    bangunRuang::Kubus kubus;
    bangunRuang::Balok balok;

    int menuUtama, subMenu;
    cout << "PILIHAN MENU : " << endl;
    cout << "1. Bangun Datar" << endl;
    cout << "2. Bangun Ruang" << endl;
    cout << "Masukkan pilihan anda\t: "; cin >> menuUtama;

    if (menuUtama == 1){
        cout << "\nPilihan menu bangun datar : " << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "Masukkan pilihan anda\t: "; cin >> subMenu;

        if (subMenu == 1){
            cout << "\nPersegi" << endl;
            cout << "Masukkan panjang sisi\t: "; cin >> persegi.sisi;
            cout << "Luas Persegi\t\t: " << persegi.luasPersegi(persegi.sisi) << endl;
            cout << "Keliling Persegi\t: " << persegi.kelilingPersegi(persegi.sisi) << endl;
        }else if (subMenu == 2){
            cout << "\nPersegi Panjang" << endl;
            cout << "Masukkan nilai panjang\t: "; cin >> persegiPanjang.panjang;
            cout << "Masukkan nilai lebar\t:"; cin >> persegiPanjang.lebar;
            cout << "Luas Persegi Panjang\t\t: " << persegiPanjang.luasPersegiPanjang(persegiPanjang.panjang, persegiPanjang.lebar) << endl;
            cout << "Keliling Persegi Panjang\t: " << persegiPanjang.kelilingPersegiPanjang(persegiPanjang.panjang, persegiPanjang.lebar) << endl;
        }else if (subMenu == 3){
            cout << "\nSegitiga" << endl;
            cout << "Masukkan nilai alas\t: "; cin >> segitiga.alas;
            cout << "Masukkan nilai tinggi\t:"; cin >> segitiga.tinggi;
            cout << "Luas segitiga\t\t: " << segitiga.luasSegitiga(segitiga.alas, segitiga.tinggi) << endl;
            cout << "Keliling segitiga\t: " << segitiga.kelilingSegitiga(segitiga.alas, segitiga.tinggi) << endl;
        }
        
    }else if(menuUtama == 2){
        if (subMenu == 1){
            cout << "\nKubus" << endl;
            cout << "Masukkan panjang sisi\t:"; cin >> kubus.sisi;
            cout << "Volume kubus\t\t: " << kubus.volumeKubus(kubus.sisi) << endl;
        }else if(subMenu == 2){
            cout << "\nBalok" << endl;
            cout << "Masukkan nilai panjang\t: "; cin >> balok.panjang;
            cout << "Masukkan nilai lebar\t: "; cin >> balok.lebar;
            cout << "Masukkan nilai tinggi\t: "; cin >> balok.tinggi;
            cout << "Volume balok\t\t: " << balok.volumeBalok(balok.panjang, balok.lebar, balok.tinggi);
        }
    }else{
        cout << "Kode yang anda masukkan salah!!" << endl;
    }
    
    return 0;
}