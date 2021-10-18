#include <iostream>
#include <array>

using namespace std;
void C(array<string, 6> &s){
s[0]+= "     _____ " ;
s[1]+= "    |      " ;
s[2]+= "    |      " ;
s[3]+= "    |      " ;
s[4]+= "    |      " ;
s[5]+= "    |_____ " ;

}
int main()
{

    array<string, 6> screen;
    C(screen);



    for (int i=0; i<6; i++)

        cout<< screen[i]<<endl;


    return 0;
}
