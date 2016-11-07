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
    
    //createFile();
    //countCharacters();
    //babyNames();
    //testCircleOperators();
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
    string year;
    string gender;
    string name;
    string fileName = "Babynamranking.txt";
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the gender: ";
    cin >> gender;
    cout << "Enter the name: ";
    cin >> name;
    
    fileName.insert(fileName.size()-4, year);
    cout << fileName << endl;
}

void testCircleOperators()
{
    Circle c1(5);
    Circle c2(10);
    
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
    int A, B;
    int C, D;
    cout << "Enter the first complex number: ";
    cin >> A >> B;
    cout << "Enter the second complex number: ";
    cin >> C >> D;
    Complex c1(A, B);
    Complex c2(C, D);
    Complex c3 = c1.add(c1, c2);
    //c3.toString(c3);
    
}
