#include <stdio.h>
#define Syringe_count  3
#define Dosage_count  5
#define injection_maxnum 20
int main()
{
    
    /*三种注射器 1 3 5*/
    int Syringe[Syringe_count] = {1, 3, 5};
    /*五种药剂容量*/
    double Dosage[Dosage_count] = {0.8, 2.0, 3.0, 4.0, 5.0};

    for (int i = 0; i < Dosage_count; i++)         //药剂找注射器，找到了就退出
    {
  
        for (int j = 0; j < Syringe_count;j++)
        {   
            if ( Dosage[i] <= Syringe[j]  )       //药液容量要小于注射器剂量
            {
                for (int num = 10; num <= injection_maxnum; num+=10)
                {     
                    printf("注射剂量选择为：%.2lf/%dml\n注射选择次数为：%d次\n单次注射剂量为：%.2lf/%d=%.2lfml\n\n", Dosage[i],Syringe[j],num,Dosage[i],num,Dosage[i]/num);  
                }
                break;
            }
         }

    }
        
        
    }
    
