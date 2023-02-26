#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

typedef struct segitiga
{
	int alas, tinggi;
};

float luasSegitiga(int t, int l)
{
	return t*l*0.5;
}

class clsSegitiga {
	public :
	int alas, tinggi;
	float luas()
	{
		return this->alas*this->tinggi*0.5;
	}
	int keliling()
	{
		return this->alas+this->tinggi+(sqrt(pow(this->alas,2)+pow(this->tinggi,2)));
	}
}; 

int main()
{
	clsSegitiga s;
	s.alas = 10;
	s.tinggi = 5;
	
//	luas = luasSegitiga(s1.alas,s1.tinggi);
	cout << "Luas segitiga : " << s.luas() <<endl;
	cout << "Keliling segitiga : " << s.keliling();

	return 0;
}
