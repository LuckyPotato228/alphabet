
#include <iostream>
#include <array>

using namespace std;
void U(array<string, 6>& s) {
    s[0] += "|      |  ";
    s[1] += "|      |  ";
    s[2] += "|      |  ";
    s[3] += "|      |  ";
    s[4] += "\\      /  ";
    s[5] += " \\____/   ";

}
void y(array<string, 6> &s) {
    s[0] += "\\\\    //   ";
    s[1] += " \\\\  //    ";
    s[2] += "  \\\\//     ";
    s[3] += "   ||      ";
    s[4] += "   ||      ";
    s[5] += "   ||      ";
}

void Z(array<string, 6>& s)
{
    s[0] += "------ ";
    s[1] += "    /  ";
    s[2] += "   /   ";
    s[3] += "  /    ";
    s[4] += " /     ";
    s[5] += "/----- ";

}
void W(array<string, 6>& s) {
    s[0] += "\\                  / ";
    s[1] += " \\                /  ";
    s[2] += "  \\      /\\      /   ";
    s[3] += "   \\    /  \\    /    ";
    s[4] += "    \\  /    \\  /     ";
    s[5] += "     \\/      \\/      ";
}
void R(array<string, 6>& s) {
    s[0] += " __   ";
    s[1] += "|  \\  ";
    s[2] += "|__/  ";
    s[3] += "|\\    ";
    s[4] += "| \\   ";
    s[5] += "|  \\  ";
}
void t(array<string, 6>& s)
{
    s[0] += "--------- ";
    s[1] += "    |     ";
    s[2] += "    |     ";
    s[3] += "    |     ";
    s[4] += "    |     ";
    s[5] += "    |     ";

}

void o(array<string, 6>& s) {
    s[0] += "  _____     ";
    s[1] += " /      \\   ";
    s[2] += "/        \\  ";
    s[3] += "|        |  ";
    s[4] += "\\       /   ";
    s[5] += " \\_____/    ";
}

void q(array<string, 6>& s) {
    s[0] += "  ______    ";
    s[1] += " /      \\   ";
    s[2] += "|        |  ";
    s[3] += "|        |  ";
    s[4] += " \\___\\\\_/   ";
    s[5] += "      \\\\    ";
}

void L(array<string, 6>& s) {
    s[0] += "|        ";
    s[1] += "|        ";
    s[2] += "|        ";
    s[3] += "|        ";
    s[4] += "|        ";
    s[5] += "|_____   ";
}


void N(array<string, 6>& s) {
    s[0] += "||\\\\\    ||  ";
    s[1] += "|| \\\\   ||  ";
    s[2] += "||  \\\\  ||  ";
    s[3] += "||   \\\\ ||  ";
    s[4] += "||    \\\\||  ";
    s[5] += "||     \\\||  ";
}
void i(array<string, 6>& s) {
    s[0] += "___    ";
    s[1] += " |     ";
    s[2] += " |     ";
    s[3] += " |     ";
    s[4] += " |     ";
    s[5] += "_|_    ";
}
void K(array<string, 6>& s) {
    s[0] += "||  //  ";
    s[1] += "|| //   ";
    s[2] += "||//    ";
    s[3] += "||\\\\    ";
    s[4] += "|| \\\\   ";
    s[5] += "||  \\\\  ";


}
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
    s[0] += "|| \\\\     ";
    s[1] += "||  \\\\    ";
    s[2] += "||   ||   ";
    s[3] += "||   //   ";
    s[4] += "||  //    ";
    s[5] += "||_//     ";

}

void b(array<string, 6>& s) {
    s[0] += "|\\     ";
    s[1] += "|/     ";
    s[2] += "|\\     ";
    s[3] += "| \\    ";
    s[4] += "| /    ";
    s[5] += "|/     ";

}


void a(array<string, 6>& s) {
    s[0] += "     /\\\      ";
    s[1] += "    //\\\\     ";
    s[2] += "   //  \\\\    ";
    s[3] += "  //====\\\\   ";
    s[4] += " //      \\\\  ";
    s[5] += "//        \\\\ ";

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
    i(screen);
    K(screen);
    L(screen);
    N(screen);
    o(screen);
    q(screen);
    R(screen);
    t(screen);
    U(screen);
    W(screen);
    y(screen);
    Z(screen);

    for (int i = 0; i < 6; i++)
        cout << screen[i] << endl;

        return 0;
}

