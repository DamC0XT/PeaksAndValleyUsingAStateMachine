

int data2[] ={1,5,4,9,4,6,2,7,6};
int i = 0;
int count = 0;
int peak = 0;
int main(){

for(i = 0; i < 9; i++) {

	if(data2[i] >= data2[i]){
		count++;
		if(data2[i] <= count ){

			peak ++;
			printf("%d",data2[i]);
		}
	}

}

printf("%d",peak);


}

