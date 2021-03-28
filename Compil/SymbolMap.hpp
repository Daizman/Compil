#pragma once
#include "SymbolType.hpp"
#include <map>
#include <string>


class SymbolMap {
private:
    std::map<std::string, SymbolType> _symbMap;
public:
    SymbolMap() {
        _symbMap["*"] = SymbolType::STAR;
        _symbMap["/"] = SymbolType::SLASH;
        _symbMap["="] = SymbolType::EQUAL;
        _symbMap[","] = SymbolType::COMMA;
        _symbMap[";"] = SymbolType::SEMICOLON;
        _symbMap[":"] = SymbolType::COLON;
        _symbMap["."] = SymbolType::POINT;
        _symbMap["^"] = SymbolType::ARROW;
        _symbMap["("] = SymbolType::LEFTPAR;
        _symbMap[")"] = SymbolType::RIGHTPAR;
        _symbMap["["] = SymbolType::LBRACKET;
        _symbMap["]"] = SymbolType::RBRACKET;
        _symbMap["{"] = SymbolType::FLPAR;
        _symbMap["}"] = SymbolType::FRPAR;
        _symbMap["<"] = SymbolType::LATER;
        _symbMap[">"] = SymbolType::GREATER;
        _symbMap["<="] = SymbolType::LATEREQUAL;
        _symbMap[">="] = SymbolType::GREATEREQUAL;
        _symbMap["<>"] = SymbolType::LATERGREATER;
        _symbMap["+"] = SymbolType::PLUS;
        _symbMap["-"] = SymbolType::MINUS;
        _symbMap["(*"] = SymbolType::LCOMMENT;
        _symbMap["*)"] = SymbolType::RCOMMENT;
        _symbMap[":="] = SymbolType::ASSIGN;
        _symbMap[".."] = SymbolType::TWOPOINTS;
        _symbMap["ident"] = SymbolType::IDENT;
        _symbMap["intconst"] = SymbolType::INTC;
        _symbMap["floatconst"] = SymbolType::FLOATC;
        _symbMap["charconst"] = SymbolType::CHARC;
        _symbMap["stringconst"] = SymbolType::STRINGC;
        _symbMap["case"] = SymbolType::CASESY;
        _symbMap["else"] = SymbolType::ELSESY;
        _symbMap["goto"] = SymbolType::GOTOSY;
        _symbMap["type"] = SymbolType::TYPESY;
        _symbMap["with"] = SymbolType::WITHSY;
        _symbMap["file"] = SymbolType::FILESY;
        _symbMap["then"] = SymbolType::THENSY;
        _symbMap["until"] = SymbolType::UNTILSY;
        _symbMap["do"] = SymbolType::DOSY;
        _symbMap["if"] = SymbolType::IFSY;
    }
    SymbolType GetSymbol(std::string stSymb) { return _symbMap[stSymb]; }
};