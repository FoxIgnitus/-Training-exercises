
#include <stdio.h> 
#include <iostream> 
#include <string> 
using namespace std;

int Comp(const void* a, const void* b){ 
return *(char*)a-*(char*)b; 
}

int main(){ 
cout<<"enter string:"; 
char text[256]; 
scanf ("%s", text); 
char *p=text; 
qsort(text, sizeof(text), sizeof(*text), Comp); 
for (; *p; ++p) 
cout<<""<<*p; 
system("Pause");
return 0; 
}