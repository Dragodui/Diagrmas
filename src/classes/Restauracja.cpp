#include <iostream>
#include <string>
#include <vector>
#include "Danie.cpp"
#include "Zamowienie.cpp"
#include "../implementations/Dostawca.cpp"

class Restauracja {
public:
    std::string nazwa;
    std::vector<Danie> menu;
    std::string dzielnica;
    std::vector<float> oceny;
    int id_restauracji;

    void Dodaj_zmien_menu(const Danie &nowe_danie) {
         menu.push_back(nowe_danie);
    }
    void Przyjmij_nowe_zamowienie(const Zamowienie &zamowienie) {
        
    std::cout << "Przyjęto nowe zamówienie o numerze: " << zamowienie.id_zamowienia << std::endl;
    }
    void Wyslij_kurierowi_powiadomienie(const Zamowienie &zamowienie, const Dostawca &dostawca) {
            std::cout << "Wysłano powiadomienie do kuriera o numerze: " << dostawca.id_dostawcy
              << " dla zamówienia o numerze: " << zamowienie.id_zamowienia << std::endl;
    }
};