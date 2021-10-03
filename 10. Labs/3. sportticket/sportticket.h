// A football club needs a system to keep track of the seats they have sold tickets for. 
// Define a class for a type called SportTicket that inherits from the ShowTicket class you defined earlier. 
// You should include the showticket.h file in your code but not upload the file.

// The class should add a new boolean field to store if beer has been purchased at that seat. 

// Define a constructor which accepts as arguments the row and seat number 
// and sets the sold status and beer sold fields to false in the constructor initialization section.

// The showticket class has the following protected members: string row; string seat;

// Include the following new member functions:
// A function to check if the ticket has been sold with this signature:bool beer_sold();
// A function to update the beer sold status to sold with this signature: void sell_beer();
// override the print_ticket method to add if beer has been sold or not.
// An example use of your class can be found in sportticket.cpp.
// The output from this sample would be:
// AA 101 sold nobeer
// AA 102 sold beer

#include <string>
using namespace std;

// base class showticket.h
class ShowTicket {
    protected:                              // protected attributes can be accessed in inherited class
        string row;
        string seat;
    public:
        bool isSold;
        string status;
        string result;
        ShowTicket(string x, string y) {
            row = x;
            seat = y;
            isSold = false;
        }
        bool is_sold() {
            if (isSold)
                return true;    
            else
                return false;
        }
        void sell_seat() {
            isSold = true;
        }
        string print_ticket() {
            if (isSold) 
                status = "sold";
            else
                status = "available";                
            result = result.append(row).append(" ").append(seat).append(" ").append(status);    // one way of concatenating strings
            return result;
        }
};

class SportTicket: public ShowTicket {
    public:
        bool beerSold;
        SportTicket(string x, string y) : ShowTicket(x, y) {      // call the base class's constructor and initialize its data members after : and before {}
            beerSold = false;
        }
        bool beer_sold() {
            if (beerSold)
                return true;
            else
                return false;
        }
        void sell_beer() {
            beerSold = true;
        }
        string print_ticket() {
            string status;
            string beerStatus;
            string output;
            if (is_sold() == true)                              // is_sold() inherited from ShowTicket class
                status = "sold";
            else
                status = "available";                  
            if (beerSold) 
                beerStatus = "beer";
            else
                beerStatus = "nobeer";                
            output = row + " " + seat + " " + status + " " + beerStatus;
            return output;
        }
};