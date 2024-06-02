// #include <iostream>

// int main() {
//     int number;
    
//     // Prompt the user for input
//     std::cout << "Enter a number: ";
//     std::cin >> number;

//     if (number >= 1 && number <= 9) {
//         // Check if the number is between 1 and 9
//         char alphabet = 'A' + number - 1;
//         std::cout << "Alphabet: " << alphabet << std::endl;
//     } else {
//         std::cout << "Greater than nine" << std::endl;
//     }

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 1 && number <= 9) {
        // Define an array of string representations of numbers
        string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        // Print the corresponding number in words
       cout << numbers[number - 1] << endl;
    } else {
        cout << "Greater than nine" << endl;
    }

    return 0;
}



