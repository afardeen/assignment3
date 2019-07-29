/*
 * Customer.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */
include<iostream>

#include "Customer.h"

Customer::Customer(string x, char y, int z) {
    name=x;
    initial =y;
    account=z;
}
string getName() const
{
    return name;
}
char getInitial() const
{
    return initial;
}
int getAccount() const
{
    return account;
}
void setBalance(const int& a)
{
    account=a;
}
bool operator==(const Customer &c)
{
    for(int i=0; i<c.size(); i++)
    {
    

    }
}

ostream& operator<<(ostream & os,  Customer & c) {

    os<< c.name<<", "<<c.initial<<". ("<<c.account<<")"<<endl;

}
