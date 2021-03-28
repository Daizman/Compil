#pragma once
#include "IdentificatorType.hpp"
#include <string>

using namespace std;

class Identificator {
private:
	IdentificatorType _type;
public:
	IdentificatorType GetType() { return _type; }
	virtual string ToString() = 0;
	Identificator(IdentificatorType itype) {
		_type = itype;
	}
};
// спросить про индентификатор, сделать на основе variant

class IntIdentificator : public Identificator {
private:
	int _val;
public:
	string ToString() override { return to_string(_val); }
	int GetValue() { return _val; }
	IntIdentificator(int val) : Identificator(IdentificatorType::INTEGER) {
		_val = val;
	}
};


class FloatIdentificator : public Identificator {
private:
	float _val;
public:
	string ToString() override { return to_string(_val); }
	float GetValue() { return _val; }
	FloatIdentificator(float val) : Identificator(IdentificatorType::FLOAT) {
		_val = val;
	}
};

class CharIdentificator : public Identificator {
private:
	char _val;
public:
	string ToString() override { return string(1, _val); }
	char GetValue() { return _val; }
	CharIdentificator(char val) : Identificator(IdentificatorType::CHARACTER) {
		_val = val;
	}
};

class StringIdentificator : public Identificator {
private:
	string _val;
public:
	string ToString() override { return _val; }
	string GetValue() { return _val; }
	StringIdentificator(string val) : Identificator(IdentificatorType::STRING) {
		_val = val;
	}
};