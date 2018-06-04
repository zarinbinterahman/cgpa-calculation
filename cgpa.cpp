#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int cvrpge();

class cgpa{

private:
    float cgpa=0;
    int sbjt;
    float point,mult,x=0,crdt,cradit=0;
public:

void c(){

    ofstream fout("Record.txt",ios::app | ios::binary);

    cout<< "\n\n\n Enter how many subjects is in this semester: ";
    cin>>sbjt;

    for (int i=1; i<=sbjt; i++){
        cout<<"\n Enter subject credit: ";
        cin>>crdt;

        cout<<"\n Enter point what you got: ";
        cin>>point;

        cradit=cradit+crdt;

        mult=crdt*point;

        x=x+mult;
}

    cout<<"\n\n Total credit: "<<cradit;

    cgpa=x/cradit;
    cout<<"\n\n CGPA: "<<cgpa;


    if( cgpa == 4.00 )
        cout<<"\n\n Grade: A+";
    else if( cgpa<4.00 && cgpa>3.74 )
        cout<<"\n\n Grade: A";
    else if( cgpa<3.75 && cgpa>3.49 )
        cout<<"\n\n Grade: A-";
    else if( cgpa<3.50 && cgpa>3.24 )
        cout<<"\n\n Grade: B+";
    else if( cgpa<3.25 && cgpa>2.99 )
        cout<<"\n\n Grade: B";
    else if( cgpa<2.74 && cgpa>3.00 )
        cout<<"\n\n Grade: B-";
    else if( cgpa<2.75 && cgpa>2.49 )
        cout<<"\n\n Grade: C+";
    else if( cgpa<2.50 && cgpa>2.24 )
        cout<<"\n\n Grade: C";
    else if( cgpa<2.25 && cgpa>1.99 )
        cout<<"\n\n Grade: D";
    else
        cout<<"\nFAIL";

    fout.write((char*)this,sizeof(*this));
    fout.close();
}

void show(){

    ifstream fin("record.txt",ios::app | ios::binary);
    fin.read((char*)this,sizeof(*this));

    while(!fin.eof()) {
        cout<<"cradit: "<<cradit<<" "<<"cgpa: "<<cgpa<<"\n";
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}
};

int heading(){

    system("CLS");

    int y;
    cout<<"\n\n\n\t\t\t\t\t************************* \n";
    cout<<"\n\t\t\t\t\t    CGPA Calculation \n";
    cout<<"\n\t\t\t\t\t*************************";
    cout<<"\n\t\t\t 1. Calculate";
    cout<<"\n\t\t\t 2. Show";
    cout<<"\n\t\t\t 3. Exit";
    cout<<"\n\n\t\t\t Enter your option: ";
    cin>>y;
    return y;
}

int main()

{
    cgpa x;
    int y;

    while(1){

          cvrpge();

    switch(heading()){
        case 1:
            x.c();
            break;
        case 2:
            x.show();
            break;
        case 3:
            exit(0);
             default:{
            cout<<"\n\t\t\t\tPress any key."<<endl;
            }
    }
}
    return 0;
}

 int cvrpge()
    {
        cout<<endl;
        cout<<"\t\t\t   *****   ******   ****     *    "<<endl;
        cout<<"\t\t\t   *       *        *   *   * *   "<<endl;
        cout<<"\t\t\t   *       *  ***   ****   *****  "<<endl;
        cout<<"\t\t\t   *       *    *   *     *     * "<<endl;
        cout<<"\t\t\t   *****   ******   *    *       *"<<endl<<endl<<endl<<endl;


        cout<<"   *****     *      *      *****   *    *   *          *    *****   ***   *****   **    *     "<<endl;
        cout<<"   *        * *     *      *       *    *   *         * *     *      *    *   *   * *   *     "<<endl;
        cout<<"   *       *****    *      *       *    *   *        *****    *      *    *   *   *  *  *     "<<endl;
        cout<<"   *      *     *   *      *       *    *   *       *     *   *      *    *   *   *   * *     "<<endl;
        cout<<"   ***** *       *  *****  *****     **     *****  *       *  *     ***   *****   *    **     "<<endl;


        cout<<"\n\n\nPress Any Key To Continue:-";

        getch();

        return 0;
    }


