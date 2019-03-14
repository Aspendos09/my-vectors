class MyVectors{

	private:
		int size;
		double* vec;


	public:

		MyVectors(int);//constractor vektor boyutunu parametre olarak alacak*
		my_assign(int,double);// Baslangictan itibaren n e kadar olan degerlere istenen sayiyi yazar*
		my_push_back(double);// Vektor sonuna eleman atar ve boyutu arttirir*
		my_pop_back();// son elemani siler boyutu bir azaltir*
		//my_insert(int*,int);// FONKSIYON ISLEVI OGRENİLECEK
		my_erase(int,int);// belirtilen araliktaki degerleri siler*
		my_swap(MyVectors,MyVectors);// Iki vektoru birbirleriyle degistirir.*
		my_clear();// Vektorun tum elementlerini siler*
		my_emplace(int,double);// belirtilen yere eleman ekleyerek vektoru buyutur*
		my_emplace_back(double);// vektor sonuna eleman ekler ve vektoru buyutur* TAM ISLEV SORULACAK
		my_boyut_ayar(int);//vektor boyutunu ayarlayacak*

};
