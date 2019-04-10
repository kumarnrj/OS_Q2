#include<iostream>
using namespace std;
int main() {

        int n;
        cout<<"enter the number of process: "<<endl;
        cin>>n;
        if (n <= 2) {
            cout<<"The Number of proess should be more than 2\n";
        }
        else {
            static int pid [10];
            static int BurstTime[10] ;
            static int ArrivaTime[10] ;
            static int completionTime[10];
            static int Queue[10];
            static int q1[5];
            static int q2[5];
            int k0 = 0;
            int k1 = 0;

            for (int i = 0; i < n; i++) {
                pid[i] = i + 1;
                cout<<"Enter the Burst time: ";
                cin>>BurstTime[i];
                cout<<"Enter the Arrival time: ";
                cin>>ArrivaTime[i];
                cout<<"Enter the Queue number: ";
                cin>>Queue[i] ;


            }

            cout<<"Process Id\t" << "Burst Time\t" << "Arrival Time" << "  Queue"<<endl;
            for (int i = 0; i < n; i++) {
                cout<<pid[i] << "\t\t" << BurstTime[i] << "\t\t " << ArrivaTime[i] << "\t\t " << Queue[i] << " "<<endl;
            }

            int max1 = ArrivaTime[0];
            int min1 = ArrivaTime[0];
            for (int i = 0; i < n; i++) {
                if (max1 < ArrivaTime[i]) {
                    max1 = ArrivaTime[i];
                }
                else
                    min1 = ArrivaTime[i];
            }




            for (int i = 0; i < n; i++) {

                if (Queue[i] == 1) {
                    q1[k0] = i + 1;
                    ++k0;
                }
                if (Queue[i] == 2) {
                    q2[k1] = i + 1;
                    ++k1;
                }

            }

            cout<<endl;
            for (int k = 0; k <n; k++) {

                cout<<q1[k] << " ";

            }
            cout<<endl;
            for (int k = 0; k < n; k++) {
                cout<<q2[k] << " ";
            }



            int t = 0;
            String s[10] ;
            int sum =0;
            int k =0;
            int time1[2];
            int time2[2];
            int k1=0;
            int k2=0;
            while(min1<=max1)
            {
                if(ArrivaTime[k]==min1)
                {
                    if(Queue[k]==1)
                    {
                        s[min1] = ("p "+(min1+1));
                        time1[k1] = min1;
                        q1[k1] = pid[k];
                        k1++;
                    }
                    if(Queue[k]==2)
                    {

                        //time2[k2] = min;
                        q2[k2] = pid[k];
                        k2++;
                    }
                    k++;
                }
                min1++;
            }

            for (int i = 0; i < n; i++) {
                cout<<q1[i] + " ";
            }
            cout<<endl;
            for (int i = 0; i < q2.length; i++) {
                cout<<2[i] + " ";
            }
            cout<<endl;
            for(int i =0;i<s.length;i++)
            {
                cout<<s[i];
            }

            cout<<endl;
            for (int i = 0; i < 2; i++) {
                cout<<time1[i] + " ";
            }
            int n1 = 0;
            for (int i = 0; i < 5; i++) {
                if (q1[i] != 0) {
                    n1++;
                }
            }
            int n2=0;
            for (int i = 0; i < 5; i++) {
                if (q2[i] != 0) {
                    n2++;
                }
            }
            

         

        }