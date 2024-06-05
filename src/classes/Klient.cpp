#include <iostream>
#include "Platnosc.cpp"
#include <string>
#include <vector>
#include <unordered_map>

class Klient {
public:
    std::string email;
    int id_klienta;
    std::string adres;
    std::string nr_telefonu;
    std::string rodzaj_platnosci;

    void OcenDostawce(int dostawca, float ocena) {
oceny_dostawcow[dostawca].push_back(ocena);
    }
    void OcenRestauracje(int restauracja, float ocena) {
        oceny_restauracji[restauracja].push_back(ocena);
    }
    void Wyswietl_liste_restauracji() {
        std::cout << "Lista restauracji nie jest dostępna." << std::endl; // переделай
    }
    void Wyswietl_historie_zamowien() {
 std::cout << "Historia zamówień: " << std::endl;
    for (int id : historia_zamowien) {
        std::cout << "Zamówienie ID: " << id << std::endl;
    }
    }
    void Oplata_online(std::string platnosc) {
        rodzaj_platnosci = platnosc;
    }
    void Wybierz_metode_oplaty(std::string platnosc) {
        rodzaj_platnosci = platnosc;
    }

private:
    std::unordered_map<int, std::vector<float>> oceny_dostawcow; 
    std::unordered_map<int, std::vector<float>> oceny_restauracji;
    std::vector<int> historia_zamowien; 
};
