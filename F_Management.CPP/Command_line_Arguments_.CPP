// Program to Copy a File using Command-line Arguments

#include <fstream.h>
#include <process.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "\nFormat: copy source dest";
        exit(1);
    }

    ifstream in(argv[1], ios::binary);
    if (!in)
    {
        cerr << "\ncan't open Source file.";
        exit(1);
    }

    ofstream out(argv[2], ios::binary);
    if (!out)
    {
        cerr << "\ncan't open Destination file.";
        exit(1);
    }

    char ch;
    while (in.get(ch))
        out.put(ch);

    in.close();
    out.close();
}
