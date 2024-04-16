//
//  osoba.hpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#pragma once
#include "osoba.hpp"
#include <iostream>
using namespace std;

class Osoba {
protected:
    string imie;
    string nazwisko;
    string adres;

public:
    Osoba(std::string im, std::string naz, std::string adr);

    virtual void wyswietlDane();
};

