//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    string str;
//    std::cin >> str;
//    int letters[26] = {0};
//    for(int i=0; i < str.length(); i++)
//    {
//        letters[str[i]-65]++;
//    }
//    string ans = "";
//    int flag = 0;
//    char middle;
//    for(int i=0; i<26;i++)
//    {
//        if (letters[i] % 2 != 0)
//        {
//            letters[i]--;
//            flag++;
//            middle = (char)(i + 65);
//        }
//    }
//    if(flag > 1)
//    {
//        cout << "NO SOLUTION";
//    }
//    else
//    {
//        if(flag == 1)
//        {
//            ans += middle;
//        }
//        string s;
//        for(int i=0; i<26; i++)
//        {
//            ans = string(letters[i]/2, (char)(i+65)) + ans + string(letters[i]/2, (char)(i+65));
//        }
//        cout << ans;
//    }
//}