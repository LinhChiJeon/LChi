#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;


void printMatrix(int matrix[100][100], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " " ;
        }
        cout << "\n";
    }
}

void docmatran (int &m, int &n, int matrix[100] [100]) {
fstream  file;
    file.open("input.txt", ios::out | ios::in );
    file >> m;
    file >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
        {
            file >> matrix[i][j];
        }
    }
    file.close();
}

void ghimatran (int matrix[100][100], int m, int n)
{
	//Open file
	ofstream ofs;
	ofs.open("22520154.txt", ios::out);
	//Random
	srand(time(NULL));
	ofs << m << "\n";
	ofs << n << "\n";
	for(int i=0; i<m ; i++)
	{
		for(int j=0; j<n; j++)
		{
			int element=rand()%500;
			ofs << element << " ";
		}
		ofs << "\n";
	}
	ofs.close();
}

int KiemTraDoiXung(int n) {
    int dv = 0;
    int daonguoc = 0;
    int tam = n;
    while(tam > 0)
        {
        dv = tam % 10;
        tam /= 10;
        daonguoc = daonguoc * 10 + dv;
        }
    if(daonguoc == n)
        {
            return 1;
        }
        return 0;
}

int DemSoDoiXung(int matrix[100][100], int m, int n ) {
    int dem = 0;
    for(int i = 0; i < m; i++)
        {
            for (int j = 0; j<n ; j++)
            {
                if(matrix[i][j] < 0)
                    {
                    break;
                    }
                if(KiemTraDoiXung(matrix[i][j]) == 1)
                    {
                    dem++;
                    }
            }
        }
    return dem;
}

int main()
{
    int m,n;
    int matrix[100][100];
    docmatran(m,n,matrix);
    printMatrix(matrix,m,n);
    ofstream ofs;
    ofs.open("22520154.txt", ios::out );
    srand(time(NULL));
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            {
                if (KiemTraDoiXung(matrix[i][j])==1)
                    {
                            ofs << matrix[i][j] << " ";
                    }
            }
    }
    ofs << "\n";
    ofs << DemSoDoiXung(matrix,m,n);
    ofs.close();


    // ghimatran(matrix,m,n);
    //DemSoDoiXung(matrix,m,n);
    cout << DemSoDoiXung(matrix,m,n);
    return 0;
}
