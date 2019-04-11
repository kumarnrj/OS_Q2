#include<iostream>
using namespace std;
int main()
{
            static int q2[5]={3,2};

            int count1 = 0;
            int time =0;
            while(time>=0)
            {
                cout<<"intial "<<time <<endl;
                for(int i =0;i<2;i++)
                {
                        if(time>=0 && time <2)
                        {
                                    if(q2[i]!=0){
                                    cout<<"time "<<time <<endl;

                                    q2[i]= q2[i]- 1;
                                    cout<<"value" <<q2[i]<<endl;
                                    count1++;
                                    break;
                                    }
                                    else
                                    {
                                        goto f;
                                    }
                        }



                        else{

                                time =-1;
                                int t = q2[i];
                                q2[i]= q2[i+1];
                                q2[i+1] = t;
                                cout<<"vlaue in q2 "<<q2[i]<<endl;
                                cout<<time <<endl;
                                break;


                        }
                    }
                    time++;
                }
                f:cout<<"finish"<<"time used "<<count1<<endl;
}
