#include <iostream>
#include <math.h>
using namespace std;

int* CreateSingleArray(int size)
{
	int *SingleArray;
	SingleArray = new int[size];

	return SingleArray;
} 

void ManualFillingSingleArray(int* SingleArray,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Introduceti numarul de pe pozitia " << i << " \t";
		cin >> SingleArray[i];
		cout << endl;
	}
}

void AutoFillSingleArray(int *SingleArray,int size,int lim)
{
	for (int i = 0; i < size; i++)
	{
		SingleArray[i] = rand() % lim;
	}
}

void PrintSingleArray(int* SingleArray,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << SingleArray[i] << endl;
	}
}

int** CreateDoubleArray(int rows, int cols)
{
	int** DoubleArray;
	DoubleArray = new int* [rows]; 
	for (int i = 0; i < rows; i++)
	{
		DoubleArray[i] = new int[cols];
	}

	return DoubleArray;
}

void ManualFillingDoubleArray(int** DoubleArray,int  rows,int  cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Introduceti datele depe\t" << i << " rand si " << j << " coloana." << endl;
			cin >> DoubleArray[i][j];
		}
	}
}

void AutoFillDoubleArray(int** DoubleArray, int rows, int cols,int lim)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			DoubleArray[i][j] = rand() % lim;
		}
	}
}

void PrintDoubleArray(int** DoubleArray, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << DoubleArray[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Cu ce vom lucra? " << endl;
	cout << "1.Vector\t";
	cout << "2.Matrice" << endl;
	int v1;
	cin >> v1;
	cout << endl;
	switch (v1)
	{
		case 1:
		{
			int* SingleArray;
			cout << "Cate cifre va avea vectorul?" << endl;
			int size;
			cin >> size;
			cout << endl;
			cout << "1.Doriti sa introduceti datele sinestatator? " << endl;
			cout << "2.Doriti ca numerele sa fie generate de calculator?" << endl;
			int v2;
			cin >> v2;
			cout << endl;
			switch (v2)
			{
				case 1:
				{
					SingleArray = CreateSingleArray(size);
					ManualFillingSingleArray(SingleArray, size);


					cout << "Cum o sa prelucram vectorul?" << endl;
					int v5;
					cout << "1.Media aritmetica a elementelor din vector.\t\t";
					cout << "2.Media geometrica a elementelor din vector." << endl;
					cout << "3.Suma elementelor pare a vectorului.\t\t\t";
					cout << "4.Suma elementelor impare a vectorului." << endl;
					cout << "5.Produsul elementelor pare a vectorului.\t\t";
					cout << "6.Produsul elementelor impare a vectorului." << endl;
					cout << "7.Suma elementelor de pe pozitia para a vectorului.\t";
					cout << "8.Suma elementelor de pe pozitia impara a vectorului." << endl;
					cout << "9.Produsul elementelor de pe pozitia para a vectorului.\t";
					cout << "10.Produsul elementelor de pe pozitia impara a vectorului." << endl;
					cin >> v5;
					cout << endl;
					switch (v5)
					{
						case 1:
						{
							int MediaAritmetica;
							int suma = 0;
							int impartirea = 0;
							for (int i = 0; i < size; i++)
							{
								suma = suma + SingleArray[i];
								impartirea++;
							}
							MediaAritmetica = suma / impartirea;
							cout << "Media aritmetica a elementelor vectorului este: " << MediaAritmetica << endl;
						}
							break;

						case 2:
						{
							double MediaGeometrica;
							int suma = 1;
							for (int i = 0; i < size; i++)
							{
								suma = suma * SingleArray[i];
							}
							MediaGeometrica = sqrt(suma);
							cout << "Media geometrica a elementelor din vector este: " << MediaGeometrica << endl;
						}
							break;

						case 3:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 == 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor pare din vector este: " << suma << endl;
						}
							break;

						case 4:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 != 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor impare din vector este: " << suma << endl;
						}
							break;

						case 5:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 == 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor pare din vector este: " << produsul << endl;
						}
							break;

						case 6:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Suma elementelor impare din vector este: " << produsul << endl;
						}
							break;

						case 7:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 == 0 && i != 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor din pozitiile pare a vectorului este: " << suma << endl;
						}
							break;

						case 8:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 != 0 && i != 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor din pozitiile impare a vectorului este: " << suma << endl;
						}
							break;

						case 9:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 == 0 && i != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor din pozitiile pare a vectorului este: " << produsul << endl;
						}
							break;
						
						case 10:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 != 0 && i != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor din pozitiile pare a vectorului este: " << produsul << endl;
						}
							break;

						default: cout << "A-ti introdus un caracter incorect" << endl;
							break;
					}

				}
					break;
				case 2:
				{
					cout << "Pana la care numar sa fie generate numerele?" << endl;
					int lim;
					cin >> lim;
					cout << endl;
					SingleArray = CreateSingleArray(size);
					AutoFillSingleArray(SingleArray, size, lim);
					cout << "Doriti sa aflati ce numere se afla in vector?" << endl;
					cout << "Da - 1\t Nu - 2" << endl;
					int v4;
					cin >> v4;
					cout << endl;
					switch (v4)
					{
						case 1:
						{
							PrintSingleArray(SingleArray, size);
						}
							break;
						case 2:

						default:
							break;
					}

					cout << "Cum o sa prelucram vectorul?" << endl;
					int v5;
					cout << "1.Media aritmetica a elementelor din vector.\t\t";
					cout << "2.Media geometrica a elementelor din vector." << endl;
					cout << "3.Suma elementelor pare a vectorului.\t\t\t";
					cout << "4.Suma elementelor impare a vectorului." << endl;
					cout << "5.Produsul elementelor pare a vectorului.\t\t";
					cout << "6.Produsul elementelor impare a vectorului." << endl;
					cout << "7.Suma elementelor de pe pozitia para a vectorului.\t";
					cout << "8.Suma elementelor de pe pozitia impara a vectorului." << endl;
					cout << "9.Produsul elementelor de pe pozitia para a vectorului.\t";
					cout << "10.Produsul elementelor de pe pozitia impara a vectorului." << endl;
					cin >> v5;
					cout << endl;
					switch (v5)
					{
						case 1:
						{
							int MediaAritmetica;
							int suma = 0;
							int impartirea = 0;
							for (int i = 0; i < size; i++)
							{
								suma = suma + SingleArray[i];
								impartirea++;
							}
							MediaAritmetica = suma / impartirea;
							cout << "Media aritmetica a elementelor vectorului este: " << MediaAritmetica << endl;
						}
							break;

						case 2:
						{
							double MediaGeometrica;
							int suma = 1;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] != 0)
								{
									suma = suma * SingleArray[i];
								}
							}
							MediaGeometrica = sqrt(suma);
							cout << "Media geometrica a elementelor din vector este: " << MediaGeometrica << endl;
						}
							break;

						case 3:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 == 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor pare din vector este: " << suma << endl;
						}
							break;

						case 4:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 != 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor impare din vector este: " << suma << endl;
						}
							break;

						case 5:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 == 0 && SingleArray[i] != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor pare din vector este: " << produsul << endl;
						}
							break;

						case 6:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 != 0 && SingleArray[i] != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Suma elementelor impare din vector este: " << produsul << endl;
						}
							break;

						case 7:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 == 0 && i != 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor din pozitiile pare a vectorului este: " << suma << endl;
						}
							break;

						case 8:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 != 0 && i != 0)
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor din pozitiile impare a vectorului este: " << suma << endl;
						}
							break;

						case 9:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 == 0 && i != 0 && SingleArray[i] != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor din pozitiile pare a vectorului este: " << produsul << endl;
						}
							break;
						
						case 10:
						{
							int produsul = 1;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 != 0 && i != 0 && SingleArray[i] != 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor din pozitiile pare a vectorului este: " << produsul << endl;
						}
							break;

						default: cout << "A-ti introdus un caracter incorect" << endl;
							break;
					}

				}
					break;
				default: cout << "A-ti introdus un caracter incorect" << endl;
					break;
			}
				break;
		}
			break;
		case 2:
		{
				int** DoubleArray;
				cout << "Cate randuri va avea matricea?" << endl;
				int rows;
				cin >> rows;
				cout << endl;
				cout << "Cate coloane va avea matricea?" << endl;
				int cols;
				cout << endl;
				cin >> cols;
				cout << endl;
				if (rows != cols)
				{
					cout << "Matricea va fi dreptunghiulara,ceea ce inseamna ca for vi mai putine posibilitati de a il prelucra!" << endl;
					cout << "Doriti sa recreati matricea in una patrulatera?" << endl;
					cout << "Da - 1\t Nu - 2" << endl;
					int v6;
					cin >> v6;
					cout << endl;
					switch (v6)
					{
						case 1:
						{
							cout << "Cate randuri va avea matricea?" << endl;
							int rows;
							cin >> rows;
							cout << endl;
							cout << "Cate coloane va avea matricea?" << endl;
							int cols;
							cin >> cols;
							cout << endl;
						}
							break;
						case 2:
						break;

						default: cout << "A-ti introdus un caracter incorect" << endl;
							break;
					}
				}
				cout << "1.Doriti sa introduceti datele sinestatator?" << endl;
				cout << "2.Doriti ca calculatorul sa genereze datele?" << endl;
				int v7;
				cin >> v7;
				cout << endl;
				switch (v7)
				{
					case 1:
					{
						DoubleArray = CreateDoubleArray(rows, cols);
						ManualFillingDoubleArray(DoubleArray, rows, cols);

						cout << "Cum o sa prelucram matricea?" << endl;
						if (rows == cols)
						{
							cout << "1.Media aritmetica a elementelor din matrice\t\t";
							cout << "2.Media geometrica a elementelor din matrice" << endl;
							cout << "3.Suma elementelor pare din matrice\t\t\t";
							cout << "4.Suma elementelor impare din matrice" << endl;
							cout << "5.Produsul elementelor pare din matrice\t\t\t";
							cout << "6.Produsul elementelor impare din matrice" << endl;
							cout << "7.Suma elementelor diagonalei principale a matricei\t";
							cout << "8.Produsul elementelor diagonalei principale a matricei" << endl;
							cout << "9.Suma elementelor diagonalei secundare a matricei\t";
							cout << "10.Produsul elementelor diagonalei secundare a matricei" << endl;
							int v9;
							cin >> v9;
							cout << endl;
							switch (v9)
							{
								case 1:
								{
									double MediaAritmetica;
									int suma = 0;
									int impartirea = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											suma = suma + DoubleArray[i][j];
											impartirea++;
										}
									}
									MediaAritmetica = suma / impartirea;
									cout << "Media aritmetica a elementelor matricei este: " << MediaAritmetica << endl;
								}
									break;
								case 2:
								{
									double mediaGeometrica;
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											produsul = produsul * DoubleArray[i][j];
										}
									}
									mediaGeometrica = sqrt(produsul);
									cout << "Media geometrica a elementelor din matrice este: " << mediaGeometrica << endl;
								}
									break;
								case 3:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor pare din matrice este: " << suma << endl;
									
								}
									break;
								case 4:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor impare din matrice este: " << suma << endl;
								}
									break;
								case 5:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor pare din matrice este: " << produsul << endl;
								}
									break;
								case 6:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor impare din matrice este: " << produsul << endl;

								}
									break;
								case 7:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i] == DoubleArray[j])
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor diagonalei principale a matricei este: " << suma << endl;
								}
									break;
								case 8:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i] == DoubleArray[j])
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor diagonalei principale a matricei este: " << produsul << endl;
								}
									break;
								case 9:
								{
									int suma = 0;
									int temprows = rows;
									int tempcols = 0;
									for (temprows >= 0; temprows--;tempcols++)
									{
											suma = suma + DoubleArray[temprows][tempcols];
									}
									cout << "Suma diagonalei secundare a matricei este: " << suma << endl;
								}
									break;
								case 10:
								{
									int produs = 1;
									int temprows = rows;
									int tempcols = 0;
									for (temprows >= 0; temprows--; tempcols++ && DoubleArray[temprows][tempcols] != 0)
									{
										produs = produs * DoubleArray[temprows][tempcols];
									}
									cout << "Produsul diagonalei secundare a matricei este: " << produs << endl;
								}
									break;
								default: cout << "A-ti introdus un caracter incorect" << endl;
									break;
							}
						}
						else
						{
							cout << "1.Media aritmetica a elementelor din matrice\t";
							cout << "2.Media geometrica a elementelor din matrice" << endl;
							cout << "3.Suma elementelor pare din matrice\t\t";
							cout << "4.Suma elementelor impare din matrice" << endl;
							cout << "5.Produsul elementelor pare din matrice\t\t";
							cout << "6.Produsul elementelor impare din matrice" << endl;

														int v10;
							cin >> v10;
							cout << endl;
							switch (v10)
							{
								case 1:
								{
									double MediaAritmetica;
									int suma = 0;
									int impartirea = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											suma = suma + DoubleArray[i][j];
											impartirea++;
										}
									}
									MediaAritmetica = suma / impartirea;
									cout << "Media aritmetica a elementelor matricei este: " << MediaAritmetica << endl;
								}
									break;
								case 2:
								{
									double mediaGeometrica;
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											produsul = produsul * DoubleArray[i][j];
										}
									}
									mediaGeometrica = sqrt(produsul);
									cout << "Media geometrica a elementelor din matrice este: " << mediaGeometrica << endl;
								}
									break;
								case 3:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor pare din matrice este: " << suma << endl;
									
								}
									break;
								case 4:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor impare din matrice este: " << suma << endl;
								}
									break;
								case 5:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor pare din matrice este: " << produsul << endl;
								}
									break;
								case 6:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor impare din matrice este: " << produsul << endl;

								}
									break;
								default: cout << "A-ti introdus un caracter incorect" << endl;
									break;
							}

						}

					}
						break;
					case 2:
					{
						cout << "Pana la care numar sa se genereze cifrele?" << endl;
						int lim;
						cin >> lim;
						cout << endl;
						DoubleArray = CreateDoubleArray(rows, cols);
						AutoFillDoubleArray(DoubleArray, rows, cols, lim);

						cout << "Doriti sa aflati ce numere se afla in matrice?" << endl;
						cout << "Da - 1 \t Nu - 2" << endl;
						int v8;
						cin >> v8;
						cout << endl;
						switch (v8)
						{
							case 1:
							{
								PrintDoubleArray(DoubleArray, rows, cols);
							}
								break;
							case 2:
								break;
							default:
								break;
						}

												cout << "Cum o sa prelucram matricea?" << endl;
						if (rows == cols)
						{
							cout << "1.Media aritmetica a elementelor din matrice\t\t";
							cout << "2.Media geometrica a elementelor din matrice" << endl;
							cout << "3.Suma elementelor pare din matrice\t\t\t";
							cout << "4.Suma elementelor impare din matrice" << endl;
							cout << "5.Produsul elementelor pare din matrice\t\t\t";
							cout << "6.Produsul elementelor impare din matrice" << endl;
							cout << "7.Suma elementelor diagonalei principale a matricei\t";
							cout << "8.Produsul elementelor diagonalei principale a matricei" << endl;
							cout << "9.Suma elementelor diagonalei secundare a matricei\t";
							cout << "10.Produsul elementelor diagonalei secundare a matricei" << endl;
							int v9;
							cin >> v9;
							cout << endl;
							switch (v9)
							{
								case 1:
								{
									double MediaAritmetica;
									int suma = 0;
									int impartirea = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											suma = suma + DoubleArray[i][j];
											impartirea++;
										}
									}
									MediaAritmetica = suma / impartirea;
									cout << "Media aritmetica a elementelor matricei este: " << MediaAritmetica << endl;
								}
									break;
								case 2:
								{
									double mediaGeometrica;
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											produsul = produsul * DoubleArray[i][j];
										}
									}
									mediaGeometrica = sqrt(produsul);
									cout << "Media geometrica a elementelor din matrice este: " << mediaGeometrica << endl;
								}
									break;
								case 3:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor pare din matrice este: " << suma << endl;
									
								}
									break;
								case 4:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor impare din matrice este: " << suma << endl;
								}
									break;
								case 5:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor pare din matrice este: " << produsul << endl;
								}
									break;
								case 6:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor impare din matrice este: " << produsul << endl;

								}
									break;
								case 7:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i] == DoubleArray[j])
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor diagonalei principale a matricei este: " << suma << endl;
								}
									break;
								case 8:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i] == DoubleArray[j])
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor diagonalei principale a matricei este: " << produsul << endl;
								}
									break;
								case 9:
								{
									int suma = 0;
									int temprows = rows;
									int tempcols = 0;
									for (temprows >= 0; temprows--;tempcols++)
									{
											suma = suma + DoubleArray[temprows][tempcols];
									}
									cout << "Suma diagonalei secundare a matricei este: " << suma << endl;
								}
									break;
								case 10:
								{
									int produs = 1;
									int temprows = rows;
									int tempcols = 0;
									for (temprows >= 0; temprows--; tempcols++ && DoubleArray[temprows][tempcols] != 0)
									{
										produs = produs * DoubleArray[temprows][tempcols];
									}
									cout << "Produsul diagonalei secundare a matricei este: " << produs << endl;
								}
									break;
								default: cout << "A-ti introdus un caracter incorect" << endl;
									break;
							}
						}
						else
						{
							cout << "1.Media aritmetica a elementelor din matrice\t";
							cout << "2.Media geometrica a elementelor din matrice" << endl;
							cout << "3.Suma elementelor pare din matrice\t\t";
							cout << "4.Suma elementelor impare din matrice" << endl;
							cout << "5.Produsul elementelor pare din matrice\t\t";
							cout << "6.Produsul elementelor impare din matrice" << endl;

														int v10;
							cin >> v10;
							cout << endl;
							switch (v10)
							{
								case 1:
								{
									double MediaAritmetica;
									int suma = 0;
									int impartirea = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											suma = suma + DoubleArray[i][j];
											impartirea++;
										}
									}
									MediaAritmetica = suma / impartirea;
									cout << "Media aritmetica a elementelor matricei este: " << MediaAritmetica << endl;
								}
									break;
								case 2:
								{
									double mediaGeometrica;
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											produsul = produsul * DoubleArray[i][j];
										}
									}
									mediaGeometrica = sqrt(produsul);
									cout << "Media geometrica a elementelor din matrice este: " << mediaGeometrica << endl;
								}
									break;
								case 3:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor pare din matrice este: " << suma << endl;
									
								}
									break;
								case 4:
								{
									int suma = 0;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												suma = suma + DoubleArray[i][j];
											}
										}
									}
									cout << "Suma elementelor impare din matrice este: " << suma << endl;
								}
									break;
								case 5:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 == 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor pare din matrice este: " << produsul << endl;
								}
									break;
								case 6:
								{
									int produsul = 1;
									for (int i = 0; i < rows; i++)
									{
										for (int j = 0; j < cols; j++)
										{
											if (DoubleArray[i][j] % 2 != 0 && DoubleArray[i][j] != 0)
											{
												produsul = produsul * DoubleArray[i][j];
											}
										}
									}
									cout << "Produsul elementelor impare din matrice este: " << produsul << endl;

								}
									break;
								default: cout << "A-ti introdus un caracter incorect" << endl;
									break;
							}

						}

					}
						break;
					default: cout << "A-ti introdus un caracter incorect" << endl;
						break;
				}
		}
				break;
		default: cout << "A-ti introdus un caracter incorect" << endl;
				break;
	}
	return 0;
}