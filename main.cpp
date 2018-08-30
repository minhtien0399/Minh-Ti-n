#include <iostream>
#include "thucdon.h"
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

void Nhap(int arr[],int &n);
void Xuat(int arr[],int n);
void LuuFile(int arr[],int n);

int main()
{
	int arr[10000];
	int n;


	int chon;
	do
	{
		system("clear");
		chon = ThucDon();
		switch (chon)
		{
			case 1:
				Nhap(arr,n);
				break;
			case 2:
				Xuat(arr,n);
				break;
			case 3:

				break;
			case 4:
				LuuFile(arr,n);
				break;
			case 5:

				break;
			case 0:
				break;
		};
		cout<<"Nhap ky tu va enter de tiep tuc: ";
		cin.ignore();
		cin.get();
		
	} while (chon != 0);
	return 0;
}
//=============================================================
//chuc nang 1
void Nhap(int arr[],int &n)
{
	cout<<"Nhap so luong so: ";
	cin>> n;
	
	for(int i = 0;i<n;i++)
	{
		cout<<"Nhap so "<<i+1<<endl;
		cin>>arr[i];
	}
}
//==============================================================
//chuc nang 2
void Xuat(int arr[],int n)
{

	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;

	}
}
//===============================================================
//chuc nang 4
void LuuFile(int arr[],int n)
{
	char fileName[10000];
	cout<<"Nhap ten file muon luu: ";
	cin.ignore();
	cin.getline(fileName, 10000);
	
	ofstream fout(fileName);
	fout<<n<<endl;
	fout.close();	
}
