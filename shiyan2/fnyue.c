#include "fanyue.h"

int add(int num1, int num2) {
    return num1 + num2;
}
int sub(int num1, int num2) {
    return num1 - num2;
}
int mul(int num1, int num2) {
    return num1 * num2;
}
int div(int num1, int num2) {
    return num1 / num2;
}
int quyu(int num1, int num2) {
    return num1 % num2;
}

fptrFanyue select(char opcode) {
    switch(opcode){
	case '+':
	    return add;

	case '-':
	    return sub;

	case '*':
	    return mul;

	case '/':
	    return div;

	case '%':
	    return quyu;
    }
}

int evaluate(char opcode, int num1, int num2) {
    fptrFanyue fanyue = select(opcode);
    return fanyue(num1, num2);}


