/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++; 
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int x; 
    cout << "Enter a number (X): ";
    cin >> x;
    while (x >= 0) {
        cout << x << " ";
        x--;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of times to print the statement: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << "Hello C++ " << i << endl;
        i++;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    cout << "The digits in reverse order are: ";
    while (number > 0) {
        int digit = number % 10;
        cout << digit;
        number /= 10;
    }

    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int total_sum = 0;
    for (int number = 1; number <= 10; ++number) {
        total_sum += number;
        cout << number;
        if (number < 10) {
            cout << " + "; // Add '+' for all except the last number
        }
    }
    cout << " = " << total_sum << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += 2 * i;
    }
    cout << "The sum of the first " << n << " even natural numbers is: " << sum << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number = 2;

    cout << "Even numbers from 1 to 10 are:" << endl;
    while (number <= 10) {
        cout << number << " ";
        number += 2;
    }
    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number = 1;
    cout << "Odd numbers from 1 to 9 are:" << endl;
    while (number <= 9) {
        cout << number << " ";
        number += 2;
    }
    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number = 5;
    cout << "Numbers from 5 to 1 in reverse order are:" << endl;
    while (number >= 1) {
        cout << number << " ";
        number--;
    }
    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number = 1;
    int multiplier = 3;

    cout << "Multiplication table of 3 (up to 30):" << endl;
    while (number <= 10) {
        cout << multiplier << " x " << number << " = " << multiplier * number << endl;
        number++;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number = 1;
    cout << "Powers of 3 up to 81:" << endl;

    while (number <= 81) {
        cout << number << " ";
        number *= 3;
    }
    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number = -3;
    cout << "Negative numbers from -3 to -1 are:" << endl;
    while (number <= -1) {
        cout << number << " ";
        number++;
    }
    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    int original_number = number; 
    cout << "Number is " << number << endl;
    while (number > 0) {
        digit = number % 10;
        int square = digit * digit;
        cout << "Digit is " << digit << " its square is " << square << endl;
        sum += square;
        number /= 10;
    }
    cout << "Square Digit sum for the number is " << sum << endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int number, factorial = 1;
    cout << "Enter a number (less than 5): ";
    cin >> number;
    if (number >= 5) {
        cout << "Please enter a number less than 5." << endl;
        return 0;
    }
    int original_number = number;
    cout << "Factorial for number is [";
    while (number > 0) {
        cout << number;
        if (number > 1) {
            cout << " * ";
        }
        factorial *= number;
        number--;
    }
    cout << "] is " << factorial << endl;
    return 0;
}*/












