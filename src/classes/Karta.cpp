#include "Platnosc.cpp"
#include <ctime>
#include <iostream>
#include "Data.cpp"

class Karta : public Platnosc {
public:
    int numer;
    Data data_waznosci;

    void autoryzuj() {
          std::time_t now = std::time(nullptr);

        if (difftime(data_waznosci.getTime(), now) < 0) {
            std::cout << "Autoryzacja nieudana: karta jest nieważna." << std::endl;
        } else {
            std::cout << "Autoryzacja udana: karta jest ważna." << std::endl;
        }
    };
};