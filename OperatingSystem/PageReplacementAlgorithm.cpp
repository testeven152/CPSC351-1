#include "PageReplacementAlgorithm.hpp"

LeastRecentlyUsedAlgorithm::LeastRecentlyUsedAlgorithm(){

}

struct Word LeastRecentlyUsedAlgorithm::findVictim(){   
    Word temp;
    temp.value_ = lruList[256];
    updateUsage(temp);
    return temp;
}

void LeastRecentlyUsedAlgorithm::updateUsage(struct Word page){
    for(int i =0; i < 256; i++) {
        if(lruList[i] == page.value_) {
            lruList.push(lruList[i]);
            for(int j = i; j < 256; j++) {
                lruList[j] = lruList[j + 1];
            }
        }
    }
}

struct Word FirstInFirstOutAlgorithm::findVictim(){
    int TLB;
		
		for(int i =0; i < TLBentry[16]; i++){
			if(TLB[i].pagenumber = pagenumber){
		
			for(int i=0; i < TLBentry[16] - 1; i++){
				TLB[i] = TLB[i+1];
				break;
			
		}

	}
		

		if(i ==TLBentry[16] ){ // inserting if loop does not break
		int j=0;
		for(j=0; j<i;j++){
			TLB[j]=TLB[j+1];

		}

} 
		TLB[i]._pagenumber = pagenumber;
		TLB[i]._framenumber = framenumber;
		
}

}

