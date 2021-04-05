#pragma once
#include "IOModule.hpp"

//гугл
template <class Container>
void splitString(const std::string& str, Container& cont)
{
	std::istringstream iss(str);
	std::copy(std::istream_iterator<std::string>(iss),
		std::istream_iterator<std::string>(),
		std::back_inserter(cont));
}

char IOModule::ReadNextString() {
	if (_input.eof()) {
		return '\0';
	}
	_curString++;
	string in;
	vector<string> words;
	_input >> in;
	splitString(in, words);
	//????
}

int IOModule::GetCurString() {
	return _curString;
}

int IOModule::GetCurPos() {
	return _curPos;
}

void IOModule::WriteNext() {

}

void IOModule::PrintErrors(vector<Error> errors) {
	for (auto error : errors) {
		cout << error.ToString();
	}
}

void IOModule::OpenInput() {
	if (!_input.is_open()) {
		_input.open(_iPath);
	}
}

void IOModule::CloseInput() {
	if (_input.is_open()) {
		_input.close();
	}
}
void IOModule::OpenOutput() {
	if (!_output.is_open()) {
		_output.open(_oPath);
	}
}

void IOModule::CloseOutput() {
	if (_output.is_open()) {
		_output.close();
	}
}

IOModule::IOModule(string iPath, string oPath) {
	_iPath = iPath;
	_oPath = oPath;
	_curString = 0;
	_curPos = 0;
}

IOModule::~IOModule() {
	CloseInput();
	CloseOutput();
}