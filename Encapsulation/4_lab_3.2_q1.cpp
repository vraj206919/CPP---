#include<iostream>
using namespace std;
class Hotel
{
    private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;
    static int TotalHotel;
    public:
    void gethotel()
    {
        cout << "Hotel Id :\n" << hotel_id << endl;
        cout << "Hotel Name :\n" << hotel_name << endl;
        cout << "Hotel Type :\n" << hotel_type << endl;
        cout << "Hotel Rating :\n" << hotel_rating << endl;
        cout << "Hotel Location :\n" << hotel_location << endl;
        cout << "Hotel Establish Year :\n" << hotel_establish_year << endl;
        cout << "Hotel Staff Quantity :\n" << hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity :\n" << hotel_room_quantity << endl;

        TotalHotel++;
    }
    void sethotel()
    {
        cout << "Enter Hotel Id :\n";
        cin >> hotel_id;
        cin.ignore(); 
        
        cout << "Enter Hotel Name :\n";
        cin >> hotel_name;
        getline(cin, hotel_name);

        cout << "Enter Hotel Type :\n";
        cin >> hotel_type;
        getline(cin, hotel_type);

        cout << "Enter Hotel Rating :\n";
        cin >> hotel_rating;
        getline(cin, hotel_rating);

        cout << "Enter Hotel Location :\n";
        cin >> hotel_location;
        getline(cin, hotel_location);

        cout << "Enter Hotel Establish Year :\n";
        cin >> hotel_establish_year;
        cin.ignore();

        cout << "Enter Hotel Staff Quantity :\n";
        cin >> hotel_staff_quantity;
        cin.ignore();

        cout << "Enter Hotel Room Quantity :\n";
        cin >> hotel_room_quantity;
        cin.ignore();

    }

    static void displayTotalHotel() {
        cout << "Total number of hotels: " << TotalHotel << endl;
    }
};

 int Hotel::TotalHotel = 0;
int main()
{
   int n;
    cout << "Enter the number of hotels: ";
    cin >> n;

    Hotel h[n];
    for(int i = 0; i < n; i++){

        cout << "Enter details of Hotel " << i + 1 << ":\n";
        h[i].sethotel();

    }

    for(int i = 0; i < n; i++){

        cout << "Details of Hotel " << i + 1 << ":\n";
        h[i].gethotel();

    }
    Hotel::displayTotalHotel();
    return 0;
}