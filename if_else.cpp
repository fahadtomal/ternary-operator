// ESTIMATE THE WEIGHT OF CAT WHETHER IT IS PERFECT OR
// UNDERWEIGHT BY USING TERNARY OPERATOR( ? : )
// OVERWEIGHT CAN'T BE SAID BECAUSE TERNARY OPERATOR IS
// USED


#include<iostream>
using namespace std;
class cat{
                                    /* by default private*/
    int age;
    int weight,weight_1;
    string R ;
 public:
    int     weight_cal();
    int     result();
};

int cat::weight_cal()              /* function definition
                                      outside the class */
{
    cout<<"Input the age of your cat: ";
    cin>>age;
    cout<<"Input the weight of your cat: ";
    cin>>weight_1;
    weight = age +( age * 1.5);
    return(weight);         // Tis function returns int value
                            // weight
}
int cat::result()
{
    cout<<"Weight:";
    R = (weight_1>= weight) ? "Perfect !" : "Underweight" ;

               /*  x ? y : z -->> TERNARY OPERATOR */

    cout<< R;
    cout<<endl;
    cout<<endl;
}

int main()
{
     int n;                    // n=number of cat(s)
     cout<<"Enter the nummber of cat(s): ";
     cin>>n;
     cout<<endl<<endl<<endl;

    cat a[n];

    for(int i=0 ; i<n ; i++)
    {
      a[i].weight_cal();
      a[i].result();
    }


    /*                          // for single cat
        a.weight_cal();
        a.result();
    */


    return 0;
}
