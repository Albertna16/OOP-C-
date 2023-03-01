#include <iostream>
using namespace std;

class Persegi{
    private:
        float s;

    public:
        Persegi(){
            cout << "Constructor execute" << endl;
            this->s = 10;
        }
        Persegi(float s_){
            cout << "Constructor with float parameter" << endl;
            this->s = s;
        }
        Persegi(int s_){
            cout << "Constuctor with int parameter" << endl;
            this->s = s;
        }

        ~Persegi(){
            cout << "Destructor dieksekusi" << endl;
        }
};

void contohFungsi(){
    Persegi obj(20.0f);
    cout << "Pesan dari contoh fungsi" << endl;
}

int main(){
    // Persegi p[5], p2(0.5f), p3((int) 10);
    // contohFungsi();

    // // blok program
    // {
    //     int i;
    //     cout << "haloo" << endl;
    // }

    // cout << "Last code" << endl;

    Persegi p;
    cout << "out 1" << endl;
    {Persegi p1;}
    cout << "Out 2" << endl;
    {
        Persegi p3;
        {
            Persegi p4;
            cout << "out 4" << endl;
        }
        {
            cout << "Out 5" << endl;
            Persegi p5;
        }
        cout << "out 6" << endl;
    }
    cout << "out 7" << endl;
    return 0;
}

/* kondisi destructor dieksekusi

1. ketika program berakhir
2. diakhir dari pemanggilan fungsi
3. diakhir dari block program

*/