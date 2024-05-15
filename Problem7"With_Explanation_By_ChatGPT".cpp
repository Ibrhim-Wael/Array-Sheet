#include <iostream>
using namespace std;

int main() {
    int N, counter = 0;

    // Prompt the user to enter the number of digits
    cout << "Enter The Number of digits" << endl;
    cin >> N;

    // Create arrays to hold the numbers and their reverse
    int numbers[N];
    int numbersreverse[N];

    // Prompt the user to enter the elements
    cout << "Enter The Elements" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    // Reverse the numbers array
    for (int i = 0; i < N; i++) {
        numbersreverse[i] = numbers[N - 1 - i];
    }

    // Compare the original and reversed arrays
    for (int i = 0; i < N; i++) {
        if (numbers[i] == numbersreverse[i]) {
            counter++;
        }
    }

    // Check if all elements match (indicating a palindrome)
    if (counter == N) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
