#include <bits/stdc++.h>

using namespace std;

#define pb push_back

ifstream fin("f.in");
ofstream fout("f.out");


const int maxn = 1e6 + 2;
/*
1.AB- 3p
2.B-3p 
3.A-3p
4.C-3p
5.B-3p
6.C-3p
7.D-3p
8.B-3p
9.ABC-3p
10.D-3p
11.BCD-3p
12.D-3p
13.B-3p
14.D-3p
15.AC-3p
16.ACD- doar C=> 0 puncte
17.B-3p
18.A-3p
19.B-3p
20.AC-3p
21.BD-3p
22.B-3p
23.C-3p
24.BD-3p
25.D, corect ABD=> 1 punct
26.D- corect AD=> 1,5 puncte
27.B- corect BD=> 1,5 puncte
28.BCD- corect B => 0 puncte
29.C-3p
30.B-3p

Total punctaj = 79 + 10 oficiu = 89
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

12.
A.
returneaza suma elementelor de pe diagonala principala
B. returneaza suma elementelor de pe diagonala principala
C. returneaza suma elementelor de pe diagonala principala
D. returneaza 0 diferit

13. va returna primul m care este divizibil cu b, m = a initial
B-corect
14.
f(4) = 4f(3)4
f(3) = 3f(2)3
f(2) = 2f(1)2
f(1) = 1f(0)1
f(0) = 0
=> 432101234
15. 232(x) <= 67(10)
    baza minima este 4
    incercam cu  x = 5
    232(5) <= 67(10)

    232 = 2 * 5^2 + 3 * 5^1 + 2 * 5^2
        = 2 + 15 + 50 = 50 + 17 = 67
    => AC
16.
exemple:
1. 1 2 0 0 3 0
2. 0 0 0 1 2 3
3. 1 2 3 0 0 0
A. - corect
B. gresit
C. corect
D. corect   
17.B
1
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
1 = [1,1]
2 = [2, 3]
3 = [4, 6] 
4 = [7, 10]

pozitia pe care se termina x este x * (x + 1)/2
21 * 22 / 2 = 21 * 11 = 210 + 21 = 231
18.
 daca a > b
    returneaza f(a - b * b, (a - b)^2)
else returneaza f(b - a * a, (a - b)^2)

f(f(3, 2), f(2, 3))
f(3, 2) = FMI f(-1, 1)
f(-1, 1) = FMI f(0, 0)
f(0, 0) = FMI 1
f(2, 3) = FMI f(-1, 1) 
f(-1, 1) = FMI (0, ) 
f(0, ...) = FMI
f(1, 1) = FMI f(0,)
f(0, ..) = FMI

19.
 ce face? returneaza suma divizorilor lui n
 pentru ceface(n, 2) va face suma divizorilor
 lui n fara 1 si n, adica suma divizorilor proprii

20.
ce face? returneaza adevarat daca numarul e 
se afla in sirul T[].
daca e este par il va cauta binar
daca e este impar il va cauta secvential

21.
formula
....* 
...*.*
..*...*
.*.....*
*.*.*.*.*

5 + 6 + 7 + 8 + 9 = 1 + 2 + 3 + 4 + 5 +...+9 - (1 + 2 + 3 + 4)
9 * 10 / 2 - (4 * 5 / 2)
45 - 10 = 35

m = 2n - 1
m2 = n - 1
total de . si *: (2n - 1)*n - (n - 1) * n / 2
total de * = 3*(n - 1)
total de . = (2n - 1)n - (n - 1) * n / 2 - 3(n - 1)
A. n = 2
  3 de *
  3*2 - 1 - 3 = 6 - 4 = 2 de .
  3 + 2 = 5
  3*2 - (1)*2/2 = 6 - 1 = 5 
  => A gresit
B. n = 7
   total: 13*7 - 7 * 3 = 7(13 - 3) = 7 * 10 = 70
   total de * = 3 * 6 = 18
   => B corect
C. gresit
D. n = 15
 total = 29 * 15 - 7 * 15
      = 15(29 - 7) = 15 * 22 = 
      220 + 5 * 22 = 220 + 110 = 330
    total de * = 3 * 14 = 42
    => D corect

24.
1 2 3 4 5 6 7 

k = 4
B. j = 1...4
 j = 1: 1
 j = 2: 1 + 1 = 2
 j = 3: 2 * 6 / 4 + 1 = 4
 j = 4: 18 / 4 + 1 = 5
B-corect
D. j = 1: 1 corect
   j = 2: 10 / 4 = 2
   j = 3: 12 + 4 / 4 = 4
   j = 4:
25. 
9 = 2^3 + 2^0
 9(10) = 1001(2)
1 - 0 + 0 - 1 - 1 = -1 
18 = 2^4 + 2^2
10100
0 - 0 + 1 - 0 + 1 + 1 = 3
5 = 2^2 + 2^0



26.


27.
X(A2) = numarul minim de celule pe care trebuie
sa le calculez inainte de celula A2

A2 = B1 + B2 => 2 celule
B1 = B3 + D3 => 2 celule
B3 = 11
D3 = D2 + 2 => 1 celula
D2 = 2
B2 = D3 + 11, D3 am calculat deja
=> X(A2) = 5
Y(A2) = numarul maxim de celule pot fi calculate
fara a cunoaste valorea din celula i
Y(A2) = 13

28.
fractie trebuie sa determine cel mai mare divizor
comun a lui nr si num


29.
1 1 2 3 5 8
f(4) = aici f(3) + f(2)
f(3) = aici f(2) + f(1)
f(2) = aici f(1) + f(0)
f(2) = aici f(1) + f(0)

f(5) = aici f(4) + f(3)
f(4) = aici f(3) + f(2)
f(3) = aici f(2) + f(1)
f(2) = aici f(1) + f(0)


f(3) = aici f(2) + f(1)
f(2) = aici f(1) + f(0)
30. e(x) = a0 + a1*x + a2*x^2 + a3*x^3 + a5*x^5
    e(x) = a0 + x(a1 + a2*x + a3*x^2 + a5*x^4)
         = a0 + x(a1 + x(a2 + a3 * x + a5*x^3))
         = a0 + x(a1 + x(a2 + x(a3 + a5*x^2)))
         => 5 inmultiri
*/

int main(){
    

    return 0;
}

/*
-nunta1
task: am primit un sir de n numere, trebuie sa aflu toate posibilitatile
de numere pe care le pot obtine daca sterg n - 1 numere
daca min(an, an+1) + min(an, an+1), pleaca max(an, an+1)
daca an == an+1 este sters oricare din cele doua

fie dp[n][n]
dp[i][j] = posibilitatile de valori  obtinute pentru [i,j]





*/

