/**
 * author: Alec McDaugale
 * 
 * This program takes two strings from a user 3 times and prints it back to the user.
 */

// Max inputs.
#define INPUT_COUNT  3

#include <iostream>
#include <cstring>

using namespace std;

/**
 * This class holds two strings and provides a function to concatinate and print the two strings.
 */
class two_strings 
{
    private:
        string string1; // Variable to hold first string.
        string string2; // Variable to hold first string.

    public:
        /**
         * Default constructor.
         */
        two_strings(){}

        /**
         * Set the first string.
         */
        void set_string1(string string)
        {
            this->string1 = string;
        }

        /**
         * Set the second string.
         */
        void set_string2(string string)
        {
            this->string2 = string;
        }

        /**
         * Converts the strings to charecter arrays, then concatinate and print
         * the two strings togeather. 
         */
        void print_strings()
        {
            char strArray1[string1.length() + string2.length() + 1];
            char strArray2[string2.length() + 1];

            for(int i = 0; i < sizeof(string1.length()); i++)
            {
                strArray1[i] = string1[i];
            }

            for(int i = 0; i < sizeof(string2.length()); i++)
            {
                strArray2[i] = string2[i];
            }

            strcat(strArray1, strArray2);

            cout << "Concat str: " << strArray1 << endl;
        }

};

/**
 * Main function.
 */
int main() {
    two_strings stringArray[INPUT_COUNT];  // Array to hold custom type.
    string tmp;                            // String to hold input.

    // Loop to prompt user for two strings and print to terminal 3 times.
    for(int x = 0; x < INPUT_COUNT; x++)
    {
        cout << "Please enter two strings to concatinate." << endl;
        cout << "String1:" << endl;
        cin >> tmp;
        stringArray[x].set_string1(tmp);
        cout << "String2:" << endl;
        cin >> tmp;
        stringArray[x].set_string2(tmp);
        stringArray[x].print_strings();
        cout << endl;
    }

    return 0;
}
