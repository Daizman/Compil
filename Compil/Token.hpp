#pragma once
#include "Symbol.hpp"
#include "Variant.hpp"
#include "Identificator.hpp"
#include "Comment.hpp"
#include "TokenType.hpp"

using namespace std;

class Token {
private:
    TokenType _type;
    int _tokenStrNum;
public:
    virtual string ToString() = 0;
    TokenType GetType() { return _type; }
    int GetStrNum() { return _tokenStrNum; }
    int GetStartPos() { return _tokenStartPos; }
    int GetEndPos() { return _tokenEndPos; }
protected:
    int _tokenStartPos;
    int _tokenEndPos;
    Token(TokenType ttype, int tokenStrNum, int tokenStartPos=0, int tokenEndPos=0) {
        _type = ttype;
        _tokenStrNum = tokenStrNum;
        _tokenStartPos = tokenStartPos;
        _tokenEndPos = tokenEndPos;
    };
    ~Token() {
              
    };
};

class VariantToken : public Token {
private:
    Variant& _val;
public:
    Variant& GetValue() { return _val; }
    string ToString() { return _val.ToString(); }
};

class IdentificatorToken : public Token {
private:
    Identificator& _val;
public:
    Identificator& GetValue() { return _val; }
    string ToString() { return _val.ToString(); }
};

class SymbolToken : public Token {
private:
    Symbol _val;
public:
    Symbol GetValue() { return _val; }
    string ToString() { return _val.ToString(); }
};

// убрать
class CommentToken : public Token {
private:
    Comment _val;
public:
    Comment GetValue() { return _val; }
    string ToString() { return _val.ToString(); }
};