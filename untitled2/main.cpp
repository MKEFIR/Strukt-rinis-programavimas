#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <format>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////Constantai/////////////////

const double GBP_Bendras   = 0.8729;
const double GBP_Pirkti    = 0.8600;
const double GBP_Parduoti  = 0.9220;

const double USD_Bendras   = 1.1793;
const double USD_Pirkti    = 1.1460;
const double USD_Parduoti  = 1.2340;

const double INR_Bendras   = 104.6918;
const double INR_Pirkti    = 101.3862;
const double INR_Parduoti  = 107.8546;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;


void Palyginimas_FUNKCIJA(string valiuta);
void Pardavimas_FUNKCIJA(string valiuta);
void Pirkimas_FUNKCIJA();


int main() {
string valiuta;




 int meniu = 0;
    // meniu - pasirinkimas meniu /

////////////////////////////////////////////////

    cout << "\n-----  MENIU -----\n";
    cout << "Galimos valiutos: \nEur, GBP, USD INR\n";
    cout << "1. Palyginti valiuta\n";
    cout << "2. Pirkti  valiuta\n";
    cout << "3. Parduoti valiuta\n";
    cout << "0. Baigti programa\n";
    cout << "\nPasirinkite funkcija:\n";
    cin >> meniu;

  cout<<endl;
////////////////////////////////////////////////
switch (meniu) {
    case 1:
        cout<<"-  Valiuto palyginimas  -"<<endl<<endl;
        Palyginimas_FUNKCIJA (valiuta);
        break;
    case 2:
        cout<<"-  Valiuto  pirkimas  -"<<endl;
        Pardavimas_FUNKCIJA( valiuta);
        break;
    case 3:
        cout<<"-  Valiuto pardavimas  -"<<endl;

        break;

    case 0:
        cout<<"Aciu kad naudojates musu paslaugus"<<endl;

        break;
    default:
        cout<<"-  Tokios operacijos nera  -"<<endl;
}












    return 0;
}


///////Funkcijos////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Palyginimas_FUNKCIJA (string valiuta) {
bool temp = false;

cout<< "Pasirinkite valiuta:" << endl;
        cout<< "GBP, USD ar INR - ";
        cin>>valiuta;
  //while (temp == false) {
        if (valiuta == "GBP") {
            cout << "1 EUR = " << GBP_Bendras << " GBP"; temp = true;
        }else if (valiuta == "USD") {
            cout << "1 EUR = " << USD_Bendras << " USD"; temp = true;
        }else if (valiuta == "INR") {
            cout << "1 EUR = " << INR_Bendras << " INR"; temp = true;
        }else {
            cout << "Tokios valiutos nera";
            //break;
        }
   // }
}/*
void Pardavimas_FUNKCIJA () {
double kiekis;
"Pasirinkite valiuta ir kiekis:" << endl;
        cout<< "GBP, USD ar INR - ";
        cin>>valiuta;
        cin>>kiekis;
        if (kiekis < 0) {
if (valiuta == "GBP") {
            cout << "1 EUR = " << GBP_Bendras << " GBP"; temp = true;
        }else if (valiuta == "USD") {
            cout << "1 EUR = " << USD_Bendras << " USD"; temp = true;
        }else if (valiuta == "INR") {
            cout << "1 EUR = " << INR_Bendras << " INR"; temp = true;
        }else {
            cout << "Tokios valiutos nera";
}}else{
cout<< "Iveskite teigamia skaiciu";}
void Pirkimas_FUNKCIJA () {

}

*/