#include <string>
using namespace std;

class Customer
{
    int custid;//4
    string custname;//32
    string phoneno;//32
    static string bankName;
    static int custmercount;
    public:
      void setID(int cid);
      void setCusterName(string name);
      void setPhone(string phone);
      int getID();
      string getCustomerName();
      string getPhoneNumber();
      static string getBankName();
      Customer();//default
};
