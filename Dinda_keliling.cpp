#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int keliling;
    int panjang;
    int lebar;
	cout << "hitung keliling persegi panjang " << endl;
	cout << "masukan panjang : ";
    cin >> panjang;
    cout << "masukan lebar : ";
    cin >> lebar;
    keliling = 2 * (panjang + lebar);
    cout <<"jadi kelling persegi panjang adalah : " ;
    cout << keliling << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

