// ListProcessor.cpp
// Jacob Claytor
// September 18, 2017
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;
	cout << "The sum of cow entries is " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "The size of horses list is " << horses.getSize() << endl;
	cout << "The sum of horse entries is " << horses.sum() << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;
	cout << "The sum of cow entries is " << cows.sum() << endl << endl;

	horses.removeFirst();
	cout << "The size of horses list is " << horses.getSize() << endl;
	horses.insertAsFirst(5.67);
	cout << "The size of horses list is " << horses.getSize() << endl;
	cout << "The sum of horse entries is " << horses.sum() << endl;
	cows.insertAsFirst(6.78);
	cows.insertAsLast(7.99);
	cout << "cows list  :  " << cows << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;
	cout << "The sum of cow entries is " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "The size of horses list is " << horses.getSize() << endl;
	cout << "The sum of horse entries is " << horses.sum() << endl << endl;

	List pigs;
	pigs.insertAsLast(5.7);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;
	cout << "The size of horses list is " << horses.getSize() << endl;
	cout << "The size of pigs list is " << pigs.getSize() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;
	cout << "The sum of cow entries is " << cows.sum() << endl;
	cout << "The size of horses list is " << horses.getSize() << endl;
	cout << "The sum of horse entries is " << horses.sum() << endl;
	cout << "The size of pigs list is " << pigs.getSize() << endl;
	cout << "The sum of pig entries is " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "The size of cows list is " << cows.getSize() << endl;
	cout << "The sum of cow entries is " << cows.sum() << endl;
	cout << "The size of horses list is " << horses.getSize() << endl;
	cout << "The sum of horse entries is " << horses.sum() << endl;
	cout << "The size of pigs list is " << pigs.getSize() << endl;
	cout << "The sum of pig entries is " << pigs.sum() << endl << endl;
	pigs.insertAsLast(2.45);
	pigs.insertAsLast(5.89);
	pigs.insertAsLast(6.34);
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "The size of pigs list is " << pigs.getSize() << endl;
	cout << "The sum of pig entries is " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}



