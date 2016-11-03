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
    cout << fileName;
    
    
    return 0;
}

void createFile()
{
    fstream file("Exercise13_1.txt", ios::in | ios::app);
    srand((unsigned int)time(NULL));
    file << endl;
    for(int i=0; i<100; i++)
    {
        int randInt = rand() % 10;
        file << randInt << " ";
    }
}

void countCharacters()
{
    string fileName;
    cout << "Enter a file name: ";
    getline(cin, fileName);
    //cout << fileName << endl;
    fstream iofile(fileName, ios::in | ios::out);
    int count =0;
    if(!iofile)
    {
        cout << "ERROR: Could not open file" << endl;
    }
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
    iofile.close();
}
