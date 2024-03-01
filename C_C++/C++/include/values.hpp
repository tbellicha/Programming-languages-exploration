#ifndef ENUMS_HPP
#define ENUMS_HPP

#include <map>
#include <string>

enum class enumTeams
{
    RedBull,
    Mercedes,
    Ferrari,
    AstonMartin,
    McLaren,
    Alpine,
    RacingBulls,
    Sauber,
    Williams,
    Haas,
    END
};

enum class enumDrivers
{
    MaxVerstappen,
    SergioPerez,
    LewisHamilton,
    GeorgeRussell,
    CharlesLeclerc,
    CarlosSainz,
    LandoNorris,
    OscarPiastri,
    FernandoAlonso,
    LanceStroll,
    EstebanOcon,
    PierreGasly,
    YukiTsunoda,
    DanielRicciardo,
    KevinMagnussen,
    NicoHulkenberg,
    AlexAlbon,
    LoganSargeant,
    ValtteriBottas,
    ZhouGuanyu,
    END
};

enum class enumTracks
{
    Bahrain,
    Jeddah,
    Melbourne,
    Suzuka,
    China,
    Miami,
    Imola,
    Monaco,
    Canada,
    Barcelona,
    Austria,
    Silverstone,
    Hungary,
    Spa,
    Zandvoort,
    Monza,
    Baku,
    Singapore,
    Texas,
    Mexico,
    SaoPaulo,
    LasVegas,
    Qatar,
    AbuDhabi,
    END
};

enum class enumTires
{
    Hard,
    Medium,
    Soft,
    END
};

std::map<enumTeams, std::string> teamsMap = {
    {enumTeams::RedBull, "Red Bull"},
    {enumTeams::Mercedes, "Mercedes"},
    {enumTeams::Ferrari, "Ferrari"},
    {enumTeams::AstonMartin, "Aston Martin"},
    {enumTeams::McLaren, "McLaren"},
    {enumTeams::Alpine, "Alpine"},
    {enumTeams::RacingBulls, "Racing Bulls"},
    {enumTeams::Sauber, "Sauber"},
    {enumTeams::Williams, "Williams"},
    {enumTeams::Haas, "Haas"}};

std::map<enumTeams, std::string> teamsColorMap = {
    {enumTeams::RedBull, "\033[1;34m"},
    {enumTeams::Mercedes, "\033[1;30m"},
    {enumTeams::Ferrari, "\033[1;31m"},
    {enumTeams::AstonMartin, "\033[1;32m"},
    {enumTeams::McLaren, "\033[1;35m"},
    {enumTeams::Alpine, "\033[1;36m"},
    {enumTeams::RacingBulls, "\033[1;36m"},
    {enumTeams::Sauber, "\033[1;30m"},
    {enumTeams::Williams, "\033[1;34m"},
    {enumTeams::Haas, "\033[1;37m"}};

std::map<enumDrivers, std::string> driversMap = {
    {enumDrivers::MaxVerstappen, "Max Verstappen"},
    {enumDrivers::SergioPerez, "Sergio Perez"},
    {enumDrivers::LewisHamilton, "Lewis Hamilton"},
    {enumDrivers::GeorgeRussell, "George Russell"},
    {enumDrivers::CharlesLeclerc, "Charles Leclerc"},
    {enumDrivers::CarlosSainz, "Carlos Sainz"},
    {enumDrivers::LandoNorris, "Lando Norris"},
    {enumDrivers::OscarPiastri, "Oscar Piastri"},
    {enumDrivers::FernandoAlonso, "Fernando Alonso"},
    {enumDrivers::LanceStroll, "Lance Stroll"},
    {enumDrivers::EstebanOcon, "Esteban Ocon"},
    {enumDrivers::PierreGasly, "Pierre Gasly"},
    {enumDrivers::YukiTsunoda, "Yuki Tsunoda"},
    {enumDrivers::DanielRicciardo, "Daniel Ricciardo"},
    {enumDrivers::KevinMagnussen, "Kevin Magnussen"},
    {enumDrivers::NicoHulkenberg, "Nico Hulkenberg"},
    {enumDrivers::AlexAlbon, "Alex Albon"},
    {enumDrivers::LoganSargeant, "Logan Sargeant"},
    {enumDrivers::ValtteriBottas, "Valtteri Bottas"},
    {enumDrivers::ZhouGuanyu, "Zhou Guanyu"}};

std::map<enumDrivers, float> driversWinChance = {
    {enumDrivers::MaxVerstappen, 000.8200},  // 0.8200
    {enumDrivers::SergioPerez, 00000.0400},  // 0.8600
    {enumDrivers::LewisHamilton, 000.0200},  // 0.8800
    {enumDrivers::GeorgeRussell, 000.0150},  // 0.8950
    {enumDrivers::CharlesLeclerc, 00.0300},  // 0.9250
    {enumDrivers::CarlosSainz, 00000.0220},  // 0.9470
    {enumDrivers::LandoNorris, 00000.0120},  // 0.9590
    {enumDrivers::OscarPiastri, 0000.0100},  // 0.9690
    {enumDrivers::FernandoAlonso, 00.0160},  // 0.9850
    {enumDrivers::LanceStroll, 00000.0050},  // 0.9900
    {enumDrivers::EstebanOcon, 00000.0020},  // 0.9920
    {enumDrivers::PierreGasly, 00000.0030},  // 0.9950
    {enumDrivers::YukiTsunoda, 00000.0005},  // 0.9955
    {enumDrivers::DanielRicciardo, 0.0010},  // 0.9965
    {enumDrivers::KevinMagnussen, 00.0005},  // 0.9970
    {enumDrivers::NicoHulkenberg, 00.0005},  // 0.9975
    {enumDrivers::AlexAlbon, 0000000.0010},  // 0.9985
    {enumDrivers::LoganSargeant, 000.0005},  // 0.9990
    {enumDrivers::ValtteriBottas, 00.0005},  // 0.9995
    {enumDrivers::ZhouGuanyu, 000000.0005}}; // 1.0000

std::map<enumTracks, std::string> tracksMap = {
    {enumTracks::Bahrain, "Bahrain"},
    {enumTracks::Jeddah, "Jeddah"},
    {enumTracks::Melbourne, "Melbourne"},
    {enumTracks::Suzuka, "Suzuka"},
    {enumTracks::China, "China"},
    {enumTracks::Miami, "Miami"},
    {enumTracks::Imola, "Imola"},
    {enumTracks::Monaco, "Monaco"},
    {enumTracks::Canada, "Canada"},
    {enumTracks::Barcelona, "Barcelona"},
    {enumTracks::Austria, "Austria"},
    {enumTracks::Silverstone, "Silverstone"},
    {enumTracks::Hungary, "Hungary"},
    {enumTracks::Spa, "Spa"},
    {enumTracks::Zandvoort, "Zandvoort"},
    {enumTracks::Monza, "Monza"},
    {enumTracks::Baku, "Baku"},
    {enumTracks::Singapore, "Singapore"},
    {enumTracks::Texas, "Texas"},
    {enumTracks::Mexico, "Mexico"},
    {enumTracks::SaoPaulo, "Sao Paulo"},
    {enumTracks::LasVegas, "Las Vegas"},
    {enumTracks::Qatar, "Qatar"},
    {enumTracks::AbuDhabi, "Abu Dhabi"}};

std::map<int, double> raceResultProbabilitiesFromQualifying = {
    {1, 0.42},    // 0.420
    {2, 0.3},     // 0.720
    {3, 0.12},    // 0.840
    {4, 0.075},   // 0.915
    {5, 0.03},    // 0.945
    {6, 0.02},    // 0.965
    {7, 0.01},    // 0.975
    {8, 0.0065},  // 0.9815
    {9, 0.005},   // 0.9865
    {10, 0.0035}, // 0.9900
    {11, 0.001},  // 0.9910
    {12, 0.001},  // 0.9920
    {13, 0.001},  // 0.9930
    {14, 0.001},  // 0.9940
    {15, 0.001},  // 0.9950
    {16, 0.001},  // 0.9960
    {17, 0.001},  // 0.9970
    {18, 0.001},  // 0.9980
    {19, 0.001},  // 0.9990
    {20, 0.001}}; // 1.0000

#endif // ENUMS_HPP
