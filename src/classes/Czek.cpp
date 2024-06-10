#include <iostream>
#include <string>
#include "Platnosc.cpp"

class Czek : public Platnosc {
public:
    std::string nazwa;
    int bank_id;

    void Czek::autoryzuj() {
    std::cout << "Autoryzacja czeku: " << nazwa << " z banku ID: " << bank_id << std::endl;
}
};

