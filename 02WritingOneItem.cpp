#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
    ofstream outputFile;
    string fileName;

// Get the filename from the user
    cout << "Enter the filename: ";
    cin >> fileName;

// Open the file to write to
    outputFile.open(fileName);

// if the file successfully opened, process it
    if (!outputFile)
    {
        cout << "Error opening the file.\n";
        exit(2);  // stop program and exit.  The 2 is an error code.
        // The error code can be any number.
    }

    cout << "Hello World" << endl;
    outputFile << "Hello World" << endl;// Writing to a file is very similar
    // to writing to the screen.
    return 0;
}