#include "TestCheackSeries.h"

void countingOnesZeros(std::string bitSequence)
{
    std::cout << "\tZeros: " << count(bitSequence.begin(), bitSequence.end(), '0') << std::endl
        << "\tOnes: " << count(bitSequence.begin(), bitSequence.end(), '1') << std::endl;
}
void seriesByTwo(std::string bitSequence)
{
    std::map<std::string, int> counter2;

    std::cout << std::endl << "\tseriesByTwo: ";
    for (int i = 0; i != bitSequence.size(); i += 2)
    {
        std::string s1 = bitSequence.substr(i, 2);
        std::cout << s1 << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i != bitSequence.size(); i += 2)
    {
        std::string s1 = bitSequence.substr(i, 2);
        counter2[s1] += 1;
    }
    for (auto& item : counter2)
    {
        std::cout << "\t" << item.first << " " << item.second << std::endl;
    }
}
void seriesByThree(std::string bitSequence)
{
    std::map<std::string, int> counter3;
    std::cout << std::endl << "\tseriesByThree: ";
    for (int i = 0; i != bitSequence.size(); i += 3)
    {
        std::string s1 = bitSequence.substr(i, 3);
        if (s1.length() == 3) 
        {
            std::cout << s1 << " ";
            continue;
        }
        break;

    };
    if (bitSequence.size() % 3 != 0)
    {
        std::cout << bitSequence.substr(bitSequence.size() - bitSequence.size() % 3, bitSequence.back());
    }
    std::cout << std::endl;
    for (int i = 0; i != bitSequence.size(); i += 3)
    {
        std::string s1 = bitSequence.substr(i, 3);
        if (s1.length() == 3) {

            counter3[s1] += 1;
            continue;
        }
        break;

    }
    for (auto& item : counter3)
    {
        std::cout << "\t" << item.first << " " << item.second << std::endl;
    }
}
void seriesByFour(std::string bitSequence)
{
    std::map<std::string, int> counter4;
    std::cout << std::endl << "";
    for (int i = 0; i != bitSequence.size(); i += 4)
    {
        std::string s1 = bitSequence.substr(i, 4);
        std::cout << s1 << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i != bitSequence.size(); i += 4)
    {
        std::string s1 = bitSequence.substr(i, 4);
        counter4[s1] += 1;
    }
    for (auto& item : counter4)
    {
        std::cout << "" << item.first << "" << item.second << "" << std::endl;
    }
}
void StartCheackSeries(std::string const& bitSequence)
{
    std::cout << "CheackSeries: " << std::endl;
    countingOnesZeros(bitSequence);
    seriesByTwo(bitSequence);
    seriesByThree(bitSequence);
}