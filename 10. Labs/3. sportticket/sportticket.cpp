#include <iostream>
#include "sportticket.h"
using namespace std;

int main () {
    SportTicket myticket1("AA","101");
    SportTicket myticket2("AA","102");

    myticket1.sell_seat();
    myticket2.sell_seat();
    myticket2.sell_beer();

    cout << myticket1.print_ticket() << endl;
    cout << myticket2.print_ticket() << endl;
    
    return 0;
}