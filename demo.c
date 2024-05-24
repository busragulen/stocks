//stock market income guesser per month given info/

#include <stdio.h>
#include <math.h>

int main(){
    int capital, due, stop, nstop, invest, ndue;
    float rate,nrate, factor, final, nfinal, newincome, newest;
    
    printf("Anapara=?");
    scanf("%d", &capital);
    
    printf("Aylık faiz oranı=? (Zarar için lütfen - kullanınız.)");
    scanf("%f" , &rate);
    
    printf("Kaç ay=?");
    scanf ("%d", &due);
    
    
    factor= rate/100;
    final= capital * pow(factor+1,due);
    
    printf(" %d ay sonunda elinizde olan bakiye %.2f 'dir.", due, final);
    printf("Devam etmek istiyorsanız 1'e, istemiyorsanız 0'a basınız'. "); scanf("%d", &stop);
    
    if(stop==0){
        printf("Teşekkürler. Program sonlandırılmıştır.");
        return 0;
    }
    
    if(stop>1){
        printf("Desteklenmeyen veri girişi. Program sonlandırılmıştır.");
        return 0;
    }
    
    
    while(stop=1){
       capital=final;
       printf("Yeni yatırım yapmak istiyorsanız 1'e, istemiyorsanız 0'a basınız."); scanf("%d", &invest);
       
       if(invest==0){
            printf("Aylık faiz oranı=? (Zarar için lütfen - kullanınız.)");
            scanf("%f" , &rate);
    
            printf("Kaç ay=?");
            scanf ("%d", &due);
        
    
            factor= rate/100;
            final= capital * pow(factor+1,due);
    
            printf(" %d ay sonunda elinizde olan bakiye %.2f 'dir.", due, final);
            printf("Devam etmek istiyorsanız 1'e, istemiyorsanız 0'a basınız'. "); scanf("%d", &stop);
            
            if(stop==0){
                printf("Teşekkürler. Program sonlandırılmıştır.");
                break;
            }
            }
            
        if(invest=1){
            printf("Yeni yatırımın TL olarak tutarını yazınız.");
            scanf("%f" , &newincome);
       
            printf("Aylık faiz oranı=? (Zarar için lütfen - kullanınız.)");
            scanf("%f" , &nrate);
    
            printf("Kaç ay=?");
            scanf ("%d", &ndue);
       
            factor= nrate/100;
            newest= capital+newincome;
            nfinal= newest * pow(factor+1,ndue);
       
            printf("%d ay sonunda elinizde olan bakiye %.2f 'dir.", ndue, nfinal);
            printf("Devam etmek istiyorsanız 1'e, istemiyorsanız 0'a basınız'. "); scanf("%d", &stop);
            
            if(stop==0){
                printf("Teşekkürler. Program sonlandırılmıştır.");
                break;
                }
            }
       
     }
        if(stop>1){
            printf("Desteklenmeyen veri girişi. Program sonlandırılmıştır.");
            return 0;
            }
       
    }
    

