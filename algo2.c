#include <stdio.h>
#include <string.h>

int occur(char* word,char* text);

int main(){
	char word[]="and";
	char text[]="I hear and I and forget, I see and I remember, I do and I understand";
	int k = occur(word,text);
	printf("%d",k);
	
	
	return 0;
	}


int occur(char* word,char* text){
	int i,j,count=0,occur=0;;						//declear variable
	for (i=0;i<=strlen(text);i++){
		if(text[i]==word[0] || text[i]==(word[0]-32)){		// if first letter is equal
			for(j=0;j<strlen(word);j++){					
				if((text[i+j]==word[j]) || (text[i+j]==(word[j]-32))){	// check the others arev correct
						count++;				// count all are equal 
						if(count==strlen(word)){
							occur++;					
							count=0;
						}
				}else if((text[i+j]!=word[j]) && (text[i+j]!=(word[j]-32))){
					count=0;
					}	
				
				}
			/*if(count==strlen(word)){
				occur++;
				count=0;
				}*/	
	}
		
		}
	
	
	
	
	
	
	
	return (occur-1);
	}
