#10
void Fi(){
	int n;
	printf("nhap vao n:");
	scanf("%d", &n);
	if (n<=0){
		printf("ko hop le");
	}
	int a=0, b=1, temp;
	printf("day fibonacci: ");
	for(int i=1; i<=n; i++){
		if (b<n){
			printf("%d ", b);
        	temp = a + b;
        	a = b;
        	b = temp;
		}
	}
}





int main()
	{
		thang();
		Nam();
		giaiPt();
//		Tiendien();
		CuuChuong();
		tinhGiaithua();
		In();
		Nhap();
		Fi();
		return 0;
	}