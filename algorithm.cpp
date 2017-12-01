Input: a mesh containing n vertices and m edges, source START, Destination DEST.
Output: a set of vertices and edges connecting s and Dest with minimal length

N = количество всего вершин;
M = ребра;
START = старт;
DEST = финиш;

int *VALUE = это длинна до этого отрезка от старта

void		func()
{
	for(int i = 0; i < n; i++)	// i < количества вершин заполняем максимальным значением(как в лем-ине блять)
		VALUE[i] = Infinite;
	
	VALUE[START]	= 0;					//	обнуляем стартовую точку
	LIST 			= empty;				//	множество посещенных точек
	while(DEST does not in LIST)			//	пока финиш не окажется в нашем списке
	{
		u = a vertex not in LIST with L(u) minimal;	// нахождение точки с
					// минимальным расстоянием от текущей и не присутствующей в нашем листе
		Add u to LIST;						//	добавление точки в лист
		for (all vertices v not in LIST)	//	для всех точек которые не в листе 
		{
			if (L(u) + distance(u, v) < L(v))	//	если дистанция  между данными точками  
			{
				then L(v) = L(u) + distance(u, v);
				add u’s;
			}
		}
		path list + u to v’s path list;
	}
	L(DEST) is the length of shortest path from s to DEST
}