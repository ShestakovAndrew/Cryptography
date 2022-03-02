#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>

std::vector<std::string> getSubsequencesPermutations(std::string bitSequence, uint16_t t);
std::map<std::string, uint16_t> getVMapPermutations(std::vector<std::string> subSequences);
double Fact(double n);
double ChiSquarePermutations(std::map<std::string, uint16_t> vMap, std::vector<std::string> subSequences, uint16_t t);
void StartCheckPermutations(std::string bitSequence);