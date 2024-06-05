#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "src/classes/Platnosc.cpp"
#include "src/classes/Danie.cpp"
#include "src/classes/Klient.cpp"
#include "src/classes/Restauracja.cpp"
#include "src/classes/Klient.cpp"
#include "src/classes/Dostawca.cpp"
#include "src/classes/Zamowienie.cpp"
#include "src/classes/Pozycja_zamowienia.cpp"

int main()
{
    // creating the new restaurant
    Restauracja restauracja;
    restauracja.nazwa = "Restauracja 1";
    restauracja.dzielnica = "Centrum";
    restauracja.id_restauracji = 101;

    // creating a list of dishes
    std::vector<Danie> daniaDlaPierwszejRestauracji(10);

    for (int i = 0; i < 10; ++i)
    {
        daniaDlaPierwszejRestauracji[i].nazwa = "Danie " + std::to_string(i + 1);
        daniaDlaPierwszejRestauracji[i].id_restauracji = 101;
        daniaDlaPierwszejRestauracji[i].cena = 44.5f + (i * 0.1f);
        daniaDlaPierwszejRestauracji[i].id_dania = i + 100;
    };

    // adding dishes to restaurant menu
    for (const auto &danie : daniaDlaPierwszejRestauracji)
    {
        restauracja.Dodaj_zmien_menu(danie);
    };

    // creating client object
    Klient klient;
    klient.email = "klient@example.com";
    klient.id_klienta = 1;
    klient.adres = "123 Main St";
    klient.nr_telefonu = "123-456-789";
    klient.rodzaj_platnosci = "Karta";

    klient.OcenRestauracje(restauracja.id_restauracji, 5.0f);

    // creating a new deliveryman
    Dostawca dostawca;
    dostawca.miasto = "Warszawa";
    dostawca.dzielnica = {"Centrum", "Mokotow"};
    dostawca.status = "Dostępny";
    dostawca.dostepnosc = true;
    dostawca.id_dostawcy = 1;

    dostawca.Ustaw_lokalizacje("Krakow", {"Stare Miasto", "Kazimierz"});

    // creating a new order
    Zamowienie zamowienie;
    zamowienie.id_zamowienia = 123;

    std::vector<Pozycja_zamowienia> pozycje;
    for (int i = 0; i < 3; ++i)
    {
        Pozycja_zamowienia pozycja;
        pozycja.id_pozycji = i + 1;
        pozycja.danie = restauracja.menu[i];
        pozycja.ilosc = i + 1;
        pozycje.push_back(pozycja);
    };

    float koszt = 0.0f;
    for (const auto &pozycja : pozycje)
    {
        koszt += pozycja.danie.cena * pozycja.ilosc;
    };

    zamowienie.Zloz_zamowienie(klient, koszt, pozycje, restauracja.id_restauracji);
    dostawca.Wybierz_zamowienie(zamowienie);
    zamowienie.Wyswietl_status_zamowienia();

    return 0;
}
