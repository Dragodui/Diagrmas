#include <iostream>
#include <string>
#include "Platnosc.h"

class Czek : public Platnosc {
public:
    std::string nazwa;
    int bank_id;

    void Czek::autoryzuj() {
    std::cout << "Autoryzacja czeku: " << nazwa << " z banku ID: " << bank_id << std::endl;
}
};

