#include <iostream>

int get_change(int m) {
	int n=0;
	while(m>0)
	{
		if(m>=10)
		{
			m-=10;
			n++;
		}
		if(m>=5&&m<10)
		{
			m-=5;
			n++;
		}
		if(m>0&&m<5)
		{
			m--;
			n++;
		}
	}
  
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
