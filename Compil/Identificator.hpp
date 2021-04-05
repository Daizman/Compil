#pragma once
#include "IdentificatorType.hpp"
#include <string>


using std::string;
using std::to_string;


class Identificator {
private:
	IdentificatorType _type;
	string _name;
public:
	IdentificatorType GetType();
	virtual string ToString() = 0;
	Identificator(IdentificatorType, string);
};

class IntIdentificator : public Identificator {
private:
	int _val;
public:
	string ToString() override;
	int GetValue();
	IntIdentificator(int, string);
};

class FloatIdentificator : public Identificator {
private:
	float _val;
public:
	string ToString() override;
	float GetValue();
	FloatIdentificator(float, string);
};

class CharIdentificator : public Identificator {
private:
	char _val;
public:
	string ToString() override;
	char GetValue();
	CharIdentificator(char, string);
};

class StringIdentificator : public Identificator {
private:
	string _val;
public:
	string ToString() override;
	string GetValue();
	StringIdentificator(string, string);
};