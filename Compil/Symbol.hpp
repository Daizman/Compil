#pragma once
#include "SymbolMap.hpp"
#include <string>


class Symbol {
private:
	static SymbolMap _map;
	std::string _val;
	SymbolType _type;
public:
	std::string GetValue() { return _val; }
	SymbolType GetType() { return _type; }
	std::string ToString() { return _val; }
	Symbol(std::string val) {
		_map = SymbolMap();
		_val = val;
		_type = _map.GetSymbol(val);
	}
};
