#include <iostream>
#include <string>
#include <vector>
#include "Pozycja_zamowienia.cpp"
#include <ctime>
#include "Klient.cpp"

class Zamowienie
{
public:
    std::time_t data;
    std::string stan;
    int id_zamowienia;
    std::string adres;
    int id_dostawcy;
    int id_restauracji;
    int id_klienta;
    float koszt;
    std::vector<Pozycja_zamowienia> pozycje;

    void Zloz_zamowienie(Klient klient, float koszt, const std::vector<Pozycja_zamowienia> &pozycje, int restauracja)
    {
        this->id_klienta = klient.id_klienta;
        this->adres = klient.adres;
        this->koszt = koszt;
        this->pozycje = pozycje;
        this->id_restauracji = restauracja;
        this->data = std::time(nullptr);
        this->stan = "Złożone";
    }
    void Anuluj_zamowienie(Klient klient)
    {
        if (this->id_klienta == klient.id_klienta)
        {
            this->stan = "Anulowane";
        }
    }
    void Wyswietl_status_zamowienia()
    {
        std::cout << "Status zamówienia: " << this->stan << std::endl;
    }
};
