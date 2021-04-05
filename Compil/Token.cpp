#pragma once
#include "Token.hpp"


Token::Token(TokenType ttype, int tokenStrNum, int tokenStartPos, int tokenEndPos) {
    _type = ttype;
    _tokenStrNum = tokenStrNum;
    _tokenStartPos = tokenStartPos;
    _tokenEndPos = tokenEndPos;
}

Token::~Token() {

}

TokenType Token::GetType() {
    return _type;
}

int Token::GetStrNum() { 
    return _tokenStrNum; 
}

int Token::GetStartPos() {
    return _tokenStartPos; 
}

int Token::GetEndPos() { 
    return _tokenEndPos; 
}


IdentificatorToken::IdentificatorToken(Identificator* ident, int tokenStrNum, int tokenStartPos = 0, int tokenEndPos = 0): Token(TokenType::IDENTIFICATOR, tokenStrNum, tokenStartPos, tokenEndPos) {
    _val = ident;
}

IdentificatorToken::~IdentificatorToken() {
    delete _val;
}

string IdentificatorToken::ToString() {
    return _val->ToString();
}

Identificator* IdentificatorToken::GetValue() {
    return _val;
}


SymbolToken::SymbolToken(Symbol* symb, int tokenStrNum, int tokenStartPos = 0, int tokenEndPos = 0): Token(TokenType::SYMBOL, tokenStrNum, tokenStartPos, tokenEndPos) {
    _val = symb;
}

SymbolToken::~SymbolToken() {
    delete _val;
}

string SymbolToken::ToString() {
    return _val->ToString();
}

Symbol* SymbolToken::GetValue() {
    return _val;
}