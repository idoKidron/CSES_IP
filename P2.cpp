//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    long long n;
//    cin >> n;
//    int temp;
//    bool binArr[n+1];
//    for(int i = 0; i < n+1; i++)
//    {
//        binArr[i] = false;
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        cin >> temp;
//        binArr[temp] = true;
//    }
//
//    for (int i = 1; i < n + 1; i++)
//    {
//        if(!binArr[i])
//        {
//            cout << i;
//        }
//    }
//}