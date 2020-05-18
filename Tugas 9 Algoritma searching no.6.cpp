#include <iostream>

#include <conio.h>

#include <stdio.h>

#include <iomanip>

void main(){

int A[]={12,24,13,25,10,13,21,15,15,18};

int bil;

for(int i=0;i<10;i++)

{ cout<<setw (4)<<A[i];}

cout<<endl;

cout<<“Angka yang dicari = “;cin>>bil;

cout<<endl;

for(int i=0;i<10;i++){

if(A[i]==bil)

cout<<“angka yang dicari berada di indeks ke-“<<i<<endl;}

getch();}
