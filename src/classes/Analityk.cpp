#include <iostream>
#include <string>
#include "Data.cpp"
#include "Osoba.cpp"
#include "Restauracja.cpp"

class Analityk : public Osoba
{
public:
    std::string dzial;
    int id_analityka;

    void Wyswietl_statystyke_restauracji(Restauracja restauracja, Data poczatek, Data koniec)
    {
        int resId = restauracja.id_restauracji;
         if (restauracja.oceny.empty()) {
            std::cout << "Restauracja " << restauracja.nazwa << " (ID: " << resId << ") nie ma żadnych ocen." << std::endl;
            return;
        }

        float suma_ocen = 0;
        int liczba_ocen = 0;

        for (float ocena : restauracja.oceny) {
            suma_ocen += ocena;
            liczba_ocen++;
        }

        float srednia_ocena = suma_ocen / liczba_ocen;

        std::cout << "Statystyki restauracji " << restauracja.nazwa << " (ID: " << resId << "):" << std::endl;
        std::cout << "Średnia ocena: " << srednia_ocena << std::endl;
        std::cout << "Liczba ocen: " << liczba_ocen << std::endl;

    }
};