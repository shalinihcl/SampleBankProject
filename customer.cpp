#include <iostream>
#include <string>
#include "customer.h"

using namespace std;
int Customer ::custmercount=0;
string Customer::bankName="Kotak bank";

void Customer ::setID(int cid){
  custid=cid;
}
void Customer ::setCusterName(string name){
 custname=name;
}
void Customer ::setPhone(string phone){
  phoneno=phone;
}
int Customer ::getID(){
  return custid;
}

string Customer ::getCustomerName(){
  return custname;
}

string Customer ::getPhoneNumber(){
  return phoneno;
}

string Customer::getBankName()
{
  return bankName;
}

Customer::Customer()
{
  custid=0;
  custname="undefined";
  phoneno="Not available";
}