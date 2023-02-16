#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch;
	int count = 0;

	int prefs[50];
	int prog_prefs[25];
	
	int dept_1[5];
	int dept_2[5];
	int dept_3[5];
	int dept_4[5];
	int dept_5[5];

	int prog_1[5];
	int prog_2[5];
	int prog_3[5];
	int prog_4[5];
	int prog_5[5];


	std::fstream fs( "matching-data.txt", fstream::in );
	while (fs >> ch)
	{ 
		//std::cout << ch << endl;
		int pref = (int)ch - 48;
		prefs[count] = pref;
		count++;

	}

	/*for (int i = 0; i < 50; i++)
	{
		cout << prefs[i] << endl;
	}*/
	//cout << count << endl;

	for (int i = 0; i < 25; i++)
	{
			if ( i % 5 == 0)
			{
				dept_1[i / 5] = prefs[i];
			}

			if ( (i - 1) % 5 == 0 )
			{
				dept_2[ (i - 1) / 5 ] = prefs[i];
			}

			if ( (i - 2) % 5 == 0 )
			{
				dept_3[ (i - 2) / 5 ] = prefs[i];
			}	

			if ( (i - 3) % 5 == 0 )
			{
				dept_4[ (i - 3) / 5 ] = prefs[i];
			}

			if ( (i - 4) % 5 == 0 )
			{
				dept_5[ (i-4) / 5 ] = prefs[i];
			}
	}



	for (int i = 0; i < 25; i++)
	{
		prog_prefs[i] = prefs[i + 25];

	}

	for (int i = 0; i < 25; i++)
	{
		if ( i % 5 == 0)
		{
			prog_1[ i / 5 ] = prog_prefs[i];
		}

		if ( (i - 1) % 5 == 0 )
		{
			prog_2[ (i - 1) / 5 ] = prog_prefs[i];
		}

		if ( (i - 2) % 5 == 0 )
		{
			prog_3[ (i - 2) / 5 ] = prog_prefs[i];
		}	
		if ( (i - 3) % 5 == 0 )
		{
			prog_4[ (i - 3) / 5 ] = prog_prefs[i];
		}

		if ( (i - 4) % 5 == 0 )
		{
			prog_5[ (i-4) / 5 ] = prog_prefs[i];
		}
	
	}

	for ( int i =  0; i < 5; i++ )
	{
		 //cout << "dept_1 prefs =" << dept_1[i]; 
		 //cout << "dept_2 prefs =" << dept_2[i];
		 //cout << "dept_3 prefs =" << dept_3[i];
		 //cout << "dept_4 prefs =" << dept_4[i] << endl;
		 //cout << "dept_5 prefs =" << dept_5[i] << endl; 
		 //cout << "prog_1 prefs =" << prog_1[i] << endl; 
		 //cout << "prog_2 prefs =" << prog_2[i] << endl; 
		 //cout << "prog_3 prefs =" << prog_3[i] << endl; 
		 //cout << "prog_4 prefs =" << prog_4[i] << endl; 
		 cout << "prog_5 prefs =" << prog_5[i] << endl; 
		  
		 
	}

	return 0;	
}
