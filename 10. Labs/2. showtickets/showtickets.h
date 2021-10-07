// A theatre sells seats for shows and needs a system to keep track of the seats they have sold tickets for. Define a class for a type called ShowTickets.
// The class should contain a collection field for the rows, seat numbers, and whether the tickets have been sold or not. Your class only needs to support 10 sold tickets. Assume a ticket you have not referenced before has a sold status of false. Include the following member functions:
// A function to check if the ticket has been sold with this signature: bool is_sold(string row, string seat);
// A function to update the ticket status to sold with this signature: void sell_seat(string row, string seat);
// A function to print the row, seat number, and sold status delimited by a space with this signature: string print_ticket(string row, string seat);
// An example use of your class can be found in showtickets.cpp. The output from this sample would be:
// AA 101 sold
// AA 102 available

// #include <string>
// using namespace std;

// class ShowTickets {
//     public:
//         string tickets[10];
//         string row;
//         string seatNum;
//         bool isSold;
//         ShowTickets() {
//             isSold = false;
//         }
//         bool is_sold(string row, string seat) {
//             string blank;
//             for (int i = 0; i <= 10; i++) {
//                 if (tickets[i] == (blank.append(row).append(" ").append(seat).append(" ").append("sold")))
//                     return true;
//                 else
//                     return false;
//             }
//         }
//         void sell_seat(string row, string seat) {
//             string blank;
//             for (int i = 0; i <= 10; i++) {
//                 if (tickets[i] == (blank.append(row).append(" ").append(seat).append(" ").append("available")))
//                     tickets[i] = (blank.append(row).append(" ").append(seat).append(" ").append("sold"));
//             }
//         }
//         string print_ticket(string row, string seat) {
//             string blank;
//             for (int i = 0; i <= 10; i++) {
//                 if ((tickets[i] == (blank.append(row).append(" ").append(seat).append(" ").append("available"))) || 
//                     (tickets[i] == (blank.append(row).append(" ").append(seat).append(" ").append("sold")))) {
//                         cout << tickets[i] << "\n";
//                     }
//             }
//         }        
// };


// #include <iostream>
// #include <string>
#include <map>

class ShowTickets {
    using TicketsMap = std::map<std::pair<std::string,std::string>,bool>;
    static TicketsMap tickets; // needs to be defined outside the class
public:
    bool is_sold(std::string row, std::string seat_num){return tickets[{row,seat_num}];}
    void sell_seat(std::string row, std::string seat_num){tickets[{row,seat_num}]=true;}
    std::string print_ticket(std::string row, std::string seat_num) {
        return row + " " + seat_num + " " + (tickets[{row,seat_num}]?"sold":"available");
    }
};

ShowTickets::TicketsMap ShowTickets::tickets;

// int main() {
//     ShowTicket myticket;

//     if(!myticket.is_sold("AA","101"))
//         myticket.sell_seat("AA","101");

//     std::cout << myticket.print_ticket("AA","101") << std::endl;
//     std::cout << myticket.print_ticket("AA","102") << std::endl;
//     return 0;
// }