#pragma once
#include "Identificator.hpp"


Identificator::Identificator(IdentificatorType itype, string name) {
	_type = itype;
	_name = name;
}

IdentificatorType Identificator::GetType() {
	return _type;
}


IntIdentificator::IntIdentificator(int val, string name) :Identificator(IdentificatorType::INTEGER, name) {
	_val = val;
}

string IntIdentificator::ToString() { 
	return to_string(_val); 
}

int IntIdentificator::GetValue() {
	return _val;
}


FloatIdentificator::FloatIdentificator(float val, string name) :Identificator(IdentificatorType::FLOAT, name) {
	_val = val;
}

string FloatIdentificator::ToString() {
	return to_string(_val);
}

float FloatIdentificator::GetValue() {
	return _val;
}


CharIdentificator::CharIdentificator(char val, string name) :Identificator(IdentificatorType::CHARACTER, name) {
	_val = val;
}

string CharIdentificator::ToString() {
	return string(1, _val);
}

char CharIdentificator::GetValue() {
	return _val;
}


StringIdentificator::StringIdentificator(string val, string name) :Identificator(IdentificatorType::STRING, name) {
	_val = val;
}

string StringIdentificator::ToString() {
	return _val;
}

string StringIdentificator::GetValue() {
	return _val;
}