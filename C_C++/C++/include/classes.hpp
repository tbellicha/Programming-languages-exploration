#ifndef DRIVERS_HPP
#define DRIVERS_HPP

#include <ostream>
#include <map>
#include "values.hpp"

class Driver
{
public:
    enumTeams team;
    enumDrivers driver;
    int number;

    Driver(enumTeams teamParam, enumDrivers driverParam) : team(teamParam), driver(driverParam), teamsColor(teamsColorMap[teamParam])
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const Driver &driver)
    {
        os << driver.teamsColor << driversMap[driver.driver] << " (" << teamsMap[driver.team] << ")\033[0m";
        return os;
    }

private:
    std::string teamsColor;
};

#endif // DRIVERS_HPP
