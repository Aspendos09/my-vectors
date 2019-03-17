class MyVectors{

	private:
		int size;
		double* vec;


	public:
		MyVectors();//default constructor
		MyVectors(int);//constractor vektor boyutunu parametre olarak alacak* +
		void my_assign(int,double);// Baslangictan itibaren n e kadar olan degerlere istenen sayiyi yazar* +(test edildi demek)
		void	my_push_back(double);// Vektor sonuna eleman atar ve boyutu arttirir*+
		void	my_pop_back();// son elemani siler boyutu bir azaltir*+
			//my_insert(int*,int);// FONKSIYON ISLEVI OGRENİLECEK
		void	my_erase(int,int);// belirtilen araliktaki degerleri siler*
		//void	my_swap(MyVectors,MyVectors);// Iki vektoru birbirleriyle degistirir.* CALISMIYOR
		void	my_clear();// Vektorun tum elementlerini siler*+
		void	my_emplace(int,double);// belirtilen yere eleman ekleyerek vektoru buyutur*+
		void	my_emplace_back(double);// vektor sonuna eleman ekler ve vektoru buyutur* TAM ISLEV SORULACAK
		void	my_boyut_ayar(int);//vektor boyutunu ayarlayacak*+
		void	my_ata(int,double);//belirtilen yerdeki degerin ustune eleman yazar
		void	my_print(int);//belirtilen yerdeki degeri ekrana yazar+
		int	my_getSize(void);//boyutu getirir+
};
