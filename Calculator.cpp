#include <iostream>
#include <cmath>
using namespace std;

void PrintMenu();
void PrintMenuTrig();
void AddTwoNumbers(float a, float b);
void SubtractTwoNumbers(float a1, float b1);
void MultiplyNumbers(float a2, float b2);
void DivideNumbers(float a3, float b3);
void PowerNumbers(float a4, float b4);
void SinFunction(float a5);
void CosFunction(float a5);
void TanFunction(float a5);
void SquareRoot(float a5);


int main()
{
    int input, inputtrig;
    float input1, input2;
    char input3;
    
    do {
        
    cout << "Please choose from the following options: " << endl;
    PrintMenu();
    
    cin >> input;
    
    switch (input) {
        case 1:
            cout << "Please input the two numbers you would like to add" << endl;
            cin >> input1 >> input2;
            
            AddTwoNumbers(input1, input2);
            break;
        case 2:
            cout << "Please input the first number, followed by the number you want taken away from the first" << endl;
            cin >> input1 >> input2;
            
            SubtractTwoNumbers(input1, input2);
            break;
        case 3:
            cout << "Please input the two numbers you would like to multiply" << endl;
            cin >> input1 >> input2;
            
            MultiplyNumbers(input1, input2);
            break;
        case 4:
            cout << "Please input the first number, followed by the number you want to divide it with" << endl;
            cin >> input1 >> input2;
            
            DivideNumbers(input1, input2);
            break;
        case 5:
            cout << "Input the number, then the exponent: " << endl;
            cin >> input1 >> input2;
            
            PowerNumbers(input1, input2);
            break;
        case 6:
            cout << "Which trigonometric function would you liked to compute: " << endl << endl;
            PrintMenuTrig();
            
            cin >> inputtrig;
            
            switch (inputtrig) {
                case 1:
                    cout << "Input the number you would like the sine of: " << endl;
                    cin >> input1;
                    
                    SinFunction(input1);
                    break;
                case 2:
                    cout << "Input the number you would like the cosine of: " << endl;
                    cin >> input1;
                    
                    CosFunction(input1);
                    break;
                case 3:
                    cout << "Input the number you would like the tangent of: " << endl;
                    cin >> input1;
                    
                    TanFunction(input1);
                    break;
                default:
                    cout << "Invalid input" << endl;
                    break;
            }
            break;
        case 7:
            cout << "Input the number you would like to compute the square root of: " << endl;
            cin >> input1;
            
            SquareRoot(input1);
            break;
        default:
            cout << "Invalid option";
            break;
    }
    
    cout << "Would you like to perform another computation? (Enter 'N' to quit)" << endl;
    cin >> input3;
    cout << "------------------------------------------------------" << endl;
    
    if ((input3 == 'N') || (input3 == 'n')) {
            cout << "Have a nice day!" << endl;
    }
        
    } while ((input3 != 'N') && (input3 != 'n'));
    
    return 0;

}

void PrintMenu(){
    cout << "(1) Add Two Numbers" << endl;
    cout << "(2) Subtract Two Numbers" << endl;
    cout << "(3) Multiply Two Numbers" << endl;
    cout << "(4) Divide Two Numbers" << endl;
    cout << "(5) Exponential Functions" << endl;
    cout << "(6) Trigonometric Functions" << endl;
    cout << "(7) Square Root" << endl;
}

void PrintMenuTrig(){
    cout << "(1) Compute Sine of a Number" << endl;
    cout << "(2) Compute Cosine of a Number" << endl;
    cout << "(3) Compute Tangent of a Number" << endl;
}

void AddTwoNumbers(float a, float b){
    float sum = a + b;
    cout << "The Sum is: " << a << " + " << b << " = " << sum << endl << endl;
}

void SubtractTwoNumbers(float a1, float b1){
    float difference = a1 - b1;
    cout << "The difference is: " << a1 << " - " << b1 << " = " << difference << endl << endl;
}

void MultiplyNumbers(float a2, float b2){
    float product = a2 * b2;
    cout << "The Product is: " << a2 << " * " << b2 << " = " << product << endl << endl;
}

void DivideNumbers(float a3, float b3){
    float quotient = a3 / b3;
    cout << "The Quotient is: " << a3 << " / " << b3 << " = " << quotient << endl << endl;
}

void PowerNumbers(float a4, float b4){
    float powerproduct = pow(a4,b4);
    cout << a4 << " ^ " << b4 << " = " << powerproduct << endl;
}

void SinFunction(float a5){
    float answer = sin(a5);
    cout << "Your answer: " << answer << endl;
}

void CosFunction(float a5){
    float answer = cos(a5);
    cout << "Your answer: " << answer << endl;
}

void TanFunction(float a5){
    float answer = tan(a5);
    cout << "Your answer: " << answer << endl;
}

void SquareRoot(float a5){
    float answer = sqrt(a5);
    cout << "The square root of " << a5 << " = " << answer << endl;
}






