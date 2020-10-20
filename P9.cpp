//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//    const long long addConst = pow(2, 30);
//    const long long mod = pow(10, 9) + 7;
////    const long long toAdd = addConst % mod;
//    long long n;
//    cin >> n;
//    long long sum = 0;
//    if(n < 30)
//    {
//        sum += pow(2, n % 30);
//        sum %= mod;
//        cout << sum << endl;
//        return 0;
//    }
//
//    sum = addConst;
//    sum %= mod;
//    for(int i=30; i < (n-30); i+=30)
//    {
//        sum *= addConst;
//        sum %= mod;
//    }
//
//    if( n%30 != 0)
//    {
//        sum *= pow(2, n % 30);
//        sum %= mod;
//    }
//    cout << sum << endl;
//}