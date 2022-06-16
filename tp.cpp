//Inserruion Sort
//Does insertion sorting run faster on the array U or the array V? Justify your answer:
#include<bits/stdc++.h>
using namespace std; 

void insertionSort(int arr[], int n)
{
    int i, key, j,inloop=0,outloop=0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            inloop ++;
        }
        arr[j + 1] = key;
        outloop++;
    }
    cout<<"\n The outer loop will executes : " <<outloop <<"times .\nInner loop will execute : " <<inloop <<"\n";
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	cout<<endl;
}



int main()
{
    cout<<"Prasanna Anjankar \nRoll No :65 \nReg no : 19010886\nInsertion Sort\n--------------------------------------------------------\n\n";
    int U[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(U)/sizeof(U[0]);

    int V[] = {6, 5, 4, 3, 2, 1};
    int m = sizeof(V)/sizeof(V[0]);
    

    cout<<"Given Array U = \n";
    printArray(U,n);
    insertionSort(U,n);
    cout<<"Sorted Array is \n";
    printArray(U,n);

    cout<<"Given Array V = \n";
    printArray(V,m);
    insertionSort(V,m);
    cout<<"Sorted Array is \n";

    printArray(V,m);


    return 0;
}




//selection Sort
//Does selection sorting run faster on the array U or the array V? Justify your answer.
#include<bits/stdc++.h>
using namespace std; 

int selection_sort(int arr[], int n){
    int min,temp,inloop=0, outloop=0;
    for(int i=0; i<n;i++){
        min=arr[i];

        for(int j=i+1; j<n; j++){
            if(min>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
            inloop++;
        }
        outloop++;
    }
    cout<<"\n The outer loop will executes : " <<outloop <<"times .\nInner loop will execute : " <<inloop <<"\n";

}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	cout<<endl;
}



int main()
{
    cout<<"Prasanna Anjankar \nRoll No :65 \nReg no : 19010886\nSelection Sort\n--------------------------------------------------------\n\n";
    int U[] = {6,7,5,3,7,8,4,6};
    int n = sizeof(U)/sizeof(U[0]);

    int V[] = {6,5, 4, 3, 2, 1};
    int m = sizeof(V)/sizeof(V[0]);
    

    cout<<"Given Array U = \n";
    printArray(U,n);
    selection_sort(U,n);
    cout<<"Sorted Array is \n";
    printArray(U,n);

    cout<<"Given Array V = \n";
    printArray(V,m);
    selection_sort(V,m);
    cout<<"Sorted Array is \n";
    printArray(V,m);

    return 0;
}





//recurrence rerelation

#include<bits/stdc++.h>
using namespace std; 

void findRoots(int a, int b, int c)
{
     
    //base case for quadratic equation ;
    if (a == 0)
    {
        cout << "Invalid";
        return;
    }
 
    int d = b * b - 4 * a * c;
    float sqrt_val = sqrt(abs(d));
 
    // Real Roots
    if (d > 0)
    {
       cout << "Roots are real and different" << endl;
       cout << fixed << std::setprecision(1)
            << float((-b + sqrt_val) / (2 * a)) << endl;
       cout << fixed << std::setprecision(1)
            << float((-b - sqrt_val) / (2 * a)) << endl;
    }
 
    // Imaginary Roots
    else
    {
        cout << "Roots are complex" << endl;
        cout << fixed << std::setprecision(1)
             << float(b / (2.0 * a)) << " + i"
             << sqrt_val << endl;
        cout << fixed << std::setprecision(1)
             << float(b / (2.0 * a)) << " - i"
             << sqrt_val << endl;
    }
}

int main(){
    int coeffecientarray[10];
    int n=0,count,permission=1;
    cout<<"enter the coeffecient of f(n)";
    cin>>coeffecientarray[n];
    n++;
    cout<<"want to enter m0re ?  1 for yes and  0 for no";
        cin>>permission;
    while(permission==1){
        cout<<"enter the value of f(n-"<<n<<")";
        cin>>coeffecientarray[n];
        n++;
        cout<<"want to enter m0re ?  1 for yes and  0 for no";
        cin>>permission;

    }

    int a = coeffecientarray[0];
    int b = coeffecientarray[1];
    int c = coeffecientarray[2];
    cout<<"\nThe quadratic eqn for your recurrence relation is :\t ";
    for(int i=0; i<n; i++){
        if(i==2){
            cout<<coeffecientarray[i]<<" = 0";
        }
        else{
            cout<<coeffecientarray[i]<<"(x^"<<n-1-i<<")"<<"+";
        }

    }
    cout<<endl;
    findRoots(a,b,c);
 
} 





//Merge Sort
//merge
#include <iostream>  
  
using namespace std;  
  
// Function to merge the subarrays of a[]  
void merge(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    //  copy data to temp arrays   
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0;  //initial index of first sub-array   
    j = 0;  //initial index of second sub-array    
    k = beg;  // initial index of merged sub-array   
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    
  
void mergeSort(int a[], int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
}  
  
//print array
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main()  
{
    cout<<"Prasanna Anjankar \nRoll No :65 \nReg no : 19010886\nPractica 4 : Merge sort\n--------------------------------------------------------\n\n";
    int no;
    cout<<"enter the no of elements in the array. : \t"<<endl;
    cin>>no;
    int a[no];
    cout<<"Enter the vlues of aray one by one";
    for(int i=0; i<no; i++){
        cin>>a[i];
    }
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);  
    return 0;  
}  







//quicksort


#include<bits/stdc++.h>
using namespace std; 


void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i=low-1;
    for(int j=low; j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return i+1;
}

quickSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main(){
    int arr[5]={5,4,10,6,7};
    quickSort(arr, 0,4);
        for(int i=0; i<5; i++){
            cout<<arr[i];
        }

}



//fractionaL Knapsak;
#include <bits/stdc++.h>
using namespace std;
void knapsack(int n, float weight[], float profit[], float capacity) {
    float x[20], tp = 0;
    int i, j, u;
    u = capacity;
    for (i = 0; i < n; i++)
        x[i] = 0.0;
    for (i = 0; i < n; i++) {
        if (weight[i] > u)
            break;
        else {
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }
    if (i < n)
        x[i] = u / weight[i];
        tp = tp + (x[i] * profit[i]);
    cout<<"\nThe Maximum profit is:- "<<tp<<endl;
}
int main() {
    float weight[20], profit[20], capacity;
    int num, i, j;
    float ratio[20], temp;
    cout<<"Prasanna Anjankar \nRoll No :65 \nReg no : 19010886\nPractica 5 : Knapsack Problem \n--------------------------------------------------------\n\n";
    cout<<"\nEnter the no. of objects:- ";
    cin>>num;
    cout<<"\nEnter the Weights and Prices of each object:- \n";
    for (i = 0; i < num; i++) {
        cin>>weight[i]>>profit[i];
    }
    cout<<"\nEnter the capacity of knapsack:- \t ";
    cin>>capacity;
    for (i = 0; i < num; i++) {
        ratio[i] = profit[i] / weight[i];
    }
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (ratio[i] < ratio[j]) {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }
 knapsack(num, weight, profit, capacity);
 return(0);
}

//0-1 knapsack

void knapsack(int W, vector<int> wt, vector<int> val, int n) {
	vector<vector<int>> dp(n + 1, vector<int> (W + 1, 0));
 
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {
			if (wt[i - 1] <= j) {
				dp[i][j] = max(dp[i - 1][j - wt[i - 1]] + val[i - 1], dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
 
	cout << dp[n][W] << endl;
}





//floydd
//Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999
void printSolution(int dist[][V]);
 
void floydWarshall(int graph[][V])
{
    int dist[V][V], i, j, k;
 
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][j] > (dist[i][k] + dist[k][j])
                    && (dist[k][j] != INF
                        && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
 
    printSolution(dist);
}
 
void printSolution(int dist[][V])
{
    cout << "The following matrix shows the shortest "
            "distances"
            " between every pair of vertices \n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF"
                     << "     ";
            else
                cout << dist[i][j] << "       ";
        }
        cout << endl;
    }
}
 
// Driver code
int main()
{
    cout<<"Prasanna Anjankar \nRoll No :65 \nReg no : 19010886\n Practical 6\n--------------------------------------------------------\n\n";
    int graph[V][V] = {{0, INF, -2, INF},
             {4, 0, 3, INF},
             {INF, INF, 0, 2},
             {INF, -1, INF, 0}};
 
    // Print the solution
    floydWarshall(graph);
    return 0;
}
 

//tsp
#include<iostream>
using namespace std;
int ary[10][10],completed[10],n,cost=0;

void takeInput()
{
int i,j;

cout<<"\n \t Prasanna Anjankar\n";
cout<<"Reg no : 19010886\n";
cout<<"Roll no : 65\n";
cout<<"---------------------------------------------------------------";
cout<<"\nEnter the number of Cities: ";
cin>>n;

cout<<"\nEnter the Cost Matrix\n";

for(i=0;i < n;i++)
{
cout<<"\nEnter Elements of Row: "<<i+1<<"\n";

for( j=0;j < n;j++)
cin>>ary[i][j];

completed[i]=0;
}
cout<<"\n\nThe cost list is:";
for( i=0;i < n;i++)
{
cout<<"\n";

for(j=0;j < n;j++)
cout<<"\t"<<ary[i][j];
}
}

int least(int c)
{
int i,nc=999;
int min=999,kmin;

for(i=0;i < n;i++)
{
if((ary[c][i]!=0)&&(completed[i]==0))
if(ary[c][i]+ary[i][c] < min)
{
min=ary[i][0]+ary[c][i];
kmin=ary[c][i];
nc=i;
}
}

if(min!=999)
cost+=kmin;

return nc;
}

void mincost(int city)
{
int i,ncity;

completed[city]=1;

cout<<city+1<<"--->";
ncity=least(city);

if(ncity==999)
{
ncity=0;
cout<<ncity+1;
cost+=ary[city][ncity];

return;
}

mincost(ncity);
}
int main()
{
takeInput();
cout<<"\n\nThe Path is:\n";
mincost(0); //passing 0 because starting vertex
cout<<"\n\nMinimum cost is "<<cost;

return 0;
}



//graph colouring
//galath hai coloured ka array bana aur no 0f 1s gin
#include<bits/stdc++.h>
using namespace std;
#define V 7

void printSolution(int color[]);


bool isSafe(bool graph[V][V], int color[])
{

    for (int i = 0; i < V; i++)
        for (int j = i + 1; j < V; j++)
            if (graph[i][j] && color[j] == color[i])
                return false;
    return true;
}

bool graphColoring(bool graph[V][V], int m, int i,
                int color[V])
{
    if (i == V) {

        if (isSafe(graph, color)) {

            printSolution(color);
            return true;
        }
        return false;
    }

    for (int j = 1; j <= m; j++) {
        color[i] = j;

        if (graphColoring(graph, m, i + 1, color))
            return true;

        color[i] = 0;
    }

    return false;
}

void printSolution(int color[])
{
    cout << "The solution Exists:" " Following are the assigned colors \n";
    for (int i = 0; i < V; i++)
        cout << "  " << color[i];
    cout << "\n";
}

// Driver code
int main()
{

    bool graph[V][V] = {
        // { 0, 1, 1, 0, 0, 0, 0 },
        // { 1, 0, 1, 1, 0, 0, 0 },
        // { 1, 1, 0, 1, 1, 1, 0 },
        // { 0, 1, 1, 0, 1, 0, 0 },
        // { 0, 0, 1, 1, 0, 1, 0 },
        // { 0, 0, 1, 0, 1, 0, 0 },
        // { 0, 0, 0, 0, 0, 0, 0 },
        {0,1,0,1,0},
        {1,0,1,0,1},
        {0,1,0,1,0},
        {1,0,1,0,1},
        {0,1,0,1,0},

    };
    int m = 3;
    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = 0;
cout<<"\n \t Prasanna Anjankar\n";
cout<<"Reg no : 19010886\n";
cout<<"Roll no : 65\n";
cout<<"Practical 8 : \n";
cout<<"---------------------------------------------------------------\n";
    if (!graphColoring(graph, m, 0, color))
        cout << "Solution does not exist";
    cout << "Thus in the given map the 'Minimum' number of colors required are : " << m;

    return 0;
}



//nqueen

#include <bits/stdc++.h>

using namespace std;

int board[8][8];

bool isPossible(int n,int row,int col){
  for(int i=row-1;i>=0;i--){
    if(board[i][col] == 1){
      return false;
    }
  }


  for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
    if(board[i][j] ==1){
      return false;
    }
  }


  for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
    if(board[i][j] == 1){
      return false;
    }
  }

  return true;
}
void nQueenHelper(int n,int row){
  if(row==n){


    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout << board[i][j] << " ";
      }cout<<endl;
    }
    cout<<endl;
    return;

  }


  for(int j=0;j<n;j++){

    if(isPossible(n,row,j)){
      board[row][j] = 1;
      nQueenHelper(n,row+1);
    }

     board[row][j] = 0;
  }
  return;

}
void placeNQueens(int n){

  memset(board,0,8*8*sizeof(int));
  nQueenHelper(n,0);
}

int main(){

    int n;

    cout<<"\n \t Prasanna Anjankar\n";
    cout<<"Reg no : 19010886\n";
    cout<<"Roll no : 65\n";
    cout<<"Practical 8 : \n";
    cout<<"---------------------------------------------------------------\n";
    cout<<"Enter No of Queens:- ";
    cin>>n;
    placeNQueens(n);
    return 0;
}
