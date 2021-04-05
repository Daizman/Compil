#pragma once
#include "SymbolType.hpp"
#include <map>
#include <string>


using std::map;
using std::string;


class SymbolMap {
private:
    map<string, SymbolType> _symbMap;
public:
    SymbolMap();
    SymbolType GetSymbol(string);
};