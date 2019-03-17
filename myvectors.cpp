#include"myvectors.h"
#include<stdlib.h>
#include<iostream>
 MyVectors::MyVectors(int boyut){
   size=boyut;
 	vec= new double[size];
//constructor yazilan boyutta double hafiza ayirdi
 }
 MyVectors::MyVectors(){
   size=1;
 	vec= new double[size];
//Default constructor 1 tane double hafiza ayirdi
}

void MyVectors::my_boyut_ayar(int yeni_boyut){
  size=yeni_boyut;
  
  vec=	(double*)realloc(vec,size*sizeof(double)); //doublenin boyutu
}//my_boyut_ayar sonu
void MyVectors::my_assign(int n,double x){
  if(n<size){
  my_boyut_ayar(n);
}
else if(n>size)
{
	my_boyut_ayar(n);
}
  
  for (int i = 0; i < n; i++) {
    vec[i]=x;
  }
}//my_assign sonu

void MyVectors::my_push_back(double x){

   my_boyut_ayar(size+1);
   vec[size-1]=x;//boyut 11 ise son eleman 10 dur ondan size-1
 }//son eleman eklendi ve boyut buyutuldu

void MyVectors::my_pop_back(){
   vec[size]=0;

   my_boyut_ayar(size-1);
 }//son eleman silindi boyut kucultuldu

 /*MyVectors::my_insert(int *ary,int knm){
   if(knm-1>size){
     my_boyut_ayar(knm-1);  FONKSIYON ISLEVI OGRENİLECEK!!!
   }
   for (int i = 0; i < knm; i++) {
     vec[i]=ary[i];
   }
 }//yazilan konumdan onceki yerlere yeni elemanlar ekledi gereken boyutu ayarladi*/

void MyVectors::my_erase(int knmb,int knms){
int tempb=knmb;
int temps=knms;
for (int i = knmb; i <= knms; i++) {//vector boyutu sorunlari giderilecek
  vec[i]=0;
  
}
int y=knms+1;
while (y<=size) {

  vec[knmb]=vec[y];
  knmb++;
  y++;
}
my_boyut_ayar(size-(temps-tempb+1));
}

/*void MyVectors::my_swap(MyVectors vect1,MyVectors vect2){
 // MyVectors tempvec(vect1);
  //vect1=vect2;
  //vect2=tempvec;//Copy constructor denemesi umarim calisir CALISMADI 
  
  double* tempptr;
  tempptr =vect1.vec;
  vect1.vec=vect2.vec;
  vect2.vec=tempptr;  
}*/
void MyVectors::my_clear(){
for (int i = 0; i < size; i++) {
  vec[i]=0;
}
  my_boyut_ayar(0);//elemanlar temizlendi boyut 0 landi
}
void MyVectors::my_emplace(int n,double x){
  my_boyut_ayar(size+1);
  for (int i = size-2; i > n; i--) {
    vec[i+1]=vec[i];//son elemandan itibaren bir ileri tasinir
  }
  vec[n]=x;
}
void MyVectors::my_emplace_back(double x){
  my_push_back(x); //TAM ISLEV SORULACAK
}

void MyVectors::my_ata(int n,double x){
	
  if(n>size-1){
    return;
  }
  vec[n]=x;
}

void MyVectors::my_print(int i){
	std::cout<<vec[i];
}

int MyVectors::my_getSize(void){
return size;
}

