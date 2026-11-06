#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        // cout<<n%10;
        cnt++;
    }
    // or
    // int cnt = (int)(log10(n) + 1);
    // return cnt;
}

int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

bool isPalindrome(int n)
{
    int revNum = 0;
    int dup = n;
    while (n > 0)
    {
        int id = n % 10;
        revNum = (revNum * 10) + id;
        n = n / 10;
    }
    return dup == revNum;
}

bool isArmstrong(int n)
{
    int sum = 0;
    int dup = n;
    while (n > 0)
    {
        int id = n % 10;
        sum = sum + id * id * id;
        n = n / 10;
    }
    return dup == sum;
}

void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

void printDivisors(int n)
{
    vector<int> ls;
    // 6*6<=36
    // O(sqrt(n))
    //  for(int i=1;i<=sqrt(n);i++){
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }

    // O(no of factors *log(no of factors)):n is the number of factors
    sort(ls.begin(), ls.end());
    // O(number of factors)
    for (auto it : ls)
        cout << it << " ";
}

void PrimeNo(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    if (cnt == 2)
        cout << "true";
    else
        cout << "false";
}

void findGcd(int n1, int n2)
{
    int gcd = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            cout << gcd;
            break;
        }
    }
}

// By Eucleid arithmatic
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
}

int main()
{
    int n;
    cin >> n;
    cout << countDigit(n);
    cout << reverseNumber(n);
    cout << isPalindrome(n);
    cout << isArmstrong(n);
    printDivisors(n);
    PrimeNo(n);
    int n1, n2;
    cin >> n1;
    cin >> n2;
    findGcd(n1, n2);
    gcd(n1, n2);
}