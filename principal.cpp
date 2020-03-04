
int main()
{
	TVet v;
	v.ler();
	cout << "Maior:"<< v.maior() << endl;
	cout << "Menor:"<< v.menor() << endl;
	cout << "Media sem extremos:"<< v.mediaEx() << endl;
	return 0;
}
