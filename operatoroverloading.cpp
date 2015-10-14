#include<iostream>
using namespace std;
class box
{
	private:
		int length;
		int breadth;
		int height;
	public:
		int totalvolume()
		{
			return length+breadth+height;
		}
		void getlength(int len)
		{
			length=len;
		}
		void getbreadth(int bread)
		{
			breadth=bread;
		}
		void getheight(int hei)
		{
			height=hei;
		}
		box operator+(box b) 
		{
			box b1;
			b1.length=this->length+b.length;
			b1.length=this->length+b.length;
			b1.length=this->length+b.length;
		}
};
int main()
{
	box a1;
	box a2;
	box a3;
	int volume =0 ;
	a1.getlength(3);
	a1.getbreadth(3);
	a1.getheight(3);
	a2.getlength(3);
	a2.getbreadth(3);
	a2.getheight(3);
	a3=a1+a2;
	volume = a3.totalvolume();
	cout<<volume;
}
