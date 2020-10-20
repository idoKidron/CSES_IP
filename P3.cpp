//#include <iostream>
//using namespace std;
//
//int main()
//{
//    string dna;
//    std::cin >> dna;
//    char last = dna[0];
//    int cur = 1;
//    int m = 1;
//    for(int i=1; i< dna.length(); i++)
//    {
//        if(dna[i] == last)
//        {
//            cur++;
//        }
//        else
//        {
//            last = dna[i];
//            m = max(m, cur);
//            cur = 1;
//        }
//    }
//
//    m = max(m, cur);
//    cout << m << endl;
//}