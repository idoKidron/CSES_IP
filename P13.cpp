//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int fact(int n)
//{
//    if(n == 1)
//    {
//        return 1;
//    }
//    return n*fact(n-1);
//}
//
//void printPermutations(const string& prefix, )
//
//int main()
//{
//    string s;
//    cin >> s;
//    map<int,int> combs;
//    for(int i=0; i < s.size(); i++)
//    {
//        if(combs.find(s[i]) == combs.end())
//        {
//            combs[s[i]] = 0;
//        }
//        combs[s[i]]++;
//    }
//    int numCombs = fact(s.size());
//    s.clear();
//    for(auto i=combs.begin(); i != combs.end(); i++)
//    {
//        numCombs /= fact(i->second);
//        for(int j = 0; j < i->second; j++)
//        {
//            s += i->first;
//        }
//    }
//    cout << numCombs;
//
//    while(c < )
//}