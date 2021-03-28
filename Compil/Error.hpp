#pragma once
#include <string>


class Error
{
private:
	int _pos;
	int _strNum;
	std::string _reason;
	int _code;
public:
	Error(int strNum, int pos=0, std::string reason="", int code=0) {
		_strNum = strNum;
		_pos = pos;
		_reason = reason;
		_code = code;
	};
	int GetStrNum() { return _strNum; }
	int GetPose() { return _pos; }
	std::string GetReason() { return _reason; }
	int GetCode() { return _code; }
	std::string ToString() {
		std::string errorText = "";
		errorText += "Ошибка в строке " + to_string(_strNum);
		errorText += " на позиции " + to_string(_pos);
		errorText += " описание: " + _reason;
		errorText += " код ошибки " + _code + '\n';
	}
};