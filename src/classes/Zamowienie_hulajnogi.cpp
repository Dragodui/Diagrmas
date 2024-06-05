#include <string>
#include <iostream>
#include "Data.cpp"
#include "Dostawca.cpp"

class Zamowienie_hulajnogi {
public:
    int id_zamowienia_hulajnogi;
    int id_dostawcy;
    std::string stan;
    Data data;
    Data czas_zam;
    Data czas_zwrotu;
    int id_egzemplarza;

    void Zloz_zamowienie(Dostawca dostawca, Data data, Data czas_zam, Data czas_zwrotu) {
        // Implement scooter order placing logic
    }

    void Anuluj_zamowienie(int id_zamowienia_hulajnogi) {
        // Implement scooter order cancellation logic
    }

    void Wyswietl_status_zamowienia() {
        // Implement scooter order status display logic
    }
};
