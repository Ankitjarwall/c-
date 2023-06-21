#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class centralAgency
{
public:
    string vehicleNo;
    void genrateVehicleNo(string state)
    {
        srand(time(0));

        string temp = to_string((rand() % (9999 - 1000)) + 1000);
        vehicleNo = state + temp;
    };
};

class biharTransport : public centralAgency
{
public:
    void genrateVehicleNo()
    {
        cout << "The unique vehicle no.\nSTATE\t\tBIHAR\nVehicle no.\t" << vehicleNo;
    }
};

class haryanaTransport : public centralAgency
{
public:

    void setVehicleNo()
    {
        cout << "The unique vehical no.\nSTATE\t\tHARYANA\nVehicle no.\t" << vehicleNo;
    }
};

class punjabTransport : public centralAgency
{
public:
    void setVehicleNo()
    {
        cout << "The unique vehical no.\nSTATE\t\tPUNJAB\nVehical no.\t" << vehicleNo;
    }
};

int main()
{

    string state;
    cout << "Enter the State name : ";
    cin >> state;

    if (state == "BIHAR" || state == "Bihar" || state == "bihar" || state == "BR" || state == "br" || state == "Br")
    {
        biharTransport brGVN;
        brGVN.genrateVehicleNo("BR");
        brGVN.setVehicleNo();
    }
    else if (state == "HARYANA" || state == "Haryana" || state == "haryana" || state == "HR" || state == "hr" || state == "Hr")
    {
        haryanaTransport hrGVN;
        hrGVN.genrateVehicleNo("HR");
        hrGVN.setVehicleNo();
    }
    else if (state == "PUNJAB" || state == "Punjab" || state == "punjab" || state == "PB" || state == "pb" || state == "Pb")
    {
        punjabTransport pbGVN;
        pbGVN.genrateVehicleNo("PB");
        pbGVN.setVehicleNo();
    }
    else
    {
        cout << "We are currently avaible in Bihar,Haryana,Punjab.";
    }

    return 0;
}