#include <iostream>
#include <array>

using namespace std;
void i(array<string, 6>& s) {
    s[0] += "___    ";
    s[1] += " |     ";
    s[2] += " |     ";
    s[3] += " |     ";
    s[4] += " |     ";
    s[5] += "_|_    ";

}
int main()
{
    array<string, 6> screen;
    i(screen);
    for (int i=0; i<6; i++)
        cout<< screen[i]<<endl;

    return 0;
}
