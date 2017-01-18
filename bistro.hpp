#ifndef __BISTRO_H__
#define __BISTRO_H__
#include <string>
#include <vector>
#include <stack>
#include "number.hpp"
#include "token.hpp"

class Bistro
{
	private:

	protected:
		std::vector<Token> _tokens;
		std::stack<std::string> _actions;
		std::stack<Number> _numbers;

	public:
		Bistro(char *argv);
		std::vector<Token> lexer(std::string av);
		void stacking();
		void printStacks();
		std::vector<Token>::iterator parenthesePriority(std::vector<Token>::iterator it);
		void calcul();
};

std::ostream &operator<<(std::ostream &o, Bistro const &bistro);

#endif // __BISTRO_H__