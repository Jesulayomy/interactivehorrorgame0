#include <iostream>

using namespace std;

int main()
{

    char strn[100];
    char start;
    char getup;
    char bandage;
    int comb1;
    int comb2;
    int comb3;

    do {
            cout << "Press s to start... ";
            cin >> start;
    } while (start != 's' );

    cout <<endl<< "Claire: Hi stranger, I'm Claire, what is your name?" <<endl<< "Enter your name... ";
    cin >> strn;
    cout <<endl<<strn<<": My name is "<<strn<<endl;

    cout << "Claire: Thank goodness you received my call!"<<endl<<strn<< ": What call? I don't know how I got here."
        <<endl<< "Press g to get up... ";
    cin >> getup;

    while (getup != 'g') {

            cout << "You need to getup, press g... ";
            cin >>getup;
    }

    cout <<endl<<strn<<"(Argh!)"<<endl<< "Claire: You're injured! Let me get the first aid kit."
        << endl<< "Claire: Here it is."<<endl<< "Press b to apply bandage... ";

    cin >> bandage;

    while (bandage != 'b') {

        cout << "Claire: You need to use the bandage."<<endl<< "Press b to apply bandage... ";
        cin >> bandage;
    }
    cout <<endl<<strn<<": That's better"<<endl<<"Press g to getup"<<endl;
    cin >> getup;

    while (getup != 'g') {

            cout << "You can getup now, press g... ";
            cin >>getup;
    }

    cout<<endl<<strn<< ": What happened here"<<endl<< "Claire: He locked me in here, it's been 3 days"
        <<endl<<strn<<": Who did?"<<endl<< "Claire: I- I cant say his name"<<endl<<strn<< ": Okay, write it (Hands pen)"
        <<endl<< "Claire: (scribbles) ... {F r I d a Y }"<<endl;

    do {
            cout << "Press s to continue... ";
            cin >> start;
    } while (start != 's' );

    cout<<endl<< "Clare: I'm hungry... "<<endl<<strn<<": Is there food in this room?"
        <<endl<< "Claire: No, but there is some up in the attic. But its locked with a key."
        <<endl<<strn<< ": Hmm"<<endl<< "Claire: It may be in Mom's locker but i don't know how to open it"
        <<endl<<strn<< ": Let me see."<<endl<<endl<<"!A 3 Digit Combination Padlock!"<<endl
        <<endl<< "Try to guess the first number... ";

    cin>>comb1;
    while (comb1 != 4) {
        cout<<"Try another number ";
        cin>>comb1;
    }   cout<<endl<< "4 Click!"<<endl<< "Guess the second number... ";

    cin>>comb2;
    while (comb2 != 2) {
        cout<<"Try another number ";
        cin>>comb2;
    }   cout<<endl<< "2 Click!"<<endl<< "Guess the third number... ";

    cin>>comb3;
    while (comb3 != 0) {
        cout<<"Try another number ";
        cin>>comb3;
    }   cout<<endl<< "0 Click!"
        <<endl<<endl<<comb1<<comb2<<comb3<<endl<< "Claire: We got it!"
        <<endl<< "Press s to continue.. ";

    cin>>start;
    while (start != 's') {

        cout<< "Press s to continue";
        cin >>start;
    }

    cout<< "Claire: Now we have food";


    return 0;
}
