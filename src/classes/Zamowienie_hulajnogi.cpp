#include <string>
#include <iostream>
#include "Data.cpp"
#include "Dostawca.cpp"

class Zamowienie_hulajnogi
{
public:
    int id_zamowienia_hulajnogi;
    int id_dostawcy;
    std::string stan;
    Data data;
    Data czas_zam;
    Data czas_zwrotu;
    int id_egzemplarza;

    void Zloz_zamowienie(Dostawca &dostawca, const Data &data, const Data &czas_zam, const Data &czas_zwrotu)
    {
        if (dostawca.dostepnosc)
        {
            this->data = data;
            this->czas_zam = czas_zam;
            this->czas_zwrotu = czas_zwrotu;
            this->id_dostawcy = dostawca.id_dostawcy;
            this->stan = "Złożone";
            dostawca.Wybierz_zamowienie(*this);
        }
    }

    void Anuluj_zamowienie(int id_zamowienia_hulajnogi)
    {
        if (this->id_zamowienia_hulajnogi == id_zamowienia_hulajnogi)
        {
            this->stan = "Anulowane";
        }
    }

    void Wyswietl_status_zamowienia() const
    {
        std::cout << "ID Zamówienia: " << id_zamowienia_hulajnogi << std::endl;
        std::cout << "ID Dostawcy: " << id_dostawcy << std::endl;
        std::cout << "Stan: " << stan << std::endl;
        std::cout << "Data zamówienia: " << data.ToString() << std::endl;
        std::cout << "Czas zamówienia: " << czas_zam.ToString() << std::endl;
        std::cout << "Czas zwrotu: " << czas_zwrotu.ToString() << std::endl;
        std::cout << "ID Egzemplarza: " << id_egzemplarza << std::endl;
    }
};
