char temp[32];
String temps;
volatile boolean receiveFlag=false;

void receiveEvent( int howMany ){
   for(int i=0; i< howMany; i++){
      temp[i]= Wire.read();
      temp[i+1]='\0';
   }

   for(int i=0; i< howMany; ++i)
      temp[i]=temp[i+1];
   temps=temp;
   receiveFlag=true;
}
