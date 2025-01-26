#include <iostream> 

using namespace std;


int main(){

    //Star patterns:
    // 1.Square patterns:
    // for loop 
    // for (int i = 0; i < 50; i++) // for rows 
    // {
    //     for (int j = 0; j < 50; j++) // for columns
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // while loops:
    // int i = 0; // For rows
    // while (i < 50) {
    //     int j = 0; // For columns
    //     while (j < 50) {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    
    // 2.Left triangle star pattern:
    // for loop:
    // for (int i = 1; i <= 5 ; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // while loop :
    // int i = 1;
    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 3. Left down triangle star pattern :
    // for loop 
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // while loop 
    // int i = 5;
    // while (i>= 1)
    // {
    //     int j = i;
    //     while (j>0)
    //     {
    //         cout<<"*";
    //         j--;
    //     }
    //     cout<<endl;
    //     i--;
        
    // }

    // 4. Right triangle star pattern
    // for loop
    // for (int i = 1; i < 5; i++)
    // {
    //     for (int k = 5 - i; k > 0; k--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // while loop 
    // int i = 1;
    // while (i<5)
    // {
    //     int k = 5-i;
    //     while (k>0)
    //     {
    //         cout<<" ";
    //         k--;
    //     }
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    
    // 5. Right down triangle star pattern
    // for loop 
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int k = 5 - i; k > 0; k--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // while loop
    // int i = 5;
    // while (i >= 1)
    // {
    //     int k = 5 - i;
    //     while (k>0)
    //     {
    //         cout<<" ";
    //         k--;
    //     }
    //     int j = i;
    //     while (j > 0)
    //     {
    //         cout<<"*";
    //         j--;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // 6. Pyramid triangle:
    // for loop 
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 1; k <= 5 - i; k++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j < 2*i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // while loop
    // int i = 1;
    // while (i <= 5)
    // {
    //     int k = 1;
    //     while (k <= 5-i)
    //     {
    //         cout<<" ";
    //         k++;
    //     }
    //     int j = 1;
    //     while (j < 2*i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }

    //     cout<<endl;
    //     i++;
    // }
    
    // 7. Reverse Pyramid triangle :
    // for loop 
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int k = 1; k <= 5-i; k++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= 2*i-1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    //while loop
    // int i = 5;
    // while (i >= 1)
    // {
    //     int k = 1;
    //     while (k <= 5-i)
    //     {
    //         cout<<" ";
    //         k++;
    //     }
    //     int j = 1;
    //     while (j <= 2*i-1)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // Numbers and characters :
    //8. Number patterns
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    // While loop 
    // int i = 1;
    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 9. Square pattern in repetative numbers
    // for loop
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
    
    // while loop 
    // int i = 1;
    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j <= 5)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 10. square pattern in sequence numbers
    // for loop 
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;    
    // }

    // while loop
    // int i = 1;
    // while (i <= 5){
    //     int j = 1;
    //     while (j <= 5)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    // 11. number pattern with incremented sequence 
    // int count = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    
    // While loop
    // int count = 1;
    // int i = 1;
    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         j++;
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 12. number pattern with incremented column sequence
    // for loop
    // int count = 1;
    // for (int i = 0; i <= 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // while loop
    // int count = 1;
    // int i = 0;
    // while (i <= 5)
    // {
    //     int j = 0;
    //     while (j < 5)
    //     {
    //         j++;
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }

    // 13. pascal triangle:
    // for loop :
    // for (int i = 0; i <= 5; i++)
    // {
    //     int num = 1;
    //     for (int k = 1; k <= 5 - i; k++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<num<<" ";
    //         num = num * (i - j)/j;
    //     }
    //     cout<<endl;
    // }

    // while loop 
    // int i = 0;
    // while (i<=5)
    // {
    //     int num = 1;
    //     int k = 1;
    //     while (k <= 5 - i)
    //     {
    //         cout << " ";
    //         k++;
    //     }
    //     int j = 1;
    //     while (j<= i)
    //     {
    //         cout<<num<<" ";
    //         num = num * (i - j)/j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    // 14. Character patterns:
    // char alpha = 'a';
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<alpha;
    //     }
    //     alpha++;
    //     cout<<endl;
    // }

    // while loop 
    // char alpha = 'a';
    // int i = 1;
    // while (i<=5)
    // {
    //     int j = 1;
    //     while (j<= i)
    //     {
    //         cout<<alpha;
    //         j++;
    //     }
    //     i++;
    //     alpha++;
    //     cout<<endl;
        
    // }
    
    // 15.Character patterns sequence :
    // for loop 
    // char alpha = 'a';
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<alpha++<<" ";
    //     }
    //     cout<<endl;
    // }

    // while loop
    // char alpha = 'a';
    // int i = 1;
    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<alpha++<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }
    
    return 0;
}