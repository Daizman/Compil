#pragma once
#include "SymbolMap.hpp"
#include <string>


using std::string;


class Symbol {
private:
	static SymbolMap _map;
	string _val;
	SymbolType _type;
public:
	string GetValue();
	SymbolType GetType();
	string ToString();
	Symbol(string);
};
