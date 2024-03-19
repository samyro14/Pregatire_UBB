#include <bits/stdc++.h>
using namespace std;


/*
Grile

1.C-3p
2.B-3p
3.A-3p
4.BD-3p
5.B-3p
6.D-3p
7.ABC-3p
8.B-3p
9.D-3p
10.C-3p
11.AC-3p
12.A-3p
13.AB-3p
14.ACD-3p
15.AB-3p
16.A-3p
17.D? corect BD-1.5P
18.B corect BD- 1.5p
19.C-3p
20.CD-3P
21.A-3P
22.BD!! -3P
23.BC - 3p
24.C -3p
25.BC -3p
26.AD - 3p
27.A - 3p
28.BC - 3p
29.BC - 3p
30.AB? - A corect => 1.02 p

Total: 95,02

*/

/*


19.
din suma numerelor impare scad suma celor pare

20.

22.
n = 4
p[] = {1, 2 , 3, 4}

A.


B.

val(1, 1, 4, x) = val(1, 2, 3, x ^ 2)  + x * val(2, 2, 4, x ^ 2)
val(1, 2, 3, x^2) = val(1, 4, 1, x^4) = 1 + x^2 * val(3, 4, 4, x^4) = 1 + 3*x^2
val(1, 4, 1, x^4) = 1

val(2, 2, 4, x ^ 2) = val(2, 4, 2, x ^ 4) + x ^ 2 * val(4, 4, 4, x ^ 4)
B corect
C. gresit
D. corect
23.
returneaza true daca a nu este prim
returneaza false daca a este prim

25.
formula este 1000 / cmmdc(k, 1000)

26.
A.
24 si 24 corect
B.
24 si ..8 gresit
C.
23 si ...4 gresit

D.
234 si 234 corect

27.

A.
produs(1092, 0) = produs(109, 2)
produs(109, 2) = strdr = 92
                strst = 10
                produs(10, 92)
produs(10, 92) = strdr = 92
                  strst = 1
                  = 920 corect



produs(75981, 0) = drcrt = 1
                    st = 7598
                    produs(7598, 1)
produs(7598, 1) = drcrt = 81
                    stcrt = 759
                produs(759, 81)
produs(759, 81) = drcrt = 981
                    stcrt = 75
                    produs(75, 981)
produs(75, 981) = drcrt = 5981
                  stcrt = 7
                 return 73575 corect


B.
produs(1092, 0) = drcrt = 2
                    st = 109
produs(109, 2) = drcrt = 9 * 100 + 2 = 902
                st = 10
produs(10, 902)  = drcrt = 902
                  stcrt = 1
gresit

C.
produs(1092, 0) = drcrt = 2
                    strct = 109

produs(109, 2) = drcrt = 9 * 10 = 90
                st = 10
produs(10, 90) = drcrt = 0
gresit

D. 
produs(1092, 0) = drcrt = 0
                st = 109 gresit


28.
c. 1 2 3 4
CORECT

29.
in primul while face log2(n) pasi
in al doilea face log4(n) pasi

=> log2(n) * log4(n) = (log2(n))^2

*/
int main(){
    for(int i = 1; i <= 30; ++i)
        cout << i << "." << "\n";

    return 0;
}
/*



*/
