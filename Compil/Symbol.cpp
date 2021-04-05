#pragma once
#include "Symbol.hpp"


Symbol::Symbol(string val) {
	_map = SymbolMap();
	_val = val;
	_type = _map.GetSymbol(val);
}

string Symbol::GetValue() {
	return _val;
}

SymbolType Symbol::GetType() {
	return _type;
}

string Symbol::ToString() {
	return _val;
}