#include"prototype.h"
#include<stdlib.h>
#include<iostream>
template<class T>
 MyVectors<T>::MyVectors(int boyut){
   size=boyut;
 	vec= new T[size];
//constructor yazilan boyutta double hafiza ayirdi
 }
 template<class T>
 MyVectors<T>::MyVectors(){
   size=1;
 	vec= new T[size];
//Default constructor 1 tane double hafiza ayirdi
}
template<class T>
void MyVectors<T>::my_boyut_ayar(int yeni_boyut){
  size=yeni_boyut;
  
  vec=	(T*)realloc(vec,size*sizeof(T)); //Girilen degerin boyutu
}//my_boyut_ayar sonu
template<class T>
void MyVectors<T>::my_assign(int n,T x){
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

 /*MyVectors::my_insert(int *ary,int knm){
   if(knm-1>size){
     my_boyut_ayar(knm-1);  FONKSIYON ISLEVI OGRENİLECEK!!!
   }
   for (int i = 0; i < knm; i++) {
     vec[i]=ary[i];
   }
 }//yazilan konumdan onceki yerlere yeni elemanlar ekledi gereken boyutu ayarladi*/
template<class T>
void MyVectors<T>::my_erase(int knmb,int knms){
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
void MyVectors<T>::my_emplace_back(T x){
  my_push_back(x); //TAM ISLEV SORULACAK
}

template<class T>
void MyVectors<T>::my_ata(int n,T x){
	
  if(n>size-1){
    return;
  }
  vec[n]=x;
}

template<class T>
void MyVectors<T>::my_print(int i){
	std::cout<<vec[i];
}

template<class T>
int MyVectors<T>::my_getSize(void){
return size;
}
template<class T>
T MyVectors<T>::my_getData(int n){
	return vec[n];
}

template<class T>
MyVectors<T> MyVectors<T>::operator=(MyVectors<T> v1){
	MyVectors<T>temp;
	temp=v1;
	return *this;
}



/*template<class T>
MyVectors<T> operator+ <>(MyVectors<T>v1,MyVectors<T>v2)
{
		MyVectors<T>c(v1);
	int count=0;
	for(int i=0;i<c.my_getsize();i++)
	{
		c.my_push_back(v2.my_getData(count));
		count++;
	}
	return c;
	}*/
	




template class MyVectors<int>;//C++ nin birden fazla veri tipi icin bu templateleri compilelemesi gerekmektedir
template class MyVectors<char>;//bu yuzden header dosyasinin sourcesine kullanilacak veri tipleri bu sekilde yazilarak
template class MyVectors<double>;//compilelemeye zorlanmalidir
template class MyVectors<float>;

