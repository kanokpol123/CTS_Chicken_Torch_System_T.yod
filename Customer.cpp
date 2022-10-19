#include <Customer.h>
Customer::Customer(string telephone, string address, string firstname, string lastname, int age) : Person(firstname, lastname, age)
{
    this->telephone = telephone;
    this->address = address;
}
string Customer::getAddress() {return address;}
string Customer::getTelephone() {return telephone;}
void Customer::setAddress(string address) {this->address = address;}
void Customer::setTelephone(string telephone) {this->telephone = telephone;}
string Customer::regis(string username, string password, string name, string address, string telephone)
{
    cout << "========== Register ==========" << endl;
    do{
        cout << "Username: ";
        cin >> username;
    }while(true);
    cout << "Password: ";
    cin >> password;
    cout << "Name: ";
    cin >> name;
    cout << "Address: ";
    cin >> address;
    cout << "Telephone: ";
    cin >> telephone;
    
}