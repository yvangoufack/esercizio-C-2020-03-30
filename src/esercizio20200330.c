#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>



/*
 ============================================================================
 Name        : Esercizio
 Author      : Yvan Ngoufack
 Version     :
 Copyright   : Your copyright notice
 Description : esercizio-C-2020-03-30 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



                    	unsigned long fibonacci (unsigned int n){

                    		for (n=0; n<2; n++){
	   
                    			
                    	   fibonacci(n)=n; // @suppress("Type cannot be resolved")
                    	
                    		}

                    		if (n>2){

                    		
                           fibonacci(n)=fibonacci(n-1)+fibonacci(n-2); // @suppress("Type cannot be resolved")
                   
                    		}

                    	}

                    	unsigned long* fibonacci_array(unsigned int n){

                    		unsigned long*array;

                    		array=malloc((n+1)*sizeof(long));

                    		if (array==0){
                    			
                    			perror("error");
                    			exit(0);
                    		}
                    		
                    		return array;

                           free(array);

                    	}




                          int main(int argc, char * argv[]) {


  long fibonacci_result;

  fibonacci_result= fibonacci(39);


 
  long *fibonacci_result_copy;
 


  void memcpy(*fibonacci_result_copy, fibonacci_result, size_t n);



  unsigned long reverse(long * fibonaci_result_copy, long array_len) {
	 
	   return reverse(fibonacci_result_copy, 0, array_len);}

 
 unsigned long confrontare (unsigned long*fibonacci_result, unsigned long*fibonacci_result_copy, int size ){
	 
	  int i;
	  for (i=0; i<size;i++){
		  
		  if (fibonacci_result[i]!=fibonacci_result_copy[i])
			  return 1;
	  }
	 return 0;
 }
