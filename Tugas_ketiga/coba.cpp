#include <iostream>
#include <math.h>
using namespace std;

class Balok{
    private:
    int s, p, l;

    public:
    void set_p(int p)
    {
        this->p = p;
    }
    // Getter
    int get_p()
    {
        return p;
    }

    void set_l(int l)
    {
        this->l = l;
    }
    // Getter
    int get_l()
    {
        return l;
    }

    int luasPersegiPanjang()
    {
        return get_p() * get_l();
    }

    void set_s(int s)
    {
        this->s = s;
    }
    // Getter
    int get_s()
    {
        return s;
    }

    int luasPersegi(){
        return get_s() * get_s();
    }

    int luasPermukaanBalok(){
        return ((luasPersegi()*2) + (luasPersegiPanjang()*4));
    }
};

int main(){
    Balok b;

    b.set_s(10);
    b.set_p(8);
    b.set_l(24);

    cout << "Luas Permukaan balok dengan luas persegi " << b.luasPersegi() << " dan luas persegi panjang " << b.luasPersegiPanjang() << " adalah " << b.luasPermukaanBalok() << endl;

    return 0;
}