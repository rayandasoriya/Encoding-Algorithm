
   lab:
   m=rand()%25+5;
   n=rand()%1000+5;
   long long double i,j,k;
   cout<<"\nEnter a four digit number  :";
   cin>>i;
   if(i>999 && i<=9999)
      {
//	   j=pow((i*m)+n,2);
	   j=pow(i,2)*m+n;
	   k=pow((j-n)/m,0.5);
	   cout<<"\nEncrypted form is   :"<<j<<endl;
	   cout<<"Decrypted form is   :"<<k<<endl;
	   cout<<"\nWant to continue?(y/n)  :";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')
	    goto lab;
	  else
	     exit(0);

      }
   else
      {
	  cout<<"Enter a valid four-digit number!!!";
	  cout<<"\nWant to continue?(y/n)   :";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')
	    goto lab;
	  else
	     exit(0);
      }
getch();
}
