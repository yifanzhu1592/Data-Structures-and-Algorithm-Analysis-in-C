typedef int Vertex;

struct TableEntry
{
    List     Header; /* Adjacency list */
    int      Known;
    DistType Dist;
    Vertex   Path;
};

/* Vertices are numbered from 0 */
#define NotAVertex (-1)
typedef struct TableEntry Table[NumVertex];
