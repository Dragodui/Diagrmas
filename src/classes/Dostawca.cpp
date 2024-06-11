#include <string>
#include <vector>
#include "Zamowienie.cpp"
#include "Zamowienie_hulajnogi.cpp"

class Dostawca {
public:
    std::string miasto;
    std::vector<std::string> dzielnica;
    std::string status;
    bool dostepnosc;
    std::vector<float> oceny;
    int id_dostawcy;

void Wybierz_zamowienie(const Zamowienie& zamowienie) {
    if (dostepnosc) {
        status = "W trakcie realizacji zamówienia";
        dostepnosc = false;
    } 
}
void Wybierz_zamowienie(const Zamowienie_hulajnogi& zamowienie_hulajnogi) {
        if (dostepnosc) {
            status = "W trakcie realizacji zamówienia hulajnogi";
            dostepnosc = false;
        } 
    }

void Ustaw_lokalizacje(const std::string& nowe_miasto, const std::vector<std::string>& nowe_dzielnice) {
    miasto = nowe_miasto;
    dzielnica = nowe_dzielnice;
    for (const auto& dzielnica : dzielnica) {
        std::cout << dzielnica << ", ";
    }
    std::cout << std::endl;
}
};

