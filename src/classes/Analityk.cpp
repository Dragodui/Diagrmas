#include <iostream>
#include <string>
#include "Data.cpp"
#include "Osoba.cpp"
#include "Restauracja.h"

class Analityk : public Osoba
{
public:
    std::string dzial;
    int id_analityka;

    void Wyswietl_statystyke_restauracji(Restauracja restauracja, Data poczatek, Data koniec)
    {
        int resId = restauracja.id_restauracji;
    }
};