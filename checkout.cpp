// Compile with command: clang++ -std=c++17 checkout.cpp -o checkout
#include "book.hpp"
#include <fstream>
#include <iostream>
#include <vector>

/* You are not obligated to use these function declarations - they're just given as examples
void readBooks(vector<Book *> & myBooks) {
    return;
}

int readPersons(vector<Person *> & myCardholders) {
    return 0;
}

void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {
    return;
}

Person * findPerson(vector<Person *> & myCardholders, int id) {
    return nullptr;
}

Book * findBook(vector<Book *> & myBooks, int id) {
    return nullptr;
}
*/

void printMenu() {
    std::cout << "----------Library Book Rental System----------" << std::endl;
    std::cout << "1.  Book checkout" << std::endl;
    std::cout << "2.  Book return" << std::endl;
    std::cout << "3.  View outstanding rentals for a cardholder" << std::endl;
    std::cout << "4.  Open new library card" << std::endl;
    std::cout << "5.  Close library card" << std::endl;
    std::cout << "6.  Update records and exit system" << std::endl;
    std::cout << "Please enter a choice: ";
}

int main()
{
    std::vector<Book *> books; // this is a vector of pointers that point to Book objects
    std::vector<Person *> cardholders; // this is a vector of pointers that point to Person objects

    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        std::cin >> choice;
        switch(choice)
        {
            case 1:
                // Book checkout
                break;

            case 2:
                // Book return
                break;

            case 3:
                // View outstanding rentals for a cardholder
                break;

            case 4:
                // Open new library card
                break;

            case 5:
                // Close library card
                break;

            case 6:
                // Must update records in files here before exiting the program
                // Return memory to heap
                break;

            default:
                std::cout << "Invalid entry" << std::endl;
                break;
        }
        std::cout << std::endl;
   } while(choice != 6);
      return 0;
}
