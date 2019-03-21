#include"myvectors.h"
#include<stdlib.h>
#include<iostream>
#include<string>
template<class T>
 MyVectors<T>::MyVectors(int boyut){
   size=boyut;
 	vec= new T[size];
//constructor yazilan boyutta  hafiza ayirdi
 }
 template<class T>
 MyVectors<T>::MyVectors(){
   size=0;
 	vec= new T[size];
//Default constructor 0 boyutunda hafiza ayirdi
}
template<class T>
void MyVectors<T>::my_boyut_ayar(int yeni_boyut){
  size=yeni_boyut;
  
  vec=	(T*)realloc(vec,size*sizeof(T)); //Girilen degerin boyutu
}//my_boyut_ayar sonu
template<class T>
void MyVectors<T>::my_assign(int n,T x){//ilk n elemana yollanan x degerini atar
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
template<class T>
void MyVectors<T>::my_push_back(T x){

   my_boyut_ayar(size+1);
   vec[size-1]=x;//boyut 11 ise son eleman 10 dur ondan size-1
 }//son eleman eklendi ve boyut buyutuldu
template<class T>
void MyVectors<T>::my_pop_back(){
   vec[size]=0;

   my_boyut_ayar(size-1);
 }//son eleman silindi boyut kucultuldu
 
template<class T>
void MyVectors<T>::my_erase(int knmb,int knms){//belirtilen araliktaki degerleri siler boyutu kucultur
int tempb=knmb;
int temps=knms;
for (int i = knmb; i <= knms; i++) {
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

template<class T>
void MyVectors<T>::my_clear(){
for (int i = 0; i < size; i++) {
  vec[i]=0;
}
  my_boyut_ayar(0);//elemanlar temizlendi boyut 0 landi
}
template<class T>
void MyVectors<T>::my_emplace(int n,T x){
  my_boyut_ayar(size+1);
  for (int i = size-2; i > n; i--) {
    vec[i+1]=vec[i];//son elemandan itibaren bir ileri tasinir
  }
  vec[n]=x;
}
template<class T>
void MyVectors<T>::my_ata(int n,T x){//istenilen konuma yollanan degeri atayan fonksiyon(Boyutu degistirmez!!!)
	
  if(n>size-1){
    return;
  }
  vec[n]=x;
}

template<class T>
void MyVectors<T>::my_print(int i){//belirtilen siradaki elemani ekrana yazan fonksiyon
	std::cout<<vec[i];
}

template<class T>
int MyVectors<T>::my_getSize(void){//Cagiran objenin boyutunu donduren fonksiyon
return size;
}
template<class T>
T MyVectors<T>::my_getData(int n){//n. siradaki elemani donduren fonksiyon
	return vec[n];
}








template class MyVectors<int>;//C++ nin birden fazla veri tipi icin bu templateleri compilelemesi gerekmektedir
template class MyVectors<char>;//bu yuzden header dosyasinin sourcesine kullanilacak veri tipleri bu sekilde yazilarak
template class MyVectors<double>;//compilelemeye zorlanmalidir
template class MyVectors<float>;

