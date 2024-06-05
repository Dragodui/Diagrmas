#include <iostream>
#include <string>
#include "Klient.cpp"
#include "Dostawca.cpp"
#include <numeric>

class Osoba : public Klient {
public:
    int ID;
    std::string imie;
    std::string nazwisko;

    void Pokaz_ocene_dostawcy(Dostawca dostawca) {
        int sum = std::accumulate(dostawca.oceny.begin(), dostawca.oceny.end(), 0);

        double average = static_cast<double>(sum) / dostawca.oceny.size();
        std::cout << "Srednia ocen dostawcy: " << average << std::endl;
    }
};