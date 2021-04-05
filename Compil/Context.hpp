#pragma once
#include "Token.hpp"
#include <vector>


using std::vector;


class Context {
private:
	vector<Token*> _tokens;
	string _name;
	vector<Context> _inContext;
public:
	Context(vector<Token*>, vector<Context>);
	~Context();
	string GetName();

	vector<Token*> GetInTokens();
	bool CheckToken(Token*);
	void AddToken(Token*);
	void DeleteToken(Token*);
	Token* PopToken();

	vector<Context> GetInContexts();
	bool CheckContext(Context);
	void AddContext(Context);
	void DelteContext(Context);
	Context GetContext(int);
};