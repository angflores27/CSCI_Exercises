//  Week 12 Exercises
//  Angela Florrs
//  CSCI 40 Fall 2022

#include <iostream>
using namespace std;

int main()
{
int choice=0;
// sales by person and then product
int sales[4][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int person, product, amount=0;

//menu driven program with functions
while(choice!=4) {
cout<<"============================================="<<endl;
cout<<"Please select one of the following:"<<endl;
cout<<"+--------------------------------------------+"<<endl;
cout<<"| 1. Enter a sale                            |"<<endl;
cout<<"| 2. Check the sales made by a sales person  |"<<endl;
cout<<"| 3. Check the sales on a product            |"<<endl;
cout<<"| 4. Exit                                    |"<<endl;
cout<<"+--------------------------------------------+"<<endl;
cout<<"Selection: ";
cin>>choice;
cout<<endl;
    
switch (choice)
{
    case 1:
    { //enter sales
        cout<<"Please enter the sale person (1-4): ";
        cin>>person;
        cout<<"Please enter the product (1-5): ";
        cin>>product;
        cout<<"Please enter the sales amount: ";
        cin>>amount;
        sales[person-1][product-1]=amount;
        break; }
   
    case 2:
    { //check sales made by a  person
        int persont=0;
        cout<<"Please enter the sale person (1-4): ";
        cin>>person;
        
        for (int i=0; i<5; i++) {
            persont+=sales[person-1][i]; }
        cout<<"The total sales for person "<<person<<" is: "<<persont<<endl;
        break; }
    
    case 3:
    {  // check the sale of a product function
        int productt=0;
        cout<<"Please enter the product (1-5): ";
        cin>>product;
        
        for (int k=0; k<4; k++) {
            productt+=sales[k][product-1]; }
        cout<<"The total sales for person "<<product<<" is: "<<productt<<endl;
        break; }
    
    case 4:
    { //exit the program
        cout<<"Exiting the program."<<endl;
        cout<<endl;
        break; }
    
    default:
    { // error message
        cout<<"Please enter a valid choice."<<endl;
        break; } } }
        
    return 0;
}


