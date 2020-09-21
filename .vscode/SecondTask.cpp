#include <iostream>

using namespace std;

class PostAdressOrganization{
    public:
    PostAdressOrganization(){
        NameOrganization = "No name";
        country = "No contry";
        street = "No street";
        home = "No home";
        flat = 0;
    }
    PostAdressOrganization(string NameOrganization){
        
        this->NameOrganization = NameOrganization; 
        country = "No contry";
        street = "No street";
        home = "No home";
        flat = 0;
    }
    void SetCountry(string country){
        this->country = country;
    }
    void SetCity(string city){
        this->city = city;
    }
    void SetStreet(string street){
        this->street = street;
    }
    void SetHome(string NewHome){
        home= NewHome;
    }
    void SetFlat(int flat){
        this->flat = flat;
    }
    void ShowAdress(){
        cout << "Adress: "<< NameOrganization << " " << country<< " " <<street <<" "<< " "<< home<<" "<<flat << endl;
    }
    ~PostAdressOrganization()
    {
        cout << "Destructor called for PostAdressOrganization "  << endl;
    }
    
    private:
    string NameOrganization;

    string country;
    string city;
    string street;
    string home;
    int flat;

};
int main() 
{ 
PostAdressOrganization FirstAdress("Microsoft");

FirstAdress.SetCountry("USA");
FirstAdress.SetCity("Baltimor");
FirstAdress.SetStreet("Broadway");
FirstAdress.SetHome("5-1");
FirstAdress.SetFlat(349);
FirstAdress.ShowAdress();

FirstAdress.SetHome("10-3");
FirstAdress.ShowAdress();
return 0;
}