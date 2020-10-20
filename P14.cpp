//#include <iostream>
//
//using namespace std;
//
//long diffi(const long& sumInc, const long& sumExc, const int& i, const int& n, long* arr)
//{
//    if (i == n)
//    {
//        return abs(sumInc-sumExc);
//    }
//    return min(diffi(sumInc + arr[i], sumExc, i+1, n, arr),
//               diffi(sumInc, sumExc + arr[i], i+1, n, arr));
//
//}
//
//int main()
//{
//    long n;
//    cin >> n;
//    long arr[n];
//    for(long i=0; i<n; i++)
//    {
//        cin >> arr[i];
//    }
//    cout << diffi(0, 0, 0, n, arr);
//
//}