#include <bits/stdc++.h>
using namespace std;


/*
Grile
1.A - 3.75p
2.AD - doar A, - 1.33p - ATENTIE LA INTREBARE!!SUNT INTREBAT CE SE INTAMPLA CAND i devine 2
3.AD - 3.75p
4.ABC - 3.75p
5.ABC - 3.75p
6.C - 3.75p
7.ABC, raspuns corect AC - 2.52p - ATENTIE LA RESTRICTII SI PRECIZARI! 1 <= x[i] <= 10^4 (la B sunt 0)
8.A - 3.75p
9.B - 3.75p
10.CD - 3.75p
11.BD - 3.75p
12.D - 3.75p
13.AB - 3.75p
14.AC - 3.75p
15.BD - 3.75p
16.BCD - raspuns corect AD - 0p - La c este gresit deoarece ma intereseaza numarul de cifre, nu valoarea lor
17.AC - 3.75p
18.AC - 3.75p
19.BCD - 3.75p
20. raspuns corect BD - 0p
21.AC - 3.75p
22.AD - 3.75p
23.BC - 3.75
24.BD - 3.75p

Total nota: 8.89


*/

/*
3.
n = 4
alg(3) = 4 + alg(3) = 7
alg(3) = 3

4.
A. f(308) = f(30 - 2 * 8 = 30 - 16 = 14)
f(14) = f(1 - 8 = -7)
f(-7) = f(7)
f(7) = 1
corect
B.corect
C. f(7098) = f(709 - 16 = 693)
f(693) = f(69 - 6 = 63)
f(63) = f(6 - 6 = 0)
f(0) = 1 corect
D. f(57) = f(5 - 14 = -9) gresit

5.
A. afis(1234) = afis(12) 4 = 2 4
afis(12) = afis(0) 2 corect
B.afis(1224) = afis(12) 4
afis(12) = afis(0) 2 corect
C. afis(4224) = afis(42) 4
afis(42) = afis(0) 2 corect
D. afis(4321) = afis(432)
afis(432) = afis(4) 2 gresit
6.
afisare(1000) = 1000 3000  3000 1000
afisare(1000) = 1000 afisare(3000) 1000
afisare(3000) = 3000 afisare(9000) 3000
afisare(9000);
7. ce face? returneaza true daca numerele sunt 
in sirul lui fibonacci, false altfel
100 + 535 = 635
535 + 635 = 1100 + 70 = 1170
635 + 1170 = 1805

9.
3
1 + 3 = 4 * 2 = 8
 2* (i + 1) = 2 * i + 2 = daca este prim
10.
1 2 3 2 1
ce face? returneaza true daca este palindrom

11.
ce face? calculeaza a ^ b
alg(2, 3) = 2 * alg(2, 2) = 8;
alg(2, 2) = 2 * alg(2, 1) = 4;
alg(2, 1) = 2 * alg(2, 0) = 2;
alg(2, 0) = 1;

12.
ceface(100, 2) = 2 ceface(50, 2)
cefaece(50, 2) = 2 ceface(25, 2)
ceface(25, 2) = ceface(25, 3)
ceface(25, 3) = ceface(25, 4)
ceface(25, 4) = ceface(25, 5)
ceface(25, 5) = 5 ceface(5, 5)
ceface(5, 5) = 5 

13.
ce face? returneaza un numar format din cifrele pare
ale lui n in ordine inversa
A. f(23572, 0) = p = 2, f(2357, 2)
f(2357, 2) = f(235, 2)
...22 corect
B.22 corect
C. 2
D. 242

14.
ce face? returneaza ultima cifra impara a
numarului n
cifre(15) = 5
cifre(22) = cifre(2)
cifre(2) = cifre(0)
cifre(0) = -1

15.
B. a = 11 b = 111 corect
C. a = 5678 b = 5162738
   a = 5678
   b = 2738
   c = 1028 gresit
D. a = 112233
   b = 331122
   c = 110000

16.
ce face? ceva returneaza true
daca n si m au numar egal de cifre
false altfel
cat timp m are un numar de cifre mai mic 
decat a celor lui m, vom aduna la c  1
deci la final m = m initial urmat
de c de 1
D. N = 10
   M = 2
   m = 21
   corect 
17.
ce face? este un divideEtImpera
daca s == d si numarul are diferenta cifrelor
diferita de 2 atunci returneaza 0, 1 altfel
ca sa returneze 1 trebuie ca diferenta dintre oricare doua
cifre alaturate sa fie 2

A. 1 + 1 + 0 + 1 + 1 + 0 + 1 = 5
B. 1 + 1 + 0 + 1 + 1 + 1 + 1 + 1 + 0 + 0 = 7 gresit
C. 0 + 1 + 1 + 1 + 1 + 1 + 0 + 0 + 0 + 0 = 5
D. 1 + 1 + 1 + 1 + 1 + 1 ...

19. ce face? va returna un numar 
format din cifrele pare ale lui n
in ordinea in care apar in n
B. corect
C. 2406 corect
D. corect
*/
int main(){

    return 0;
}