void Nhapdiem(){
	float trungbinh, van, toan, anhvan;
	printf ("Nhap vao lan luot van, toan, anh van: ");
	scanf("%f,%f,%f",&van ,&toan ,&anhvan);
	trungbinh=(van*2 + toan*2 + anhvan)/5;
	if(trungbinh<=3){
		printf("Yeu");
	}else if(trungbinh<=5){
		printf("Trung binh");
	}else if(trungbinh<7.9){
		printf("Kha");
	}else{
		printf("Gioi");
	}
}