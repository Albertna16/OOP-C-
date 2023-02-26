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
        int get_lebar()
        {
            return this->l;
        }
        float luasPersegiPanjang(){
            return get_panjang() * get_lebar();
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

class Tabung{
    private:
        int t;
    public:
        PersegiPanjang pp;
        Lingkaran l;
        void set_tinggi(int t){
            this->t = t;
        }
        int get_tinggi(){
            return this->t;
        }
        double luasPermukaanTabung(){
            return 2 * 3.14 * l.get_jari() * (l.get_jari() + get_tinggi());
        }
};

int main()
{
    // Persegi p;
    // p.set_sisi(5);
    // cout << "Luas persegi dengan panjang sisi " << p.get_sisi() << ", adalah " << p.luasPersegi() << endl;
    
    // PersegiPanjang pp;
    // pp.set_panjang(10);
    // pp.set_lebar(25);
    // cout << "\nLuas persegi panjang dengan panjang " << pp.get_panjang() << " dan lebar " << pp.get_lebar() << " adalah " << pp.luasPersegiPanjang() << endl;

    // Lingkaran l;
    // l.set_jari(14);
    // cout << "\nLuas lingkaran dengan jari-jari " << l.get_jari() << " adalah " << l.luasLingkaran() << endl;

    Tabung tb;
    tb.set_tinggi(25);
    tb.l.set_jari(14);
    // tb.set_tinggi(pp.get_lebar());
    cout << "\nLuas permukaan tabung adalah " << tb.luasPermukaanTabung() << endl;
    cout << "\n\n";
    return 0;
}



