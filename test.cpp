#include<iostream>
#include"prototype.h"
using namespace std;
int main(){
	int byt;
	int i;
cout<<"Test Programi basladi"<<endl;
	cout<<"Vector boyutu giriniz";
	cin>>byt;
MyVectors<double>test1(byt);	
	cout<<"boyut belirtilen vector1 olusturuldu"<<endl;
	MyVectors<double>test2(byt);
		
	cout<<"boyut belirtilen vector2 olusturuldu"<<endl;
	
	test1.my_assign(5,3);
	cout<<"ilk 5 degere 3 atandi(vector1)";
	
		cout<<"boyut= "<<test1.my_getSize()<<endl;
	cout<<"Vector elemanlari:"<<endl;
	for(i=0;i<test1.my_getSize();++i){
	
	test1.my_print(i);
	cout<<endl;
}
	
	
	test2.my_assign(5,9);
	cout<<"ilk 5 degere 9 atandi(vector2)";
	
	/*for(i=0;i<99;++i){
	
	test1.my_print(i);
	}
	cout<<i;*/
	
/*	test1.my_push_back(1349);
	for(i=0;i<test1.my_getSize();++i){
	
	test1.my_print(i);
	cout<<endl;
	}
	test1.my_pop_back();
	cout<<"boyut= "<<test1.my_getSize()<<endl;
	cout<<"Vector elemanlari:"<<endl;
	for(i=0;i<test1.my_getSize();++i){
	
	test1.my_print(i);
	cout<<endl;
	}
	
	cout<<"Vector elemanlari:"<<endl;
	for(i=0;i<test1.my_getSize();++i){
	
	test1.my_print(i);
	cout<<endl;
	}
	cout<<"boyut= "<<test1.my_getSize()<<endl;
	
	
	test1.my_erase(0,3);
	
	cout<<"boyut= "<<test1.my_getSize()<<endl;
	cout<<"Vector elemanlari:"<<endl;
	for(i=0;i<test1.my_getSize();++i){
	
	test1.my_print(i);
	cout<<endl;
}*/
/*	cout<<"Clear fonk denemesi"<<endl;
	test1.my_clear();
	cout<<"clear fonk sonrasi"<<endl; */
	
	
/*	cout<<"emplace fonk oncesi"<<endl;
	test1.my_emplace(3,123);//4. elemana 123 eklendi.
	cout<<"emplace fonk sonrasi"<<endl; */
	//cout<<"ata fonk oncesi"<<endl;
//test1.my_ata(0,333);
//	cout<<"ata fonk sonrasi"<<endl;

MyVectors<double>test3;
cout<<"Test3 vektoru olusturuldu"<<endl;

cout<<"Test1 ve test 2 toplami deneniyor"<<endl;

test3=test1+test2;




	
		cout<<"boyut(vec1)= "<<test1.my_getSize()<<endl;
	cout<<"Vector elemanlari(vector1): "<<endl;
	for(i=0;i<test1.my_getSize();++i){
	
	test1.my_print(i);
	cout<<endl<<endl;
}
	
		cout<<"boyut(vec2)= "<<test2.my_getSize()<<endl;
	cout<<"Vector elemanlari(vector2): "<<endl;
	for(i=0;i<test2.my_getSize();++i){
	
	test2.my_print(i);
	cout<<endl<<endl;
}

	cout<<"boyut(vec3)= "<<test3.my_getSize()<<endl;
	cout<<"Vector elemanlari(vector3): "<<endl;
	for(i=0;i<test3.my_getSize();++i){
	
	test3.my_print(i);
	cout<<endl<<endl;
}



	
	
	
	
	
	
	
	

	
	return 0;
}
