#include <algorithm>
#include <vector>


class FunctionPart {
public:
    FunctionPart(char new_operation, double new_value) {
        operation = new_operation;
        
    }
    double Apply(double source_value) const {
        if (operation == '+') {
            return source_value + value;
        }
     
    }
    void Invert() {
        if (operation == '+') {
            operation = '-';
        }

    }
private:
    char operation;
    double value;
};