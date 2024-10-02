#include <iostream>
#include <vector> // Vector is a dynamic array for storing data
using namespace std;

void sorting(vector<int>& numbers) {
    int n = numbers.size(); // Built-in function to count the size of the vector (e.g., 1 = 1 number, 9 = 9 numbers)
    
    for (int i = 0; /* Start or simply initialization */ i < n /* End condition */; i++ /* Number of repetitions */) { // Loop to start sorting numbers
        for (int j = 0; j < n - i - 1 /* Adjust the loop condition for correct termination */; j++) {
            
            if (numbers[j] > numbers[j + 1]) { // Swap numbers if they are in the wrong order
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    cout << "Sorted numbers: "; // Output the result
    for (int i = 0; i < n; i++) { // Print each number
        cout << numbers[i] << " ";
    }
    cout << endl; // End the line
}

int main() {
    int num_count; // Integer to store the number of inputs
    
    cout << "How many numbers do you want to enter? \n";
    cin >> num_count;
    vector<int> numbers; // Open a vector to store the input numbers
    for (int i = 0; i < num_count; i++) { // Repeat the input for each number
        int num;
        cout << "Enter the " << i + 1 << " number: "; // Ask for each number
        cin >> num; // Input the next number and repeat
        numbers.push_back(num); // Push back simply adds the number to the vector
    }
    
    sorting(numbers); // Call the sorting function written earlier, or simply output the result
    
    return 0;
}
