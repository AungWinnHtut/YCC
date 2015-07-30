
/*
hUpdatePOS.h
struct strPOS{
	int x;
	int y;
};
struct strPOS funUpdatePOS(char ch,struct strPOS orLoc);
*/
struct strPOS{
	int x;
	int y;
};

struct strPOS funUpdatePOS(char ch,struct strPOS orLoc)
{
	struct strPOS upos;
	upos=orLoc;
	if(ch==75)
	{
		upos.x--;
		if(upos.x<0) upos.x=640;
	}
	/*right*/
	if(ch==77)
	{
		upos.x++;
		if(upos.x>640) upos.x=0;
	}
	/*up*/
	if(ch==72)
	{
		upos.y--;
		if(upos.y<0) upos.y=480;
	}
	/*down*/
	if(ch==80)
	{
		upos.y++;
		if(upos.y>480) upos.y=0;
	}
	return upos;
}
