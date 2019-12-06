#include<iostream>
using namespace std;
class tictactoe
{
	public:
	static char arr[10];
	void win(int i)
	{
		cout<<"Player["<<i<<"] wins\n";
		exit(0);
	}
	void check(char a,int i)
	{
		if(arr[0]==a && arr[0]==arr[1] && arr[1]==arr[2])
		win(i);
		else if(arr[3]==a && arr[3]==arr[4] && arr[4]==arr[5])
		win(i);
		else if(arr[6]==a && arr[6]==arr[7] && arr[7]==arr[8])
		win(i);
		else if(arr[0]==a && arr[0]==arr[3] && arr[3]==arr[6])
		win(i);
		else if(arr[1]==a && arr[1]==arr[4] && arr[4]==arr[7])
		win(i);
		else if(arr[2]==a && arr[2]==arr[5] && arr[5]==arr[8])
		win(i);
		else if(arr[0]==a && arr[0]==arr[4] && arr[4]==arr[8])
		win(i);
		else if(arr[2]==a && arr[2]==arr[4] && arr[4]==arr[6])
		win(i);
	}
	static int game(char a,int i,int &b)
	{
		//cout<<i;
	if(arr[i]=='x'||arr[i]=='o'||i>9)
	{
		cout<<"Wrong move:\n";
		b--;
		return 0;
		;
		}	
		arr[i]=a;
	//	cout<<"arr[i]"<<arr[i];
		system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << endl;

    cout << "     |     |     " << endl << endl;
	}
};
char tictactoe :: arr[10]={'1','2','3','4','5','6','7','8','9'};
main()
{
	char t;
	int z;
	tictactoe p[2];
	for(int i=0;i<9;i++)
	{
		if(i%2==0)
		t='x';
		else
		t='o';
		cout<<"It's your move Player["<<i%2+1<<"]:(1-9 No.s)\n";
		cin>>z;
		//out<<"z="<<z;
		tictactoe::game(t,z-1,i);
		p[i%2].check(t,i%2+1);
	}
	cout<<"Draw!\n";
}
