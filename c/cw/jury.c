#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int all;
int res;

struct score{
 	int bian;
	int kong;
};

int getPairs(int *dst[],int *src[],int pi,int pj){
	pj = 0;
	while(pj < res){
		*(dst+res*pi+pj) = *(src+pj);
		++pj;
	}
}

int main(){
	FILE * fp;
	fp = fopen("input","r");
	if(NULL == fp){
		printf("Input fail!\n");
		exit(1);
	}

	fscanf(fp,"%d",&all);
	fscanf(fp,"%d",&res);
	
	struct score input[all];
	int pair[all][res];
	printf("%d %d\n",all,res);

	int j = 0,k = 0;
	while(j < all){
		
		fscanf(fp,"%d",&(input[j].bian));
		fscanf(fp,"%d",&(input[j].kong));

		++j;
	}
	
	int tmppair[1][res];
	int psum[res];
	int tmp = 0,minlimit = 1024,maxlimit=0,minus = 0;
	int pi = 0,pj = 0, tpj = 0;
	int biansum = 0,kongsum = 0,origin = 0;
	int p_count = 0,count = 0;
	j = k = 0;
	while(j <= (all - res)){
		k = j+1;
		printf("================\n");
		tmppair[0][0] = j;
		while(k <= (all-res+1)){
			printf("--------------\n");
			biansum = kongsum = 0;
			count = 1;
			biansum += input[j].bian;
			kongsum += input[j].kong;
			tmp = k;
			tpj = 1;
			while(count < res){
				printf("%d %d\n",j,k);
				biansum += input[k].bian;
				kongsum += input[k].kong;
				tmppair[0][tpj++] = k;
				//printf("tget:%d\n",tmppair[0][tpj-1]);
				++count;
				++k;
			}	
			k = ++tmp;
			printf("bsum:%d ksum:%d\n",biansum,kongsum);
			minus = abs(kongsum-biansum);
			printf("%d\n",minus);
			if(minus == minlimit){
				++pi;
				pj = 0;
				psum[pi] = biansum+kongsum;
				//printf("%d = %d  %d %d pi%d\n",minus,minlimit,j,origin,pi);
				if(psum[pi] < maxlimit)
					break;
				else if(psum[pi] == maxlimit){
					getPairs(pair,tmppair,pi,pj);
					++p_count;
				}
				else{
					pi = pj = 0;
					getPairs(pair,tmppair,pi,pj);
					p_count = 1;
				}
				//p_count++;
			}	
			if(minus < minlimit){
				printf("%d < %d  %d %d\n",minus,minlimit,j,origin);
				minlimit=(minus<minlimit)?minus:minlimit;
				pi = pj = 0;
				getPairs(pair,tmppair,pi,pj);
				maxlimit = psum[0] = (biansum + kongsum);
				p_count = 1;
			}
			printf("--------------\n");
		}
		printf("================\n");
		++j;
	}
	pi = pj = 0;
	while(pi < p_count){
		pj = 0;
		while(pj < res){
			printf("%d ",pair[pi][pj]);
			++pj;
		}
		printf("\n");
		++pi;
	}
}
