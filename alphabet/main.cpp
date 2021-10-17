#include <iostream>
#include <array>

using namespace std;
void f(array<string, 6>& s) {
    s[0] += " _____ ";
    s[1] += "|      ";
    s[2] += "|___   ";
    s[3] += "|      ";
    s[4] += "|      ";
    s[5] += "|      ";
}

void h(array<string, 6>& s) {
    s[0] += "|     |   ";
    s[1] += "|     |   ";
    s[2] += "|_____|   ";
    s[3] += "|     |   ";
    s[4] += "|     |   ";
    s[5] += "|     |   ";
}

void e(array<string, 6>& s) {
    s[0] += " _____    ";
    s[1] += "|         ";
    s[2] += "|_____    ";
    s[3] += "|         ";
    s[4] += "|         ";
    s[5] += "|_____    ";

}



void d(array<string, 6>& s) {
    s[0] += "|| \\\\       ";
    s[1] += "||  \\\\      ";
    s[2] += "||   ||     ";
    s[3] += "||   //     ";
    s[4] += "||  //      ";
    s[5] += "||_//       ";

}




void a(array<string, 6>& s) {
    s[0] += "     /\\\      ";
    s[1] += "    //\\\\     ";
    s[2] += "   //  \\\\    ";
    s[3] += "  //====\\\\   ";
    s[4] += " //      \\\\  ";
    s[5] += "//        \\\\ ";

}

void b(array<string, 6>& s) {
    s[0] += "|\\     ";
    s[1] += "|/     ";
    s[2] += "|\\     ";
    s[3] += "| \\    ";
    s[4] += "| /    ";
    s[5] += "|/     ";

}


int main()
{

    array<string, 6> screen;

    a(screen);
    b(screen);

    d(screen);
    e(screen);
    f(screen);

    h(screen);


    for (int i = 0; i < 6; i++)

        cout << screen[i] << endl;





    return 0;
}
