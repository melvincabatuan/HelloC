#include <iostream>
#include <string>  
#include "stack.h"
#include "console.h"
#include "simpio.h"


using namespace std;
 
bool isBalanced(string str) {
   Stack<char> unmatched;
   int n = str.length();
   for (int i = 0; i < n; i++) {
	char ch = str[i];

	switch (ch) {
	case '{': case '[': case '(':
	// we do not care about alphabets, only brackets
		unmatched.push(ch);
		break;

	case '}':
		if (unmatched.pop() != '{') return false;
		break;

	case ']':
		if (unmatched.pop() != ']') return false;
		break;

	case ')':
		if (unmatched.pop() != ')') return false;
		break;
	} // ENDSWITCH
	}
	return unmatched.isEmpty();
}
 

int main() {
 while (true) {
 	string str = getLine("Enter string: ");
 	if (str == "") break;
 	if (isBalanced(str)) {
 		std::cout << "Properly nested" << std::endl;
        }
 	else {
 		std::cout <<"Not balanced" << std::endl;
 	}
 	}
}
