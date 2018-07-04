int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int n; 
    scanf("%d",&n);
    long  a[400000],sum,id=-1,max1=0,num=10,c,m,I=0;
   long len=strlen(s);
    for(long i=0;i<len;i++)
   {       I=1;num=10;
        c=(int)s[i]-96;
       a[++id]=c;
       m=c;
    if(max1<a[id])
      max1=a[id];
       if(s[i+1]==s[i])
    { 
       while(num!=0) 
         { 
           if(s[i]==s[i+I]) 
            { 
            c=c+m;a[++id]=c; I++; 
           if(a[id]>max1)
           max1=a[id];
           }
            else
             {
          num=0; i=i+I-1;}     
     }}
  }  
    for(int a0 = 0; a0 < n; a0++){
        int x; 
        scanf("%d",&x);
      for(long i=0;i<len;i++)
      {if(x>max1){
          printf("No\n");break;}
        if(a[i]==x)
        {printf("Yes\n");break;}
       if(i+1==len)
      {
           printf("No\n");           
           break;
       }
        
        // your code goes here
    }
    }
    return 0;
}
