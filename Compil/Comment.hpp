#pragma once
#include <string>


class Comment {
private:
	std::string _val;
public:
	std::string GetValue() { return _val; }
	void SetValue(std::string newVal) { _val = newVal; }
	std::string ToString() { return _val; }
	Comment(std::string val) {
		_val = val;
	}
};