#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string fileName;
    int number;

    //Get the filename from the user
    cout << "Enter the filename: ";
    cin >> fileName;

    //Open the file
    inputFile.open(fileName);

    //if the file successfully opened, process it
    if (inputFile)
    {
        while (inputFile >> number) //read int values from file
        {
            cout << number << endl; //display numbers
        }
        inputFile.close(); // close the file
    }
    else
    {
        //Display an error message.
        cout << "Error opening the file.\n";
    }

    return 0;
}