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

struct User                         // represents a user of the bank
{
    int id;                         //user id
    int balance;                    //balance of the user in bank account
    int n_deposits;                 // number of deposits and successful withdrawals
    int n_withdrawals;

//A variable or struct object to store the transaction history of the user. LAST 3
    Transaction trans_hist[5];

    int deposit(int amount)
    {
        // deposit amount to user account.. always successful
        balance += amount;
        return 0;

    }
    int withdraw(int amount)
    {
        // withdraw amount from user account
        //Return 0 for successful withdrawal else return -1 (eg. when balance < amount). 
        if (balance >= amount)
        {
            balance -= amount;
            return 0;
        }
        else
            return -1;

    }
    void print_history()
    {
        //print the transaction history of the user. 
        // The 3 most recent transactions should be printed and the most recent transaction is printed first.
        // a failed transaction is not considered in the history.
        for(int i = n_deposits + n_withdrawals -1, int j = 0; j < 3  ; i-- , j++)
        {
            if (i >= 0)
                trans_hist[i].print();
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
        //user_id <deposit or withdraw> <amount>.
        cout << user_id << " ";
        if (is_deposit == 0)
            cout << "withdraw" << " ";
        else
            cout << "deposit" << " ";
        cout << amount;

    }
};

struct Bank()
{
    int ui = 0;
    int ri = 0;
    int n_users;
    User users[10];                     // an array of datatype(struct) user
    int n_reqs; 
    Request reqs[10];                   // an array of keeping requests given to bank(deposit/withdraw)
    int add_user(int init_bal)
    {
        //Add a user with initial balance equal to init_bal in their account
        // returns 0-- success
        // returns -1 if n_users is already 10
        if ( ui < 10)
        {
            users[ui].balance = init_bal;
            ui += 1;
            return 0;
        }
        else
            return -1;   

    }
    void add_request(int user_id, bool is_deposit, int amount)
    {
        //Add request to request queue.
        // max 10 at a time
        if ( r1 < 10)
        {
            reqs[ri].user_id = user_id;
            reqs[ri].is_deposit = is_deposit;
            reqs[ri].amount = amount;
            ri += 1;
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
    void deposit(int user_id, int amount)
    {
        users[user_id].deposit(amount);
    }
    void withdraw(int user_id, int amount)
    {
        users[user_id].withdraw(amount);
    }
    void print_user_history(int user_id)
    {
        users[user_id].print_history();
    } 
};

