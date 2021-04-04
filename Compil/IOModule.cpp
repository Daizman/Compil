#pragma once
#include "IOModule.hpp"


char IOModule::ReadNextToken() {
	string in;
	_input >> in;
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
}

IOModule::~IOModule() {
	CloseInput();
	CloseOutput();
}