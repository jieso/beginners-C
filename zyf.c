#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"


void begin()
{
	SL* ret = NULL;
	houcha(&ret, 1);
	houcha(&ret, 2);
	houcha(&ret, 3);
	houcha(&ret, 4);
	my_pintf(ret);
	Schu(&ret);
	Schu(&ret);
	Schu(&ret);
	//Schu(&ret);
	//Schu(&ret);
	my_pintf(ret);


}


int main()
{
	begin();
	return 0;
}