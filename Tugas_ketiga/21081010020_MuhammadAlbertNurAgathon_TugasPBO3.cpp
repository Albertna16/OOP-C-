#include <iostream>
using namespace std;

class Persegi{
    private:
        int s;

    public:
        void set_sisi(int s){
            this->s = s;
        }
        int get_sisi(){
            return this->s;
        }
        float luasPersegi(){
            return get_sisi() * get_sisi();
        }
};

class PersegiPanjang{
    private:
        int p,l;
    public:
        void set_panjang(int p){
            this->p = p;
        }
        // Getter
        int get_panjang(){
            return this->p;
        }
        void set_lebar(int l){
            this->l = l;
        }
        // Getter
        int get_lebar(){
            return this->l;
        }
        float luasPersegiPanjang(){
            return get_panjang() * get_lebar();
        }
};

class Segitiga{
    private:
        int a, t;

    public:
        void set_alas(int a){
            this->a = a;
        }
        // Getter
        int get_alas(){
            return this->a;
        }
        void set_tinggi(int t){
            this->t = t;
        }
        // Getter
        int get_tinggi(){
            return this->t;
        }
        float luasSegitiga(){
            return 0.5 * get_alas() * get_tinggi();
        }

};

class Lingkaran{
    private:
        int r;

    public:
        void set_jari(int r){
            this->r = r;
        }
        int get_jari(){
            return this->r;
        }
        float luasLingkaran(){
            return 3.14 * get_jari() * get_jari();
        }
};

class Balok{
    private:
        int t2, p2, l2;
        Persegi p;
        PersegiPanjang pp;

    public:
        void set_tinggi(int t2){
            p.set_sisi(t2);
            this->t2 = p.get_sisi();
        }
        int get_tinggi(){
            return this->t2;
        }
        void set_panjang(int p2){
            pp.set_panjang(p2);
            this->p2 = pp.get_panjang();
        }
        int get_panjang(){
            return this->p2;
        }
        void set_lebar(int l2){
            pp.set_lebar(l2);
            this->l2 = pp.get_lebar();
        }
        int get_lebar(){
            return this->l2;
        }
        float luasPermukaanBalok(){
            set_panjang(8);
            set_lebar(10);
            set_tinggi(15);
            return 2 * (get_panjang()*get_lebar() + get_panjang()*get_tinggi() + get_lebar()*get_tinggi());
        }
};

class Tabung{
    private:
        int t, r;
        PersegiPanjang pp;
        Lingkaran l;
    public:
        void set_tinggi(int t){
            pp.set_lebar(t);
            this->t = pp.get_lebar();
        }
        int get_tinggi(){
            return this->t;
        }
        void set_jari(int r){
            l.set_jari(r);
            this->r = l.get_jari();
        }
        int get_jari(){
            return this->r;
        }
        double luasPermukaanTabung(){
            set_tinggi(25);
            set_jari(14);
            return (2 * 3.14 * get_jari() * (get_jari() + get_tinggi()));
        }
};

int main(){
    Tabung tb;
    Balok b;
    int pilihan;
    char ulang = 'y';
    do{
        cout << "\nPROGRAM OOP BANGUN RUANG\n" << endl;
        cout << "1. Luas Permukaan Tabung" << endl;
        cout << "2. Luas Permukaan Balok" << endl;
        cout << "Masukkan pilihan anda : "; cin >> pilihan;

        if (pilihan == 1){
            cout << "\nLuas permukaan tabung dengan jari-jari " << tb.get_jari() << " dan tinggi " << tb.get_tinggi() << " adalah " << tb.luasPermukaanTabung() << endl;
        }else if(pilihan == 2){
            cout << "\nLuas permukaan balok dengan panjang " << b.get_panjang() << ", lebar " << b.get_lebar() << ", dan tinggi " << b.get_tinggi() << " adalah " << b.luasPermukaanBalok() << endl;
        }else{
            cout << "\nKode yang anda masukkan salah" << endl;
        }
        cout << "Apakah ingin mengulang program(y/t) : "; cin >> ulang;
    } while (ulang == 'y');
    cout << "\nPROGRAM SELESAI\n" << endl; 
    return 0;
}