class fraction
{
	private:
	
	int numerator;
	int denominator;
	
	public:
	
	fraction(int numerator, int denominator)
	{
		this->numerator=numerator;
		this->denominator=denominator;
		
	}
	
	void print()
	{
		cout<< numerator << "/" << denominator << endl;
			
	}
	
	void simplify()
	{
		int gcd=1;
		int j=min(denominator, numerator);
		for(int i=1;i<j;i++)
		{
			if(denominator%i==0 && numerator%i ==0)
			{
				gcd=i;
			}
		}
		
		numerator=numerator/gcd;
		denominator=denominator/gcd;
		
	}	
	
	void add(fraction const &f2)
	{
		int x=denominator*f2.denominator;
		int y=(x/denominator)*numerator;
		int z=(x/f2.denominator)*f2.numerator;
		denominator=x;
		numerator=y+z;
		simplify();
		
		
		
	}
};
