class Main inherits IO{
	mod(a:Int,b:Int):Int{
		a-(a/b)*b
	};
	pow(a:Int,b:Int):Int{
	 let exp : Int  in{
		while(not(b=0))loop{
			exp <- exp*a;
            b<- b-1;
			}pool;
			exp;
		}	
	};
	bin2deci(a:Int):Int{
		let deci :Int , i:Int,rem :Int in{
			deci <- 0; 
			i <- 0;
			while(not(a=0))loop{
				rem <- mod(a,10);
				a <- a/10;
				deci <- deci + rem * pow(2,i);
				i <- i+1;
			}pool;
			deci;
		}
	};
	main():Object{
		let x:Int in{
 		out_string("Enter the number :");
 		x <- in_int();
 		out_int(self.bin2deci(x));
 		
		 }
		
	};
};