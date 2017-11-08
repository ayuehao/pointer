#include <stdio.h>

int main(int argc, char **argv)
{   int num1=4;
	int num2=3;
    typedef int (*fptrOperation)(int, int);

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
    fptrOperation select(char opcode) {
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
	fptrOperation operation = select(opcode);
	return operation(num1, num2);
    }

    printf("+: %d\n",evaluate('+', num1, num2));
    printf("-: %d\n",evaluate('-', num1, num2));
    printf("*: %d\n",evaluate('*', num1, num2));
    printf("/: %d\n",evaluate('/', num1, num2));
    printf("%%: %d\n",evaluate('%', num1, num2));

    return 0;
}
