#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string fileName;
    double nextValue = 0;
    double maxValue = 0;
    double minValue = 0;

    ifstream inFile;
    ofstream outfile;


    cout << "Please enter the filename you wish to analyze: ";
    cin >> fileName;

    inFile.open(fileName);

    if (inFile.fail())
    {
        cout << "Error opening the file." << endl;
        exit(2);
    }

    cout << "Now analyzing the file " << fileName << ".\n";

    inFile >> nextValue;
    maxValue = nextValue;
    minValue = nextValue;


    while (inFile >> nextValue)
    {

        if (nextValue > maxValue)
            maxValue = nextValue;

        if (nextValue < minValue)
            minValue = nextValue;
    }

    cout << "Maximum value: " << maxValue;
    cout << endl;
    cout << "Minimum value: " << minValue;
    cout << endl;

    return 0;

}