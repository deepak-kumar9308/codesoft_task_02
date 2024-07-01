//prg to Develop  a calculator for addition,subtration,multiplication & Division.
//made by deepak kr
//date =10/06/2024

#include<iostream>        //header file
using namespace std;

void sum(double a,double b){   //for addition function 
    cout<<"sum="<<a+b;
}
void sub(double a,double b){    // for subtraction function
    cout<<"Subraction="<<a-b;
}
void mul(double a,double b){  // for multiplication function
    cout<<"Multiplication="<<a*b;
}
void div(double a,double b){  //for division function
    cout<<"Division="<<a/b;
}
int main(){       // main
    double num1, num2;     //variable declaration
    int ch;
    cout<<"\n ENTER THE FIRST OPERAND=";
    cin>>num1;

    cout<<"\n choose any operator as given below :";
    cout<<"\n 1 : Addition \n 2 : Subtraction \n 3 : Multiplication \n 4 : Division \n";
     cin>>ch;
    
    cout<<"\n ENTER THE SECOND OPERAND=";
    cin>>num2;
    switch(ch){              //switch case for performing operation 
        case 1 : sum(num1,num2); 
                 break; 
        case 2 : sub(num1,num2); 
                 break; 
        case 3 : mul(num1,num2); 
                 break; 
        case 4 : div(num1,num2); 
                 break; 
        default : cout<<"Invalid! choice";
    }
    return 0;
}