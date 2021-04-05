#pragma once
#include "Context.hpp"


Context::Context(vector<Token*> inTokens = {}, vector<Context> inContext = {}) {
	_tokens = inTokens;
	_inContext = inContext;
}

Context::~Context() {

}

string Context::GetName() {
	return _name;
}


vector<Token*> Context::GetInTokens() {
	return _tokens;
}

bool Context::CheckToken(Token* checkToken) {
	for (auto token : _tokens) {
		if (token == checkToken) {
			return true;
		}
	}
	return false;
}

void Context::AddToken(Token* newToken) {
	_tokens.push_back(newToken);
}

void Context::DeleteToken(Token* delToken) {
	for (int i = 0; i < _tokens.size(); i++) {
		if (_tokens[i] == delToken) {
			_tokens.erase(_tokens.begin() + i);
			return;
		}
	}
}

Token* Context::PopToken() {
	int tSize = _tokens.size();
	auto tRet{ _tokens[tSize - 1] };
	_tokens.erase(_tokens.end());
	return tRet;
}


vector<Context> Context::GetInContexts() {
	return _inContext;
}

bool Context::CheckContext(Context checkContext) {
	for (auto context : _inContext) {
		if (context.GetName() == checkContext.GetName()) {
			return true;
		}
	}
	return false;
}

void Context::AddContext(Context newContext) {
	_inContext.push_back(newContext);
}

void Context::DelteContext(Context delContext) {
	for (int i = 0; i < _inContext.size(); i++) {
		if (_inContext[i].GetName() == delContext.GetName()) {
			_inContext.erase(_inContext.begin() + i);
			return;
		}
	}
}

Context Context::GetContext(int pos) {
	return _inContext[pos];
}