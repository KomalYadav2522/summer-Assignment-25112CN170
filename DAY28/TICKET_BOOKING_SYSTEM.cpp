#include <iostream>
#include <string>
using namespace std;
// Ticket class
class Ticket
{
public:
    int ticketNo;
    string passengerName;
    string source;
    string destination;
    int seatNo;
    bool booked;
};
int main()
{
    Ticket ticket[100];

    int totalTickets = 0;
    int choice;

    while(true)
    {
        cout << "\n========== TICKET BOOKING SYSTEM ==========";

        cout << "\n1. Book Ticket";
        cout << "\n2. Display Tickets";
        cout << "\n3. Search Ticket";
        cout << "\n4. Cancel Ticket";
        cout << "\n5. Check Seat Status";
        cout << "\n6. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;
        switch(choice)
        {
        // Book Ticket
        case 1:
        {
            cout << "\nEnter Ticket Number : ";
            cin >> ticket[totalTickets].ticketNo;

            cin.ignore();

            cout << "Enter Passenger Name : ";
            getline(cin, ticket[totalTickets].passengerName);

            cout << "Enter Source : ";
            getline(cin, ticket[totalTickets].source);

            cout << "Enter Destination : ";
            getline(cin, ticket[totalTickets].destination);

            cout << "Enter Seat Number : ";
            cin >> ticket[totalTickets].seatNo;

            ticket[totalTickets].booked = true;

            totalTickets++;

            cout << "\nTicket Booked Successfully.";

            break;
        }
        // Display Tickets
        case 2:
        {
            if(totalTickets == 0)
            {
                cout << "\nNo Tickets Booked.";
            }
            else
            {
                for(int i = 0; i < totalTickets; i++)
                {
                    cout << "\n---------------------------";
                    cout << "\nTicket Number : " << ticket[i].ticketNo;
                    cout << "\nPassenger : " << ticket[i].passengerName;
                    cout << "\nSource : " << ticket[i].source;
                    cout << "\nDestination : " << ticket[i].destination;
                    cout << "\nSeat : " << ticket[i].seatNo;

                    if(ticket[i].booked)
                        cout << "\nStatus : Booked";
                    else
                        cout << "\nStatus : Cancelled";

                    cout << "\n---------------------------";
                }
            }

            break;
        }
        // Search Ticket
        case 3:
        {
            int number;
            bool found = false;

            cout << "\nEnter Ticket Number : ";
            cin >> number;

            for(int i = 0; i < totalTickets; i++)
            {
                if(ticket[i].ticketNo == number)
                {
                    cout << "\nPassenger : " << ticket[i].passengerName;
                    cout << "\nSeat : " << ticket[i].seatNo;
                    cout << "\nSource : " << ticket[i].source;
                    cout << "\nDestination : " << ticket[i].destination;

                    found = true;
                    break;
                }
            }
            if(!found)
                cout << "\nTicket Not Found.";

            break;
        }
        // Cancel Ticket
        case 4:
        {
            int number;
            bool found = false;

            cout << "\nEnter Ticket Number : ";
            cin >> number;

            for(int i = 0; i < totalTickets; i++)
            {
                if(ticket[i].ticketNo == number)
                {
                    ticket[i].booked = false;

                    cout << "\nTicket Cancelled Successfully.";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "\nTicket Not Found.";

            break;
        }
        // Check Seat Status
        case 5:
        {
            int seat;
            bool found = false;

            cout << "\nEnter Seat Number : ";
            cin >> seat;

            for(int i = 0; i < totalTickets; i++)
            {
                if(ticket[i].seatNo == seat)
                {
                    if(ticket[i].booked)
                        cout << "\nSeat is Booked.";
                    else
                        cout << "\nSeat is Available.";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "\nSeat is Available.";

            break;
        }
        // Exit
        case 6:
        {
            cout << "\nThank You!";
            return 0;
        }

        default:
            cout << "\nInvalid Choice.";
        }
    }
    return 0;
}