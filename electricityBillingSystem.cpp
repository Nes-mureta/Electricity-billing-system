#include<iostream>
#include<stdlib.h>
using namespace std;


class Windmill{
    public:
    int units;
    int Bill;
     
    int windunits (){
            system("clear");

            cout << "Enter the number of units comsumed this month:\n"<<endl;
            cin>>units;

            if(units>0){
                Bill=15*units;
                cout<<"Your bill is:\t";
                cout<<"$"<<Bill;cout <<"\n\n";
                }else {
                    cout<<"You input is invalid!\n";
                }
                
            return Bill;
        }
             

    
    int quiz(){

        int option;
        cout <<"Do you want to continue?"<<endl;
        cout <<"\t";cout<<"[1] NO."<<endl;
        cout <<"\t";cout<<"[2] YES.\n\n";
        cout <<"\t";cout<<"[3] MAIN MENU .\n\n";
        cout <<"Enter option:\n";
        cin >> option;

        switch (option) 
        {
        case 1:
            cout<<"Thanks for choosing our services!";
            break;
        
        case 2:
            windunits();
            quiz();
            break;
        }
        return 1;

    }

};


class geotherm{
    public:
    int choice;
    int units;
    int Bill;
    int thermunits (){

            system("clear");

        cout << "Enter the number of thermo units comsumed this month:\n"<<endl;
        cin>>units;"W";
        return units;
    }
    int ConsumptionType(){
        cout<<"@@@@@@@@@@@@@@@@@@ CONSUMPTION TYPES @@@@@@@@@@@@@@@@@@\n";
        cout <<"\t[1] Domestic\n";
        cout <<"\t[2] Small Firm\n";
        cout <<"\t[3] Large Firm\n";
        cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout<<"Select you level of consumption:\n";
        cin >>choice;

        switch (choice)
        {
        case 1:
            if (units<0)
            {
                cout<< "invalid input\n";
            }else if (units<20)
            {
                cout<<" we cannot charge less than 20 units!\n\n";
            }else if (units<500)
            {
                Bill=10*units;
            }else
            {
                Bill=25*units;
            }
            cout<<"Your bill is:\t";
            cout<<"$"<<Bill; cout <<"\n\n";
            
            break;
        
        case 2:
            if (units<0)
            {
                cout<< "invalid input\n";
            }else if (units<100)
            {
                Bill=15*units;
            }else
            {
                Bill=30*units;
            }
            cout<<"Your bill is:\t";
            cout<<"$"<<Bill;cout <<"\n\n";
            
        break;
            case 3:
            cout <<"This level is under maintainance please try again later!\n";
        break;
        default:
            cout<<"invalid input!\n\n \tplease enter option\n";
            ConsumptionType();
        break;
        }

    return Bill;
    }

int quiz(){

        int option;
        cout <<"Do you want to continue?"<<endl;
        cout <<"\t";cout<<"1.NO."<<endl;
        cout <<"\t";cout<<"2.YES.\n\n";
        cout <<"Enter option:\n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout<<"Thanks for choosing our services!";
            break;
        
        case 2:
            thermunits();
            ConsumptionType();
            quiz();
        break;
        }
        return 1;


    }

    
};

class hydroelect{
    public:
    int units;
    int NOunits(){

            system("clear");


        cout << "Enter the number of electric units comsumed this month:\n"<<endl;
        cin>>units;"W";
        return units;
    }
     int choice;
    int Bill;
    int types(){
            cout<<"%%%%%%%%%%%%%%%%% USER TYPES %%%%%%%%%%%%%%%%% "<<endl;
                 cout<<"\t";cout<<"1:domestic"<<endl;
                 cout<<"\t";cout<<"2:commercial"<<endl;
            cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

            cout<<"Enter your user type,(as either 1 or 2):\n"<<endl;
            cin>>choice;

            switch (choice)
            {
            case 1:
                if (units<200)
                {
                  Bill=6*units;  
                }else if (units<400)
                {
                  Bill=15*units;
                    
                }else if (units<800)
                {
                    Bill=20*units;
                }else
                {
                    Bill=70*units;
                }
                cout<<"Your bill is:\t";
                cout <<"$"<<Bill;cout <<"\n\n";
            break;
            
            case 2:
                if (units<200)
                {
                    Bill=18*units;
                }else if (units<400)
                {
                    Bill=36*units;
                }else if (units<800)
                {
                    Bill=50*units;
                }else
                {
                    Bill=70*units;
                }
                cout <<"Your bill is:\t";
                cout <<"$"<<Bill; cout <<"\n\n";
            break;
            default:
                cout<<"invalid input!\n\n \tplease enter option\n";
                types();
            break;
            }

        return Bill;

    } 


    int quiz(){

        int option;
        cout <<"Do you want to continue?"<<endl;
        cout <<"\t";cout<<"1.NO."<<endl;
        cout <<"\t";cout<<"2.YES.\n";
        cout <<"\t";cout<<"3.MAIN MENU.\n\n";


        cout <<"Enter option:\n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout<<"Thanks for choosing our services!";
        break;
        
        case 2:
            NOunits();
            types();
            quiz();
        break;
        }
        return 1;
    }
};

int main() {
    int choice;
    cout<<"$$$$$$$$$$$$$$$$ MAIN MENU $$$$$$$$$$$$$$\n@\n";
    cout <<"@\t[1] Hydroelectric power    \t@\n";
    cout <<"@\t[2] Geothermal power       \t@\n";
    cout <<"@\t[3] Windmill power         \t@\n@\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
    cout<<"Select the power you use:\n";
    if (cin >> choice){

    system("clear");

    switch (choice)
    {
    case 1:
        hydroelect he;
        he.NOunits();
        he.types();
        he.quiz();
    break;

    case 2:
        geotherm geo;
        geo.thermunits();
        geo.ConsumptionType();
        geo.quiz();

    break;
    case 3:
        Windmill wind;
        wind.windunits();
        wind.quiz();


    break;
    default:
        cout<<" invalid input! \t please select either 1,2 or 3!\n\n";
        main();
    break;
    }
    }
    else
    {
        cerr<<"The input should be numerics\n";
    }
    return 1;
    
}

    




     
