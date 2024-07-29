//ENUMERATIONS

/*
#include <iostream>
using namespace std;

enum colors {blue,yellow,green};
enum sizes {small,medium,large};

int main(){
colors mycolor;
sizes mysize;
mycolor=blue;
mysize=medium; 

if(mycolor==blue)
cout<<"IT'S BLUE!"<<endl;
else
cout<<"IT'S NOT BLUE!"<<endl;

if(mysize==medium)
cout<<"IT'S MEDIUM!"<<endl;
else
cout<<"IT'S NOT MEDIUM!"<<endl;

return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
enum colors {blue,yellow,green};
enum sizes {small,medium,large};

colors mycolor;
mycolor=blue;
sizes mysize;
mysize=medium;

if(mycolor==blue)
cout<<"IT'S BLUE!"<<endl;
else
cout<<"IT'S NOT BLUE!"<<endl;

if(mysize==medium)
cout<<"IT'S MEDIUM!"<<endl;
else
cout<<"IT'S NOT MEDIUM!"<<endl;

return 0;
} */

//OBJECT ORIENTED PROGRAMMING

/*
#include <iostream>
using namespace std;

class CRectangle{
int x;
int y;
public:
void set_values (int,int);
int area(){
return (x*y);
}
};

void CRectangle::set_values(int a, int b){
x=a;
y=b;
}

int main(){
CRectangle rect;
rect.set_values(3,4);
cout<<"Area: "<<rect.area()<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

class AgeGap{
int yours;
int him;
public:
void ages (int,int);
int Gap(){
return (him-yours);
}
};

void AgeGap::ages(int a,int b){
yours=a;
him=b;
}

int main(){
AgeGap myage,yourage;
myage.ages(20,25);
yourage.ages(25,32);
cout<<"My age gap: "<<myage.Gap()<<" years";
cout<<endl;
cout<<"His age gap: "<<yourage.Gap()<<" years";
cout<<endl;
return 0;
} */

//CLASS CONSTRUCTOR

/*
#include <iostream>
using namespace std;

class AgeGap{
int yours,him;
public:
AgeGap (int,int);
int Gap(){
return (him-yours);
}
};

AgeGap::AgeGap(int a,int b){
yours=a;
him=b;
}

int main(){
AgeGap myage (20,25);
AgeGap yourage (25,32);
cout<<"My age gap: "<<myage.Gap()<<" years";
cout<<endl;
cout<<"His age gap: "<<yourage.Gap()<<" years";
cout<<endl;
return 0;
} */

//CONSTRUCTORS AND DESTRUCTORS

/*
#include <iostream>
using namespace std; 

class AgeGap{ 
int *yours,*him; 
public: 
AgeGap (int,int); 
~AgeGap(); 
int Gap(){
return (*him-*yours);
} 
}; 

AgeGap::AgeGap(int a,int b){ 
yours=new int; 
him=new int; 
*yours=a; 
*him=b; 
} 

AgeGap::~AgeGap(){ 
delete yours; 
delete him; 
} 

int main(){ 
AgeGap myage (20,25), yourage (25,32); 
cout<<"Your age gap: "<<myage.Gap()<<" years"<<endl; 
cout<<"His age gap: "<<yourage.Gap()<<" years"<<endl;  

return 0; 
} */

//OVERLOADING CLASS CONSTRUCTORS

/*
#include <iostream>
using namespace std;

class AgeGap{
int yours,him;
public:
AgeGap();
AgeGap (int,int);
int Gap(){
return (him-yours);
}
};

AgeGap::AgeGap(){
yours=20;
him=25;
}

AgeGap::AgeGap(int a,int b){
yours=a;
him=b;
}

int main(){
AgeGap myage,yourage (25,32);
cout<<"Your age gap: "<<myage.Gap()<<" years"<<endl;
cout<<"His age gap: "<<yourage.Gap()<<" years"<<endl;
return 0;
} */ 

//DEFAULT CONSTRUCTOR

/*
class AgeGap{
public:
int a,b,c;
void Gap(int n,int m){
a=n;
b=m;
c=b-a;
}
}; */

/*
class AgeGap{
public:
int a,b,c;
AgeGap (int n,int m){
a=n;
b=m;
}
void Gap(){
c=a*b;
}
}; */

//POINTERS TO CLASSES

/*
#include <iostream>
using namespace std;

class AgeGap{
int yours,him;
public:
void ages(int,int);
int Gap(void){
return (him-yours);
}
};

void AgeGap::ages(int a,int b){
yours=a;
him=b;
}

int main(){
AgeGap a,*b,*c;
AgeGap *d=new AgeGap[2];
b=new AgeGap;
c=&a;
a.ages (10,30);
b->ages (20,40);
d->ages (30,50);
d[1].ages (40,60);

cout<<"A - age gap: "<<a.Gap()<<" years"<<endl;
cout<<"*B - age gap: "<<b->Gap()<<" years"<<endl;
cout<<"*C - age gap: "<<c->Gap()<<" years"<<endl;
cout<<"D[0] - age gap: "<<d[0].Gap()<<" years"<<endl;
cout<<"D[1] - age gap: "<<d[1].Gap()<<" years"<<endl;

delete[] d;
delete b;
return 0;
} */

//OVERLOADING OPERATORS

/*
#include <iostream>
using namespace std;

class Scores{
public:
int x,y;
Scores () {};
Scores (int,int);
Scores operator +(Scores);
};

Scores::Scores(int a,int b){
x=a;
y=b;
}

Scores Scores::operator+(Scores param){
Scores temp;
temp.x=x+param.x;
temp.y=y+param.y;
return (temp);
}

int main(){
Scores a(4,5);
Scores b(8,7);
Scores c;
c=a+b;
cout<<c.x<<","<<c.y<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

class Scores{
public:
int x,y,z;
Scores (){
x=0,y=0,z=0; //or leave them undefined
};
Scores (int,int,int);
Scores operator +(Scores);
};

Scores::Scores(int testA,int testB,int testC){
x=testA;
y=testB;
z=testC;
}

Scores Scores::operator+(Scores param){
Scores temp;
temp.x=x+param.x;
temp.y=y+param.y;
temp.z=z+param.z;
return (temp);
}

int main(){
Scores Maricar(10,9,7);
Scores Marites(9,7,6);
Scores Marisol(8,9,5);
Scores TotalScore;
TotalScore=Maricar.operator+(Marites+Marisol);
cout<<"Total Scores:"<<endl;
cout<<"Test A: "<<TotalScore.x<<endl;
cout<<"Test B: "<<TotalScore.y<<endl;
cout<<"Test C: "<<TotalScore.z<<endl;
return 0;
} */ 

//THIS 

/*
#include <iostream>
using namespace std;

class Alpha{
public:
int letter(Alpha& param);
};

int Alpha::letter(Alpha& param){
if(&param==this)
return true;
else
return false;
}

int main(){
Alpha a;
Alpha *b=&a;
if(b->letter(a))
cout<<"yes, &a is b!"<<endl;
return 0;
} */

//TRYING

/*
#include <iostream>
using namespace std;

class Age{ 
public: 
int sameage (Age& param); 
};
 
int Age::sameage (Age& param){
if(&param==this) 
return true; 
else 
return false; 
} 

int main(){ 
Age mine; 
Age *him= &mine; 
if(him->sameage(mine)) 
cout<<"Yes, same age!"<<endl; 
return 0; 
} */

//STATIC MEMBERS

/*
#include <iostream> 
using namespace std;

class Age{
public:
static int age;
Age(){
age++;
};
~Age(){
age--;
};
};

int Age::age=0;

int main(){
Age a;
Age b[20];
Age *c=new Age;
cout<<a.age<<endl;
delete c;
cout<<Age::age<<endl;
return 0;
} */

//FRIEND FUNCTIONS

/*
#include <iostream>
using namespace std;

class Ages{
int mine, him;
public:
void ages(int,int);
int agem(){
return(mine*him);
}
friend Ages duplicate(Ages);
};

void Ages::ages(int a,int b){
mine=a;
him=b;
}

Ages duplicate(Ages ageparam){
Ages ageres;
ageres.mine=ageparam.mine*2;
ageres.him=ageparam.him*2;
return (ageres);
}

int main(){
Ages age,ageb;
age.ages(20,23);
ageb=duplicate(age);
cout<<ageb.agem()<<endl;
return 0;
} */

//FRIEND CLASS

/*
#include <iostream>
using namespace std;

class CSquare;

class CRectangle{
int width, height;
public:
int area(){
return (width*height);
}
void convert (CSquare a);
};

class CSquare{
private:
int side;
public:
void set_side (int a){
side=a;
}
friend class CRectangle;
};

void CRectangle::convert (CSquare a){
width=a.side;
height=a.side;
}

int main(){
CSquare sqr;
CRectangle rect;
sqr.set_side(4);
rect.convert(sqr);
cout<<rect.area();
return 0;
} */ 

//INHERITANCE BETWEEN CLASSES

/*
#include <iostream>
using namespace std;

class CPolygon{
protected:
int width,height;
public:
void set_values (int a,int b){
width=a;
height=b;
}
};

class CRectangle: public CPolygon{
public:
int area(){
return (width*height);
}
};

class CTriangle: public CPolygon{
public:
int area(){
return (width*height/2);
}
};

int main(){
CRectangle rect;
CTriangle trgl;
rect.set_values (4,5);
trgl.set_values (4,5);
cout<<rect.area()<<endl;
cout<<trgl.area()<<endl;
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

class Age{
protected:
int day,month;
public:
void setvalues(int a,int b){
day=a;
month=b;
}
};

class Boy:public Age{
public:
int year(){
int sumday,summonth;
sumday=day/30;
summonth=(month+sumday)/12;
return (summonth);
}
};

class Girl:public Age{
public:
int year(){
int sumday,summonth;
sumday=day/30;
summonth=(month+sumday)/12;
return (summonth);
}
};

int main(){
Boy male;
Girl female;
male.setvalues (365,24);
female.setvalues (730,48);
cout<<"Male Age: "<<male.year()<<endl;
cout<<"Female Age: "<<female.year()<<endl;
return 0;
} */

//STRUCT

/*
#include <iostream>
using namespace std;

struct Age{
int day,month;
void setvalues(int a,int b){
day=a;
month=b;
}
};

struct Boy: Age{
int year(){
int sumday,summonth;
sumday=day/30;
summonth=(month+sumday)/12;
return (summonth);
}
};

struct Girl: Age{
int year(){
int sumday,summonth;
sumday=day/30;
summonth=(month+sumday)/12;
return (summonth);
}
};

int main(){
Boy male;
Girl female;
male.setvalues (365,24);
female.setvalues (730,48);
cout<<"Male Age: "<<male.year()<<" years old"<<endl;
cout<<"Female Age: "<<female.year()<<" years old"<<endl;
return 0;
} */

//CONSTRUCTORS AND DERIVED CLASSES

/*
#include <iostream>
using namespace std;

class mother{
public:
mother(){
cout<<"mother: no parameters\n";
}
mother(int a){
cout<<"mother: int parameter\n";
}
};

class daughter: public mother{
public:
daughter(int a){
cout<<"daughter: int parameter\n"<<endl;
}
};

class son: public mother{
public:
son(int a): mother(a){
cout<<"son: int parameter\n"<<endl;
}
};

int main(){
daughter diether (0);
son aldrin (0);
return 0;
} */

//MULTIPLE INHERITANCE

/*
#include <iostream>
using namespace std;

class CPolygon{
protected:
int width, height;
public:
void set_values(int a,int b){
width=a;
height=b;
}
};

class COutput{
public:
void output(int i);
};

void COutput::output(int i){
cout<<i<<endl;
}

class CRectangle: public CPolygon, public COutput{
public:
int area(){
return (width*height);
}
};

class CTriangle: public CPolygon, public COutput{
public:
int area(){
return (width*height/2);
}
};

int main(){
CRectangle rect;
CTriangle trgl;
rect.set_values (4,5);
trgl.set_values (4,5);
rect.output (rect.area());
trgl.output (trgl.area());
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

class Age{
protected:
int day,month;
public:
void setvalues(int a,int b){
day=a;
month=b;
}
};

class Output{
public:
void output(int i);
};

void Output::output(int i){
cout<<i<<" years old"<<endl;
}

class Diether: public Age, public Output{
public:
int Year(){
int sumday,summonth;
sumday=day/30;
summonth=(sumday*month)/12;
return (summonth);
}
};

class Aldrin: public Age, public Output{
public:
int Year(){
int sumday,summonth;
sumday=day/30;
summonth=(sumday*month)/12;
return (summonth);
}
};

int main(){
Diether dtr;
Aldrin ald;
dtr.setvalues(678,56);
ald.setvalues(1923,78);
dtr.output (dtr.Year());
ald.output (ald.Year());
return 0;
} */

//TRIAL1

/*
#include <iostream>
using namespace std;

class Polygon{
protected:
int width,height;
public:
void set_values(int a,int b){
width=a;
height=b;
}
};

class Output{
public:
void output(int i);
};

void Output::output(int i){
if(i==20)
cout<<"The value of Rectangle is "<<i<<"."<<endl;
else if(i==10)
cout<<"The value of Triangle is "<<i<<"."<<endl;
}

class Rectangle:public Polygon,public Output{
public:
int Area(){
return (width*height);
}
};

class Triangle:public Polygon,public Output{
public:
int Area(){
return (width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
rect.set_values (4,5);
trgl.set_values (4,5);
rect.output(rect.Area());
trgl.output(trgl.Area());
return 0;
} */


//POINTERS TO BASE CLASS

/*
#include <iostream>
using namespace std;

class Polygon{
protected:
int width,height;
public:
void setvalues(int a,int b){
width=a;
height=b;
}
};

class Rectangle:public Polygon{
public:
int Area(){
return (width*height);
}
};
 
class Triangle:public Polygon{
public:
int Area(){
return (width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
Polygon *poly1=&rect;
Polygon *poly2=&trgl;
poly1->setvalues(4,5);
poly2->setvalues(4,5);
cout<<rect.Area()<<endl;
cout<<trgl.Area()<<endl;
return 0;
} */

//MULTIPLE INHERITANCE AND POINTERS

/*
#include <iostream>
using namespace std;

class Age{
protected:
int day,month;
public:
void setvalues(int a,int b){
day=a;
month=b;
}
};

class Output{
public:
void output(int i);
};

void Output::output(int i){
if(i<=1)
cout<<i<<" year old"<<endl;
else
cout<<i<<" years old"<<endl;
}

class Daughter:public Age,public Output{
public:
int Year(){
int sumday,summonth;
sumday=day/30;
summonth=(sumday+month)/12;
return (summonth);
}
};

class Son:public Age,public Output{
public:
int Year(){
int sumday,summonth;
sumday=day/30;
summonth=(sumday+month)/12;
return (summonth);
}
};

int main(){
Daughter diether;
Son aldrin;
Age *trans=&diether;
Age *straight=&aldrin;
trans->setvalues(468,32);
straight->setvalues(619,54);
diether.output(diether.Year());
aldrin.output(aldrin.Year());
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

class Age{
protected:
int day,month;
public:
void setvalues(int a,int b){
day=a;
month=b;
}
virtual int Year(){
return (0);
}
void output(int i){
i=Year();
if(i<=1)
cout<<i<<" year old."<<endl;
else
cout<<i<<" years old."<<endl;
}
};

class Daughter:public Age{
public:
int Year(){
int sumday,summonth;
sumday=day/30;
summonth=(sumday+month)/12;
return (summonth);
}
};

class Son:public Age{
public:
int Year(){
int sumday,summonth;
sumday=day/30;
summonth=(sumday+month)/12;
return (summonth);
}
};

int main(){
Daughter diether;
Son aldrin;
Age number;
Age *trans=&diether;
Age *straight=&aldrin;
Age *lesbian=&number;
trans->setvalues(468,32);
straight->setvalues(619,54);
lesbian->setvalues(982,89);
trans->output(trans->Year());
straight->output(straight->Year());
lesbian->output(lesbian->Year());

return 0;
} */

//VIRTUAL MEMBERS

/*
#include <iostream>
using namespace std;

class Polygon{
protected:
int width,height;
public:
void setvalues(int a,int b){
width=a;
height=b;
}
virtual int Area(){
return (0);
}
};

class Rectangle:public Polygon{
public:
int Area(){
return (width*height);
}
};

class Triangle:public Polygon{
public:
int Area(){
return (width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
Polygon poly;
Polygon *poly1=&rect;
Polygon *poly2=&trgl;
Polygon *poly3=&poly;
poly1->setvalues(4,5);
poly2->setvalues(4,5);
poly3->setvalues(4,5);
cout<<"The value of Rectangle is "<<poly1->Area()<<"."<<endl;
cout<<"The value of Triangle is "<<poly2->Area()<<"."<<endl;
cout<<"The values of Polygon is "<<poly3->Area()<<"."<<endl;
return 0;
} */

//ABSTRACT BASE CLASSES

/*
#include <iostream>
using namespace std;

class Polygon{
protected:
int width,height;
public:
void setvalues(int a,int b){
width=a;
height=b;
}
virtual int Area(void) =0;
};

class Rectangle:public Polygon{
public:
int Area(void){
return (width*height);
}
};

class Triangle:public Polygon{
public:
int Area(void){
return (width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
Polygon *poly1=&rect;
Polygon *poly2=&trgl;
poly1->setvalues (4,5);
poly2->setvalues (4,5);
cout<<"The value of Rectangle is: "<<poly1->Area()<<endl;
cout<<"The value of Triangle is: "<<poly2->Area()<<endl;
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

struct Polygon{
int width,height;
void setvalues(int a,int b){
width=a;
height=b;
}
virtual int Area(void) =0;
};

struct Rectangle:Polygon{
int Area(void){
return (width*height);
}
};

struct Triangle:Polygon{
int Area(void){
return (width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
Polygon *poly1=&rect;
Polygon *poly2=&trgl;
poly1->setvalues(4,5);
poly2->setvalues(4,5);
cout<<"The value of Rectangle: "<<poly1->Area()<<endl;
cout<<"The value of Triangle: "<<poly2->Area()<<endl;
return 0;
} */ 

//PURE VIRTUAL MEMBERS CAN BE CALLED
//FROM THE ABSTRACT BASE CLASS

/*
#include <iostream>
using namespace std;

class Polygon{
protected:
int width,height;
public:
void setvalues(int a,int b){
width=a;
height=b;
}
virtual int Area(void) =0;
void printarea(void){
if(this->Area()==20)
cout<<"The value of Rectangle: "<<this->Area()<<endl;
else if(this->Area()==10)
cout<<"The value of Triangle: "<<this->Area()<<endl;
else
cout<<"None!"<<endl;
}
};

class Rectangle:public Polygon{
public:
int Area(void){
return(width*height);
}
};

class Triangle:public Polygon{
public:
int Area(void){
return(width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
Polygon *poly1=&rect;
Polygon *poly2=&trgl;
poly1->setvalues(4,5);
poly2->setvalues(4,5);
poly1->printarea();
poly2->printarea();
return 0;
} */

/*
#include <iostream>
using namespace std;

struct Polygon{
int width,height;
void setvalues(int a,int b){
width=a;
height=b;
}
virtual int Area() =0;
void printarea(){
if(this->Area()==20)
cout<<"The value of Rectangle: "<<this->Area()<<endl;
else if(this->Area()==10)
cout<<"The value of Triangle: "<<this->Area()<<endl;
else
cout<<"None!"<<endl;
}
};

struct Rectangle:Polygon{
int Area(){
return(width*height);
}
};

struct Triangle:Polygon{
int Area(){
return(width*height/2);
}
};

int main(){
Rectangle rect;
Triangle trgl;
Polygon *poly1=&rect;
Polygon *poly2=&trgl;
poly1->setvalues(4,5);
poly2->setvalues(4,5);
poly1->printarea();
poly2->printarea();
return 0;
} */

//DYNAMIC ALLOCATION AND POLYMORPHISM

/*
#include <iostream>
using namespace std;

class Polygon{
protected: 
int width,height;
public:
void setvalues(int a,int b){
width=a;
height=b;
}
virtual int Area() =0;
void printarea(){
if(this->Area()==20)
cout<<"The value of Rectangle: "<<this->Area()<<endl;
else if(this->Area()==10)
cout<<"The value of Triangle: "<<this->Area()<<endl;
else
cout<<"None!"<<endl;
}
};

class Rectangle:public Polygon{
public:
int Area(){
return(width*height);
}
};

class Triangle:public Polygon{
public:
int Area(){
return(width*height/2);
}
};

int main(){
Polygon *poly1=new Rectangle;
Polygon *poly2=new Triangle;
poly1->setvalues(4,5);
poly2->setvalues(4,5);
poly1->printarea();
poly2->printarea();
delete poly1;
delete poly2;
return 0;
} */

//FUNCTION TEMPLATE

/*
#include <iostream>
using namespace std;

template <class T>
T GetMax(T a,T b){
T result;
result=(a>b)?a:b;
return (result);
}

int main(){
int i(5),j(6),k;
long l(10),m(5),n;
k=GetMax<int>(i,j); //you can remove <int>
n=GetMax<long>(l,m); //you can remove <long>
cout<<k<<endl;
cout<<n<<endl;
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

template<class E>
E GetMax(E a, E b){
E eldest;
eldest=(a>b)?a:b;
return(eldest);
} 

template<class Y>
Y GetMin(Y a,Y b){
Y youngest;
youngest=(a<b)?a:b;
return(youngest);
}

int main(){
int diether(20),aldrin(23),older,younger;
older=GetMax<int>(diether,aldrin);
if(older==23){
cout<<"The eldest son of Editha is Aldrin - aged "<<older;
cout<<"."<<endl;
}else{
cout<<"The eldest son of Editha is Diether - aged "<<older;
cout<<endl;
}
younger=GetMin<int>(diether,aldrin);
if(younger==20){
cout<<"The youngest son of Editha is Diether - aged "<<younger;
cout<<"."<<endl;
}else{
cout<<"The youngest son of Editha is Aldrin - aged "<<younger;
cout<<endl;
}
return 0;
} */

/*
#include <iostream> 
using namespace std;

template<class E, class Y>
E GetMax(E a,Y b){
E elder;
elder=(a>b)?a:b;
return(elder);
}

int main(){
int elder,aldrin(23);
long diether(20.0);
elder=GetMax<int,long>(aldrin,diether); //you can remove <int,long>
if(elder==23)
cout<<"The eldest son is Aldrin("<<elder<<").\n"; 
else
cout<<"The eldest son is Diether("<<elder<<").\n";
return 0;
} */

//CLASS TEMPLATES

/*
#include <iostream>
using namespace std;

template <class T>
class mypair{
T a,b;
public:
mypair(T first, T second){
a=first;
b=second;
} 
T getmax();
};

template <class T>
T mypair<T>::getmax(){
T retval;
retval=a>b?a:b;
return retval;
}

int main(){
mypair <int> myobject(100,75);
cout<<myobject.getmax()<<endl;
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

template <class AGE>
class ourage{
AGE aldrin,diether;
public:
ourage(AGE first,AGE second){
aldrin=first;
diether=second;
}
AGE getolder();
};

template <class AGE>
AGE ourage<AGE>::getolder(){
AGE compare;
compare=aldrin>diether?aldrin:diether;
return compare;
}

int main(){
ourage <int> older(23,20);
if(older.getolder()==23)
cout<<"ALDRIN (aged "<<older.getolder()<<") is the eldest son!\nDIETHER (aged 20) is the youngest son!\n";
else if(older.getolder()==20)
cout<<"DIETHER (aged "<<older.getolder()<<") is the eldest son!\nALDRIN (aged 23) is the youngest son!\n";
else
cout<<"ERROR, TRY AGAIN!!!";
return 0;
} */

//TEMPLATE SPECIALIZATION

/*
#include <iostream>
using namespace std;

template <class T>
class mycontainer{
T element;
public:
mycontainer(T arg){
element=arg;
}
T increase(){
return ++element;
}
};

template <>
class mycontainer <char>{
char element;
public:
mycontainer (char arg){
element=arg;
}
char uppercase(){
if((element>='a')&&(element<='z'))
element+='A'-'a';
return element;
}
};

int main(){
mycontainer<int> myint(20);
mycontainer<char> mychar('d');
cout<<"I'M TURNING "<<myint.increase()<<" THIS NOV!\n";
cout<<
"MY NAME IS "<<mychar.uppercase()<<"IETHER!\n"; 
return 0;
} */

//TRIAL

/*
#include <iostream>
using namespace std;

template <class T>
class mycontainer{
T element;
public:
mycontainer (T arg){
element=arg;
}
T increase(){
return ++element;
}
}; 

template <>
class mycontainer <char>{
char element;
public:
mycontainer(char arg){
element=arg;
}

char uppercase(){
if((element>='a')&&(element<='z'))
element+='A'-'a';
return element;
}
}; 

int main(){
mycontainer<int> myint(20);
mycontainer<char> mychar('l');
cout<<myint.increase()<<endl;
cout<<mychar.uppercase()<<endl;
return 0;
} */

//SEQUENCE TEMPLATE

/*
#include <iostream>
using namespace std;

template <class T, int N>
class mysequence{
T memblock [N];
public:
void setmember(int x, T value);
T getmember(int x);
}; 

template <class T,int N>
void mysequence<T,N>::setmember(int x,T value){
memblock[x]=value;
}

template <class T, int N>
T mysequence<T,N>::getmember(int x){
return memblock[x];
}

int main(){
mysequence <int,5> myints;
mysequence <double,5> myfloats;
myints.setmember(0,100);
myfloats.setmember(3,3.1416);
cout<<myints.getmember(0)<<endl;
cout<<myfloats.getmember(3)<<endl;
return 0;
} */

//NAMESPACES

/*
#include <iostream>
using namespace std;

namespace diether{
string fullname("Diether Catan");
int age(20);
}

namespace aldrin{
string fullname("Aldrin Catan");
int age(23);
}

int main(){
cout<<"Youngest son: "<<diether::fullname;
cout<<" (aged "<<diether::age<<")"<<endl;
cout<<"Eldest son: "<<aldrin::fullname;
cout<<" (aged "<<aldrin::age<<")"<<endl;
return 0;
} */

//USING

/*
#include <iostream>
using namespace std;

namespace Edith{
int Age(40);
string Status("It's Complicated");
}

namespace Diether{
int Age(20);
string Status("Single");
}

namespace Aldrin{
int Age(23);
string Status("In Relationship");
}

int main(){
using namespace Edith;
cout<<"Edith Delapena Catan\n"<<"Age: "<<Age<<endl;
cout<<"Status: "<<Status<<endl<<endl;
using Diether::Age;
using Diether::Status;
cout<<"Diether Catan\n"<<"Age: "<<Age<<endl;
cout<<"Status: "<<Status<<endl;
cout<<"\nAldrin Catan\n"<<"Age: "<<Aldrin::Age;
cout<<"\nStatus: "<<Aldrin::Status<<endl;
return 0;
} */

//USING NAMESPACE EXAMPLE

/*
#include <iostream>
using namespace std;

namespace Gwapa{
string Name("Diether");
} 

namespace Gwapo{
string Name("Aldrin");
}

namespace Diether{
int Age(20);
string Status("Single");
}

namespace Aldrin{
int Age(23);
string Status("In Relationship");
}

int main(){
{
using namespace Gwapa;
cout<<"Gwapa is "<<Name<<endl;
}
{
using Diether::Age;
using Diether::Status;
cout<<"Diether's Age: "<<Age<<endl;
cout<<"Diether's Status: "<<Status<<endl<<endl;
}
{
using namespace Gwapo;
cout<<"Gwapo is "<<Name<<endl;
}
{
using Aldrin::Age;
using Aldrin::Status;
cout<<"Aldrin's Age: "<<Age<<endl;
cout<<"Aldrin's Status: "<<Status<<endl;
}
return 0;
} */

/*
#include <iostream>
using namespace std;

void sayHi(string Name, int Age){
cout<<"Hello! My name is"<<Name<<" and I'm "<<Age<<" years old!"<<endl;
}

int main(){
sayHi("Diether",20);
return 0;
} */

/*
#include <iostream>
using namespace std;

void sayHi(string Name, int Age);

int main(){
sayHi("Diether",20);
return 0;
}

void sayHi(string Name, int Age){
cout<<"Hello! My name is"<<Name<<" and I'm "<<Age<<" years old!"<<endl;
} */

/*
#include <iostream>
using namespace std;

double cube(double num){
return (num*num*num);
}

int main(){
cout<<cube(20);
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
bool isMale(false);
if(isMale)
cout<<"You are a male!"<<endl;
else
cout<<"You are a female!"<<endl;
return 0;
}*/

//EXCEPTIONS

/*
#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception
{
virtual const char* what() const throw(){
return "My exception happened";
}
} myex;

int main(){
try 
{
throw myex;
}
catch (exception& e)
{
cout<<e.what()<<endl;
}
return 0;
} */

/*
#include <iostream>
#include <exception>
using namespace std;

int main(){
try
{
int* myarray= new int[1000];
}
catch (exception& e)
{
cout<<"Standard exception: "<<e.what()<<endl;
}
return 0;
} */

//TYPE CASTING

/*
#include <iostream>
using namespace std;

class Amount{
float c,d;
};

class CalAge{
int x,y;
public:
CalAge(int a,int b){
x=a; y=b;
}
int result(){
return x+y;
}
};

int main(){
Amount e;
CalAge* padd;
padd=(CalAge*) &e;
cout<<padd->result();
return 0;
} */

//DYNAMIC CAST

/*
class CBase { }; 
class CDerived: public CBase { }; 
CBase b; CBase* pb; 
CDerived d; CDerived* pd; 
pb = dynamic_cast<CBase*>(&d); // ok: derived-to-base
pd = dynamic_cast<CDerived*>(&b); // wrong: base-to-derived 
*/

/*
#include <iostream>
#include <exception>
using namespace std; 
class CBase { virtual void dummy() {} }; 
class CDerived: public CBase { int a; }; 
int main () { 
 try { 
 CBase * pba = new CDerived; 
 CBase * pbb = new CBase; 
 CDerived * pd; 
 pd = dynamic_cast<CDerived*>(pba); 
 if (pd==0) cout << "Null pointer on first type-cast" << endl; 
 pd = dynamic_cast<CDerived*>(pbb); 
 if (pd==0) cout << "Null pointer on second type-cast" << endl; 
 } catch (exception& e) {cout << "Exception: " << e.what();} 
 return 0; 
} */

//STATIC CAST

/*class CBase {}; 
class CDerived: public CBase {}; 
CBase * a = new CBase; 
CDerived * b = static_cast<CDerived*>(a);*/

//REINTERPRET CAST

/*class A {}; 
class B {}; 
A * a = new A; 
B * b = reinterpret_cast<B*>(a); */

//CONST CAST

/*
#include <iostream>
using namespace std;

void print (char * str)
{
cout<<str<<endl;
}

int main(){
const char * c="Sample Text";
print(const_cast<char *>(c) );
return 0;
} */

/*
#include <iostream>
using namespace std;

void print (char * name){
cout<<"Name: "<<name<<endl;
}

void print1 (char * age){
cout<<"Age: "<<age<<endl;
}

int main(){
const char * myname("Diether D. Catan");
const char * myage("Twenty-one");
print(const_cast<char*>(myname));
print1(const_cast<char*>(myage));
return 0;
} */

//TYPEID

/*
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
int *diether,aldrin;
diether=0; aldrin=0;
if(typeid(diether)!=typeid(aldrin)){
cout<<"diether and aldrin are of different types:"<<endl;
cout<<"diether is: "<<typeid(diether).name()<<endl;
cout<<"aldrin is:"<<typeid(aldrin).name()<<endl;
}
return 0;
} */

//with polymorphic class
/*
#include <iostream>
#include <typeinfo>
#include <exception>
using namespace std; 
class CBase { virtual void f(){} }; 
class CDerived : public CBase {}; 
int main () { 
 try { 
 CBase* a = new CBase; 
 CBase* b = new CDerived; 
 cout << "a is: " << typeid(a).name() << '\n'; 
 cout << "b is: " << typeid(b).name() << '\n'; 
 cout << "*a is: " << typeid(*a).name() << '\n'; 
 cout << "*b is: " << typeid(*b).name() << '\n'; 
 } catch (exception& e) { cout << "Exception: " << e.what() << endl; 
} 
 return 0; 
} */
//If the type typeid evaluates is a pointer preceded by 
//the dereference operator (*), and this pointer has a 
//null value, typeid throws a bad_typeid exception. 

//OUTPUT
/*
a is: class CBase * 
b is: class CBase * 
*a is: class CBase 
*b is: class CDerived 
*/





