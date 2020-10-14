#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>

using namespace std;

string ID[10],Password[10];
int index=-1;

float sum_price;

struct flight_book
{
    string firstN;
    string lastN;
    string citizenship;
    string passportN;
    string dob;
    string email;
    string phoneN;
    string from;
    string to;
    string dpTime;
    int  day, month, year;
    float ticketPrice;
    int numTicket;
    string Tclass;
    int baggage;
    float total_price;
    bool isPerson;
};

flight_book user[10];
int user_index;

bool islog, isReg, isConfirm;

class login
{
    string id, pass;
    int flag1 = 0 ;
    int flag2 = 0 ;

    public:
        void user_id()
        {
            cin.get();
            cout << "\n\n\tEnter your id : ";
            getline(cin , id);
            for(int i = 0; i<=index ; i++)
            {
                if(ID[i] == id)
                {
                    flag1 = 1;
                    break;
                }
            }
            if(flag1 != 1)
            {
                cout << "\n\n\tWrong ID" << endl;
                islog = 0;
            }
        }
        void log_password()
        {
            if(flag1 == 1)
            {
                cout << "\n\n\tEnter your password : ";
                getline(cin, pass);
                for(int i = 0; i<=index ; i++)
                {
                    if(Password[i] == pass)
                    {
                        flag2 = 1;
                        cout << "\n\n\tYou are successfully logged in....\n";
                        user_index = i;
                        islog = 1;
                        break;
                    }
                }
                if(flag2 != 1)
                {
                    cout << "\n\tWrong password" << endl;
                    cout << "\n\n\tTry again.....!\n\n";
                    islog = 0;
                }
            }
        }
};

class Register
{
    string name, pass, re_pass;
    public:
        void userName()
        {
            islog = 0;

            cout << "\n\n\tEnter your user name : ";
            cin.get();
            getline(cin,name);

            ID[index] = name;
        }
        void passWord()
        {
            cout << "\n\n\tEnter your password : ";
            getline(cin, pass);
        }
        void retypePassword()
        {

            do{
                cout << "\n\n\tre-type your password : ";
                getline(cin,re_pass);
            }while(pass != re_pass);
            Password[index] = pass;
        }

};

class homePage
{
public :
    void show()
    {

        cout << "\n\n\t1.View homepage/list of menu.\n\n\t2.Register as a member.\n\n\t3.Login";
        cout << "\n\n\t4.Available Flights";
        cout << "\n\n\t5.Tickets Booking";
        cout << "\n\n\t6.Ticket Confirmation";
        cout << "\n\n\t7.list of customers";
        cout <<"\n\n\n\tChoose your option :\t";
    }

};

class flight
{
public:
    void local_flight()
    {
        cout<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|                                           LOCAL FLIGHTS                                          |"<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|       From       |        To        |  Departure Time-Date  |  Arrival Time-Date   |  Price(RM)  |"<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|  Alor setar      |  Kuala Lumpur    |  8:55 PM - 25/11/17   |  10:05PM - 25/11/17  |   94.00     |"<<endl;
        cout<<"|  Kota kinabalu   |  Kuala Lumpur    |  11:45PM - 25/11/17   |  1:55 AM - 25/11/17  |  272.00     |"<<endl;
        cout<<"|  Bintulu         |  Kuala Lumpur    |  6:35 PM - 25/11/17   |  8:55 PM - 25/11/17  |  108.00     |"<<endl;
        cout<<"|  Johor Bharu     |  Penang          |  12:50PM - 25/11/17   |  2:30 AM - 25/11/17  |  198.00     |"<<endl;
        cout<<"|  Kota Bahru      |  Kota Kinabalu   |  12:45PM - 25/11/17   |  1:55 PM - 25/11/17  |  587.00     |"<<endl;
        cout<<"|  Kuching         |  Langkawi        |  4:50 PM - 25/11/17   |  6:55 PM - 25/11/17  |  322.00     |"<<endl;
        cout<<"|  Langkawi        |  Johor Bharu     |  10:50PM - 25/11/17   |  11:55PM - 25/11/17  |  414.00     |"<<endl;
        cout<<"|  Miri            |  Sandakan        |  6:00 PM - 25/11/17   |  8:45 PM - 25/11/17  |  536.00     |"<<endl;
        cout<<"|  Penang          |  Johor           |  6:45 PM - 25/11/17   |  8:55 PM - 25/11/17  |  178.00     |"<<endl;
        cout<<"|  Sandakan        |  Kuala Lumpur    |  4:55 PM - 25/11/17   |  6:50 PM - 25/11/17  |  368.00     |"<<endl;
        cout<<"|  Tawau           |  Langkawi        |  11:05PM - 25/11/17   |  2:10 AM - 25/11/17  |  400.00     |"<<endl;
        cout<<"|  Sibu            |  Langkawi        |  8:00 PM - 25/11/17   |  10:00PM - 25/11/17  |  374.00     |"<<endl;
        cout<<"|  Mukah           |  Kuala Lumpur    |  9:00 PM - 25/11/17   |  11:30PM - 25/11/18  |  255.00     |"<<endl;
        cout<<"|  Malacca         |  Langkawi        |  8:50 pm - 25/11/17   |  9:30 PM - 25/11/18  |  425.00     |"<<endl;
        cout<<"|  Limbang         |  Johor Bharu     |  7:20 pm - 25/11/17   |  9:55 PM - 25/11/18  |  380.00     |"<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\n\n\n\n\n"<<endl;
    }

    void international_flight()
    {
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|                                        INTERNATIONAL FLIGHTS                                     |"<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|       From       |        To        |  Departure Time-Date  |  Arrival Time-Date    |  Price(RM) |"<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|  Kuala Lumpur    |  Dhaka           |  7:50 PM - 25/11/17   |  9:55 PM - 25/11/17   |   695.00    "<<endl;
        cout<<"|  Dhaka           |  Brunei          |  9:25 PM - 25/11/17   |  8:O5 AM - 26/11/17   |  1231.00   |"<<endl;
        cout<<"|  Kuala Lumpur    |  Bali            |  7:50 AM - 25/11/17   |  3:00 PM - 26/11/17   |   863.00   |"<<endl;
        cout<<"|  Kuala Lumpur    |  Saskatchewan    |  9:00 AM - 25/11/17   |  12:40AM - 25/11/17   |  5192.00   |"<<endl;
        cout<<"|  Los Angeles     |  Toronto         |  7:40 AM - 25/11/17   |  3:14 PM - 25/11/17   |  1193.00   |"<<endl;
        cout<<"|  Mumbai          |  Kuala Lumpur    |  11:45AM - 25/11/17   |  6:55 AM - 25/11/17   |  1217.00   |"<<endl;
        cout<<"|  Dhaka           |  Langkawi        |  9:25 PM - 25/11/17   |  10:00AM - 25/11/17   |  1231.00   |"<<endl;
        cout<<"|  Kuala Lumpur    |  Thailand        |  5:50 PM - 25/11/17   |  2:50 AM - 25/11/17   |   278.00   |"<<endl;
        cout<<"|  Thailand        |  Indonesia       |  5:55 AM - 25/11/17   |  11:15AM - 25/11/17   |   795.00   |"<<endl;
        cout<<"|  Nepal           |  India           |  10:25AM - 25/11/17   |  4:30 PM - 25/11/17   |  1159.00   |"<<endl;
        cout<<"|  USA             |  UK              |  6.35 PM - 25/11/17   |  12:50PM - 25/11/17   |  1800.00   |"<<endl;
        cout<<"|  Kuala Lumpur    |  Dhaka           |  7:50 PM - 25/11/17   |  9:55 PM - 25/11/17   |   695.00   |"<<endl;
        cout<<"|  Kuala Lumpur    |  Austin          |  10:50PM - 25/11/17   |  1:33 PM - 25/11/17   |  4055.00   |"<<endl;
        cout<<"|  Brunei          |  Dhaka           |  8:05 PM - 25/11/17   |  9:25 PM - 25/11/17   |  1213.00   |"<<endl;
        cout<<"|  Kuala Lumpur    |  Mumbai          |  6:50 AM - 25/11/17   |  11:45AM - 25/11/17   |  1485.00   |"<<endl;
        cout<<" --------------------------------------------------------------------------------------------------"<<endl;

        cout<<endl;
        cout<< "\nPress any key to go back in main menu\n";
        string a;
        cin >> a;
    }
};

class book
{
public :
    void booking()
    {
        cout <<"\n\n\n\tEnter your First Name : ";
        cin.get();
        getline(cin, user[user_index].firstN);

        cout << "\n\tEnter your Last Name : ";
        getline(cin, user[user_index].lastN);

        cout << "\n\tEnter your Nationality : ";
        getline(cin , user[user_index].citizenship);

        cout << "\n\tEnter your Passport No. : ";
        getline(cin, user[user_index].passportN);

        cout << "\n\tYour Date of Birth : ";
        getline(cin , user[user_index].dob);

        cout << "\n\tEnter your E-mail address : ";
        getline(cin , user[user_index].email);

        cout << "\n\tEnter your phone number : ";
        getline(cin , user[user_index].phoneN);

        cout << "\n\tEnter your Location (From) : ";
        getline(cin,user[user_index].from);

        cout << "\n\tYour destination (To) : ";
        getline(cin,user[user_index].to);

        cout << "\n\tEnter Departure time (24 hours) : ";
        getline(cin,user[user_index].dpTime);

        cout << "\n\tDeparture date (DD \ MM \ YYYY): ";
        cin >> user[user_index].day >> user[user_index].month >> user[user_index].year;

        cout << "\n\tTicket price : ";
        cin >> user[user_index].ticketPrice;

        cout << "\n\tNumber of ticket : ";
        cin >> user[user_index].numTicket;

        cout << "\n\tClass Business (B)/ Economy (E) : ";
        cin >> user[user_index].Tclass;

        cout << "\n\tFree baggage 30 kg ( add more baggage (15 RM / KG) ) : ";
        cin >> user[user_index].baggage;

        sum_price = user[user_index].ticketPrice * (float)user[user_index].numTicket + (float)(user[user_index].baggage*15);

        if(user[user_index].Tclass == "b" || user[user_index].Tclass == "B")
        {
            sum_price *= 1.2;
        }

        user[user_index].total_price  = sum_price + (sum_price * 0.06) ;

        isReg = 1;
    }
    void information()
    {
        cout <<"\n\n\n========================================================================================================"<< endl;
        cout <<"\n\n\t\tYour Information";

        cout << "\n\n\tYour Name \t: " << user[user_index].firstN << " " << user[user_index].lastN << endl;
        cout << "\n\tCitizenship \t: " << user[user_index].citizenship << endl;
        cout << "\n\tPassport No. \t: " << user[user_index].passportN << endl;
        cout << "\n\tDate of Birth \t: " << user[user_index].dob << endl;
        cout << "\n\tE-mail address \t: " <<user[user_index].email << endl;
        cout << "\n\tPhone number \t: " << user[user_index].phoneN << endl;
        cout << "\n\tFlight From \t: " << user[user_index].from <<" To : " << user[user_index].to<< endl;
        cout << "\n\tDeparture Time \t: " << user[user_index].dpTime<< endl;
        cout << "\n\tDeparture Date \t: " << user[user_index].day <<" \ " << user[user_index].month <<" \ " <<user[user_index].year<< endl;
        cout << "\n\tTicket Prince \t: " << user[user_index].ticketPrice<< endl;
        cout << "\n\tNo. of Ticket \t: " << user[user_index].numTicket<< endl;
        cout << "\n\tBaggage  (kg) \t: " << 30+ user[user_index].baggage<< endl;
        cout << "\n\tFlight Class \t: " << user[user_index].Tclass<< endl;
        cout << "\n\tGST \t\t: 6%"<< endl;

        cout << "\n\n\tTotal Price you have to pay (including GST) :\t" << user[user_index].total_price <<endl;

        cout<< "\n\n\nPress any key to go back in main menu :\t"<< endl;
        string a;
        cin >> a;
    }

};

class ticket_confirmation
{
public :
    void information()
    {
        cout << "\n\n\tYour Name \t: " << user[user_index].firstN << " " << user[user_index].lastN << endl;
        cout << "\n\tCitizenship \t: " << user[user_index].citizenship << endl;
        cout << "\n\tPassport No. \t: " << user[user_index].passportN << endl;
        cout << "\n\tDate of Birth \t: " << user[user_index].dob << endl;
        cout << "\n\tE-mail address \t: " <<user[user_index].email << endl;
        cout << "\n\tPhone number \t: " << user[user_index].phoneN << endl;
        cout << "\n\tFlight From \t: " << user[user_index].from <<" To : " << user[user_index].to<< endl;
        cout << "\n\tDeparture Time \t: " << user[user_index].dpTime<< endl;
        cout << "\n\tDeparture Date \t: " << user[user_index].day <<" \ " << user[user_index].month <<" \ " <<user[user_index].year<< endl;
        cout << "\n\tTicket Prince \t: " << user[user_index].ticketPrice<< endl;
        cout << "\n\tNo. of Ticket \t: " << user[user_index].numTicket<< endl;
        cout << "\n\tBaggage  (kg) \t: " << 30+ user[user_index].baggage<< endl;
        cout << "\n\tFlight Class \t: " << user[user_index].Tclass<< endl;
        cout << "\n\tGST \t\t: 6%"<< endl;

        cout << "\n\n\tTotal Price you have to pay (including GST) :\t" << user[user_index].total_price <<endl;

        cout << "\n\n\n\n\tConfirm Your Ticket { Yes/No - (Y/N) } : ";
        string confirm;
        cin >> confirm;

        if(confirm == "Yes" || confirm == "yes" || confirm == "Y" || confirm == "y")
        {
            isConfirm = 1;
            user[user_index].isPerson = 1;
        }
        else
        {
            isConfirm = 0;
        }
    }
    void confirm()
    {
        cout << "\n\n\n\tEnter your Payment Option ( 1.online banking/ 2.credit card/ 3.debit card) : ";
        int x;
        cin >> x;
        cout <<"\n\n\n\n\t-----------------------------------------"<<endl;
        cout <<"\t              YOUR INVOICE              "<<endl;
        cout <<"\t-----------------------------------------"<<endl;

        cout << "\n\n\tYour Name \t: " << user[user_index].firstN << " " << user[user_index].lastN << endl;
        cout << "\n\tCitizenship \t: " << user[user_index].citizenship << endl;
        cout << "\n\tPassport No. \t: " << user[user_index].passportN << endl;
        cout << "\n\tDate of Birth \t: " << user[user_index].dob << endl;
        cout << "\n\tE-mail address \t: " <<user[user_index].email << endl;
        cout << "\n\tPhone number \t: " << user[user_index].phoneN << endl;
        cout << "\n\tFlight From \t: " << user[user_index].from <<" To : " << user[user_index].to<< endl;
        cout << "\n\tDeparture Time \t: " << user[user_index].dpTime<< endl;
        cout << "\n\tDeparture Date \t: " << user[user_index].day <<" \ " << user[user_index].month <<" \ " <<user[user_index].year<< endl;
        cout << "\n\tTicket Price \t: " << user[user_index].ticketPrice<< endl;
        cout << "\n\tNo. of Ticket \t: " << user[user_index].numTicket<< endl;
        cout << "\n\tBaggage  (kg) \t: " << 30+ user[user_index].baggage<< endl;
        cout << "\n\tFlight Class \t: " << user[user_index].Tclass<< endl;
        cout << "\n\tGST \t\t: 6%"<< endl;

        cout << "\n\n\tTotal Price you have to pay (including GST) :\t" << user[user_index].total_price <<endl;


        cout <<"\n\n\n\n\t-----------------------------------------"<<endl;
        cout <<"\t                 YOUR TICKET             "<<endl;
        cout <<"\t-----------------------------------------"<<endl;

        cout << "\n\n\tYour Name \t: " << user[user_index].firstN << " " << user[user_index].lastN << endl;
        cout << "\n\tPassport No. \t: " << user[user_index].passportN << endl;
        cout << "\n\tDate of Birth \t: " << user[user_index].dob << endl;
        cout << "\n\tFlight From \t: " << user[user_index].from <<" To : " << user[user_index].to<< endl;
        cout << "\n\tFlight Class \t: " << user[user_index].Tclass<< endl;
        cout << "\n\tTotal Price \t:" << user[user_index].total_price <<endl;

        cout <<"\n\n\n\tThank you for choosing us and you are welcome again!"<< endl;
        cout<< "\n\n\nPress any key to go back in main menu :\t"<< endl;
        string a;
        cin >> a;

    }
};

class display
{
public:
    void show_list()
    {
        for(int i = 0; i < 10 ; i++)
        {
            if(user[i].isPerson == 1)
            {
                cout << "\n\n\tCustomer Name \t: " << user[i].firstN << " " << user[i].lastN;
                cout << "\n\tPassport No. \t: " << user[i].passportN;
                cout << "\n\n" <<endl;
            }
        }
        cout<< "\n\n\nPress any key to go back in main menu :\t"<< endl;
        string a;
        cin >> a;
    }
};


int main()
{
    int n;
    homePage home;
    Register reg;
    login log;
    flight show_f;
    book ticket_booking;
    ticket_confirmation T_confirm;
    display booked_customer;
    do {
        system("cls");
        home.show();
        cin >> n;
        switch (n)
        {
            case 1:
                break;
            case 2:
                index++;
                system("cls");
                cout<<"\n\t\t\tWelcome to Register Page.\n\n";
                reg.userName();
                reg.passWord();
                reg.retypePassword();
                cout << "\n\n\tYou are successfully registered....\n";
                break;
            case 3:
                system("cls");
                cout<<"\n\t\t\tWelcome to Log-in Page.\n\n";
                if(index<0)
                {
                    cout << "\n\n\tregister first...\n";
                    Sleep(1500);
                    continue;
                }
                log.user_id();
                log.log_password();
                break;

            case 4:
                system("cls");
                show_f.local_flight();
                show_f.international_flight();
                break;
            case 5:
                system("cls");
                cout<<"\n\t\t\tWelcome to Booking Page.\n\n";
                if(islog == 1)
                {
                    ticket_booking.booking();
                    ticket_booking.information();
                }
                else
                {
                    cout <<"\n\n\tYou must LOG IN first"<<endl;
                }
                break;
            case 6:
                system("cls");
                cout<<"\n\t\t\tWelcome to Confirmation Page.\n\n";
                if(islog == 1 &&  isReg == 1 )
                {
                    T_confirm.information();
                    if(isConfirm == 1)
                    {
                        system("cls");
                        cout<<"\n\t\t\tWelcome to Confirmation Page.\n\n";
                        T_confirm.confirm();
                    }

                }
                else if(islog == 0)
                {
                    cout <<"\n\n\tYou must LOG IN first"<<endl;
                }
                else
                {
                    cout <<"\n\n\tYou must Book a Ticket first"<<endl;
                }

                break;

            case 7 :
                system("cls");
                cout<<"\n\t\t\ta list of customers per flight.\n\n";
                booked_customer.show_list();

                break;

            default :
                cout << "\nWrong input...!" <<endl;
                break;
        }
    Sleep(1000);

    }while(n<=7 && n>0);

    return 0;
}

