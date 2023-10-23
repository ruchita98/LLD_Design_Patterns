#include <iostream>
#include <vector>
using namespace std;

class Strategy {
    public:
        virtual int bestCustomer(const vector<int> &customers) = 0;
};

class minMoneyStrategy: public Strategy {
    public:
        int bestCustomer(const vector<int> &customers) {
            cout << "You've chosen min MoneyStrategy-------- " << endl;
            return *min_element(customers.begin(), customers.end());
        }
};

class maxMoneyStrategy: public Strategy {
    public:
        int bestCustomer(const vector<int> &customers) {
            cout << "You've chosen max MoneyStrategy-------- " << endl;
            return *max_element(customers.begin(), customers.end());
        }
};

class Client {
    private:
        Strategy* str;
    
    public:
        Client(Strategy* pStr)
        {
            str = pStr;
        }

        int selectTheBestCustomer(const vector<int> &customers)
        {
            return str -> bestCustomer(customers);
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

    Client* client1 = new Client(str1);
    Client* client2 = new Client(str2);

    cout << client1 ->selectTheBestCustomer(prices) << endl;

    cout << client2 ->selectTheBestCustomer(prices) << endl;
}