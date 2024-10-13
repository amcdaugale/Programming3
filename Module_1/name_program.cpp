/* Simple Program with a few Errors for Correction
   Please be sure to correct all outlined errors.
*/

#include <iostream>

// Standard namespace declaration.
using namespace std;

class Person {
    private:
        string first_name;
        string last_name;
        string street_address;
        string city;
        string zip_code;
    public:
        /**
         * Constructor for the person object. 
         */
        Person(string first_name, string last_name, string street_address, string city, string zip_code) {
            this->first_name = first_name;
            this->last_name = last_name;
            this->street_address = street_address;
            this->city = city;
            this->zip_code = zip_code;
        }

        /**
         * Get the first name of this person.
         */
        string getFirstName() {
            return this->first_name;
        }

        /**
         * Get the last name of this person.
         */
        string getLastName() {
            return this->last_name;
        }

        /**
         * Get the street address of this person we are defining.
         */
        string getStreatAddress() {
            return this->street_address;
        }

        /**
         * Get the city that this person resides in.
         */
        string getCity() {
            return this->city;
        }

        /**
         * Get the zip code that this person resides in.
         */
        string getZipCode() {
            return this->zip_code;
        }

        /**
         * Get the string representation of this Object.
         */
        string to_string() {
            string returnString = "FirstName: " + getFirstName() + "\nLastName: " + getLastName() 
                                + "\nAddress: " + getStreatAddress()+ "\nCity: " + getCity() 
                                + "\nZipCode: " + getZipCode();

                                return returnString;
        }
};


int main() {
    Person person1("Dave", "Smith", "123 Fake St.", "Dever", "80123");

    cout << person1.to_string() << endl;
    return 0;
}
