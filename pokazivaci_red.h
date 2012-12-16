struct tklijent{
  char imeprez[70];
	int godr, mjr, dr;
	float stanjet;
	float stanjed;
	int prioritet;
	int vrstatr;
};

struct el{
	tklijent e;
	el *s;
};
struct tred{
	el *f,*r;
	tred(){}
};
typedef tklijent element;
typedef tred Queue;

tred* InitQ(tred *Q){
	el *novi=new el;
	Q = new tred;
	novi->s=NULL;
	Q->r=novi;
	Q->f=novi;
	return Q;
}
tklijent FrontQ(tred *Q){
   return Q->f->s->e;
}
void EnQueueQ(element x, tred *Q){
	el *novi=new el;
	novi->e = x;
	novi->s=NULL;
	Q->r->s=novi;
	Q->r=novi;
}
void DeQueueQ(tred *Q){
	el *brisi = Q->f;
	Q->f = brisi->s;
    delete brisi;
}
bool IsEmptyQ(tred *Q){
	if(Q->r==Q->f)
		return true;
	return false;
}


