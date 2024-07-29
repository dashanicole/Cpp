//DEFINE

/*
#include <iostream>
using namespace std;
#define r 21
int main(){
cout<<r<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

#define getmax(a,b) ((a)>(b)?(a):(b))

int main(){
int x(5),y(getmax(2,x));
cout<<y<<endl;
cout<<getmax(7,x)<<endl;
return 0;
} */

//TRIAL
/*
#include <iostream>
using namespace std;

#define givenum(x,y) ((x)>(y)?(x):(y))

int main(){
int x(4),y(givenum(5,x));
cout<<y<<endl;
cout<<givenum(7,x)<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

#define sum(a,b) (a+b)

int main(){
cout<<sum(2,3)<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

#define add(a,b) ((a)+(b))
#define subtract(x,y) ((x)-(y))
#define multiply(c,d) ((c)*(d))

int main(){
int a(5),b(add(a,10));
int x(10),y(subtract(x,2));
int c(2),d(multiply(c,4));
cout<<b<<endl;
cout<<add(20,a)<<endl;
cout<<y<<endl;
cout<<subtract(20,x)<<endl;
cout<<d<<endl;
cout<<multiply(10,20)<<endl;
return 0;
} */

//UNDEFINE

/*
#include <iostream>
using namespace std;

#define status "Single"
int main(){
cout<<"My Status before is: "<<status<<endl;
#undef status
#define status "Taken"
#define bf "Kyle Lhan Caya"
cout<<"My Status now is: "<<status;
cout<<" with "<<bf<<endl;
return 0;
} */

/*
#include <iostream>
using namespace std;

#define myBF(bfName) #bfName
int main(){
cout<<myBF(Kyle Lhan Caya)<<endl;
#define glue(a,b) a##b //leaving no blank spaces
glue(c,out)<<"Naghahanap parin ako :("<<endl;
cout<<"pero oks lang"<<glue(end,l);
return 0;
} */

//TRIAL

/*
#define glue(a,b) a##b
#include <iostream>
glue(us,ing) namespace std;

int glue(ma,in)(){
cout<<"TRIAL";
glue(re,turn) 0;
} */

/*
#include <iostream>
using namespace std;

#define age 21
#if age<=18
#undef age
#define age "a minor"

#elif age>18||age<=29 
#undef age
#define age "a major"

#else
#undef age 
#define age "a gorang"
#endif

int main(){
cout<<age;
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
#define age 21
#ifdef age
cout<<age;
#endif
#ifndef age 
cout<<"No age defined";
#endif
return 0;
} */

/*
#include <iostream>
using namespace std;

int main(){
#define age 21
#if !defined age
#define age 22
#endif
cout<<age;
return 0;
} */

/*
#define glue(a,b) a##b
#include <iostream>
glue(us,ing) namespace std;
int main(){
#define age 21
#if !defined age 
#define age 22
cout<<age<<endl;
#elif defined age //#if defined must have #endif
#define ageStatus "Age confirmed!"
cout<<age<<endl<<ageStatus<<endl;
#endif
glue(re,turn) 0;
} */

//LINE CONTROL

/*
#include <iostream>
using namespace std;
#define add(a,b) (a+b)
#line 188 "HelloWorldCplus2"
int x(5);
int main(){
int x,y(add(x,2));
cout<<y<<endl;
return 0;
} */

//ERROR DIRECTIVE

/*
#include <iostream>
using namespace std;

int main(){
#define name "Diether Catan"
#define age 21
//#define status "Single"
#ifndef status 
#error A status is required, bitch!
#endif
cout<<name<<endl;
cout<<age<<endl;
#ifdef status 
cout<<status;
#endif
return 0;
} */

//PREDEFINED MACRO NAMES

/*
#include <iostream>
using namespace std;

int main(){
cout<<"The line number of this is: "<<__LINE__<<endl;
cout<<"The filename of this is: "<<__FILE__<<endl;
cout<<"The date of compilation is: "<<__DATE__<<endl;
cout<<"The time of compilation is: "<<__TIME__<<endl;
cout<<"The value of this program is: "<<__cplusplus<<endl;
return 0;
} */

//INPUT/OUTPUT WITH FILES

/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream myfile;
myfile.open ("example.txt");
myfile<<"Diether D. Catan, Gwapa ^_^\n";
myfile.close();
return 0;
} */

/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream myfile ("example.txt");
if (myfile.is_open())
{
myfile<<"This is a line.\n";
myfile<<"This is another line.\n";
myfile.close();
}
else cout<<"Unable to open file.\n";
return 0;
} */

/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
string name;
ifstream mytext ("example.txt"); //reading a text file
if (mytext.is_open())
{
while(!mytext.eof())
{
getline(mytext,name);
cout<<name<<endl;
}
mytext.close();
}
else cout<<"Unable to open file!\n";
return 0;
} */

/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){ //obtaining file size
long begin,end;
ifstream myfile ("example.txt"); 
begin=myfile.tellg();
myfile.seekg(0,ios::end);
end=myfile.tellg();
myfile.close();
cout<<"size is: "<<(end-begin)<<" bytes.\n";
return 0;
} */

//BINARY FILES

/*
#include <iostream>
#include <fstream>
using namespace std;

ifstream::pos_type size;
char* memblock;

int main(){
ifstream file ("example.bin", ios::in|ios::binary|ios::ate);
if(file.is_open()){
size=file.tellg();
memblock=new char[size];
file.seekg(0,ios::beg);
file.read(memblock,size);
file.close();

cout<<"the complete file content is in memory\n";

delete[] memblock;
}
else cout<<"Unable to open file\n"; 
return 0;
} */












 







