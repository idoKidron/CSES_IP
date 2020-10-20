//#include <iostream>
//using namespace std;
//
//void func(int y, int x)
//{
//    long long layer = max (y, x);
//    long long sum = (layer - 1) * (layer - 1);
//    if((layer - 1)%2 == 0)
//    {
//        sum += x + layer - y;
//    }
//    else
//    {
//        sum += y + layer - x;
//    }
//    cout << sum << endl;
//}
//
//int main()
//{
//    long long t, y , x;
//    cin >> t;
//    for(long long i=0; i<t; i++)
//    {
//        cin >> y >> x;
//        func(y, x);
//    }
//}