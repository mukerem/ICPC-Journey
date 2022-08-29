#include <iostream>
#include<fstream>
#include <cstdlib> // needed for exit()
#include <string>
#include <iomanip> // needed for formatting
using namespace std;

const float over_time_mu=1.5;
const int std_hr=40;

void infile();
void outfile();

int main()
{

    int choice;
    cout<<"enter your choice\n 1 for read file\n 2 for write file"<<endl;
    cin>>choice;
    switch(choice){
    case 1:infile();break;
    case 2:outfile();break;
    default:cout<<"Wrong Choice";

    }
    return 0;
}
void infile(){
    ifstream infile;
    double pay,overtime,regular, rate,hours;
    string line,fname,lname,filename="test.txt";
    double sum=0;
    infile.open(filename.c_str());
    if (infile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
        << "\n Please check that the file currently exists"
        << endl;
        exit(1);
    }
    getline(infile,line);
    cout<<"Full Name"<<setw(25)<<"pay rate"<<setw(15)<<"hours"<<setw(15)
        <<"regular rate"<<setw(15)<<"overtime rate"<<setw(15)<<"Gross pay"<<endl;
    while(infile>>fname>>lname>>rate>>hours){
        if(hours<=std_hr){
            regular=hours*rate;
            overtime=0.0;
        }
        else{
            regular=std_hr*rate;
            overtime=(hours-std_hr) * rate * over_time_mu;
        }
        pay=regular+overtime;

        cout<<fname<<setw(13)<<lname<<setw(12)<<rate<<setw(15)<<hours<<setw(15)
        <<regular<<setw(15)<<overtime<<setw(15)<<pay<<endl;
        cout<<"\n\n";
    }
    infile.close();
}
void outfile(){
    ofstream outfile;
    double rate,hours,emp_size;
    string fname,lname,filename="test.txt";
    outfile.open(filename.c_str());
    if (outfile.fail())
    {
        cout << "The file was not successfully opened" << endl;
        exit(1);
    }
    outfile<<"Full Name "<<setw(25)<<"Rate "<<setw(15)<<"Hours "<<endl;
    cout<<"Enter number of employee you want to calculate "<<endl;
    cin>>emp_size;
    for(int i=0;i<emp_size;i++){
        cout<<"Enter First Name"<<endl;
        cin>>fname;
        cout<<"Enter Last Name"<<endl;
        cin>>lname;
        cout<<"Enter Rate"<<endl;
        cin>>rate;
        cout<<"Enter Hours"<<endl;
        cin>>hours;
        outfile<<fname<<setw(12)<<lname<<setw(13)<<rate<<setw(15)<<hours<<endl;
    }
}
