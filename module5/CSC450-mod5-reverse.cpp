/**
 * AUTHOR: Alec McDaugale
 * DATE:   11-10-2014
 * 
 * DESCRIPTION:
 * This program takes a users input and appends it to the end of a file without
 * deleting existing text called CSC450_CT5_mod5.txt file. It will then reverse
 * all of the characters in the CSC450_CT5_mod5.txt file and store the result
 * in a CSC450-mod5-reverse.txt file.
 */
#include <iostream>
#include <fstream>
#define MY_FILE "CSC450_CT5_mod5.txt"
#define REV_FILE "CSC450-mod5-reverse.txt"
#define TXT_LINES 50
using namespace std;

string rev_text(string revText)
{
    int txtLen = revText.length();
    string retString = "";

    for (int i = 1; i < (txtLen - i); i++)
    {
        retString = revText[i];
    }

    return retString;
}

int rev_file()
{
    string fullText[TXT_LINES];
    fstream myFile(MY_FILE, ios::app);

    if (myFile.is_open())
    {
        string tmpStr = "";
        int index = 0;

        // Store contents of file to string array.
        while (getline(myFile, tmpStr)) 
        {
            index++;
            fullText[index] = tmpStr;
        }
        myFile.close();
    }
    else
    {
        cout << "Unable to open " << MY_FILE << endl;
    }

    // Open file to write.
    ofstream revFile(REV_FILE);
    if (revFile.is_open())
    {
        for (int i; i < TXT_LINES; i++)
        {
            revFile << rev_text(fullText[i]);
        }
        revFile.close();
    }
    else
    {
        cout << "Unable to open " << REV_FILE << endl;
    }

    return 0;
}

int main()
{
    string appendMe = "";

    // Clollect usr strings.
    cout << "Enter a string to append to the end of " << MY_FILE << endl;
    getline(cin, appendMe);

    // Open file  in append mode.
    fstream myFile(MY_FILE, ios::app);
    if (myFile.is_open())
    {
        // Append usr string to end of file.
        myFile << endl << appendMe;
        myFile.close();
    }
    else
    {
        cout << "Unable to open " << MY_FILE << endl;
    }

    rev_file();

    return 0;
}