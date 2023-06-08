#include <stdio.h>
#include <string.h>
#include "prog1.h"

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1

*/

int match_ends(int n, string words[])
{
    int ugyanaz = 0;
    for (int i = 0; i < n; i++)
    {
        char c = words[i][strlen(words[i])-1];
        if (strlen(words[i]) >= 2)
        {
            if (words[i][0] == c)
            {
                ugyanaz++;
            }
            
        }
            
    }
    return ugyanaz;
    
}

int main()
{
    string szavak1[] = { "aaa", "be", "abc", "hello" };
    int szavak1_meret = 5;

    printf("\nA felteteleknek eleget tesz %d elem\n",match_ends(szavak1_meret,szavak1));
    
    for (int i = 0; i < szavak1_meret-1; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}