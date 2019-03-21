


template<class T>
class MyVectors{

	
	private:
		int size;
		T* vec;


	public:
		MyVectors();//default constructor
		MyVectors(int);//constractor vektor boyutunu parametre olarak alacak* +
		
		void my_assign(int,T);// Baslangictan itibaren n e kadar olan degerlere istenen sayiyi yazar* +(test edildi demek)
		void	my_push_back(T);// Vektor sonuna eleman atar ve boyutu arttirir*+
		void	my_pop_back();// son elemani siler boyutu bir azaltir*+
		void	my_erase(int,int);// belirtilen araliktaki degerleri siler*
		void	my_clear();// Vektorun tum elementlerini siler*+
		void	my_emplace(int,T);// belirtilen yere eleman ekleyerek vektoru buyutur*+
		void	my_boyut_ayar(int);//vektor boyutunu ayarlayacak*+
		void	my_ata(int,T);//belirtilen yerdeki degerin ustune eleman yazar
		void	my_print(int);//belirtilen yerdeki degeri ekrana yazar+
		int		my_getSize(void);//boyutu getirir+
		T		my_getData(int n);//n. siradaki elemani dondurur.+
	
		MyVectors operator+(MyVectors v1)
		{
			MyVectors funvect(0);
			int count1=0;
			int count2=0;
			for(int i=0;i<my_getSize();i++)//Toplama isleminde dondurulecek objeyi oncelikle fonksiyonu cagiran objeye esitler.
			{
				funvect.my_push_back(vec[count1]);
				count1++;
			}
			for(int y=0;y<v1.my_getSize();y++)//ilk objeye esitlenen objenin(dondurulecek) ustune isleme giren diger objeyi ekler. 
			{
				funvect.my_push_back(v1.my_getData(count2));
				count2++;
			}
			return funvect;//iki objenin toplami olan objeyi dondurur.
			
		
		} //Operator overload fonksiyon sonu
};
