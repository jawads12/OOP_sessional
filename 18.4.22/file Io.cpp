/* fropen("file path","r/w/a", stdin/stdout )

*/

#include <bits/stdc++.h>
#include <cstdio>


using namespace std;

int main ()
{
    freopen("D://206//file.txt", "r", stdin);  //r - read - stdin w - stdout
    int a, b, c;
    cin>>a>>b>>c;
    freopen("D://206//file.txt", "w", stdout);
    cout<<" "<<a<<" "<<b<<" "<<c;
//    to shift to console
    freopen("CON", "r", stdin);





}
