
#include<iostream>
#include<string.h>


/*    Names:Cyiza Mugabo Christian 
Github:https://github.com/cyizaslashes

  */
using namespace std;

bool test_Anagrams(){
	
	 char first[20], second[20];
    int firstlen, secondlen, found=0, not_found=0;
    cout<<"Enter the First String: ";
    cin>>first;
    cout<<"Enter the Second String: ";
    cin>>second;
    firstlen= strlen(first);
    secondlen= strlen(second);
    if(firstlen == secondlen)
    {
        for(int i=0; i<firstlen; i++)
        {
            found = 0;
            for(int j=0; j<firstlen; j++)
            {
                if( first[i] == second[j])
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if(not_found == 1)
            cout<<"\n THESE STRINGS ARE NOT ANAGRAMS";
        else
            cout<<"\n ***THESE STRINGS ARE ANAGRAMS***";
    }
    else
        cout<<"\n The strings don't have same length!";
    cout<<endl;
	
	
}



int main()
{
	test_Anagrams();
   
    return 0;
}
