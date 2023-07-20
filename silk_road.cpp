#include <iostream>
#include <string>
using namespace std;

    string Definitions[10]={"Weed","Benzos","Opioids","Alcohol","Tobacco","Cocaine","Amphetamines","Psychedelics","Dissociates","Entactogens"};
    string Countries[9]={"UK","FRANCE","NETHERLANDS","RUSSIA","CHINA","SOUTH AFRICA","AUSTRALIA","USA","COLOMBIA"};

    int SilkRoadNewCountry();
    int SilkRoadDefault();
    int Replay();
    int End();
    int main();

    int asdf;
    int s;
    int x;
    int ok;

    int turn;
    int exit;
    int replay;

    int B=200;
    int dW=0;
    int dB=0;
    int dO=0;
    int dA=0;
    int dT=0;
    int dC=0;
    int dAM=0;
    int dP=0;
    int dD=0;
    int dE=0;

    int drug;
    int amount;

    int Market[9][11]={
        {0,20,80,40,15,20,30,55,45,20,25},
        {1,20,85,35,10,15,25,60,45,40,30},
        {2,10,85,35,15,15,30,45,25,35,25},
        {3,35,70,20,05,05,20,10,55,30,40},
        {4,40,60,15,30,10,70,30,70,45,30},
        {5,15,40,30,15,10,25,30,60,65,45},
        {6,35,70,30,10,35,40,20,45,35,50},
        {7,15,30,20,25,10,25,20,30,15,35},
        {8,25,80,35,20,10,10,40,20,25,45}
    };

    string Info[]=
    {"The UK has similar drug habits to most places in Europe but here people party like no where else",
     "Similar to the UK with a more liberal attitude to those illicit escapes",
     "The Netherlands is well known for drugs that alter your view of the world, be that its food, colours or more",
     "The world of Russia is a cruel and cold one and their drugs of choice help to cope with this",
     "China is famous for making cheaper versions of many products, their drugs are no different",
     "South Africa is a bit of a wild card, good luck!",
     "Australia has plenty of sun, sea and smiles. Though under which lies a nation that struggles with staying energetic in the beating sun",
     "The US is to many, a capitalist paradise. This very much applies to the way in which good health is maintained",
     "Colombia is a country tainted by its history of gang violence and their exploitation of the local rainforest"
    };


int SilkRoadInv(){

    cout << "\n\nINVENTORY:" << endl;
    cout << "Bitcoins: " << B << endl;
    cout << Definitions[0] << dW << endl;
    cout << Definitions[1] << dB << endl;
    cout << Definitions[2] << dO << endl;
    cout << Definitions[3] << dA << endl;
    cout << Definitions[4] << dT << endl;
    cout << Definitions[5] << dC << endl;
    cout << Definitions[6] << dAM << endl;
    cout << Definitions[7] << dP << endl;
    cout << Definitions[8] << dD << endl;
    cout << Definitions[9] << dE << endl;
    cout << "\n\nType 1 to exit\n\n" << endl;
    cin >> exit;
    switch(exit){
     case 1:
        SilkRoadDefault();
        break;
     default:
        SilkRoadInv();
    };


}

int SilkRoadStart(){

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
         << "Welcome to Silk Road - The Game\nBe Prepared to Move Drugs on an International Scale" << endl;

    cout << "Input your starting Location" << endl;
    cout << "0 - UK" << endl;
    cout << "1 - France" << endl;
    cout << "2 - The Netherlands" << endl;
    cout << "3 - Russia" << endl;
    cout << "4 - China" << endl;
    cout << "5 - South Africa" << endl;
    cout << "6 - Australia" << endl;
    cout << "7 - USA" << endl;
    cout << "8 - Colombia" << "\n" << endl;

    cin >> s;
    cout << "Starting Money is 200 Bitcoins\n\n" << endl;

}

int SilkRoadBuy(){

    cout << "\n\nBUY" << endl;
    cout << "0-" << Definitions[0] << endl;
    cout << "1-" << Definitions[1] << endl;
    cout << "2-" << Definitions[2] << endl;
    cout << "3-" << Definitions[3] << endl;
    cout << "4-" << Definitions[4] << endl;
    cout << "5-" << Definitions[5] << endl;
    cout << "6-" << Definitions[6] << endl;
    cout << "7-" << Definitions[7] << endl;
    cout << "8-" << Definitions[8] << endl;
    cout << "9-" << Definitions[9] << endl;

    cout << "Enter Drug Number followed by the amount of Units" << endl;
    cin >> drug >> amount;
    switch(drug){
     case 0:
         dW += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 1:
         dB += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 2:
         dO += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 3:
         dA += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 4:
         dT += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 5:
         dC += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 6:
         dAM += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 7:
         dP += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 8:
         dD += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     case 9:
         dE += amount;
         B -= (amount * Market[s][drug+1]);
         break;
     default:
        cout << "default";
    };

    SilkRoadInv();
}

int SilkRoadSell(){

    cout << "\n\nSELL" << endl;
    cout << "0-" << Definitions[0] << endl;
    cout << "1-" << Definitions[1] << endl;
    cout << "2-" << Definitions[2] << endl;
    cout << "3-" << Definitions[3] << endl;
    cout << "4-" << Definitions[4] << endl;
    cout << "5-" << Definitions[5] << endl;
    cout << "6-" << Definitions[6] << endl;
    cout << "7-" << Definitions[7] << endl;
    cout << "8-" << Definitions[8] << endl;
    cout << "9-" << Definitions[9] << endl;

    cout << "Enter Drug Number followed by the amount of Units" << endl;
    cin >> drug >> amount;
    switch(drug){
     case 0:
         dW -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 1:
         dB -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 2:
         dO -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 3:
         dA -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 4:
         dT -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 5:
         dC -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 6:
         dAM -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 7:
         dP -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 8:
         dD -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     case 9:
         dE -= amount;
         B += (amount * Market[s][drug+1]);
         break;
     default:
        cout << "default";
    };

    SilkRoadInv();

}

int SilkRoadFly(){

    cout << "\n\nFly to ... (Each Flight Costs 100 Bitcoins)" << endl;
    cout << "(1)UK           (4)Russia        (7)Australia"   << endl;
    cout << "(2)France       (5)China         (8)USA"         << endl;
    cout << "(3)Netherlands  (6)South Africa  (9)Colombia"    << endl;

    cin >> s;
    s--;
    SilkRoadNewCountry();

}

int SilkRoadInfo(){

    cout << Info[s] << "\n\n\n" << endl;
    cin >> ok;
    SilkRoadDefault();

}

int WinState(){

    cout << "You Won!!!!" << endl;
    cout << "You finished in " << turn << " turns" << endl;
    cin >> asdf;

    main();
}

int FailState(){

    cout << "You Lose!" << endl;
    cout << "    ________"   << endl;
    cout << "    |/      |"  << endl;
    cout << "    |      (_)" << endl;
    cout << "    |      \\|/" << endl;
    cout << "    |       |"  << endl;
    cout << "    |      /|\\ "<< endl;
    cout << "    |"          << endl;
    cout << "____|___  \n"   << endl;
    cout << "You finished in " << turn << " turns" << endl;

    cin >> asdf;
    main();
}

int SilkRoadDefault(){

    turn ++;

cout << "Bitcoins " << B << endl;
    if(0>B){
        FailState();
    }
    if(1000<=B){
        WinState();
    }
    else{
    cout << Countries[s] << endl;
    cout << "Local Prices:" << endl;
    cout << Definitions[0] << ":" << Market[s][1] << endl;
    cout << Definitions[1] << ":" << Market[s][2] << endl;
    cout << Definitions[2] << ":" << Market[s][3] << endl;
    cout << Definitions[3] << ":" << Market[s][4] << endl;
    cout << Definitions[4] << ":" << Market[s][5] << endl;
    cout << Definitions[5] << ":" << Market[s][6] << endl;
    cout << Definitions[6] << ":" << Market[s][7] << endl;
    cout << Definitions[7] << ":" << Market[s][8] << endl;
    cout << Definitions[8] << ":" << Market[s][9] << endl;
    cout << Definitions[9] << ":" << Market[s][10] << endl;

    cout << "0-Buy 1-Sell 2-Fly 3-Info 4-Inventory" << endl;
    cin >> x;

    switch(x){
     case 0:
        SilkRoadBuy();
        break;
     case 1:
        SilkRoadSell();
        break;
     case 2:
        SilkRoadFly();
        break;
     case 3:
        SilkRoadInfo();
        break;
     case 4:
        SilkRoadInv();
        break;
     default:
        cout << "Exiting Game";

    };
    }
}

int SilkRoadNewCountry(){

    cout << "\n\nWelcome to " << Countries[s] << endl;
    B -= 100;
    SilkRoadDefault();

}

int main(){
    //Each item is priced by an index money system called Bitcoins. A drug will cost between 1 and 100 Bitcoins per unit.
    //The higher the Bitcoin, the rarer and more valuable it is


    B = 250;
    SilkRoadStart();
    SilkRoadDefault();


    return 0;
}

int End(){

}
