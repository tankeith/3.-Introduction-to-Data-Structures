#include <iostream>
#include "showtickets.h"
using namespace std;

int main () {
    ShowTickets myticket;

    if(!myticket.is_sold("AA","101"))
        myticket.sell_seat("AA","101");
  
    cout << myticket.print_ticket("AA","101") << endl;
    cout << myticket.print_ticket("AA","102") << endl;
  
    return 0;
}