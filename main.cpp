int makeArrayConsecutive2(vector<int> statues) {
    	//return-value
	int count=0;
    int diffSize=0;

	//getting smallest&greatest value
	int small=statues[0];
	int large=statues[0];
	for(int i=0;i<=statues.size()-1;i++){
		if(statues[i]<small && statues[i] !=small){
			small=statues[i];
		}
		if(statues[i]>large && statues[i] !=large){
			large=statues[i];
		}
	}
    
    //to-get difference
    for(int i=small;i<=large;i++){
        diffSize=diffSize+1;
    }
    
	//checking vector-array for missing integers
	int temp=small;
	for(int i=0;i<=diffSize;i++){
		bool match=false;
		small++;
		
		for(int j=0;j<=statues.size()-1;j++){
			if(small!=statues[j]){
				continue;
			}
			else{
				match=true;
				break;
			}	
		}
		if(match==false && small<large){
		count++;
		}
	}
	return count;
}
