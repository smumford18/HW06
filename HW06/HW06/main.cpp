//
//  main.cpp
//  HW06
//
//  Created by Steven Mumford on 11/2/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

void createFile();
void countCharacters();

int main() {
    
    createFile();
    countCharacters();
    
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
