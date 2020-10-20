//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    if(n % 4 == 1 || n % 4 == 2)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
//        if(n % 4 == 0)
//        {
//            cout << n/2 << endl;
//            for(int i=1; i <= n / 2; i+=2)
//            {
//                cout << i << " ";
//                cout << n+1 - i << " ";
//            }
//            cout << endl;
//            cout << n/2 << endl;
//            for(int i=2; i <= n / 2; i+=2)
//            {
//                cout << i << " ";
//                cout << n+1 - i << " ";
//            }
//            cout << endl;
//        }
//        else
//        {
//            cout << (n/2) + 1 << endl;
//            cout << 1 << " " << 2 << " ";
//            for(int i=4; i <= (n+3) / 2; i+=2)
//            {
//                cout << i << " ";
//                cout << n+4 - i << " ";
//            }
//            cout << endl;
//
//            cout << n/2 << endl;
//            cout << 3 << " ";
//            for(int i=5; i <= (n+3) / 2; i+=2)
//            {
//                cout << i << " ";
//                cout << n+4 - i << " ";
//            }
//            cout << endl;
//
//        }
//    }
//}