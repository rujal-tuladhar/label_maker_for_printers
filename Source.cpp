#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<stdio.h>

using namespace std;

struct info
{

	string name=" ";
	int box = 0;
	int a_counter = 0;

	
};


int main()
{
	string starter;
	info* ptr = nullptr;
	string val[30] = {
		"1-1","1-2","1-3",
		"2-1","2-2","2-3",
		"3-1","3-2","3-3",
		"4-1","4-2","4-3",
		"5-1","5-2","5-3",
		"6-1","6-2","6-3",
		"7-1","7-2","7-3",
		"8-1","8-2","8-3",
		"9-1","9-2","9-3",
		"10-1","10-2","10-3"
	};

	bool valid = false;

	int start_value;
	//this code snippets will get the container from where you want to start entering the data

	while (valid == 0)
	{
		cout << "Where do you want to start ? ";
		cin >> starter;

		for (int i = 0; i < 30; i++)
		{
			if (starter == val[i])
			{

				valid = 1;
				start_value = i;
			}

		}
		if (valid == 0)
		{
			cout << "location not, found try again ! " << endl;
		}

	}


	int temp = 0;
	char the_value;
	int end_value = 39;
	info obj[39];



	int counter = 0;
	int the_val = 0;
	int the_endval = 0;
	int temp_val = 0;
	string the_name;

	//creating an object of the value 

	while (temp == 0)
	{


		temp_val = (start_value + the_val);

		cout << "Enter the name of the customer ?" << endl;
		cin >> the_name;

		cout << "Enter the number of boxes ?" << endl;
		cin >> the_val;

		int the_endval = temp_val + the_val;


		cout << "Do you want to enter more data (y/n): ";
		cin >> the_value;

		if (the_value == 'y')
		{
			temp = 0;
			counter = 1;

		}
		else
		{
			temp = 1;

		}

		if (counter == 1)
		{
			start_value = temp_val;
		}

		int d_counter = the_val;
		for (int j = start_value; j < the_endval; j++)
		{

			obj[j].name = the_name;
			obj[j].box = the_val;

			--d_counter;
			obj[j].a_counter = the_val - d_counter;



		}

	}





	//int the_node = 0;
	//for (int i = 0; i < 30; i++)
	//{
	//	++the_node;

	//	cout << "      " << obj[i].name << "      " << endl;
	//	cout << "     " << obj[i].box << "      ";
	//	if (the_node == 3)
	//	{
	//		
	//		the_node = 0;
	//	}

	//}
		//1

	ofstream the_file("Label.txt");



	the_file << endl << endl;
	the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[0].name << "       " << setw(21) << obj[1].name << "       " << setw(21) << obj[2].name << "       " << endl;
	the_file << "    " << "      " << left;

	if (obj[0].a_counter > 0) { the_file << setw(2) << obj[0].a_counter << " of " << setw(14) << obj[0].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";

	if (obj[1].a_counter > 0) { the_file << obj[1].a_counter << " of " << setw(14) << obj[1].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";
	if (obj[2].a_counter > 0) { the_file << obj[2].a_counter << " of " << setw(14) << obj[2].box; }
	else
	{
		the_file << setw(21) << "       ";
	}


	the_file << endl << endl << endl;

	//2

	the_file << endl << endl;
	the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[3].name << "       " << setw(21) << obj[4].name << "       " << setw(21) << obj[5].name << "       " << endl;
	the_file << "    " << "      " << left;

	if (obj[3].a_counter > 0) { the_file << setw(2) << obj[3].a_counter << " of " << setw(14) << obj[3].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";

	if (obj[4].a_counter > 0) { the_file << obj[4].a_counter << " of " << setw(14) << obj[4].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";
	if (obj[5].a_counter > 0) { the_file << obj[5].a_counter << " of " << setw(14) << obj[5].box; }
	else
	{
		the_file << setw(21) << "       ";
	}


	the_file << endl << endl << endl;

	//3


	the_file << endl << endl;
	the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[6].name << "       " << setw(21) << obj[7].name << "       " << setw(21) << obj[8].name << "       " << endl;
	the_file << "    " << "      " << left;

	if (obj[6].a_counter > 0) { the_file << setw(2) << obj[6].a_counter << " of " << setw(14) << obj[6].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";

	if (obj[7].a_counter > 0) { the_file << obj[7].a_counter << " of " << setw(14) << obj[7].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";
	if (obj[8].a_counter > 0) { the_file << obj[8].a_counter << " of " << setw(14) << obj[8].box; }
	else
	{
		the_file << setw(21) << "       ";
	}


	the_file << endl << endl << endl;
	//4

	the_file << endl << endl;
	the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[9].name << "       " << setw(21) << obj[10].name << "       " << setw(21) << obj[11].name << "       " << endl;
	the_file << "    " << "      " << left;

	if (obj[9].a_counter > 0) { the_file << setw(2) << obj[9].a_counter << " of " << setw(14) << obj[9].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";

	if (obj[10].a_counter > 0) { the_file << obj[10].a_counter << " of " << setw(14) << obj[10].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";
	if (obj[11].a_counter > 0) { the_file << obj[11].a_counter << " of " << setw(14) << obj[11].box; }
	else
	{
		the_file << setw(21) << "       ";
	}


	the_file << endl << endl << endl;

	//5

	the_file << endl << endl;
	the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[12].name << "       " << setw(21) << obj[13].name << "       " << setw(21) << obj[14].name << "       " << endl;
	the_file << "    " << "      " << left;

	if (obj[12].a_counter > 0) { the_file << setw(2) << obj[12].a_counter << " of " << setw(14) << obj[12].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";

	if (obj[13].a_counter > 0) { the_file << obj[13].a_counter << " of " << setw(14) << obj[13].box; }
	else
	{
		the_file << "       " << setw(21);
	}
	the_file << "       ";
	if (obj[14].a_counter > 0) { the_file << obj[14].a_counter << " of " << setw(14) << obj[14].box; }
	else
	{
		the_file << setw(21) << "       ";
	}


		the_file << endl << endl << endl;

		//6



		the_file << endl << endl;
		the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[15].name << "       " << setw(21) << obj[16].name << "       " << setw(21) << obj[17].name << "       " << endl;
		the_file << "    " << "      " << left;

		if (obj[15].a_counter > 0) { the_file << setw(2) << obj[15].a_counter << " of " << setw(14) << obj[15].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";

		if (obj[16].a_counter > 0) { the_file << obj[16].a_counter << " of " << setw(14) << obj[16].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";
		if (obj[17].a_counter > 0) { the_file << obj[17].a_counter << " of " << setw(14) << obj[17].box; }
		else
		{
			the_file << setw(21) << "       ";
		}


		the_file << endl << endl << endl;
		//7

		the_file << endl << endl;
		the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[18].name << "       " << setw(21) << obj[19].name << "       " << setw(21) << obj[20].name << "       " << endl;
		the_file << "    " << "      " << left;

		if (obj[18].a_counter > 0) { the_file << setw(2) << obj[18].a_counter << " of " << setw(14) << obj[18].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";

		if (obj[19].a_counter > 0) { the_file << obj[19].a_counter << " of " << setw(14) << obj[19].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";
		if (obj[20].a_counter > 0) { the_file << obj[20].a_counter << " of " << setw(14) << obj[20].box; }
		else
		{
			the_file << setw(21) << "       ";
		}


		the_file << endl << endl << endl;

		//8
		the_file << endl << endl;
		the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[21].name << "       " << setw(21) << obj[22].name << "       " << setw(21) << obj[23].name << "       " << endl;
		the_file << "    " << "      " << left;

		if (obj[21].a_counter > 0) { the_file << setw(2) << obj[21].a_counter << " of " << setw(14) << obj[21].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";

		if (obj[22].a_counter > 0) { the_file << obj[22].a_counter << " of " << setw(14) << obj[22].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";
		if (obj[23].a_counter > 0) { the_file << obj[23].a_counter << " of " << setw(14) << obj[23].box; }
		else
		{
			the_file << setw(21) << "       ";
		}


		the_file << endl << endl << endl;

		//9

		the_file << endl << endl;
		the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[24].name << "       " << setw(21) << obj[25].name << "       " << setw(21) << obj[26].name << "       " << endl;
		the_file << "    " << "      " << left;

		if (obj[24].a_counter > 0) { the_file << setw(2) << obj[24].a_counter << " of " << setw(14) << obj[24].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";

		if (obj[25].a_counter > 0) { the_file << obj[25].a_counter << " of " << setw(14) << obj[25].box; }
		else
		{
			the_file << "       " << setw(21);
		}
		the_file << "       ";
		if (obj[26].a_counter > 0) { the_file << obj[26].a_counter << " of " << setw(14) << obj[26].box; }
		else
		{
			the_file << setw(21) << "       ";
		}


		the_file << endl << endl << endl;
		if (obj[27].box > 0)
			//10

		{
			the_file << endl << endl;
			the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[27].name << "       " << setw(21) << obj[28].name << "       " << setw(21) << obj[29].name << "       " << endl;
			the_file << "    " << "      " << left;

			if (obj[27].a_counter > 0) { the_file << setw(2) << obj[27].a_counter << " of " << setw(14) << obj[27].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";

			if (obj[28].a_counter > 0) { the_file << obj[28].a_counter << " of " << setw(14) << obj[28].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";
			if (obj[29].a_counter > 0) { the_file << obj[29].a_counter << " of " << setw(14) << obj[29].box; }
			else
			{
				the_file << setw(21) << "       ";
			}


			the_file << endl << endl << endl;

			//11

			the_file << endl << endl;
			the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[30].name << "       " << setw(21) << obj[30].name << "       " << setw(21) << obj[31].name << "       " << endl;
			the_file << "    " << "      " << left;

			if (obj[30].a_counter > 0) { the_file << setw(2) << obj[30].a_counter << " of " << setw(14) << obj[30].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";

			if (obj[31].a_counter > 0) { the_file << obj[31].a_counter << " of " << setw(14) << obj[31].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";
			if (obj[32].a_counter > 0) { the_file << obj[32].a_counter << " of " << setw(14) << obj[32].box; }
			else
			{
				the_file << setw(21) << "       ";
			}


			the_file << endl << endl << endl;

			//12

			the_file << endl << endl;
			the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[33].name << "       " << setw(21) << obj[34].name << "       " << setw(21) << obj[35].name << "       " << endl;
			the_file << "    " << "      " << left;

			if (obj[33].a_counter > 0) { the_file << setw(2) << obj[33].a_counter << " of " << setw(14) << obj[33].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";

			if (obj[34].a_counter > 0) { the_file << obj[34].a_counter << " of " << setw(14) << obj[34].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";
			if (obj[35].a_counter > 0) { the_file << obj[35].a_counter << " of " << setw(14) << obj[35].box; }
			else
			{
				the_file << setw(21) << "       ";
			}


			the_file << endl << endl << endl;

			//13
			the_file << endl << endl;
			the_file << "    " << "       " << setw(20) << setfill(' ') << left << obj[36].name << "       " << setw(21) << obj[37].name << "       " << setw(21) << obj[38].name << "       " << endl;
			the_file << "    " << "      " << left;

			if (obj[36].a_counter > 0) { the_file << setw(2) << obj[36].a_counter << " of " << setw(14) << obj[36].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";

			if (obj[37].a_counter > 0) { the_file << obj[37].a_counter << " of " << setw(14) << obj[37].box; }
			else
			{
				the_file << "       " << setw(21);
			}
			the_file << "       ";
			if (obj[38].a_counter > 0) { the_file << obj[38].a_counter << " of " << setw(14) << obj[38].box; }
			else
			{
				the_file << setw(21) << "       ";
			}


			the_file << endl << endl << endl;
		}

		return 0;
	
}


