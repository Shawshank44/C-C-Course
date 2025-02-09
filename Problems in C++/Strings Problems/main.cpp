#include <iostream> 
#include <string>
#include <cctype> // for isalpha and isdigits
using namespace std;


bool ispalindrome(string & str){ // 6th question funtion
    int left = 0;
    int right = str.length()-1;

    while (left<right)
    {
        if (tolower(str[left]!=tolower(str[right])))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


void Capitalize(string & str){// 8th question funtion
    bool newWord = true;
    for (char &c : str)
    {
        if (newWord && isalpha(c))
        {
            c = toupper(c);
            newWord = false;
        }else if (c == ' '){
            newWord = true;
        }
        
    }
    
}

string findLargestWord(string & str){ // 9th question funtion
    string largestword, currentword;
    for (char c : str)
    {
        if (c == ' '|| c == '\t'|| c == '\n')
        {
            if (currentword.length()>largestword.length())
            {
                largestword = currentword;
            }
            currentword = " ";
        }else{
            currentword = currentword+c;
        }
        
    }
    if (currentword.length()>largestword.length())
    {
        largestword = currentword;

    }
    return largestword;
    
}

char nextletter(char c){ // 10th question funtion
    if (isalpha(c))
    {
        if (c == 'z')
        {
            return 'a';
        }

        if (c == 'Z')
        {
            return 'A';
        }
        return c+1;
    }
    return c;
}

string ChangeToNextLetter(string & str){ // 10th question funtion
    string result;
    for (char c : str)
    {
        result = result+nextletter(c);
    }
    return result;
}


int main(){

    // 1. Write a program to find the length of a string entered by the user
    // string inputstring;
    // cout<<"Enter the string : ";
    // cin>>inputstring;
    // int length = inputstring.length();
    // cout<<"Length of the entered string is "<<length<<endl;

    // 2. Write a program to concatenate (join) two strings entered by user.
    // string str1,str2;
    // cout<<"Enter the first string : ";
    // cin>>str1;
    // cout<<"Enter the second string : ";
    // cin>>str2;
    // cout<<"Concatenation of two strings is : "<<str1<<" "<<str2<<endl;

    // 3. Write a program to find the frequency(repeated characters) of the given character by user in a string.
    // char inputString[100];
    // char target;
    // int frequency = 0;
    // cout<<"Enter a string : ";
    // cin>>inputString;
    // cout<<"Enter the target character : "<<endl;
    // cin>>target;

    // for (int i = 0; inputString[i] != '\0'; i++)
    // {
    //     if (inputString[i] == target)
    //     {
    //         frequency++;
    //     }
        
    // }

    // cout<<"Frequency of the "<<target<< " is "<<frequency<<endl;


    // 4. Write a program to find the number of vowels, consonants and digits in strings.
    // char inputstring[100];
    // cout << "Enter a string: " << endl;
    // cin >> inputstring;

    // int vowel = 0, consonants = 0, digits = 0;

    // for (int i = 0; inputstring[i] != '\0'; i++) {
    //     char c = tolower(inputstring[i]);
    //     if (isalpha(c)) {
    //         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    //             vowel++;
    //         } else {
    //             consonants++;
    //         }
    //     } else if (isdigit(inputstring[i])) {
    //         digits++;
    //     }
    // }

    // cout << "Vowels: " << vowel << endl;
    // cout << "Consonants: " << consonants << endl;
    // cout << "Digits: " << digits << endl;
    
    // 5. Write a program to remove all characters in a string except alphabets 
    // char inputString[100];
    // cout<<"Enter a string : ";
    // cin>>inputString;
    // char resultsstring[100];
    // int resultindex = 0;
    // for (int i = 0; inputString[i] != '\0'; i++)
    // {
    //     if (isalpha(inputString[i]))
    //     {
    //         resultsstring[resultindex++] = inputString[i];
    //     }
        
    // }
    
    // resultsstring[resultindex] = '\0';
    // cout<<"Output string obtained is "<<resultsstring<<endl;


    // 6. Write a program to check if a given string is a palindrome or not.
    // string input;
    // cout<<"Enter the string : ";
    // getline(cin,input);
    // if (ispalindrome(input))
    // {
    //     cout<<input<<" is a palidrome"<<endl;
    // }else{
    //     cout<<input<<" is not a palidrome"<<endl;
    // }

    // 7. Write a c++ program to count all the words in a given string. words must be separated by only one space.
    // string input;
    // cout<<"Enter a string : ";
    // getline(cin,input);
    // int wordcount = 0;
    // bool inword = false;

    // for (char c : input)
    // {
    //     if (c == ' ')
    //     {
    //         inword = false;
    //     }else{
    //         if (!inword)
    //         {
    //             wordcount++;
    //             inword = true;
    //         }
            
    //     }
        
    // }
    // cout<<"Number of words : "<<wordcount<<endl;
    

    // 8. Write a program to capitalize the first letter of each word of a given string, words must be separated by only one space.
    // string input;
    // cout<<"Enter a string : ";
    // getline(cin,input);
    // Capitalize(input);
    // cout<<"Capitalized Sentence is "<<input<<endl;

    // 9. Write a program to find the largest word in a given string.
    // string input;
    // cout<<"Enter a string : ";
    // getline(cin,input);
    // string largestword = findLargestWord(input);
    // cout<<"Largest word from the text is "<<largestword<<endl;

    /*
      10. Write a program to change every letter in a given string with the letter following it in the alphabet.
      (ie. a becomes b, p becomes q, z becomes a). (*Important)
    */
    // string input;
    // cout<<"Enter a string : ";
    // getline(cin,input);
    // string transformed = ChangeToNextLetter(input);
    // cout<<"The transformed string is : "<<transformed<<endl;
    
    

     
    return 0;
}