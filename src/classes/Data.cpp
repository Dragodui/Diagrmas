
#include <ctime>
#include <iostream>

class Data
{
public:
    std::time_t data;
     std::time_t getTime() const {
        return data;
    }
};

