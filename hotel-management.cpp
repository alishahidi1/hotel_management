#include <iostream>
// #include <vector>
#include <string>

using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl<<endl;

//     cout<<"Helloooo!!!"<<endl;
//     cout<<endl;
// }

int main(){
    int quant;
    int choice;

    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger=0, Qnoodles=0, Qshake = 0, Qchicken = 0;

    //food item sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

    //Total price of items
    int Total_rooms=0, Total_pasta = 0, Total_burger=0, Total_noodels=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have:";
    cout<<"\n Rooms available:"<<endl;
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;

    cout<<"\n\t\t\t Please select from the menu options:";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales & collection";
}