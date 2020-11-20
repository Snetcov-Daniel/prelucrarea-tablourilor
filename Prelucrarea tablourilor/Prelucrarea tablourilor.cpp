#include <iostream>
#include <math.h> // biblioteca aceasta imi va trebui pentru sintaxa: <sqrt> ,pentru a calcula media geometrica
using namespace std;

int* CreateSingleArray(int size) 
{
	/*Functia aceasta initializeaza un tablou unidimensional dinamic prin pointer
	luand un argument: size( adica cat de lung va fi tabloul) si il returneaza prin sintaxa: return
	ca sa il putem folosi in functia principala(int main).*/

	int *SingleArray;
	SingleArray = new int[size];

	return SingleArray;
} 

void ManualFillingSingleArray(int* SingleArray,int size)
{
	/*Aceasta functie este pentru introducerea datelor de la tastatura intr-un tablou unidimensional dinamic prin pointer.
	In argumente se i-au tabloul ce trebuie prelucreat si lungimea lui - size.
	Daca tabloul este initializat prin functia de mai sus atunci ca argument se va scrie:
	ManualFillingSingleArray(SingleArray,size),unde SingleArray este denumirea tabloului,
	iar daca tabloul este initializat in functia principala fara pointer, atunci trebuie de scris cu adresa sa:
	ManualFillingSingleArray(&SingleArray,size), unde SingleArray este denumirea tabloului*/
	for (int i = 0; i < size; i++)
	{
		cout << "Introduceti numarul de pe pozitia " << i << " \t";
		cin >> SingleArray[i];
		cout << endl;
	}
}

void AutoFillSingleArray(int *SingleArray,int size,int lim)
{
	/*Functia aceasta este pentru introducerea datelor in tablou de calculator.
	In argumente se i-au tabloul,lungimea tabloului - size , si limita pana la care numar se vor genera cifrele - lim.
	Daca tabloul era initializat prin functia "CreateSingleArray", argumentele se vor scrie:
	AutoFIllSingleArray(SingleArray,size,lim),unde SingleArray este denumirea  tabloului,iar daca tabloul
	este initializat in functia principala fara pointer,atunci tabloul trebuie scris cu adresa sa:
	AutoFillSingleArray(&SingleArray,size,lim), unde SingleArray este denumirea tabloului.*/
	for (int i = 0; i < size; i++)
	{
		SingleArray[i] = rand() % lim;
	}
}

void PrintSingleArray(int* SingleArray,int size)
{
	/*Aceasta functie arata ce date contine un tablou unidimensional.
	ca argument se ia tabloul si marimea lui: "size".
	La fel ca si mai sus: daca tabloul este initializat prin functia "CreateSingleArray"
	ca argument de tablou se ia PrintSingleArray(SingleArray,size), unde SingleArray este denumirea tabloului
	,iar daca tabloul este initializat in functia principala fara pointer, trebuie de scris argumentul cu adresa sa:
	PrintSingleArray(&SingleArray,size),under SingleArray este denumirea tabloului*/
	for (int i = 0; i < size; i++)
	{
		cout << SingleArray[i] << endl;
	}
}

int** CreateDoubleArray(int rows, int cols)
{
	/*Aceasta functie creaza un tablou bidimensional dinamic luand in argument cate randuri si coloane va avea tabloul*/
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
	/*La fel ca si functia cu tabloul unidimensional de mai sus,
	aceasta functie este pentru introducerea datelor sinestatator de utilizator in tablou.
	In argumente se i-au tabloul ce trebuie prelucrat - "DoubleArray",randurile - "rows" si coloanele - "cols".
	Daca folosim functia de mai sus in argument de tablou trebuie doar de scris: 
	"ManualFillingDoubleArray(DoubleArray,rows,cols)",deoarece tabloul este cu pointeri
	,iar daca initializam tabloul in functia principala fara pointeri - trebuie de a aduce argumentul cu tablou cu adresa sa:
	"ManualFillingDoubleArray(&DoubleArray,rows,cols)"*/
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
	/*Aceasta functie umple tabloul undimensional dinamic cu cifre psevdohaotice
	luand in considerare pana la care numar se vor genera(utilizatorul va alege).Argumentele luate pentru functie
	sunt tabloul ce trebuie prelucrat : "DoubleArray", randurile - "rows",coloanele - "cols" si limita,
	pana la care numar se vor genera cifrele - "lim".Daca tabloul a fost initializat prin functia "Create DoubleArray"
	atunci functia se va scrie: AutoFillDoubleArray(DoubleArray,rows,cols,lim),unde DoubleArray este denumirea  tabloului,
	iar daca tabloul era initializat in functia principala fara pointer,atuncie functia se va scrie cu adresa tabloului:
	AutoFillDoubleArray(&DoubleArray,rows,cols,lim),unde DoubleArray este denumirea tabloului.**/
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
	/*Aceasta functie reprezinta pe ecran ce date contine tabloul.
	Ca argumente se i-au tabloul,randurile si coloanele.
	Daca tabloul este initializat prin functia "CreateDoubleArray", atunci functia se va scrie:
	PrintDoubleArray(DoubleArray,rows,cols),unde DoubleArray este denumirea tabloului,
	iar daca tabloul este initializat in functia principala fara pointer, atunci argumentul cu tablou es va scrie cu adresa sa:
	PrintDoubleArray(&DoubleArray,rows,cols),under DoubleArray este denumirea tabloului*/
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
			/*Acest case se va executa daca utilizatorul doreste sa lucreze cu un tablou unidimensional*/
			int* SingleArray;
			cout << "Cate cifre va avea vectorul?" << endl;
			int size; /*Lungimea tabloului*/
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
					/*Acest case se va executa daca utilizatorul doreste sinestatator sa introduca datele*/
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
					cin >> v5; /*aici utilizator alege cum doreste sa prelucreze tabloul*/
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
								impartirea++; /*Ea se va mari de atatea ori de cate ori se va executa ciclul*/
							}
							MediaAritmetica = suma / impartirea;
							cout << "Media aritmetica a elementelor vectorului este: " << MediaAritmetica << endl;
							delete[] SingleArray; /*Nu uitam sa stergem orice tablou dinamic!*/
						}
							break;

						case 2:
						{
							double MediaGeometrica; /*Am folosit double,ci nu float,pentru a economisi memoria, float - 8 bytes,double - 4*/
							int suma = 1;
							for (int i = 0; i < size; i++)
							{
								suma = suma * SingleArray[i];
							}
							MediaGeometrica = sqrt(suma); /*Aici vedem dece am introdus biblioteca math.h*/
							cout << "Media geometrica a elementelor din vector este: " << MediaGeometrica << endl;
							delete[] SingleArray; /*Nu uitam sa stergem orice tablou dinamic!*/
						}
							break;

						case 3:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 == 0) /*Daca numarul este par el va dea la impartire dupa virgula  0*/
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor pare din vector este: " << suma << endl;
							delete[] SingleArray; /*Nu uitam sa stergem orice tablou dinamic!*/
						}
							break;

						case 4:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 != 0)/* Orice numar impar impartit la 2 va dea dupa virgula un rest oarecare*/
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor impare din vector este: " << suma << endl;
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
						}
							break;

						case 5:
						{
							int produsul = 1; /*Inmultirea cu 0 va dea 0 tot timpul,deci trebuie sa inmultim cu 1 prima data*/
							for (int i = 0; i < size; i++)
							{
								if (SingleArray[i] % 2 == 0)
								{
									produsul = produsul * SingleArray[i];
								}
							}
							cout << "Produsul elementelor pare din vector este: " << produsul << endl;
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
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
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
						}
							break;

						case 7:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 == 0 && i != 0) /*i este egal cu pozitia in vector, aici putem afla, este el pare, sau nu*/
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor din pozitiile pare a vectorului este: " << suma << endl;
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
						}
							break;

						case 8:
						{
							int suma = 0;
							for (int i = 0; i < size; i++)
							{
								if (i % 2 != 0 && i != 0) /*Impartirea cu 0  va provoca probleme...*/
								{
									suma = suma + SingleArray[i];
								}
							}
							cout << "Suma elementelor din pozitiile impare a vectorului este: " << suma << endl;
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
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
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
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
							delete[] SingleArray;/*Nu uitam sa stergem orice tablou dinamic!*/
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
					cin >> lim; /*aici introducem pana la care numar se vor genera cifrele in functie,nu confundam cu lungimea tabloului!*/
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
						/*Daca ai citit comentariile de la case 1 (switch(v4)),vei intelege ce se intampla aici*/
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
							delete[] SingleArray;
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
				cin >> rows; /*Cate randuri va avea tabloul*/
				cout << endl;
				cout << "Cate coloane va avea matricea?" << endl;
				int cols;
				cout << endl;
				cin >> cols; /*Cate coloane va avea tabloul*/
				cout << endl;
				if (rows != cols) 
				{
					/*Aici utilizatorul va primi un mesaj ca tabloul bidimensional se va primi dreptunghic si va avea mai putine variante de a il prelucra
					si ii propune sa re-introduca randurile si coloanele*/
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
							/*Daca utilizatorul s-a razgandit , variabilele rows si cols o sa fie re-introduse*/
							cout << "Cate randuri va avea matricea?" << endl;
							cin >> rows;
							cout << endl;
							cout << "Cate coloane va avea matricea?" << endl;
							cin >> cols;
							cout << endl;
						}
							break;
						case 2:
						/*Daca utilizatorul nu s-a razgandit el va merge mai departe cu tabloul dreptunghic*/
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
									for (int i = 0; i < rows; i++) /*Aici este procesul de exterminare a tabloului bidimensional*/
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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
									for (int i = 0; i < rows; i++)
									{
										delete[] DoubleArray[i];
									}
									delete[] DoubleArray;
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