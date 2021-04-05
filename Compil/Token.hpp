#pragma once
#include "Symbol.hpp"
#include "Variant.hpp"
#include "Identificator.hpp"
#include "TokenType.hpp"

using namespace std;

class Token {
private:
    TokenType _type;
    int _tokenStrNum;
    int _tokenStartPos;
    int _tokenEndPos;
public:
    virtual string ToString() = 0;
    TokenType GetType();
    int GetStrNum();
    int GetStartPos();
    int GetEndPos();
    Token(TokenType, int, int, int);
    ~Token();
};

// На этапе лексера - все идентификатор
class IdentificatorToken : public Token {
private:
    Identificator* _val;
public:
    Identificator* GetValue();
    string ToString() override;
    IdentificatorToken(Identificator*, int, int, int);
    ~IdentificatorToken();
};

// границы работы: 
// фиктивный scope: зарезервированные значение: true, false
// нефиктивный - то что написал пользователь
// типы - переменные, которые можно переопределять!!!
// синтаксис после лексера
// семантика после синтаксиса (параллельно)
// лексер только за вынос токена

// ПРОПУСК ОШИБОК:
// для каждой конструкции БНФ, одна большая для программы
// для каждой БНФ своя функция
// ошибки пропускаем глобально
// для каждой функции будет список слов, которые могут идти после
// пропускаю до след. слова или конца программы (var - begin, например)
// это передаем

class SymbolToken : public Token {
private:
    Symbol* _val;
public:
    Symbol* GetValue();
    string ToString();
    SymbolToken(Symbol*, int, int, int);
    ~SymbolToken();
};