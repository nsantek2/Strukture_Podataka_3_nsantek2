struct tklijent{
  char imeprez[70];
	int godr, mjr, dr;
	float stanjet;
	float stanjed;
	int prioritet;
	int vrstatr;
};

struct tred{
	tklijent e[10000];
	int f,r;
};
typedef tklijent element;
typedef tred Queue;

int AddOne(int n) {
	return ((n+1)%10000);
}
tred* InitQ(tred *Q){
    Q = new tred;
    Q->f = 0;
	Q->r = 9999;
	return Q;
}
element FrontQ(tred *Q){
    return Q->e[Q->f];   
}
void EnQueueQ(element x, tred *Q){
    Q->r=AddOne(Q->r);
    Q->e[Q->r] = x;
}
void DeQueueQ(tred *Q){
	Q->f=AddOne(Q->f);
}
bool IsEmptyQ(tred *Q){
	if(AddOne(Q->r)==Q->f)
		return true;
	return false;
}

