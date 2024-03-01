#include <iostream>
#include <string>

#include "../include/classes.hpp"
#include "../include/values.hpp"
#include <cmath>
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <random>

std::vector<enumDrivers> generateStartingGrid()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::vector<enumDrivers> startingGrid;
    std::vector<enumDrivers> toBeQualified;
    int accumulatedProbabilities = 0;
    int maxRandom = 0;
    bool found = false;

    for (int i = 0; i < static_cast<int>(enumDrivers::END); i++)
    {
        toBeQualified.push_back(static_cast<enumDrivers>(i));
    }
    for (int i = 0; i < static_cast<int>(enumDrivers::END); i++)
    {
        maxRandom = 0;
        accumulatedProbabilities = 0;
        for (enumDrivers driver : toBeQualified)
        {
            maxRandom += driversWinChance[driver] * 10000;
        }
        int random = std::uniform_int_distribution<int>(0, maxRandom - 1)(gen);
        found = false;

        for (long unsigned int k = 0; k < toBeQualified.size(); k++)
        {
            enumDrivers driver = toBeQualified[k];

            accumulatedProbabilities += driversWinChance[driver] * 10000;
            if (!found && random < accumulatedProbabilities)
            {
                startingGrid.push_back(driver);
                toBeQualified.erase(toBeQualified.begin() + k);
                found = true;
            }
        }
    }
    return startingGrid;
}

std::vector<enumDrivers> simulateRace(std::vector<enumDrivers> startingGrid)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::vector<enumDrivers> raceResults;
    std::map<enumDrivers, float> driversRaceWinChance;
    std::vector<enumDrivers> toFinishRace;
    int accumulatedProbabilities = 0;
    int maxRandom = 0;
    bool found = false;

    for (int i = 0; i < static_cast<int>(enumDrivers::END); i++)
    {
        driversRaceWinChance[static_cast<enumDrivers>(i)] = (driversWinChance[startingGrid[i]] + raceResultProbabilitiesFromQualifying[i + 1]) / 2;
        toFinishRace.push_back(startingGrid[i]);
    }

    for (int i = 0; i < static_cast<int>(enumDrivers::END); i++)
    {
        maxRandom = 0;
        accumulatedProbabilities = 0;
        for (enumDrivers driver : toFinishRace)
        {
            maxRandom += driversRaceWinChance[driver] * 10000;
        }
        int random = std::uniform_int_distribution<int>(0, maxRandom - 1)(gen);
        found = false;

        for (long unsigned int k = 0; k < toFinishRace.size(); k++)
        {
            enumDrivers driver = toFinishRace[k];

            accumulatedProbabilities += driversRaceWinChance[driver] * 10000;
            if (!found && random < accumulatedProbabilities)
            {
                raceResults.push_back(driver);
                toFinishRace.erase(toFinishRace.begin() + k);
                found = true;
            }
        }
    }
    return raceResults;
}

void printResults(int position, bool race, bool qualifying)
{
    if (qualifying)
    {
        switch (position)
        {
        case 1:
            std::cout << "==== You qualified on pole position ! ====" << std::endl;
            break;
        case 2:
            std::cout << "==== You qualified " << position << "nd ! ====" << std::endl
                      << std::endl;
            break;
        case 3:
            std::cout << "==== You qualified " << position << "rd ! ====" << std::endl
                      << std::endl;
            break;
        default:
            std::cout << "==== You qualified " << position << "th ! ====" << std::endl
                      << std::endl;
            break;
        }
    }
    if (race)
    {
        switch (position)
        {
        case 1:
            std::cout << "==== 🏆 You won the race ! 🏆 ====" << std::endl;
            break;
        case 2:
            std::cout << "==== 🥈 You finished " << position << "nd ! 🥈 ====" << std::endl
                      << std::endl;
            break;
        case 3:
            std::cout << "==== 🥉 You finished " << position << "rd ! 🥉 ====" << std::endl
                      << std::endl;
            break;
        default:
            std::cout << "==== You finished " << position << "th ! ====" << std::endl
                      << std::endl;
            break;
        }
    }
}

int main()
{
    std::string answer;
    std::string base_message = "You are ";
    bool defaultAnswer = false;
    int myDriverNumber = defaultAnswer ? 0 : -1;
    int myTrackNumber = defaultAnswer ? 0 : -1;
    Driver myDriver = Driver(enumTeams::RedBull, enumDrivers::MaxVerstappen);
    enumTracks myTrack = enumTracks::Bahrain;
    std::vector<enumDrivers> qualifyingResults;
    int myQualifyingResult = 0;
    std::vector<enumDrivers> raceResults;
    int myRaceResult = 0;

    std::cout << "====[CPP Program]====" << std::endl;
    Driver verstappen(enumTeams::RedBull, enumDrivers::MaxVerstappen);
    Driver perez(enumTeams::RedBull, enumDrivers::SergioPerez);
    Driver hamilton(enumTeams::Mercedes, enumDrivers::LewisHamilton);
    Driver russell(enumTeams::Mercedes, enumDrivers::GeorgeRussell);
    Driver leclerc(enumTeams::Ferrari, enumDrivers::CharlesLeclerc);
    Driver sainz(enumTeams::Ferrari, enumDrivers::CarlosSainz);
    Driver norris(enumTeams::McLaren, enumDrivers::LandoNorris);
    Driver piastri(enumTeams::McLaren, enumDrivers::OscarPiastri);
    Driver alonso(enumTeams::AstonMartin, enumDrivers::FernandoAlonso);
    Driver stroll(enumTeams::AstonMartin, enumDrivers::LanceStroll);
    Driver ocon(enumTeams::Alpine, enumDrivers::EstebanOcon);
    Driver gasly(enumTeams::Alpine, enumDrivers::PierreGasly);
    Driver tsunoda(enumTeams::RacingBulls, enumDrivers::YukiTsunoda);
    Driver ricciardo(enumTeams::RacingBulls, enumDrivers::DanielRicciardo);
    Driver magnussen(enumTeams::Haas, enumDrivers::KevinMagnussen);
    Driver hulkenberg(enumTeams::Haas, enumDrivers::NicoHulkenberg);
    Driver albon(enumTeams::Williams, enumDrivers::AlexAlbon);
    Driver sargeant(enumTeams::Williams, enumDrivers::LoganSargeant);
    Driver bottas(enumTeams::Sauber, enumDrivers::ValtteriBottas);
    Driver zhou(enumTeams::Sauber, enumDrivers::ZhouGuanyu);

    Driver drivers[] = {verstappen, perez, hamilton, russell, leclerc, sainz, norris, piastri, alonso, stroll, ocon, gasly, tsunoda, ricciardo, magnussen, hulkenberg, albon, sargeant, bottas, zhou};

    for (int i = 0; static_cast<enumDrivers>(i) != enumDrivers::END; i++)
    {
        std::cout << "[" << i << "] " << drivers[i] << std::endl;
    }
    std::cout << "Choose your driver by entering his number: ";
    while (myDriverNumber < 0 || myDriverNumber >= static_cast<int>(enumDrivers::END))
    {
        std::cin >> myDriverNumber;
        if (myDriverNumber < 0 || myDriverNumber >= static_cast<int>(enumDrivers::END))
        {
            std::cout << "Please enter a valid number: ";
        }
    }
    myDriver = drivers[myDriverNumber];
    std::cout << std::endl;

    for (int i = 0; static_cast<enumTracks>(i) != enumTracks::END; i++)
    {
        std::cout << "[" << i << "] " << tracksMap[static_cast<enumTracks>(i)] << std::endl;
    }
    std::cout << "Choose your track by entering its number: ";
    while (myTrackNumber < 0 || myTrackNumber >= static_cast<int>(enumTracks::END))
    {
        std::cin >> myTrackNumber;
        if (myTrackNumber < 0 || myTrackNumber >= static_cast<int>(enumTracks::END))
        {
            std::cout << "Please enter a valid number: ";
        }
    }
    myTrack = static_cast<enumTracks>(myTrackNumber);

    std::cout << std::endl
              << "You chose to do race in " << tracksMap[myTrack] << " with " << myDriver << std::endl
              << std::endl;

    std::cout << "Press Enter to start the qualifying session...";
    std::cin.get();
    std::cin.ignore();

    std::cout << std::endl
              << "Qualifying session is starting..." << std::endl;
    sleep(2);
    qualifyingResults = generateStartingGrid();
    std::cout << "==== Qualifying results ====" << std::endl;
    for (int i = 0; i < static_cast<int>(enumDrivers::END); i++)
    {
        std::cout << "[" << i + 1 << "] " << drivers[static_cast<int>(qualifyingResults[i])] << std::endl;
        if (static_cast<int>(qualifyingResults[i]) == myDriverNumber)
        {
            myQualifyingResult = i + 1;
        }
    }
    printResults(myQualifyingResult, false, true);
    std::cout << "Press Enter to start the race...";
    std::cin.get();
    std::cout << std::endl
              << "It's lights out and away we go !" << std::endl;
    sleep(2);
    raceResults = simulateRace(qualifyingResults);
    std::cout << "==== Race results ====" << std::endl;
    for (int i = 0; i < static_cast<int>(enumDrivers::END); i++)
    {
        std::cout << "[" << i + 1 << "] " << drivers[static_cast<int>(raceResults[i])] << std::endl;
        if (static_cast<int>(raceResults[i]) == myDriverNumber)
        {
            myRaceResult = i + 1;
        }
    }
    printResults(myRaceResult, true, false);
    std::cout << std::endl
              << "====[END CPP]====" << std::endl;
    return 0;
}
