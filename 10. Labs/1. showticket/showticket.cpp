#include <iostream>
#include "showticket.h"
using namespace std;

int main () {
    ShowTicket myticket1("AA","101");   // input arguments are C string char arrays, rather than strings
    ShowTicket myticket2("AA","102");
  
    if(!myticket1.is_sold())
        myticket1.sell_seat();
  
    cout << myticket1.print_ticket() << endl;
    cout << myticket2.print_ticket() << endl;
  
    return 0;
}