#include<stdio.h>
#include<stdlib.h>
#define row 20
#define col 60
#define Alive cell 'O'
#define Dead Cell '.'

int main(void)
{
    int GenCount,x,y,i,j,n,m,count=0,neighbour=0;
    char arr[row][col],arr2[row][col];
    char ch;

    for(n=0;n<row;n++)
       for(m=0;m<col;m++)
    {
        arr[n][m]='.';arr2[n][m]='.';
    }

    printf("Enter the initial alive cell's co-ordinates[x,y]:\n");

    //Scanning the initial alive cell's co-ordinates from the user
    while(1)
    {
        scanf("%d,%d",&x,&y);
        if (x==-1 || y==-1) break;
        else
            arr[x][y]='O';
    }

    printf("Initially Your matrix is:\n");

    //printing the initial Dead & Alive cells

    for(n=0;n<row;n++)
    {
         for(m=0;m<col;m++)
        {
            printf("%c",arr[n][m]);
        }

        printf("\n");
    }

    printf("Enter The Generation until you want to simulate to: ");
    scanf("%d",&GenCount);

while(count<=GenCount)
 {
    scanf("%c",&ch);
    if(ch=='\n')
  {
       system("cls");
      for(n=0;n<row;n++)
        {for(m=0;m<col;m++)
            {
               if(arr[n][m]=='O')

               {  i=n; j=m;
                //Counting the neighbouring Alive cells

                if((i>=0 && i<20) && (j-1>=0 && j-1<60)) {i=n;j=m; if(arr[i][j-1]=='O'){neighbour++;}}
                i=n; j=m;
                if((i>=0 && i<20) && (j+1>=0 && j+1<60)){ i=n;j=m; if(arr[i][j+1]=='O'){neighbour++;}}
                i=n; j=m;
                if((i+1>=0 && i+1<20) && (j>=0 && j<60)){ i=n; j=m; if(arr[i+1][j]=='O'){neighbour++;}}
                i=n; j=m;
                if((i-1>=0 && i-1<20) && (j>=0 && j<60)){ i=n;j=m; if(arr[i-1][j]=='O'){neighbour++;}}
                i=n; j=m;
                if((i-1>=0 && i-1<20) && (j-1>=0 && j-1<60)){i=n;j=m; if(arr[i-1][j-1]=='O') {neighbour++;}}
                i=n; j=m;
                if ((i+1>=0 && i+1<20) && (j+1>=0 && j+1<60)){i=n;j=m; if(arr[i+1][j+1]=='O') {neighbour++;}}
                i=n; j=m;
                if((i+1>=0 && i+1<20) && (j-1>=0 && j-1<60)){i=n;j=m; if(arr[i+1][j-1]=='O'){neighbour++;}}
                i=n; j=m;
                if ((i-1>=0 && i-1<20) && (j+1>=0 && j+1<60)){i=n;j=m; if(arr[i-1][j+1]=='O'){neighbour++;}}
                i=n; j=m;

                if( neighbour>=2 && neighbour<=3)
                    {
                        arr2[n][m]='O';
                        neighbour=0;
                    }
                else{
                        arr2[n][m]='.';
                        neighbour=0;
                    }

               }

               else if(arr[n][m]=='.')
               {
                 i=n; j=m;
                 //Counting the neighbouring Alive cells

                 if((i>=0 && i<20) && (j-1>=0 && j-1<60)) {i=n;j=m; if(arr[i][j-1]=='O'){neighbour++;}}
                i=n; j=m;
                if((i>=0 && i<20) && (j+1>=0 && j+1<60)){ i=n;j=m; if(arr[i][j+1]=='O'){neighbour++;}}
                i=n; j=m;
                if((i+1>=0 && i+1<20) && (j>=0 && j<60)){ i=n; j=m; if(arr[i+1][j]=='O'){neighbour++;}}
                i=n; j=m;
                if((i-1>=0 && i-1<20) && (j>=0 && j<60)){ i=n;j=m; if(arr[i-1][j]=='O'){neighbour++;}}
                i=n; j=m;
                if((i-1>=0 && i-1<200) && (j-1>=0 && j-1<60)){i=n;j=m; if(arr[i-1][j-1]=='O') {neighbour++;}}
                i=n; j=m;
                if ((i+1>=0 && i+1<20) && (j+1>=0 && j+1<60)){i=n;j=m; if(arr[i+1][j+1]=='O') {neighbour++;}}
                i=n; j=m;
                if((i+1>=0 && i+1<20) && (j-1>=0 && j-1<60)){i=n;j=m; if(arr[i+1][j-1]=='O'){neighbour++;}}
                i=n; j=m;
                if ((i-1>=0 && i-1<20) && (j+1>=0 && j+1<60)){i=n;j=m; if(arr[i-1][j+1]=='O'){neighbour++;}}
                i=n; j=m;

                if(neighbour==3)
                  {
                       arr2[n][m]='O';
                       neighbour=0;
                  }
                else
                  {
                    arr2[n][m]='.';
                    neighbour=0;
                  }


               }

            }

        }
    system("cls");
    for(n=0;n<row;n++)
    {
         for(m=0;m<col;m++)
        {
        printf("%c",arr2[n][m]);
        }

        printf("\n");
    }

    for(n=0;n<row;n++)
      {

       for(m=0;m<col;m++)
          {
              arr[n][m]=arr2[n][m];
          }

      }
    count++;
    }

    printf("Press 'Enter' to go to the next generation:");
  }
return 0;
}


