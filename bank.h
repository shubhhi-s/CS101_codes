#include <iostream>
#include <cmath>
using namespace std;
struct Transaction                  // represents user's transaction
{
    int user_id;
    bool is_deposit;                // 0 withdraw & 1 deposit
    int amount;
    int balance;                    // balance represents the balance of the user after the transaction.
    void print()
    {
        // Print transaction in the format 
        // user_id <deposit or withdraw> <amount> <balance>
        
        cout << user_id << " ";
        if (is_deposit == 0)
            cout << "withdraw" << " ";
        else
            cout << "deposit" << " ";
        cout << amount << " " << balance << endl;
    }
};

struct User 
{
    int id;
    Transaction trans_hist[10];
    int i = 0;
    int n_deposits = 0;
    int n_withdrawals = 0;
    int balance;
    int deposit(int amount)
    {
        // deposit amount to user account.. always successful
        balance += amount;
        n_deposits += 1;
        trans_hist[i].user_id = id;
        trans_hist[i].is_deposit = 1;
        trans_hist[i].amount = amount;
        trans_hist[i].balance = balance;
        i += 1;
        return 0;

    }
    int withdraw(int amount)
    {
        // withdraw amount from user account
        //Return 0 for successful withdrawal else return -1 (eg. when balance < amount). 
        if (balance >= amount)
        {
            balance -= amount;
            n_withdrawals += 1;
            trans_hist[i].user_id = id;
            trans_hist[i].is_deposit = 0;
            trans_hist[i].amount = amount;
            trans_hist[i].balance = balance;
            i += 1;
            return 0;
        }
        else
            return -1;

    }
    void print_history()
    {
        int number = 1;
       // i has value of no. of transactions
        for(int k = i - 1; number < 4; k -= 1 )
        {
            if (k >= 0)
                {
                    trans_hist[k].print();
                    number += 1;
                }

            else
                break;
        }
    }
};

struct Request
{
    int user_id;
    bool is_deposit;
    int amount;
    void print()
    {
        cout << user_id << " ";
        if (is_deposit == 0)
            cout << "withdraw" << " ";
        else
            cout << "deposit" << " ";
        cout << amount;
    }
};


struct Bank
{
    int n_users =  0;
    int n_reqs = 0;
    User users[10];
    Request reqs[10]; 
    int add_user(int init_bal)
    {
        if ( n_users < 10)
        {
            users[n_users].id = n_users;
            users[n_users].balance = init_bal;
            n_users += 1;
            return 0;
        }
        else
            return -1;   

    }
    void add_request(int user_id, bool is_deposit, int amount)
    {
        if ( n_reqs < 10)
        {
            reqs[n_reqs].user_id = user_id;
            reqs[n_reqs].is_deposit = is_deposit;
            reqs[n_reqs].amount = amount;
            n_reqs += 1;
        }
    }
    int get_balance(int user_id)
    {
        return users[user_id].balance;
    }
    int get_num_deposits(int user_id)
    {
       return users[user_id].n_deposits;
    }
    int get_num_withdrawals(int user_id)
    {
        return users[user_id].n_withdrawals;
    }
     void print_user_history(int user_id)
    {
        users[user_id].print_history();
    } 
    void deposit(int user_id, int amount)
    {
        users[user_id].deposit(amount);
    }
    void withdraw(int user_id, int amount)
    {
        users[user_id].withdraw(amount);
    }
};