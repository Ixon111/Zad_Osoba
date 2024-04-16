//
//  osoba.cpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#include "osoba.hpp"
#include <iostream>
using namespace std;

Osoba::Osoba(string im, string naz, string adr) : imie(im), nazwisko(naz), adres(adr) {}

void Osoba::wyswietlDane() {
    cout<<endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Adres: " << adres << endl;
}
