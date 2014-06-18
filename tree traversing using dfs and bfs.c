#include<stdio.h>
#include<conio.h>
#define max 100  
void createGraph(void); //to create the graph given the edges ..
void dfs(int); //to traverse using dfs ..
void bfs(int); //to traverse using bfs ..
void display(void); //to display the adjency matrix ..

int adjc[max][max]; // 2d array to store adjency values of all nodes ..
enum value{true,false}; //enum datatype to check status of node , if traversed or not ..
enum value status[max] ;
int n ;

int main()
{
      printf("Enter number of nodes in your graph :\n");
      scanf("%d",&n);
      int i ;
      createGraph();
      int choice ;
      printf("Enter your choice\n1. To display the adjency matrix\n2. To display DFS traversal of graph using recursion\n3.To show BFS traversal of the graph\n4.To exit\n");
      scanf("%d",&choice);
      while(choice!=4)
      {
                      switch(choice)
                      {
                                    case 1:
                                         display();
                                         break;
                                    case 2:
                                         for(i=1;i<=n;i++)
                                         {
                                                          status[i]=false;
                                         }
                                         
                                         printf("\nEnter the start node : ");
                                         scanf("%d",&i);
                                         
                                         if(i<=0||i>n)
                                         {
                                                       printf("INVALID NODE\n");
                                         }
                                         else
                                         dfs(i);
                                         
                                         printf("\n");
                                         break;
                                    case 3:
                                         
                                         for(i=1;i<=n;i++)
                                         {
                                                          status[i]=false;
                                         }
                                         
                                         printf("\nEnter the start node : ");
                                         scanf("%d",&i);
                                         
                                         if(i<=0||i>n)
                                         {
                                                       printf("INVALID NODE\n");
                                         }
                                         else
                                         //bfs(i);
                                         
                                         break;
                                    case 4:
                                         exit(0);
                                    default:
                                            printf("INVALID CHOICE\n");
                                            break;
                      }
                      printf("Enter your choice\n1. To display the adjency matrix\n2. To display DFS traversal of graph\n3.To show BFS traversal of the graph\n4.To exit\n");
                      scanf("%d",&choice);
      }
      //getch();
      return 0 ;
}

void createGraph() //setting values of adjency matrix ..
{
     int i , j , count ;
     int maxEdges=(n*(n-1))/2;
     count=1;
     printf("\nEnter the edges (node1 , node2) OR Enter (0 0) to stop \n");
     while(count<=maxEdges)
     {                     
                       printf("Enter %dth edge (node1 , node2) : ",count);
                       scanf("%d %d" ,&i,&j);
                       
                       if(i<=0 || j<=0 || i>n || j>n)
                       {
                            if(i==0 && j==0)
                            break ;
                            
                            else
                            printf("\nINVALID EGDE\n");
                       }
                       else
                       {
                                         adjc[i][j]=1;
                                         count++;
                       }     
     }
     
}

void display() //displaying the adjency matrix ..
{
     int i , j ;
     for(i=1;i<=n;i++)
     {
                     for(j=1;j<=n;j++)
                     {
                                     printf("%d ",adjc[i][j]);
                     }
                     printf("\n");
     }
}

void dfs(int a)
{
    // printf("\n");
     int i , j ;
     printf("%d",a); // print the traversed node ..
     status[a]=true ; // set status of traversed node = true ..
     i=a;
     
                      for(j=1;j<=n;j++)
                      {
                                       if(adjc[i][j]==1 && status[j]==false)
                                       dfs(j); //recursively tranversing the nodes to the deepest level ..
                      }
     
     
}

