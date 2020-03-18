struct calc
{
	long val1;
	long val2;
};
program CALC_PROG{
	version CALC_VERSION_1{
		void ALLUMER ()=1;
		long AJOUTER (calc)=2;
		long SOUSTRAIRE (calc)=3;
		long MULTIPLIER(calc)=4;
		void MEMORISER(int)=5;
		long EXTRAIRE(int)=6;
		void ETEINDRE()=7;
	}=1;
}=0x20000002;