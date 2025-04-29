## Features
- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division
- 📊 Percentage calculation (X% of Y)
- 🛑 Error handling for division by zero
- 🔄 Input validation for invalid operators
- 💻 Cross-platform compatibility
- 🧮 Decimal number support (double precision)

- ## Usage

- ./calculator

- Enter first number: 20
Enter operator (+,-,*,/,%): %
Enter second number: 50
Result: 10  # (20% of 50)

## 🧪 Testing

The calculator has been verified with these test cases:

| Test Case | Input 1 | Operator | Input 2 | Expected Output       |
|-----------|---------|----------|---------|-----------------------|
| 1         | 5       | +        | 3       | 8                     |
| 2         | 10.5    | *        | 2       | 21                    |
| 3         | 15      | /        | 0       | Error: Division by zero! |
| 4         | 7       | -        | 12      | -5                    |
| 5         | 20      | %        | 50      | 10 (20% of 50)        |
| 6         | 8       | /        | 2       | 4                     |
| 7         | 100     | %        | 30      | 30 (100% of 30)       |
| 8         | 5       | $        | 2       | Invalid operator!     |

## How to Verify
1. Compile and run the program:
```bash
g++ calculator.cpp -o calculator && ./calculator
