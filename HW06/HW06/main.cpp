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

using namespace std;

void createFile();
void countCharacters();

int main() {
    
    //createFile();
    //countCharacters();
    
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
