#include <iostream>
#include <array>

using namespace std;
void R(array<string, 6>& s) {
    s[0] += " __    ";
    s[1] += "|  \\  ";
    s[2] += "|__/   ";
    s[3] += "|\\    ";
    s[4] += "| \\   ";
    s[5] += "|  \\  ";


}
int main()
{
    array<string, 6> screen;
    R(screen);
    for (int i=0; i<6; i++)
        cout<< screen[i]<<endl;

    return 0;
}
