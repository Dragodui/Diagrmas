#include <ctime>
#include <iostream>
#include <iomanip>
#include <sstream>

class Data
{
public:
    std::time_t data;

    std::time_t getTime() const
    {
        return data;
    }

    std::string ToString() const
    {
        std::tm *tm_ptr = std::localtime(&data);
        std::ostringstream oss;
        oss << std::put_time(tm_ptr, "%Y-%m-%d %H:%M:%S");
        return oss.str();
    }
};