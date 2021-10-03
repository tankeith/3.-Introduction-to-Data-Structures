// A theatre sells seats for shows and needs a system to keep track of the seats they have sold tickets for. Define a class for a type called ShowTicket.
// The class should contain fields for the row, seat number, and whether the ticket has been sold or not. Define a constructor which accepts as arguments the row and seat number and sets the sold status to false in the constructor initialization section. Include the following member functions:
// A function to check if the ticket has been sold with this signature: bool is_sold();
// A function to update the ticket status to sold with this signature: void sell_seat();
// A function to print the row, seat number, and sold status delimited by a space with this signature: string print_ticket();
// An example use of your class can be found in showticket.cpp. The output from this sample would be:
// AA 101 sold
// AA 102 available

#include <string.h>                                 // required for strcpy() to work
using namespace std;

class ShowTicket {
    public:
        char row[3];                                // initialize C strings row and seatNum which are char arrays (see showticket.cpp)
        char seat[4];
        bool isSold;
        ShowTicket(const char* x, const char* y) {  // variables passed as pointers
            strcpy(row, x);                         // copies the C string pointed by x into the array pointed by row, including terminating null char
            strcpy(seat, y);                        // to avoid overflows, size of the array pointed by row must be long enough to contain the same C string as x
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
            string status;
            string result;
            if (isSold) 
                status = "sold";
            else
                status = "available";                
            result = result.append(row).append(" ").append(seat).append(" ").append(status);
            return result;
        }
};