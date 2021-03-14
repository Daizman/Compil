#pragma once
#include <string>
#include "VariantType.hpp"

using namespace std;

class Variant {
private:
    VariantType vT;
public:
    const VariantType& VT;
    virtual string toString() = 0;
    virtual Variant* copyMe() const = 0;
protected:
    Variant(VariantType vtype);
    virtual ~Variant();
};

class IntVariant : public Variant {
public:
    int Value;
    IntVariant(int vvalue);
    virtual string toString() override;
    virtual Variant* copyMe() const;
};

class FloatVariant : public Variant {
public:
    float Value;
    FloatVariant(float vvalue);
    virtual string toString() override;
    virtual Variant* copyMe() const;
};

class CharVariant : public Variant {
public:
    char Value;
    CharVariant(char vvalue);
    virtual string toString() override;
    virtual Variant* copyMe() const;
};

class StringVariant : public Variant {
public:
    string Value;
    StringVariant(string vvalue);
    virtual string toString() override;
    virtual Variant* copyMe() const;
};
