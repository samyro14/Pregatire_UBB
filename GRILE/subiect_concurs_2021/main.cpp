#include <bits/stdc++.h>

using namespace std;

#define pb push_back

ifstream fin("f.in");
ofstream fout("f.out");


const int maxn = 1e6 + 2;
/*
1.AB
2.B
3.A
4.C
5.B
6.C
7.D
8.B
9.ABC
10.D
11.BCD
12.
13.
14.
15.
16.
17.
18.
19.
20.
21.
22.
23.
24.
25.
26.
27.
28.
29.
30.

*/

/*
5.CE FACE? FACE SUMA ELEMENTELOR IMPARE DIN VECTORUL A[]
9. ce face? calculeaza uc(a^(b-1) * a, unde uc = ultima cifra
    A. a = 2021 b = 2021
       uc(2021^2020) = 1 
        1 * 2021 = 2021 CORECT
    C. a = 7777
       b = 2021 
       uc(7777^2020) = ?
        7777 ^ 0 = 1
        7777 ^ 1 = 7
        7777 ^ 2 = 9
        7777 ^ 3 = 3
        7777 ^ 4 = 1
        7777 ^ 5 = 7
        ...........
        pt 7777^4k = 1
           7777^(4k + 1) = 7
                          .....
            2020 / 4 = 505 + 0
            2020 % 4 = 0
            => uc(7777^2020) = 1
            1 * 7777 = 7777 corect
11. 
a = 1 b = 0
A. (a <= 0 || b >= 1) && (a <= 1) fals
B. ((b > 0) && (b < 1)) || ((a > 0) && (a < 2)) true
C. ( a <= b ) || (b <= 0) true
D. (a > 0) || (b > 0 && b < 0) || (a < 1)
      true          false           ... true
*/
int main(){


    return 0;
}

/*
task: am primit un sir de n numere, trebuie sa aflu toate posibilitatile
de numere pe care le pot obtine daca sterg n - 1 numere
daca min(an, an+1) + min(an, an+1), pleaca max(an, an+1)
daca an == an+1 este sters oricare din cele doua

fie dp[n][n]
dp[i][j] = posibilitatile de valori  obtinute pentru [i,j]





*/

