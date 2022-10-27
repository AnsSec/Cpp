 #include<iostream>
 using namespace std;
 int main(){
    float num1,num2,operation;
    cout<<"Enter Number 1: "; cin>>num1;
    cout<<"Enter Number 2: "; cin>>num2;
    cout<<"\n[Choose Option]\n1.Addition\n2.Subtraction\n3.division\n4.Multiplication\n|> ";
    cin>>operation;

    if (1==operation){
        cout<<"Total of ("<<num1<<")"<<" + "<<"("<<num2<<")"<<" = "<<"{"<<num1+num2<<"}";
    }
    else if (2==operation){
        cout<<"Total of ("<<num1<<")"<<" - "<<"("<<num2<<")"<<" = "<<"{"<<num1-num2<<"}";
    }
    else if(3==operation){
        cout<<"Total of ("<<num1<<")"<<" / "<<"("<<num2<<")"<<" = "<<"{"<<num1/num2<<"}";
    }
    else if(4==operation){
        cout<<"Total of ("<<num1<<")"<<" * "<<"("<<num2<<")"<<" = "<<"{"<<num1*num2<<"}";
    }
    else{
        cout<<"choose Correct Option";
    }

    return 0;
 }
