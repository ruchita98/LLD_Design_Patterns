#include <iostream>
#include <vector>
using namespace std;

class Strategy {
    public:
        virtual int bestCustomer(vector<int> &customers) = 0;
};

class minMoneyStrategy: public Strategy {
    public:
        int bestCustomer(vector<int> &customers) {
            return *min_element(customers.begin(), customers.end());
        }
};

class maxMoneyStrategy: public Strategy {
    public:
        int bestCustomer(vector<int> &customers) {
            return *max_element(customers.begin(), customers.end());
        }
};

int main()
{
    // some client some times wants to reward the person who gives more money or sometimes the one who gives less money
    // so 2 strategy one is minMoneySpend , another is maxMoneySpend, both confirm to interface strategy, 
    //client calls strategy to get the output


    vector<int> prices;
    
    prices.push_back(5);
    prices.push_back(2);
    prices.push_back(4);
    prices.push_back(7);


    Strategy* str1 = new minMoneyStrategy();
    Strategy* str2 = new maxMoneyStrategy();

    cout << "with minMoneyStrategy " <<  str1 ->bestCustomer(prices) << endl;

    cout << "with maxMoneyStrategy " <<  str2 ->bestCustomer(prices) << endl;
}