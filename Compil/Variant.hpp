#pragma once
#include <string>
#include "VariantType.hpp"

using namespace std;

//пока непонятно зачем он, но оставил тут на всякий

class Variant {
private:
    VariantType _type;
    string _name;
public:
    virtual string ToString() = 0;
    string GetName() { return _name; }
    void SetName(string newName) { _name = newName; }
    VariantType GetType() { return _type; }
protected:
    Variant(VariantType vtype, string name="") {
        _type = vtype;
        _name = name;
    };
    virtual ~Variant() {
    
    };
};

class IntVariant : public Variant {
private:
    int _val;
public:
    int GetValue() { return _val; }
    void SetValue(int newVal) { _val = newVal; }
    string ToString() override { return to_string(_val); }
    IntVariant(int val, string name) : Variant(VariantType::INTEGER, name) {
        _val = val;
    };
    IntVariant(IntVariant& var) : Variant(VariantType::INTEGER, var.GetName()) {
        _val = var.GetValue();
    };
};

class FloatVariant : public Variant {
private:
    float _val;
public:
    float GetValue() { return _val; }
    void SetValue(float newVal) { _val = newVal; }
    string ToString() override { return to_string(_val); }
    FloatVariant(float val, string name) : Variant(VariantType::FLOAT, name) {
        _val = val;
    };
    FloatVariant(IntVariant& var) : Variant(VariantType::FLOAT, var.GetName()) {
        _val = var.GetValue();
    };
};

class CharVariant : public Variant {
private:
    char _val;
public:
    char GetValue() { return _val; }
    void SetValue(char newVal) { _val = newVal; }
    string ToString() override { return string(1, _val); }
    CharVariant(char val, string name) : Variant(VariantType::CHARACTER, name) {
        _val = val;
    };
    CharVariant(IntVariant& var) : Variant(VariantType::CHARACTER, var.GetName()) {
        _val = var.GetValue();
    };
};

class StringVariant : public Variant {
private:
    string _val;
public:
    string GetValue() { return _val; }
    void SetValue(string newVal) { _val = newVal; }
    string ToString() override { return _val; }
    StringVariant(string val, string name) : Variant(VariantType::STRING, name) {
        _val = val;
    };
    StringVariant(StringVariant& var) : Variant(VariantType::STRING, var.GetName()) {
        _val = var.GetValue();
    };
};
