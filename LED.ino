void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(8,HIGH);
//  digitalWrite(9,HIGH);
//  digitalWrite(10,HIGH);
//  digitalWrite(11,HIGH);
//  digitalWrite(12,HIGH);
//  delay(100);
  while(Serial.available()==0)
  {
    
  }
      int number=Serial.parseInt();
      Serial.println(number);
//      int number=7;
      int binary[5]={0,0,0,0,0};
      int count=0,remain;
      while(number!=0)
      {
        remain=number%2;
        number=number/2;
        binary[count]=remain;
        count++;
      }
      for(int i=5;i>=0;i++)
      {
        if(binary[i]==1)
          digitalWrite(i+8,HIGH);
      }

}
