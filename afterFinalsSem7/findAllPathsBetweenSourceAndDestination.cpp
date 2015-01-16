//c program to find all the paths between source and destination
#include<iostream>
#include<stdio.h>

//method prototypes
void findPath(int,int,int,int,int [][100],int [],int []);
//main method to test the program
main() {
	int n ;
	printf("Enter number of vertices in the graph\n");
	scanf("%d",&n);
	
	//creating visited vertices array and path array
	int visited[n];
	int path[n];
	int pI=0; //last vertex of path index
	
	//initializing visited by false
	for(int i=0;i<n;i++) {
		visited[i]=0;
	}

	//creating adjancy matrix
	int adj[n][100];
	printf("Enter values of adjancy matrix\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("%d %d  ",i,j);
			scanf("%d",&adj[i][j]);
		}
	}

	//main login here . using depth first search we can find all paths
	int s ;
	printf("Enter the source vertex \n");
	scanf("%d",&s);
	int d ;
	printf("Enter the destination vertex \n");
	scanf("%d",&d);
	
	//calling the visit method
	visited[s]=1;
	path[pI]=s;
	pI++;
	findPath(s,d,pI,n,adj,path,visited);

	
}

void findPath(int v,int d ,int pI,int n,int adj[][100],int path[],int visited[]) {
	//for all neighbours of v call find path for unvisited
	printf("%d\n",v);
	for(int i=0;i<n;i++) {
		if(adj[v][i]==1 && !visited[i]) {
			if(i==d) {
				printf("Possible  Path\n");
				//got the destination
				for(int j=0;j<pI;j++) {
					//printing the path
					printf("%d ",path[j]);
				}
				printf("%d \n",d);
				break;
			}else {
				/* update visited and path array
				** call findPath recursively on current vertex
				*/
				visited[i]=1;
				path[pI]=i;
				pI;
				findPath(i,d,pI+1,n,adj,path,visited);
				visited[i]=0;
				
				
			}
		}
	}
}
