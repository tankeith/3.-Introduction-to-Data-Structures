// You have been so successful in your previous object oriented programming you decide to develop a computer software system to compete with Ticketmaster
// You then add a new class called TicketSales. This new class can print either a ShowTicket or a SportsTicket. You should include the header file sportticket.h in your header
// Include the following new member functions
// A function to print either a ShowTicket or a SportTicket with this signature:string print_ticket(ShowTicket *myticket);
// An example use of your class can be found in ticketsales.cpp.
// The output from this sample would be:
// AA 101 sold 
// AA 102 sold beer

#include <string>
#include "sportticket.h"
using namespace std;

// base class showticket.h
// class ShowTicket {
//     protected:                              // protected attributes can be accessed in inherited class
//         string row;
//         string seat;
//     public:
//         bool isSold;
//         string status;
//         string result;
//         ShowTicket(string x, string y) {
//             row = x;
//             seat = y;
//             isSold = false;
//         }
//         bool is_sold() {
//             if (isSold)
//                 return true;    
//             else
//                 return false;
//         }
//         void sell_seat() {
//             isSold = true;
//         }
//         string print_ticket() {
//             if (isSold) 
//                 status = "sold";
//             else
//                 status = "available";                
//             result = result.append(row).append(" ").append(seat).append(" ").append(status);    // one way of concatenating strings
//             return result;
//         }
// };

// // another base class sportticket.h
// class SportTicket: public ShowTicket {
//     public:
//         bool beerSold;
//         SportTicket(string x, string y) : ShowTicket(x, y) {      // call the base class's constructor and initialize its data members after : and before {}
//             beerSold = false;
//         }
//         bool beer_sold() {
//             if (beerSold)
//                 return true;
//             else
//                 return false;
//         }
//         void sell_beer() {
//             beerSold = true;
//         }
//         string print_ticket() {
//             string status;
//             string beerStatus;
//             string output;
//             if (is_sold() == true)                              // is_sold() inherited from ShowTicket class
//                 status = "sold";
//             else
//                 status = "available";                  
//             if (beerSold) 
//                 beerStatus = "beer";
//             else
//                 beerStatus = "nobeer";                
//             output = row + " " + seat + " " + status + " " + beerStatus;
//             return output;
//         }
// };

class TicketSales {
    public:
        TicketSales(){}
        string print_ticket(ShowTicket *myticket) {
            return myticket->print_ticket();
        }

        string print_ticket(SportTicket *myticket) {
            return myticket->print_ticket();
        }
};