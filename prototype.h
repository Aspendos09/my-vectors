


template<class T>
class MyVectors{

	
	friend MyVectors<T> operator+(MyVectors<T>v1,MyVectors<T>v2) //Operator overload try 1
		{
		MyVectors<T>c;
		c=v1;
	int count=0;
	for(int i=0;i<c.my_getSize();i++)
	{
		c.my_push_back(v2.my_getData(count));
		count++;
	}
	return c;
	}
	 MyVectors<T> operator=(MyVectors<T>v1);
		



	private:
		int size;
		T* vec;


	public:
		MyVectors();//default constructor
		MyVectors(int);//constractor vektor boyutunu parametre olarak alacak* +
		void my_assign(int,T);// Baslangictan itibaren n e kadar olan degerlere istenen sayiyi yazar* +(test edildi demek)
		void	my_push_back(T);// Vektor sonuna eleman atar ve boyutu arttirir*+
		void	my_pop_back();// son elemani siler boyutu bir azaltir*+
			//my_insert(int*,int);// FONKSIYON ISLEVI OGRENİLECEK
		void	my_erase(int,int);// belirtilen araliktaki degerleri siler*
		//void	my_swap(MyVectors,MyVectors);// Iki vektoru birbirleriyle degistirir.* CALISMIYOR
		void	my_clear();// Vektorun tum elementlerini siler*+
		void	my_emplace(int,T);// belirtilen yere eleman ekleyerek vektoru buyutur*+
		void	my_emplace_back(T);// vektor sonuna eleman ekler ve vektoru buyutur* TAM ISLEV SORULACAK
		void	my_boyut_ayar(int);//vektor boyutunu ayarlayacak*+
		void	my_ata(int,T);//belirtilen yerdeki degerin ustune eleman yazar
		void	my_print(int);//belirtilen yerdeki degeri ekrana yazar+
		int		my_getSize(void);//boyutu getirir+
		T		my_getData(int n);//n. siradaki eleman dondurur.
};
