//
//  main.cpp
//  HW06
//
//  Created by Steven Mumford on 11/2/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Circle.hpp"
#include "Complex.hpp"

using namespace std;

void createFile();
void countCharacters();
void babyNames();
void testCircleOperators();
void testComplex();

int main() {
    
    createFile();
    countCharacters();
    babyNames();
    testCircleOperators();
    testComplex();
    
    return 0;
}

void createFile()
{
    // Creates or opens a file for input and appending
    fstream file("Exercise13_1.txt", ios::in | ios::app);
    srand((unsigned int)time(NULL));
    
    // Writes 100 random integers in the file
    for(int i=0; i<100; i++)
    {
        int randInt = rand() % 10;
        file << randInt << " ";
    }
    file.close();
}

void countCharacters()
{
    string fileName;
    
    // Prompts user for a file name
    cout << "Enter a file name: ";
    getline(cin, fileName);
    
    // Opens file for input and output
    fstream iofile(fileName, ios::in | ios::out);
    int count =0;
    
    // Checks to make sure file opened
    if(!iofile)
    {
        cout << "ERROR: Could not open file" << endl;
    }
    // Counts the characters in the file
    else
    {
        // Reads in and counts the characters in the files
        char character;
        while( iofile >> character)
        {
            count++;
        }
        iofile.clear();
        cout << "The file has " << count << " characters" << endl;
    }
    // Closes the opened file
    iofile.close();
}

void babyNames()
{
    // User input that allows them to find a name in a specific year
    string year;
    string gender;
    string name;
    string fileName = "Babynameranking.txt";
    cout << "Enter the year (2010-2014): ";
    cin >> year;
    cout << "Enter the gender (M/F): ";
    cin >> gender;
    cout << "Enter the name: ";
    cin >> name;
    
    // Creates a string that matches the name of the file
    fileName.insert(fileName.size()-4, year);
    
    // Opens the file
    ifstream fileIO(fileName);
    // Checks to see if file opens
    if(!fileIO)
    {
        cout << "ERROR: Could not open file" << endl;
    }
    
    // Reads in the data of the file
    else
    {
        string searchName;
        string count = "";
        while(!fileIO.eof())
        {
            int rank;
            string bname;
            string bnum;
            string gname;
            string gnum;
            fileIO >> rank >> bname >> bnum >> gname >> gnum;
            if(gender == "M")
            {
                if(name == bname)
                {
                    cout << bname << " is ranked #" << rank << " in year " << year << endl;
                }
            }
            if(gender == "F")
            {
                if(name == gname)
                {
                    cout << gname << " is ranked #" << rank << " in year " << year << endl;
                }
            }
        }
    }
    // Closes the file when done
    fileIO.close();
}

void testCircleOperators()
{
    // Creates two circles
    Circle c1(5);
    Circle c2(10);
    
    // Tests the overloaded operators for the circle
    if(c1 < c2)
        cout << "The first circle is smaller than the second" << endl;
    if(c1 <= c2)
        cout << "The fist circle is smaller than or equal to the second" << endl;
    if(c1 == c2)
        cout << "The first circle is equal to the second" << endl;
    if(c1 != c2)
        cout << "The first circle is not equal to the second" << endl;
    if(c1 > c2)
        cout << "The first circle is greater than the second" << endl;
    if(c1 >= c2)
        cout << "The first circle is greater than or equal to the second" << endl;
}

void testComplex()
{
    // User input for a complex number
    double A, B;
    double C, D;
    cout << "Enter the first complex number: ";
    cin >> A >> B;
    cout << "Enter the second complex number: ";
    cin >> C >> D;
    
    // Creates the complex numbers
    Complex c1(A, B);
    Complex c2(C, D);
    
    // Performs overloaded operations on the numbers
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    Complex c6 = c1 / c2;
    
    // Displays results of the operations
    cout << c1.toString() << " + " << c2.toString() << " = " << c3 << endl;
    cout << c1.toString() << " - " << c2.toString() << " = " << c4 << endl;
    cout << c1.toString() << " * " << c2.toString() << " = " << c5 << endl;
    cout << c1.toString() << " / " << c2.toString() << " = " << c6 << endl;
    cout << "|" << c1 << "|" << " = " << c1.abs() << endl;
}
