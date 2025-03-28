#include <stdio.h>
/*
You are given an m x n integer grid accounts
where accounts[i][j] is the amount of money
the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank.
Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts.
The richest customer is the customer that has the maximum wealth. */
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int sum = 0;
    int temp = 0;
    printf("%d %d",accountsSize,*accountsColSize);
    for(int i = 0; i < accountsSize; i++)
    {
        sum = 0;
        for(int j = 0; j < (*accountsColSize); j++)
        {
            sum+=accounts[i][j];
        }
        if(temp<sum)
        {
            temp = sum;
        }
    }
    return temp;
}