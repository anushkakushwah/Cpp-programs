//Differentiating public, private and protected 
#include<iostream>
using namespace std;
class PropertyLoan{
    private:
    int loan_no;
    int loan_amount;

    protected:
    string colonyName;

    public:
    string name;
    int plotno;

    PropertyLoan(){
        loan_no = 1050111;
        loan_amount = 500000;
    }

    void deductamtofloan(float amount){
        loan_amount = loan_amount- amount;
    }
    float getloanamt(){
        return loan_amount;
    }
    
};
class User : public PropertyLoan{
    public:
    void getInfo(){
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter Colony Name:";
        cin >> colonyName;
        cout << "Enter plot no:";
        cin >> plotno;
    }
};
int main(){
    User u1;
    // loan no will be inaccessible outside the class because it was set private.
    // cout << u1.loan_no;
    cout << u1.plotno << endl;
    cout<< u1.name << endl;

    u1.getInfo();
    cout << u1.getloanamt();
    // cout << u1.colonyName; // Error: protected member
    // this can be accessed only by inherited class
}