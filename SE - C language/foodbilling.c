#include<stdio.h>
 int it[100];
    int am[100];
    int qu[100];
struct hey
{
    int n;
    int j;
    int f;
    int amount;
    int o;
    int c;
    int ran;
    int ans;
    int z;
    int y;
    int x;
    int w;
    int v;
    int u;
    int t;
    int gst;
    int rd;
    int re;
    int ie;
    int ad;
};
void check(int a,int b,int c){
    if(a==101){
       printf("                        %d Dosas amount is :: %d\n",c,b);
    }
    else if(a==102){
       printf("                        %d Idlis amount is :: %d\n",c,b);
    }
    else if(a==103){
       printf("                     %d Uttapams amount is :: %d\n",c,b);
    }
    else if(a==104){
       printf("               %d Gujarati Thali amount is :: %d\n",c,b);
    }
    else if(a==105){
       printf("                      %d Undhiyu amount is :: %d\n",c,b);
    }
    else if(a==107){
       printf("                %d Makke di Roti amount is :: %d\n",c,b);
    }
    else if(a==108){
       printf("                %d Punjabi Thali amount is :: %d\n",c,b);
    }
    else if(a==106){
       printf("                      %d Khichdi amount is :: %d\n",c,b);
    }
    else if(a==109){
       printf("                      %d Panjiri amount is :: %d\n",c,b);
    }
    else if(a==110){
       printf("               %d Dry Manchurian amount is :: %d\n",c,b);
    }
    else if(a==111){
       printf("                      %d Noodles amount is :: %d\n",c,b);
    }
    else if(a==112){
       printf("                   %d fried rice amount is :: %d\n",c,b);
    }
}
 int c=0;
void add(int *i,int *au,int *q,int *r){
     for(int j=0+c;j<*r;j++){
        am[j]=*au;
        it[j]=*i;
        qu[j]=*q;
        }

}
int main(){
    FILE * menu;
    menu=fopen("menu.txt","r");
    char me[10000];
    while(!feof(menu)){
    fgets(me,10000,menu);
         printf("%s\n",me);
    }
    struct hey a;
    a.amount=0;
    a.c=0;
    printf("how many item you want ::");scanf("%d",&a.o);
    a.rd=a.o;
    a.re=a.rd;
    int q=0;
    h:
    while (!a.o==0)
    {
        printf("enter index of food item item ! ");
        scanf("%d",&a.n);
        printf("\n");
         switch (a.n)
    {
    case 1 :
        printf("item is Dosas\n");
        printf("quntity::");
        scanf("%d",&q);
        a.ie=101;
        a.ad=(q*100);
        a.amount+=(q*100);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
        a.c+=q;
        printf("%d item is Dosas\n",a.c);
        break;
    case 2 :
        printf("item is Idlis\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=102;
        a.ad=(q*50);
        a.amount+=(q*50);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
        a.c+=q;
        printf("%d item is Idlis\n",a.c);
        break;
    case 3 :
        printf("item is Uttapams\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=103;
        a.ad=(q*70);
        a.amount+=(q*70);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
         a.c+=q;
         printf("%d item is Uttapams\n",a.c);
        break;
    case 4 :
        printf("item is Gujarati Thali\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=104;
        a.ad=(q*250);
        a.amount+=(q*250);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
       a.c+=q;
       printf("%d item is Gujarati Thali\n",a.c);
        break; 
    case 5 :
        printf("item is Undhiyu\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=105;
        a.ad=(q*150);
        a.amount+=(q*150);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
       a.c+=q;
       printf("%d item is Undhiyu\n",a.c);
        break;
    case 6 :
        printf("item is Khichdi\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=106;
        a.ad=(q*50);
        a.amount+=(q*50);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
         a.c+=q;
         printf("%d item is Khichdi\n",a.c);
        break;        
    case 7 :
        printf("item is  Makke di Roti\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=107;
        a.ad=(q*150);
        a.amount+=(q*150);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
         a.c+=q;
         printf("%d item is  Makke di Roti\n",a.c);
        break;
    case 8 :
        printf("item is Punjabi Thali\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=108;
        a.ad=(q*200);
        a.amount+=(q*200);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
       a.c+=q;
       printf("%d item is Punjabi Thali\n",a.c);
        break;
    case 9 :
        printf("item is Panjiri\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=109;
        a.ad=(q*50);
        a.amount+=(q*50);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
        a.c+=q;
        printf("%d item is Panjiri\n",a.c);
        break;
    case 10 :
        printf("item is  Dry Manchurian\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=110;
        a.ad=(q*80);
        a.amount+=(q*80);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
        a.c+=q;
        printf("%d item is  Dry Manchurian\n",a.c);
        break;
    case 11 :
        printf("item is Noodles\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=111;
        a.ad=(q*70);
        a.amount+=(q*70);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
         a.c+=q;
         printf("%d item is Noodles\n",a.c);
        break;
    case 12 :
        printf("item is  fried rice\n");
         printf("quntity::");
        scanf("%d",&q);
        a.ie=112;
        a.ad=(q*50);
        a.amount+=(q*50);
        add(&a.ie,&a.ad,&q,&a.rd);
        c++;
        a.o--;
         a.c+=q;
         printf("%d item is  fried rice\n",a.c);
        break; 
    default:
        printf("somthing wrong sorry!!\n");
        goto h;
        break;
    }
    }
    printf("enter your 4 digit coupon code :: "); a:
    scanf("%d",&a.ran);
    a.f=0;
    a.j=a.ran;
    while (!a.ran==0)
    {
       a.ran/=10;
        a.f++;
    }
    a.y=0;a.z=0;a.w=0;a.u=0;a.t=0;
     a.gst=5;
        a.v=a.amount/a.gst;
        a.t=a.amount+a.v;
    if(a.f==4){
            while (!a.j==0)
            {
                a.z=a.j%10;
                a.j/=10;
                if(a.f==4||a.f==1){
                    a.y=a.y+a.z;
                }
                a.f--;
            }
           a.w=a.y%10;
           if(a.y%2==0){
            a.w+=10;
            a.x=a.amount/a.w;
            a.u=a.t-a.x;
           }
           else{
            a.w+=5;
            a.x=a.amount/a.w;
            a.u=a.t-a.x;
           }
    }else{
        printf("Sorry we do not find your code \n");
        printf("Wanna try again then press 1 for yes or else 0 for NO ::");
        scanf("%d",&a.ans);
        if(a.ans==1){
            printf("again enter your 4 digit coupon code :: ");
            goto a;
        }
    }
    printf("-----------------------------------------------------------------\n");
        for(int i=0;i<a.re;i++){
           check(it[i],am[i],qu[i]);  
        }       
        printf("Sir/Ma'am your order bill item  amount is :: %d\n",a.amount);
        printf("              minus coupon code amount is :: %d\n",a.x);
        printf("                            gst amount is :: %d\n",a.v);
        printf("                          total amount is :: %d\n",a.t);
    printf("-----------------------------------------------------------------");
}