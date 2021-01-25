#include <fstream>
#include <iostream>
using namespace std;


struct scan_info
{
	char model[25]; // наименование модели
	int price; //цена
	double x_size; //горизонтальный размер области сканирования
	double y_size; //вертикальный размер области сканирования

};

int save_info(const char* file, const scan_info* info, unsigned long count) {
	unsigned long real_count = 0;
	for (unsigned int k = 0; k < count; ++k)
		if (info[k].price >= 200 && isalpha(info[k].model[0])) real_count++;
	if (real_count == 0)
		return -1;

	ofstream o_file(file, ios::binary);
	if (o_file.fail())
		return -1;
	o_file.write((char*)&real_count, sizeof(long));

	char chrs[2][2] = { 'A','Z','a','z' };

	for (int j = 0; j < 2; ++j) {
		for (unsigned long i = 0; i < count; ++i) {
			if (info[i].model[0] >= chrs[j][0] && info[i].model[0] <= chrs[j][1]
				&& info[i].price >= 200) {
				o_file.write((char*)&info[i], sizeof(scan_info));
				if (o_file.fail()) {
					o_file.close();
					return -1;
				}
			}
		}
	}

	o_file.close();
	return 0;
}

unsigned long load_info(const char* file, scan_info*& info) {
	ifstream i_file(file, ios::binary);
	if (i_file.fail())
		return 0;

	unsigned long count = 0;
	i_file.read((char*)&count, sizeof(long));
	info = new scan_info[count];
	for (unsigned long i = 0; i < count; ++i) {
		i_file.read((char*)&info[i], sizeof(scan_info));
		if (i_file.eof() && i < count - 1) {
			i_file.close();
			delete[] info;
			return 0;
		}
	}
	i_file.close();
	return count;
}

unsigned long input(scan_info*& info_arr) {
	unsigned long count = 0;
	cout << endl;
	cout << "Count of records:"; cin >> count;
	info_arr = new scan_info[count];
	for (unsigned long i = 0; i < count; ++i) {
		cout << endl << "Record number " << i + 1 << endl;
		cout << "Model:"; cin >> info_arr[i].model;
		cout << "Price: "; cin >> info_arr[i].price;
		cout << "X-size:"; cin >> info_arr[i].x_size;
		cout << "Y-size:"; cin >> info_arr[i].y_size;
	}

	return count;
}

void print_one(const scan_info* info, unsigned long n)
{
	cout << endl << "Number:" << n + 1 << endl;
	cout << "Model:" << info[n].model << endl;
	cout << "Price:" << info[n].price << endl;
	cout << "X-size:" << info[n].x_size << endl;
	cout << "Y-size:" << info[n].y_size << endl;
}

void print_all(const scan_info* records, unsigned long count)
{
	for (unsigned long i = 0; i < count; ++i)
		print_one(records, i);
}

int main() {
	scan_info* records = 0;
	char file[25];
	unsigned long count = 0;


	//first menu
	while (count == 0) {
		cout << "1.Input records" << endl;
		cout << "2.Load from file" << endl;
		cout << "3.Exit" << endl;

		cin.clear();
		char ch;
		cin >> ch;

		switch (ch) {
		case '1':
			count = input(records);
			if (count == 0)
				cout << "Error, too many records" << endl << endl;
			break;
		case '2':
			cout << "File : "; cin >> file;
			count = load_info(file, records);
			if (count == 0)
				cout << "Error reading file" << endl << endl;
			break;
		case '3':
			exit(0);
		default:
			cout << "Incorrect input" << endl << endl;
			break;
		}
	}

	unsigned long rec_number = -1;



	//second menu
	while (true) {
		cout << endl << endl
			<< "1.Show record" << endl
			<< "2.Show all" << endl
			<< "3.Save to file" << endl
			<< "4.Exit" << endl;

		cin.clear();
		char ch;
		cin >> ch;
		switch (ch) {
		case '1':
			cout << "Record number:"; cin >> rec_number;
			if (--rec_number < count)
				print_one(records, rec_number);
			else
				cout << "Out of range" << endl;
			break;

		case '2':
			print_all(records, count);
			break;
		case '3':
			cout << "File:"; cin >> file;
			save_info(file, records, count);
			break;
		case '4':
			exit(0);
		default:
			cout << "Incorrect input" << endl;
			break;
		}
	}
}