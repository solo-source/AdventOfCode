#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    /*
     *create a ifstream object to read the file.
     *open the .csv file using the ifstream object
     */
    ifstream file,fopen;
    file.open("CalibrationValues.txt", ios::in);

    int a, b, lineCount = 0;
    string fileLine;

    /*
     *use getline('file', 'variable to capture the value of line in file')
     *capture the line in file using getline(...)
     *read each line using getline(...)
     *keep count of the no of lines in the file
     *use the lineCount to create a dynamic array.
     */
    while (getline(file, fileLine))
    {
        lineCount++;
    }
    file.close();
    int arr[lineCount];

    /*
     *Now we run a loop to split string line and
     *separate the first and last integer from the string
     *steps: 1. Calculate the length of the string
     *2.Scan every character(ch) of a string one by one
     *   if (ch is a digit) then append it in num;
     *   else (ch is alphabet) move to the next character in string
     */

    fopen.open("CalibrationValues.txt", ios::in);

    if (fopen.is_open())
    {
        int counter = 0;
        string line, numString, a, b, alphaString;
        while (getline(fopen, line))
        {
            alphaString = "";
            numString = "";
            a = "";
            b = "";

            for (int i = 0; i < line.length(); i++)
            {
                if (isdigit(line[i]))
                    numString.push_back(line[i]);
                else
                    alphaString.push_back(line[i]);

                while (alphaString != "")
                {
                    
                }
                
            }
            a = numString[0];
            b = numString.back();
            a.append(b);
            if (counter < lineCount)
            {
                arr[counter] = stoi(a);
                counter++;
            }
        }
    }

    /*
    *Find the sum of the all element in the array
    */
    int sum = 0;
    for (int j = 0; j < lineCount; j++)
    {
        sum = sum + arr[j];
    }
    cout << sum;
    fopen.close();
    return 0;
}
