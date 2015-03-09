//DECLARATION:

#define MAXNODES 50

struct node{
  /* information associated with each node*/
};

struct arc{
  int adj;
  /* information associated with each arc*/
};

struct graph{
  struct node nodes[MAXNODES];
  struct arc arcs[MAXNODES][MAXNODES];
};
struct graph g;

//FUNCTIONS:
void join(int adj[][MAXNODES],int node1,int node2) {
  /* add an arc from node1 to node2*/
 adj[node1][node2]=TRUE;
};//end join

void remv(int adj[][MAXNODES],int node1,int node2) {
  /* delete arc from node1 to node2 if one exists*/
 adj[node1][node2]=FALSE;
};//end remv

int  adjacent(int adj[][MAXNODES],int node1,int node2) {
  return((adj[node1][node2]==TRUE)? TRUE:FALSE);
};//end adjacent
