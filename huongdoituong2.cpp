#include <iostream>
#include <cmath>
#include <stack>
#include <string>

class ExpressionCalculator {
public:
    int calculate(const std::string& expression) {
        std::stack<int> operands;

        for (char c : expression) {
            if (isdigit(c)) {
                operands.push(c - '0');
            } else if (c == '+' || c == '-' || c == '*') {
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                int result = performOperation(a, b, c);
                operands.push(result);
            } else if (c == 'a') {
                int a = operands.top();
                operands.pop();
                int result = performAbsolute(a);
                operands.push(result);
            }
        }

        return operands.top();
    }

private:
    int performOperation(int a, int b, char op) {
        if (op == '+') {
            return a + b;
        } else if (op == '-') {
            return a - b;
        } else if (op == '*') {
            return a * b;
        }

        return 0;
    }

    int performAbsolute(int a) {
        return std::abs(a);
    }
};

int main() {
    std::string expression;
    std::cout << "Nh?p bi?u th?c s? h?c: ";
    std::getline(std::cin, expression);

    ExpressionCalculator calculator;
    int result = calculator.calculate(expression);

    std::cout << "Giá tr? bi?u th?c: " << result << std::endl;

    return 0;
}
