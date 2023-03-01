#include <iostream>
using namespace std;

class Segitiga{
    private:
    int a, t;

    public:
    void set_alas(int a){
        this->a=a;
    }
    int get_alas(){
        return this->a=a;
    }
};

// memahai data member dan member function dengan menggunakan acces modifiers private
// pelajari constuctor dan destructor 
// tugas membuat komposisi seperti balok yang memiliki bangun datar persegi dan persegipanjang