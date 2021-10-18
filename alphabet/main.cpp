#include <iostream>
#include <array>

using namespace std;
void a(array<string, 6> &s){
s[0]+= "     _______  " ;
s[1]+= "    |          " ;
s[2]+= "    |          " ;
s[3]+= "    |_______   " ;
s[4]+= "           |   " ;
s[5]+= "     ______|   " ;

}
int main()
{

    array<string, 6> screen;
    a(screen);



    for (int i=0; i<6; i++)

        cout<< screen[i]<<endl;


    return 0;
}
