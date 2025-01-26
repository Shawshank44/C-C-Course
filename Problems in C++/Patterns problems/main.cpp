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
    
    
    
    
    
    
    
     
    return 0;
}