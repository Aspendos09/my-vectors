#include"myvectors.h"
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

MyVectors::my_boyut_ayar(int yeni_boyut){
  size=yeni_boyut;
  vec=realloc(vec,size*sizeof(double));//doublenin boyutu
}//my_boyut_ayar sonu
MyVectors::my_assign(int n,double x){
  if(n<size)
  my_boyut_ayar(n);
  for (int i = 0; i < n; i++) {
    vec[i]=x;
  }
}//my_assign sonu

 MyVectors::my_push_back(double x){

   my_boyut_ayar(size+1);
   vec[size]=x;
 }//son eleman eklendi ve boyut buyutuldu

 MyVectors::my_pop_back(){
   vec[size]=NULL;

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

MyVectors::my_erase(int knmb,int knms){

for ( i = knmb; i <= knms; i++) {//vector boyutu sorunlari giderilecek
  vec[i]=NULL;
}
int y=knms+1;
while (y<=size) {

  vec[knmb]=vec[y];
  knmb++;
  y++;
}
}

MyVectors::my_swap(MyVectors vect1,MyVectors vect2){
  MyVectors tempvec(vect1);
  vect1=vect2;
  vect2=tempvec;//Copy constructor denemesi umarim calisir
}
MyVectors::my_clear(){
for (int i = 0; i < size; i++) {
  vec[i]=NULL;
}
  my_boyut_ayar(0);//elemanlar temizlendi boyut 0 landi
}
MyVectors::my_emplace(int n,double x){
  my_boyut_ayar(size+1);
  for (int i = size; i > n; i--) {
    vec[i+1]=vec[i];//son elemandan itibaren bir ileri tasinir
  }
  vec[n]=x;
}
MyVectors::my_emplace_back(double x){
  my_push_back(x); //TAM ISLEV SORULACAK
}

MyVectors::my_ata(int n,double x){
  if(n>size-1){
    break;
  }
  vec[n]=x;
}
