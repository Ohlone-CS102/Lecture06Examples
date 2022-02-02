#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
    ifstream inputFile;
    string fileName;
    string fileContents;

// Get the filename from the user
    cout << "Enter the filename: ";
    cin >> fileName;

// Open the file to read
    inputFile.open(fileName);

// if the file successfully opened, process it
    if (!inputFile)
    {
        cout << "Error opening the file.\n";
        exit(2);  // stop program and exit.  The 2 is an error code.
        // The error code can be any number.
    }

    inputFile >> fileContents;
    cout << fileContents;// Reading a file is very similar
    // to reading from cin.

}