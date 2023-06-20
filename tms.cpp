#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
using namespace std;
class Customer{
    protected:
    string f_name,l_name,gender,address;
    int mobile_no,age,cusID;
    char all[999];
    public:
    void getDetails(){
        ofstream out("old-customer.txt",ios::app);
        {
        cout<<"Enter customer ID :"<<endl;
        cin>>cusID;
        cout<<"Enter First name :"<<endl;
        cin>>f_name;
        cout<<"Enter Last name :"<<endl;
        cin>>l_name;
        cout<<"Enter Gender :"<<endl;
        cin>>gender;
        cout<<"Enter Age :"<<endl;
        cin>>age;
        cout<<"Enter Mobile Number :"<<endl;
        cin>>mobile_no;
        cout<<"Enter Address :"<<endl;
        cin>>address;
        }

        out<<"\nCustomer ID: "<<cusID<<"\nFirst Name: "<<f_name<<"\nLast Name: "<<"\nAge :"<<age<<"\nMobile No: "<<mobile_no<<"\nGender: "<<gender<<"\nAddress: "<<address<<"\n";
        out.close();
        cout<<"\nsaved\n Note we save your details record for future purposes\n "<<endl;
    }

    void show_Details(){
        ifstream in("old-customers.txt");
        {
            if(!in){
                cout << "File not found" << endl;
            }

            while(!(in.eof())){
                in.getline(all,999);
                cout<<all<<endl;
            }
        }
    }
};
class Cabs{
    protected:
    int cab_Choice;
    int kilometers;
    float cost;
    float last_cab_cost;

    public:
    void Cab_details(){
        cout<<"We colaborated with fastest, safest, and smaetest cab services around the country"<<endl;
        cout<<"1.  Rent a Standard Cab - Rs. 15 for 1KM"<<endl;
        cout<<"2.  Rent a Luxury Cab - Rs. 25 for 1KM"<<endl;

        cout<<"\n To calculate the cost for your new journey"<<endl;
        cout<<"Enter which kind of cab you want for your journey"<<endl;
        cin>>cab_Choice;

        cout<<"Enter the distance that you want to cover"<<endl;
        cin>>kilometers;
        int hire_cab;

        if(cab_Choice==1){
            cost=kilometers*15;
            cout<<"\nYour tour cost "<<cost<<" rupees for a standard Cab"<<endl;
            cout<<"Press 1 to hire this cab or \n Press 2 to hire the Luxury Cab"<<endl;
            cin>>hire_cab;
            
            system("CLS");
               //  This will clear the console
            if(hire_cab==1){
                last_cab_cost=cost;
                cout<<"\nYou have successfully booked a standard cab"<<endl;
                cout<<"take the receipt";
            }

            else if(hire_cab=2){
                Cab_details();
            }

            else{
                cout<<"INVALID INPUT! REDIRECTING THE PREVIOUS MENU \nPlease wait";
                Sleep(990);
                system("CLS");
                Cab_details();
            }

        }
    }

};
class Booking{

};
class Charges{

};
class Hotel{

};
int main()
{
    return 0;
}