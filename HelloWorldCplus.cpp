//My first C++ program
/*
#include <iostream>
using namespace std;

int main(){
cout << "Gwapa Si"; //prints Gwapa Si
cout << " Diether"; //prints Diether
return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main(){
int a(5),b(2);
int result;

a=a+3;
result=a-b;

cout<<result;
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
string myName ("Diether Catan,");
string myAge = " I'm 21 years old";
cout<<myName<<myAge;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
bool mySay(false); //0-false,1-true
string myName;
myName="Diether Catan"; //can't use ()-intialization format
string myAge("I'm 21 years old");
cout<<myName<<endl<<myAge<<endl<<mySay;
return 0;
}
*/

//octal begins with 0, hexadecimal begins with 0x

/*
#include <iostream>
using namespace std;

int main(){
long double myValue (3.3E4L);
float PI = 3.14159f;
char Letter ('d');
string mySayings ("I could love to swim \nIf I can swim");
string Location = "Left? \t Right?";

cout<<myValue<<endl<<PI<<endl<<Letter<<endl<<mySayings<<endl;
cout<<Location;
return 0;
}
*/

/*
#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main(){
double r=5.0,circle;

circle=2*PI*r;
cout<<NEWLINE<<endl<<circle;
return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main(){
const int age(12),level(13);

age=age+level;
cout<<level;
return 0; //will make an error
}*/

/*
#include <iostream>
using namespace std;

#define Age 12
#define Level 13

int main(){
int calculate(Age+Level);
const char tabular ('\t'),newline='\n';
string mySay ="My Age";

cout<<newline<<mySay<<tabular<<calculate;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int a,b,c,d;
a=2+(b=5);
c=1+2*8-3-(2+1);
d=5-1-2-1;

cout<<"a:";
cout<<a;
cout<<" b:";
cout<<b;
cout<<" c:";
cout<<c;
cout<<" d:";
cout<<d;
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int a=5,b,c=3,d;
char newline('\n');
b=a;
b+=3;
a-=2;
d=++c;

cout<<b<<newline<<a<<newline<<c<<newline<<d;
return 0;
}*/

/*
#include <iostream>
using namespace std;

#define A 5
#define B 6

int main(){
int C,e(8),f(9),g,h;

C=A==B?e:f;
g=(h=3,h+2);
cout<<C<<endl<<h<<endl<<g;
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int a;
float f(3.14);
a=int(f);
cout<<a;
return 0;
}
*/
/*#include <iostream>
using namespace std;

int main(){
int a;
a=sizeof(char);
cout<<a;
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
string fullname,age,fulladdress;
cout<<"Enter your full name: ";
getline(cin,fullname);
cout<<"Your name is "<<fullname<<".\n";
cout<<"Enter your age: ";
getline(cin,age);
cout<<"You are "<<age<<" years old.\n";
cout<<"Enter your full address: ";
getline(cin,fulladdress);
cout<<"You are living in "<<fulladdress<<".";
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int a;
char b;

cout<<"Enter your lucky number: ";
cin>>a;
cout<<"Your lucky number is "<<a<<".\n";
cout<<"Enter your middle initial name: ";
cin>>b;
cout<<"Your middle initial name is "<<b<<".";
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
string word;
cout<<"Enter your crush name: ";
getline(cin,word);
cout<<"Your crush name is "<<word<<".\n";
cout<<"Enter your words for him/her: ";
getline(cin,word);
cout<<"You say, "<<word<<" to him/her.";
return 0;
}*/

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
string mystr;
float price(0);
int quantity(0);

cout<<"Enter price: ";
getline(cin,mystr);
stringstream(mystr)>>price;
cout<<"Enter quantity: ";
getline(cin,mystr);
stringstream(mystr)>>quantity;
cout<<"Total price: "<<price*quantity<<endl;
return 0;
}*/

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
string mystr;
int presents(0),absents(0);

cout<<"Enter presents: ";
getline(cin,mystr);
stringstream(mystr)>>presents;
cout<<"Enter absents: ";
getline(cin,mystr);
stringstream(mystr)>>absents;
cout<<"Total students: "<<presents+absents<<endl;
return 0;
}*/

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
string mystr;
int x(0);

cout<<"Enter x: ";
getline(cin,mystr);
stringstream(mystr)>>x;

if(x==100)
cout<<"x is 100";
else
cout<<"x is not 100";
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int a;
cout<<"Enter number: ";
cin>>a;

if(a>0)
cout<<"a is positive";
else if(a<0)
cout<<"a is negative";
else
cout<<"a is 0";
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the starting number: ";
cin>>n;

while(n>0){
cout<<n<<", ";
--n;
}
cout<<"FIRE!\n";
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
unsigned long n;
do{
cout<<"Enter number (0 to end): ";
cin>>n;
cout<<"You entered: "<<n<<"\n";
}
while(n!=0);
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the starting number: ";
cin>>n;

for(;n>0;){
cout<<n<<", ";
--n;
}
cout<<"FIRE! \n";
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int n,i;
for(n=0,i=100;n!=i;n++,i--){
cout<<n<<"\n";
}
return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main(){
for(int n=20;n>0;n--){
cout<<n<<", ";
if(n==5){
cout<<"countdown aborted";
break;
}
}
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
for(int n=10;n>0;n--){
if(n==5) continue;
cout<<n<<", ";
}
cout<<"FIRE!\n";
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the starting number: ";
cin>>n;
loop:
cout<<n<<", ";
n--;
if(n>0) goto loop;
cout<<"FIRE! \n";
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int n(10),c;
cout<<n<<", "<<c<<endl;
void exit(int exitcode);
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
int x;
cout<<"CRUSH LIST!"<<endl<<"[0] Emmanuel"<<endl;
cout<<"[1] Gene Ethan"<<endl<<"[2] Kurt"<<endl;
cout<<"[3] Christian Carl"<<endl<<"[4] Andrey"<<endl;
cout<<"\nChoose a number of your real crush: ";
cin>>x;

switch(x){
case 0:cout<<"Your real crush name is Emmanuel!";break;
case 1:cout<<"Your real crush name is Gene Ethan!";break;
case 2:cout<<"Your real crush name is Kurt!";break;
case 3:cout<<"Your real crush name is Christian Carl!";break;
case 4:cout<<"Your real crush name is Andrey!";break;
default:cout<<"You did not choose a number";
}
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
string first,second,third,fourth,fifth;
cout<<"\nYOUR CRUSH RANKING LIST!"<<endl;
cout<<"Who is your first crush? ";
getline(cin,first);
cout<<"\nYOUR CRUSH RANKING LIST!"<<endl<<"FIRST: "<<first;
cout<<"\nWho is your second crush? ";
getline(cin,second);
cout<<"\nYOUR CRUSH RANKING LIST!"<<endl<<"FIRST: "<<first;
cout<<endl<<"SECOND: "<<second;
cout<<"\nWho is your third crush? ";
getline(cin,third);
cout<<"\nYOUR CRUSH RANKING LIST!"<<endl<<"FIRST: "<<first;
cout<<endl<<"SECOND: "<<second<<endl<<"THIRD: "<<third;
cout<<"\nWho is your fourth crush? ";
getline(cin,fourth);
cout<<"\nYOUR CRUSH RANKING LIST!"<<endl<<"FIRST: "<<first;
cout<<endl<<"SECOND: "<<second<<endl<<"THIRD: "<<third;
cout<<endl<<"FOURTH: "<<fourth;
cout<<"\nWho is your fifth crush? ";
getline(cin,fifth);
cout<<"\nYOUR CRUSH RANKING LIST!"<<endl<<"FIRST: "<<first;
cout<<endl<<"SECOND: "<<second<<endl<<"THIRD: "<<third;
cout<<endl<<"FOURTH: "<<fourth<<endl<<"FIFTH: "<<fifth<<endl;

int A,i(9),x(10);
A=i==x?2021:2022;
cout<<endl<<A;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int x(3);
switch(x){
case 1:
case 2:
case 3: cout<<"x is 1, 2 or 3";break;
default: cout<<"x is not 1, 2 nor 3";
}
return 0;
} */

/*
#include <iostream>
using namespace std;

int addition(int a,int b){
int r;
r=a+b;
return (r);
}
int main(){
int z;
z=addition(5,3);
cout<<"The result is "<<z;
return 0;
} */

/*
#include <iostream>
using namespace std;

int subtraction(int x,int y){
int a;
a=x-y;
return(a);
}
int main(){
int b;
b=subtraction(5,3);
cout<<"The result is "<<b;
return 0;
} */

/*
#include <iostream>
using namespace std;

int division(int l,int m){
int n;
n=l/m;
return (n);
}
int main(){
int o;
o=division(15,3);
cout<<"The result is "<<o;
return 0;
} */

/*
#include <iostream>
using namespace std;

int addition(int a,int b){
int r;
r=a+b;
return (r);
}

int main(){
int x=5,y=3,z;
z=addition(1,2);
cout<<"The first result: "<<z<<endl;
cout<<"The second result: "<<addition(x,y)<<endl;
cout<<"The third result: "<<addition(5,8)<<endl;
z=10-addition(x,y);
cout<<"The fourth result: "<<z<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int addition(int a,int b){
int r;
r=a+b;
return (r);
}

int subtraction(int m,int n){
int o;
o=m-n;
return (o);
}

int division(int x,int y){
int q;
q=x/y;
return (q);
}

int main(){
int no1(100),no2(50),z;
z=addition(5,5);
cout<<"The result of addition: "<<z<<endl;
cout<<"The result of subtraction: "<<subtraction(no1,no2)<<endl;
z=division(no1,5);
cout<<"The result of division: "<<z<<endl;
z=division(no1,no2)-addition(1,1);
cout<<"Another result 1: "<<z<<endl;
z=subtraction(no2,2)/2;
cout<<"Another result 2: "<<z<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int multiplication(int a,int b){
int r;
r=a*b;
return (r);
}

int main(){
int x;
x=multiplication(2,4);
cout<<"The result is "<<x<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int r(8);
char q('c');
string k("dog");

int main(){
cout<<r<<endl<<q<<endl<<k<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

void printHello(){
cout<<"Hello"<<endl;
}
void printHi(){
cout<<"Hi Crush!"<<endl;
}
int main(){
printHello();
printHi();
return 0;
} */

/*
#include <iostream>
using namespace std;

int Addition(int a,int b){
int sum;
sum=a+b;
return (sum);
}

void printADD(){
cout<<"The result is "<<Addition(2,3)<<endl;
}

int main(){
printADD();
return 0;
} */

/*
#include <iostream>
using namespace std;

void duplicate (int& a,int& b,int& c){
a*=5;
b*=5;
c*=5;
}

int main(){
int x=1,y=3,z=7;
duplicate(x,y,z);
cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

void prevnext(int x,int& prev,int& next){
prev=x+1;
next=x-1;
}

int main(){
int x=100,y,z;
prevnext(x,y,z);
cout<<"Previous = "<<y<<endl<<"Next = "<<z<<endl;
return 0;
} */ 

/*
#include <iostream>
using namespace std;

void Value(int a,int& b,int c,int& d){
b=a+a;
d=c+c;
}

int Addition(int a,int b){
int sum;
sum=a+b;
return (sum);
}

void printALL(){
cout<<"That's all!"<<endl;
} 

int main(){
int a=5,b,c=10,d,add;
Value(a,b,c,d);
cout<<"The first result is "<<b<<endl;
cout<<"The second result is "<<d<<endl;
add=Addition(a,c);
cout<<"The third result is "<<add<<endl;
printALL();
return 0;
} */

/*
#include <iostream>
using namespace std;

void Question(int& x,int a,int b){
x=a<b?2021:2022;
}

int main(){
int x,a=10,b=5;
Question(x,a,b);
cout<<"The year is "<<x<<"."<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int divide(int a,int b=2){
int r;
r=a/b;
return (r);
}

int main(){
cout<<"The first result is "<<divide(12)<<"."<<endl;
cout<<"The second result is "<<divide(20,4)<<"."<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

#define NEWLINE '\n'

int operate (int a,int b){
return (a*b);
}
float operate (float a,float b){
return (a/b);
}
int main(){
int x=5,y=2;
float n=5.0,m=2.0;
cout<<"The first result is "<<operate(x,y)<<".";
cout<<NEWLINE;
cout<<"The second result is "<<operate(n,m)<<".";
cout<<NEWLINE;
return 0;
} */

//RECURSIVITY

/*
#include <iostream>
using namespace std;

long factorial (long a){
if(a>0)
return (a*factorial(a-1));
else
return (1);
}

int main(){
long number;
cout<<"Please type a number: ";
cin>>number;
cout<<number<<"!= "<<factorial(number)<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

void odd (int a);
void even (int a);

int main(){
int i;
do{
cout<<"\nType a number (0 to exit): ";
cin>>i;
odd(i);
} while(i!=0);
return 0;
}

void odd (int a){
if((a%2)!=0)
cout<<"Number is odd!\n";
else 
even (a);
}

void even (int a){
if((a%2)==0)
cout<<"Number is even!\n";
else
odd (a);
} */
 
//Another Way

/*
#include <iostream>
using namespace std;

void oddEven(int a);

int main(){
int i;
do{
cout<<"\nEnter number (0 to exit): ";
cin>>i;
oddEven(i);
} while(i!=0);
return 0;
}

void oddEven(int a){
if((a%2)!=0)
cout<<"Number is odd.\n";
else
cout<<"Number is even.\n";
} */

//JUST TRYING

/*
#include <iostream>
using namespace std;

void odd(int a);
void even(int a);

int main(){
int i;
do{
cout<<"\nType a number (0 to exit): ";
cin>>i;
odd(i);
} while(i!=0);
return 0;
}

void odd(int a){
if((a%2)!=0)
cout<<"Number is odd.\n";
else
even(a);
}

void even(int a){
if((a%2)==0)
cout<<"Number is even.\n";
else
odd(a);
} */

//ARRAY

/*
#include <iostream>
using namespace std;

int billy[]={16,2,77,40,12071};
int n, result(0);

int main(){
for(n=0;n<5;n++){
result+=billy[n];
}
cout<<result;
return 0;
} */

//MULTIDIMENSIONAL ARRAY

/*
#include <iostream>
using namespace std;

#define WIDTH 5
#define HEIGHT 3

int jimmy[HEIGHT][WIDTH];
int n,m;

int main(){
for(n=0;n<HEIGHT;n++)
for(m=0;m<WIDTH;m++){
jimmy[n][m]=(n+1)*(m+1);
}
cout<<jimmy[0][0]<<endl;
cout<<jimmy[0][1]<<endl;
cout<<jimmy[0][2]<<endl;
cout<<jimmy[0][3]<<endl;
cout<<jimmy[0][4]<<endl;
cout<<jimmy[1][0]<<endl;
cout<<jimmy[1][1]<<endl;
cout<<jimmy[1][2]<<endl;
cout<<jimmy[1][3]<<endl;
cout<<jimmy[1][4]<<endl;
cout<<jimmy[2][0]<<endl;
cout<<jimmy[2][1]<<endl;
cout<<jimmy[2][2]<<endl;
cout<<jimmy[2][3]<<endl;
cout<<jimmy[2][4]<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

void printarray(int arg[], int length){
for(int n=0;n<length;n++){
cout<<arg[n]<<" ";
}
cout<<endl;
}

int main(){
int firstarray[]={5,10,15};
int secondarray[]={2,4,6,8,10};
printarray(firstarray,3);
printarray(secondarray,5);
return 0;
} */

//OTHER WAY

/*
#include <iostream>
using namespace std;

void printarray(int arg[], int length){
for(int n(0);n<length;n++)
cout<<arg[n]<<" ";
cout<<endl;
}

int main(){
int firstarray[]={5,10,15};
int secondarray[]={2,4,6,8,10};
printarray(firstarray,3);
printarray(secondarray,5);
return 0;
} */

//OTHER WAY

/*
#include <iostream>
using namespace std;

void printarray(int arg[],int length);

int main(){
int firstarray[]={1,2,3,4,5};
int secondarray[]={6,7,8,9,10,11,12,13,14,15};
printarray(firstarray,5);
printarray(secondarray,10);
return 0;
}

void printarray (int arg[],int length){
for(int n(0);n<length;n++)
cout<<arg[n]<<" ";
cout<<endl;
} */

/*
#include <iostream>
using namespace std;

void printarray(string arg[],int length);

int main(){
string firstarray[]={"Jason","Ethan","Michael"};
string secondarray[]={"Emmanuel","Kurt","Lawrence","Roy","Diether"};
printarray(firstarray,3);
printarray(secondarray,5);
return 0;
}

void printarray(string arg[],int length){
for(int n(0);n<length;n++)
cout<<arg[n]<<" ";
cout<<endl;
}*/

/*
#include <iostream>
using namespace std;

void printarray(string arg[],int length){
yeah:
for(int n(0);n<length;n++){
cout<<arg[n];
if(n!=(length-1))
cout<<", ";
}
cout<<endl;
}

int main(){
string firstarray[]={"Jason","Ethan","Michael"};
string secondarray[]={"Emmanuel","Kurt","Lawrence","Roy","Diether"};
printarray(firstarray,3);
printarray(secondarray,5);
return 0;
} */

/*
#include <iostream>
using namespace std;

void printarray(char arg[],int length){
for(int n(0);n<length;n++)
cout<<arg[n];
} 

void blank(){
cout<<endl;
}

int main(){
char firstarray[]={'H','E','L','L','O','\0'};
char secondarray[]={'W','O','R','L','D','!'};
printarray(firstarray,6);
printarray(secondarray,6);
blank();
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
char question[]="Please, enter your first name: ";
char greeting[]="Hello, ";
char fname[80];
cout<<question;
cin>>fname;
cout<<greeting<<fname<<"!"<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
string mystring;
char myntcs[]="Hello World!";
mystring=myntcs;
cout<<mystring<<endl;
return 0; 
} */

/*
#include <iostream>
using namespace std;

int main(){
int firstvalue, secondvalue;
int * mypointer;

mypointer = &firstvalue;
*mypointer = 10;
mypointer = &secondvalue;
*mypointer = 20;
cout<<"First value is "<<firstvalue<<endl;
cout<<"Second value is "<<secondvalue<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int firstvalue(5),secondvalue(15);
int * p1,* p2;

p1=&firstvalue;
p2=&secondvalue;
*p1=25;
*p2=*p1;
p1=p2;
*p1=50;

cout<<"First value is "<<firstvalue<<endl;
cout<<"Second value is "<<secondvalue<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int numbers[5];
int * p;
p=numbers; *p=10;
p++; *p=20;
p=&numbers[2]; *p=30;
p=numbers+3; *p=40;
p=numbers; *(p+4)=50;

for(int n(0);n<5;n++){
if(n!=4)
cout<<numbers[n]<<", ";
else
cout<<numbers[n];
}
cout<<endl;
return 0;
} */ 

/*
#include <iostream>
using namespace std;

int main(){
int numbers[5];
int * p;
p=numbers; *p=10;
p++; *p=20;
p++; *p=30;
p++; *p=40;
p++; *p=50;

for(int n(0);n<5;n++){
if(n!=4)
cout<<numbers[n]<<", ";
else
cout<<numbers[n];
}
cout<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int numbers[5];
int * p;
p=&numbers[0]; *p=10;
p=&numbers[1]; *p=20;
p=&numbers[2]; *p=30;
p=&numbers[3]; *p=40;
p=&numbers[4]; *p=50;


for(int n(0);n<5;n++){
if(n!=4)
cout<<numbers[n]<<", ";
else
cout<<numbers[n];
}
cout<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int numbers[5];
int * p;
p=numbers; *p=10;
p=numbers+1; *p=20;
p=numbers+2; *p=30;
p=numbers+3; *p=40;
p=numbers+4; *p=50;

for(int n(0);n<5;n++){
if(n!=4)
cout<<numbers[n]<<", ";
else
cout<<numbers[n];
}
cout<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int numbers[5];
int * p;
p=numbers; 
*p=10;
*(p+1)=20;
*(p+2)=30;
*(p+3)=40;
*(p+4)=50;

for(int n(0);n<5;n++){
if(n!=4)
cout<<numbers[n]<<", ";
else
cout<<numbers[n];
}
cout<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
char * terry("hello");
cout<<*terry<<*(terry+1)<<*(terry+2)<<*(terry+3);
cout<<*(terry+4)<<endl;
return 0;
} */

//TRYING

/*
#include <iostream>
using namespace std;

int main(){
int number;
int *tommy,*diether;
tommy=&number;
cout<<"How old is Terry? ";
cin>>*tommy;
cout<<"Terry is "<<number<<" years old.\n";
diether=&number;
cout<<"\nHow old is Diether? ";
cin>>*diether;
cout<<"Diether is "<<number<<" years old.\n";
return 0;
} */ 

/*
#include <iostream>
using namespace std;

int main(){
int a(10),b(20);
int *p,*q;
p=&a;
q=&b;
(*p)++;
(*q)--;
cout<<*p<<" and "<<*q<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
int numbers[5],numbers1[5];
int * p,* q;
p=numbers; *p=1;
q=numbers1; *q=10;
p++; *p=numbers[0]+1;
q++; *q=numbers1[0]+10;
p++; *p=3;
q++; *q=30;
p++; *p=4;
q++; *q=40;
p++; *p=5;
q++; *q=50;

for(int n(0);n<5;n++)
cout<<"P["<<n<<"] = "<<numbers[n]<<"\n";
cout<<endl;

for(int i(0);i<5;i++)
cout<<"Q["<<i<<"] = "<<numbers1[i]<<"\n";
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
char a;
char * b;
char ** c;
a='z';
b=&a;
c=&b;
cout<<a<<", "<<*b<<", "<<**c<<endl;
return 0;
} */ 

//VOID POINTERS

/*
#include <iostream>
using namespace std;

void increase(void* data,int psize){
if(psize==sizeof(char)){
char* pchar;
pchar=(char*)data;
++(*pchar);
}
else if(psize==sizeof(int)){
int* pint;
pint=(int*)data;
++(*pint); 
}
}

int main(){
char a('x');
int b(1602);
increase(&a,sizeof(a));
increase(&b,sizeof(b));
cout<<a<<", "<<b<<endl;
return 0;
} */

//NULL POINTER

/*
#include <iostream>
using namespace std;

int main(){
int *p;
p=0;
cout<<*p<<endl;
return 0;
} */

//POINTERS TO FUNCTIONS

/*
#include <iostream>
using namespace std; 

int addition(int a,int b){ 
return (a+b); 
}
 
int subtraction(int a,int b){ 
return (a-b); 
} 

int operation(int x, int y, int(*functocall)(int,int)){ 
int g; 
g=(*functocall)(x,y); 
return (g); 
}
 
int main(){ 
int m,n; 
int(*add)(int,int)=addition;
int(*minus)(int,int)=subtraction;
m=operation(7, 5, add); 
n=operation (20, m, minus); 
cout<<n; 
return 0; 
} */

/*
#include <iostream>
using namespace std; 

int addition(int a,int b){ 
return (a+b); 
}
 
int subtraction(int a,int b){ 
return (a-b); 
}
 
int main(){ 
int m,n; 
int(*add)(int,int)=addition;
int(*minus)(int,int)=subtraction;
m=add(7,5); 
n=minus(20,m); 
cout<<n; 
return 0; 
} */

//TRYING

/*
#include <iostream>
using namespace std;

int division(int a,int b);
int operation(int x,int y,int(*functocall)(int,int));

int main(){
int d;
int (*divide)(int,int)=division;
d=operation(30,5,divide);
cout<<d;
return 0;
}

int division(int a,int b){
return (a/b);
}

int operation(int x,int y,int (*functocall)(int,int)){
int g((*functocall)(x,y));
return (g);
} */

//OPERATORS NEW AND NEW[]

/*
#include <iostream>
#include <new>
using namespace std;

int main(){
int * bobby;
bobby = new (nothrow) int [5];
if(bobby==0){
//error assigning memory. Take measures.
};
return 0;
} */

//OPERATORS DELETE AND DELETE[]

/*
#include <iostream>
#include <new>
using namespace std; 

int main(){
int i,n,*p; 
cout<<"How many numbers would you like to type? ";
cin>>i; 
p=new (nothrow) int[i]; 
if(p==0)
cout<<"Error: memory could not be allocated.\n"; 
else{ 
for(n=0;n<i;n++){ 
cout<<"Enter number: "; 
cin>>p[n]; 
} 
cout<<"You have entered: "; 
for(n=0;n<i;n++)
if(n!=(i-1))
cout<<p[n]<<", ";
else
cout<<p[n]; 
cout<<endl;
delete[] p; 
} 
return 0; 
} */

//DATA STRUCTURES

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t{
string title;
int year;
} mine,yours;

void printmovie(movies_t movie);

int main(){
string mystr;

mine.title="2001 A Space Odyssey";
mine.year=1968;

cout<<"Enter title: ";
getline(cin,yours.title);
cout<<"Enter year: ";
getline(cin,mystr);
stringstream(mystr)>>yours.year;

cout<<"\nMy favorite movie is:\n ";
printmovie(mine);
cout<<"And yours is:\n ";
printmovie(yours);
return 0;
}

void printmovie(movies_t movie){

cout<<movie.title;
cout<<" ("<<movie.year<<") \n";
} */

//MY DATA STRUCTURES

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct sections_t{
string sectionname;
int studentnumber;
} one,two,three,four,five;

void printsection(sections_t section);

int main(){
string mystr;

cout<<"First section: ";
getline(cin,one.sectionname);
cout<<"Number of student/s: ";
getline(cin,mystr);
stringstream(mystr)>>one.studentnumber;

cout<<"\nSecond section: ";
getline(cin,two.sectionname);
cout<<"Number of student/s: ";
getline(cin,mystr);
stringstream(mystr)>>two.studentnumber;

cout<<"\nThird section: ";
getline(cin,three.sectionname);
cout<<"Number of student/s: ";
getline(cin,mystr);
stringstream(mystr)>>three.studentnumber;

cout<<"\nFourth section: ";
getline(cin,four.sectionname);
cout<<"Number of student/s: ";
getline(cin,mystr);
stringstream(mystr)>>four.studentnumber;

cout<<"\nFifth section: ";
getline(cin,five.sectionname);
cout<<"Number of student/s: ";
getline(cin,mystr);
stringstream(mystr)>>five.studentnumber;

printsection(one);
printsection(two);
printsection(three);
printsection(four);
printsection(five);
cout<<endl;

return 0;
}

void printsection(sections_t section){
cout<<"\nSection Name: "<<section.sectionname;
cout<<" ("<<section.studentnumber<<" students)";
} */

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

#define N_MOVIES 3

struct movies_t{ 
string title; 
int year; 
} films [N_MOVIES];
 
void printmovie(movies_t movie); 

int main(){ 
string mystr; 
int n; 

for(n=0;n<N_MOVIES;n++){ 
cout<<"Enter title: "; 
getline(cin,films[n].title); 
cout<<"Enter year: "; 
getline(cin,mystr); 
stringstream(mystr)>>films[n].year; 
} 
 
cout<<"\nYou have entered these movies:\n"; 
for(n=0;n<N_MOVIES;n++) 
printmovie(films[n]); 
return 0; 
} 

void printmovie(movies_t movie){ 
cout<<movie.title; 
cout<<" ("<<movie.year<<")\n"; 
} */

//POINTERS TO STRUCTURES

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t{
string title;
int year;
};

int main(){
string mystr;

movies_t amovie;
movies_t *pmovie;
pmovie=&amovie;

cout<<"Enter title: ";
getline(cin,pmovie->title);
cout<<"Enter year: ";
getline(cin,mystr);
stringstream(mystr)>>pmovie->year;

cout<<"\nYou have entered:\n";
cout<<pmovie->title;
cout<<" ("<<pmovie->year<<")\n";

return 0;
} */

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Siblings{
string name;
int age;
};

void printSiblings(Siblings inFamily);

int main(){
string mystr;

Siblings me;
Siblings *I;
Siblings you;
Siblings *him;
I=&me;
him=&you;

cout<<"Enter my name: ";
getline(cin,I->name);
cout<<"Enter my age: ";
getline(cin,mystr);
stringstream(mystr)>>I->age;

cout<<"\nEnter your name: ";
getline(cin,him->name);
cout<<"Enter your age: ";
getline(cin,mystr);
stringstream(mystr)>>him->age;

printSiblings(*I);
printSiblings(*him);
cout<<endl;
return 0;
}

void printSiblings(Siblings inFamily){
cout<<"\nName: "<<inFamily.name<<" ("<<inFamily.age;
cout<<" years old)";
} */

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Siblings{
string name;
int age;
};

struct Siblings1{
string status;
int exes;
Siblings children;
};

void printSiblings(Siblings1 inFamily);

int main(){
string mystr;

Siblings1 first;
Siblings1 *fchild;
Siblings1 second;
Siblings1 *schild;
fchild=&first;
schild=&second;

cout<<"Enter the first child name: ";
getline(cin,fchild->children.name);
cout<<"Enter his/her age: ";
getline(cin,mystr);
stringstream(mystr)>>fchild->children.age;
cout<<"Enter his/her status: ";
getline(cin,fchild->status);
cout<<"Enter his/her number of ex/es: ";
getline(cin,mystr);
stringstream(mystr)>>fchild->exes;

cout<<"\nEnter the second child name: ";
getline(cin,schild->children.name);
cout<<"Enter his/her age: ";
getline(cin,mystr);
stringstream(mystr)>>schild->children.age;
cout<<"Enter his/her status: ";
getline(cin,schild->status);
cout<<"Enter his/her number of ex/es: ";
getline(cin,mystr);
stringstream(mystr)>>schild->exes;

printSiblings(*fchild);
printSiblings(*schild);
cout<<endl;

return 0;
}

void printSiblings(Siblings1 inFamily){
cout<<"\nName: "<<inFamily.children.name<<"\nAge: "<<inFamily.children.age;
cout<<"\nMarital Status: "<<inFamily.status<<"\nNo. of Ex/es: ";
cout<<inFamily.exes;
} */

/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

#define Numbers 2

struct Siblings{ 
string name; 
int age; 
};

struct Siblings1{ 
string status; 
int exes; 
Siblings children;
}number[Numbers];
 
void printSiblings(Siblings1 inFamily); 

int main(){ 
string mystr; 
int n; 

for(n=0;n<Numbers;n++){ 
cout<<"Enter the name: "; 
getline(cin,number[n].children.name); 
cout<<"Enter the age: "; 
getline(cin,mystr); 
stringstream(mystr)>>number[n].children.age; 
cout<<"Enter the status: ";
getline(cin,number[n].status);
cout<<"Enter the number of ex/es: ";
getline(cin,mystr);
stringstream(mystr)>>number[n].exes;
} 
 
cout<<"\nYou have entered these people:\n"; 
for(n=0;n<Numbers;n++) 
printSiblings(number[n]); 
return 0; 
} 

void printSiblings(Siblings1 inFamily){ 
cout<<"\nName: "<<inFamily.children.name<<"\nAge: "; 
cout<<inFamily.children.age<<"\nMarital Status: ";
cout<<inFamily.status<<"\nNumber of Ex/es: ";
cout<<inFamily.exes<<"\n"; 
} */  

//TYPEDEF

/*
#include <iostream>
using namespace std;

int main(){
typedef string mystr;
typedef int number;
mystr name;
number age;

cout<<"Enter your full name: ";
getline(cin,name);
cout<<"Enter you age: ";
cin>>age;

cout<<"\nName: "<<name<<"\nAge: "<<age;
cout<<" years old"<<endl;
return 0;
} */
































