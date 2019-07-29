/*
 * Customer.h
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <iostream>
using namespace std;

class Customer {
public:
    Customer(){}
	Customer(string,char,int);
	string getName() const;
	char getInitial() const;
	int getAccount() const;
	void setBalance(const int&);
	bool operator==(const Customer &c);



private:
	friend ostream& operator<<(ostream & os,  Customer & c);
    string name;
	char initial;
	int account;
};

#endif /* CUSTOMER_H_ */
