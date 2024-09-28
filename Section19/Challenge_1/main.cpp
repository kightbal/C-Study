// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

const int total_width{70};
const int field1_width{20};
const int field2_width{15};

int main() {
    Tours tours{"Tour Ticket Prices from Miami",
                {
                    {
                        "Colombia",
                        {{"Bogota", 8778000, 400.98},
                         {"Cali", 2401000, 424.12},
                         {"Medellin", 2464000, 350.98},
                         {"Cartagena", 972000, 345.34}},
                    },
                    {
                        "Brazil",
                        {{"Rio De Janiero", 13500000, 567.45},
                         {"Sao Paulo", 11310000, 975.45},
                         {"Salvador", 18234000, 855.99}},
                    },
                    {
                        "Chile",
                        {{"Valdivia", 260000, 569.12},
                         {"Santiago", 7040000, 520.00}},
                    },
                    {"Argentina", {{"Buenos Aires", 3010000, 723.77}}},
                }};

    // Unformatted display so you can see how to access the vector elements
    int length = total_width - (total_width - static_cast<int>(tours.title.size())) / 2;

    std::cout
        << std::setw(length) << std::right << tours.title << std::endl
        << std::endl;
    std::cout << std::setw(field1_width) << std::left << "Country" << std::setw(field1_width)
              << "City" << std::setw(field2_width) << std::right << "Population" << std::setw(field2_width) << "Price" << std::endl;
    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    for (auto country : tours.countries) { // loop through the countries
        std::cout << std::left << std::setw(field1_width) << country.name;
        for (auto city : country.cities) { // loop through the cities for each country
            if (city.name == country.cities[0].name) {
                std::cout
                    << std::setw(field1_width) << std::left << city.name
                    << std::setw(field2_width) << std::right << city.population
                    << std::setw(field2_width) << city.cost
                    << std::endl;
            } else {
                std::cout << std::setw(field1_width) << std::left << ""
                          << std::setw(field1_width) << std::left << city.name
                          << std::setw(field2_width) << std::right << city.population
                          << std::setw(field2_width) << city.cost
                          << std::endl;
            }
        }
    }

    std::cout << std::endl
              << std::endl;
    return 0;
}