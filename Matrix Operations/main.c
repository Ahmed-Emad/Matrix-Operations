//  main.c
//  Programming Project
//  Created by Ahmed Barakat on 11/16/13.
//  Copyright (c) 2013 Ahmed Barakat. All rights reserved.

#include <stdio.h>
#include <stdlib.h>

int m1, n1, m2, n2, m3, n3, f=0, i, j, x[20][20]={}, y[20][20]={}, z[20][20]={};

void menu(int m1, int n1, int m2, int n2, int m3, int n3);
void read(int x[20][20], int *mm1, int *nn1, int y[20][20], int *mm2, int *nn2, int z[20][20], int *mm3, int *nn3);
void printa(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3);
void Addition(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3);
void substraction(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3);
void multiplication_array(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3);
void multiplaction_number(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3);
void transpose(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3);
void determinant(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3);


int main()
{
    menu(m1, n1, m2, n2, m3, n3);
    return 0;
}


void menu(int m1, int n1, int m2, int n2, int m3, int n3)
{
    printf("\n1.Read an Array.\n2.Print an Array.\n3.Addition of 2 Arrays.\n4.Substraction of 2 Arrays.\n5.Multiplication of 2 Arrays.\n6.Multiplication of an Array by a Number.\n7.Transpose of a Matrix.\n8.Determinant of a Matrix.\n9.Exit.\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
            read(x, &m1, &n1, y, &m2, &n2, z, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
            
        case 2:
            printa(x, m1, n1, y, m2, n2, z, m3, n3);
            printf("\n1.Menu.\n2.Exit.\n");
            scanf("%d",&f);
            switch (f) {
                case 1:
                    menu(m1, n1, m2, n2, m3, n3);
                    break;
                case 2:
                    break;
                
                default:
                    break;
            }
            
            break;
            
        case 3:
            Addition(x, m1, n1, y, m2, n2, z, m3, n3, &m1, &n1, &m2, &n2, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
            
        case 4:
            substraction(x, m1, n1, y, m2, n2, z, m3, n3, &m1, &n1, &m2, &n2, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
            
        case 5:
            multiplication_array(x, m1, n1, y, m2, n2, z, m3, n3, &m1, &n1, &m2, &n2, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
        
        case 6:
            multiplaction_number(x, m1, n1, y, m2, n2, z, m3, n3, &m1, &n1, &m2, &n2, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
        
        case 7:
            transpose(x, m1, n1, y, m2, n2, z, m3, n3, &m1, &n1, &m2, &n2, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
            
        case 8:
            determinant(x, m1, n1, y, m2, n2, z, m3, n3, &m1, &n1, &m2, &n2, &m3, &n3);
            menu(m1, n1, m2, n2, m3, n3);
            break;
            
        case 9:
            break;
            
        default:
            break;
    }
}

void read(int x[20][20], int *mm1, int *nn1, int y[20][20], int *mm2, int *nn2, int z[20][20], int *mm3, int *nn3)
{
    printf("\n1.Array 1.\n2.Array 2.\n3.Array 3.\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
            printf("'Array 1' Enter no of Raws: ");
            scanf("%d",&m1);
            *mm1=m1;
            printf("'Array 1' Enter no of Coloums: ");
            scanf("%d",&n1);
            *nn1=n1;
            for (i=0; i<m1; i++) {
                for (j=0; j<n1; j++) {
                    printf("'Array 1' Enter Element (%d,%d): ",i+1,j+1);
                    scanf("%d",&x[i][j]);
                }
            }
            break;
            
        case 2:
            printf("'Array 2' Enter no of Raws: ");
            scanf("%d",&m2);
            *mm2=m2;
            printf("'Array 2' Enter no of Coloums: ");
            scanf("%d",&n2);
            *nn2=n2;
            for (i=0; i<m2; i++) {
                for (j=0; j<n2; j++) {
                    printf("'Array 2' Enter Element (%d,%d): ",i+1,j+1);
                    scanf("%d",&y[i][j]);
                }
            }
            break;
            
        case 3:
            printf("'Array 3' Enter no of Raws: ");
            scanf("%d",&m3);
            *mm3=m3;
            printf("'Array 3' Enter no of Coloums: ");
            scanf("%d",&n3);
            *nn3=n3;
            for (i=0; i<m3; i++) {
                for (j=0; j<n3; j++) {
                    printf("'Array 3' Enter Element (%d,%d): ",i+1,j+1);
                    scanf("%d",&z[i][j]);
                }
            }
            break;
            
        default:
            break;
    }
}

void printa(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3)
{
    printf("\n1.Array 1.\n2.Array 2.\n3.Array 3.\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
            printf("\n");
            for (i=0; i<m1; i++) {
                for (j=0; j<n1; j++) {
                    printf("  %d  ", x[i][j]);
                }
                printf("\n\n");
            }
            break;
            
        case 2:
            printf("\n");
            for (i=0; i<m2; i++) {
                for (j=0; j<n2; j++) {
                    printf("  %d  ", y[i][j]);
                }
                printf("\n\n");
            }
            break;
            
        case 3:
            printf("\n");
            for (i=0; i<m3; i++) {
                for (j=0; j<n3; j++) {
                    printf("  %d  ", z[i][j]);
                }
                printf("\n\n");
            }
            break;
            
        default:
            break;
    }
}

void Addition(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3)
{
    printf("\n1.Array 1 + Array 2 (Store in Array 3).\n2.Array 1 + Array 3 (Store in Array 2).\n3.Array 2 + Array 3 (Store in Array 1).\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
            if (m1==m2 && n1==n2) {
                *mm3=m1;
                *nn3=n1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        z[i][j] = x[i][j] + y[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
            
        case 2:
            if (m1==m3 && n1==n3) {
                *mm2=m1;
                *nn2=n1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        y[i][j] = x[i][j] + z[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
            
        case 3:
            if (m2==m3 && n2==n3) {
                *mm1=m2;
                *nn1=n2;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        x[i][j] = y[i][j] + z[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
            
        default:
            break;
    }
}

void substraction(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3)
{
    printf("\n1.Array 1 - Array 2 (Store in Array 3).\n2.Array 2 - Array 1 (Store in Array 3).\n3.Array 1 - Array 3 (Store in Array 2).\n4.Array 3 - Array 1 (Store in Array 2).\n5.Array 2 - Array 3 (Store in Array1).\n6.Array 3 - Array 2 (Store in Array 1).\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
            if (m1==m2 && n1==n2) {
                *mm3=m1;
                *nn3=n1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        z[i][j] = x[i][j] - y[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
            
        case 2:
            if (m1==m2 && n1==n2) {
                *mm3=m1;
                *nn3=n1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        z[i][j] = y[i][j] - x[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
            

        case 3:
            if (m1==m3 && n1==n3) {
                *mm2=m1;
                *nn2=n1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        y[i][j] = x[i][j] - z[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
        
        case 4:
            if (m1==m3 && n1==n3) {
                *mm2=m1;
                *nn2=n1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        y[i][j] = z[i][j] - x[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
        
        case 5:
            if (m2==m3 && n2==n3) {
                *mm1=m2;
                *nn1=n2;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        x[i][j] = y[i][j] - z[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;
        
        case 6:
            if (m2==m3 && n2==n3) {
                *mm1=m2;
                *nn1=n2;
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        x[i][j] = z[i][j] - y[i][j];
                    }
                }
            }
            else
                printf("\nError Not The Same Size.\n\a");
            break;

        default:
            break;
    }
}

void multiplication_array(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3)
{
    int s=0, k;
    printf("\n1.Array 1 * Array 2 (Store in Array 3).\n2.Array 2 * Array 1 (Store in Array 3).\n3.Array 1 * Array 3 (Store in Array 2).\n4.Array 3 * Array 1 (Store in Array 2).\n5.Array 2 * Array 3 (Store in Array 1).\n6.Array 3 * Array 2 (Store in Array 1).\n");
    scanf("%d",&f);
    switch (f) {
            case 1:
            if (m1 == n2 && n1==m2) {
                *mm3=m1;
                *nn3=m1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<m1; j++) {
                        s=0;
                        for (k=0; k<n1; k++) {
                            s = s + (x[i][k]*y[k][j]);
                        }
                        z[i][j]=s;
                    }
                }
            }
            else
                printf("\nError Can not Be Multiplcated\n\a");
                break;
            
            case 2:
                if (m2 == n1 && n2==m1) {
                    *mm3=m2;
                    *nn3=m2;
                    for (i=0; i<m2; i++) {
                        for (j=0; j<m2; j++) {
                            s=0;
                            for (k=0; k<n2; k++) {
                                s = s + (y[i][k]*x[k][j]);
                            }
                            z[i][j]=s;
                        }
                    }
                }
                else
                    printf("\nError Can not Be Multiplcated\n\a");
                break;
            
            case 3:
                if (m1 == n3 && n1==m3) {
                    *mm2=m1;
                    *nn2=m1;
                    for (i=0; i<m1; i++) {
                        for (j=0; j<m1; j++) {
                            s=0;
                            for (k=0; k<n1; k++) {
                                s = s + (x[i][k]*z[k][j]);
                            }
                            y[i][j]=s;
                        }
                    }
                }
                else
                    printf("\nError Can not Be Multiplcated\n\a");
                break;

            case 4:
                if (m3 == n1 && n3==m1) {
                    *mm2=m3;
                    *nn2=m3;
                    for (i=0; i<m3; i++) {
                        for (j=0; j<m3; j++) {
                            s=0;
                            for (k=0; k<n3; k++) {
                                s = s + (z[i][k]*x[k][j]);
                            }
                            y[i][j]=s;
                        }
                    }
                }
                else
                    printf("\nError Can not Be Multiplcated\n\a");
                break;
            
            case 5:
                if (m2 == n3 && n2==m3) {
                    *mm1=m2;
                    *nn1=m2;
                    for (i=0; i<m2; i++) {
                        for (j=0; j<m2; j++) {
                            s=0;
                            for (k=0; k<n2; k++) {
                                s = s + (y[i][k]*z[k][j]);
                            }
                            x[i][j]=s;
                        }
                    }
                }
                else
                    printf("\nError Can not Be Multiplcated\n\a");
                break;
            
            case 6:
                if (m3 == n2 && n3==m2) {
                    *mm1=m3;
                    *nn1=m3;
                    for (i=0; i<m3; i++) {
                        for (j=0; j<m3; j++) {
                            s=0;
                            for (k=0; k<n3; k++) {
                                s = s + (z[i][k]*y[k][j]);
                            }
                            x[i][j]=s;
                        }
                    }
                }
                else
                    printf("\nError Can not Be Multiplcated\n\a");
                break;
        
            default:
                break;
    }
}

void multiplaction_number(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3)
{
    int k;
    printf("\n1.Multiplicate Array 1 by a number (Store in Array 2).\n2.Multiplicate Array 1 by a number (Store in Array 3).\n3.Multiplicate Array 2 by a number (Store in Array 1).\n4.Multiplicate Array 2 by a number (Store in Array 3).\n5.Multiplicate Array 3 by a number (Store in Array 1).\n6.Multiplicate Array 3 by a number (Store in Array 2).\n");
    scanf("%d",&f);
    switch (f) {
            case 1:
                *mm2=m1;
                *nn2=n1;
                printf("Enter Number: ");
                scanf("%d",&k);
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        y[i][j]= k*x[i][j];
                    }
                }
                break;
            
            case 2:
                *mm3=m1;
                *nn3=n1;
                printf("Enter Number: ");
                scanf("%d",&k);
                for (i=0; i<m1; i++) {
                    for (j=0; j<n1; j++) {
                        z[i][j]= k*x[i][j];
                    }
                }
                break;
            
            case 3:
                *mm1=m2;
                *nn1=n2;
                printf("Enter Number: ");
                scanf("%d",&k);
                for (i=0; i<m2; i++) {
                    for (j=0; j<n2; j++) {
                        x[i][j]= k*y[i][j];
                    }
                }
                break;
            
            case 4:
                *mm3=m2;
                *nn3=n2;
                printf("Enter Number: ");
                scanf("%d",&k);
                for (i=0; i<m2; i++) {
                    for (j=0; j<n2; j++) {
                        z[i][j]= k*y[i][j];
                    }
                }
                break;
            
            case 5:
                *mm1=m3;
                *nn1=n3;
                printf("Enter Number: ");
                scanf("%d",&k);
                for (i=0; i<m3; i++) {
                    for (j=0; j<n3; j++) {
                        x[i][j]= k*z[i][j];
                    }
                }
                break;
            
            case 6:
                *mm2=m3;
                *nn2=n3;
                printf("Enter Number: ");
                scanf("%d",&k);
                for (i=0; i<m3; i++) {
                    for (j=0; j<n3; j++) {
                        y[i][j]= k*z[i][j];
                    }
                }
                break;
            
            default:
                break;
    }
}

void transpose(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3)
{
    printf("\n1.Transpose Array 1 (Store in Array 2).\n2.Transpose Array 1 (Store in Array 3).\n3.Transpose Array 2 (Store in Array 1).\n4.Transpose Array 2 (Store in Array 3).\n5.Transpose Array 3 (Store in Array 1).\n6.Transpose Array 3 (Store in Array 2).\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
            if (m1 == n1) {
                *mm2=m1;
                *nn2=m1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<m1; j++) {
                        y[i][j] = x[j][i];
                    }
                }
            }
            else
                printf("\nError Not Square Matrix\n\a");
            break;
            
        case 2:
            if (m1 == n1) {
                *mm3=m1;
                *nn3=m1;
                for (i=0; i<m1; i++) {
                    for (j=0; j<m1; j++) {
                        z[i][j] = x[j][i];
                    }
                }
            }
            else
                printf("\nError Not Square Matrix\n\a");

            break;
            
        case 3:
            if (m2 == n2) {
                *mm1=m2;
                *nn1=m2;
                for (i=0; i<m2; i++) {
                    for (j=0; j<m2; j++) {
                        x[i][j] = y[j][i];
                    }
                }
            }
            else
                printf("\nError Not Square Matrix\n\a");

            break;
            
        case 4:
            if (m2 == n2) {
                *mm3=m2;
                *nn3=m2;
                for (i=0; i<m2; i++) {
                    for (j=0; j<m2; j++) {
                        z[i][j] = y[j][i];
                    }
                }
            }
            else
                printf("\nError Not Square Matrix\n\a");
            break;
            
        case 5:
            if (m3 == n3) {
                *mm1=m3;
                *nn1=m3;
                for (i=0; i<m3; i++) {
                    for (j=0; j<m3; j++) {
                        x[i][j] = z[j][i];
                    }
                }
            }
            break;
            
        case 6:
            if (m3 == n3) {
                *mm2=m3;
                *nn2=m3;
                for (i=0; i<m3; i++) {
                    for (j=0; j<m3; j++) {
                        y[i][j] = z[j][i];
                    }
                }
            }
            break;
            
        default:
            break;
    }
}

void determinant(int x[20][20], int m1, int n1, int y[20][20], int m2, int n2, int z[20][20], int m3, int n3, int *mm1, int *nn1, int *mm2, int *nn2, int *mm3, int *nn3)
{
    printf("\n1.Determinant Matrix 1.\n2.Determinant Matrix 2.\n3.Determinant Matrix 3.\n");
    scanf("%d",&f);
    switch (f) {
        case 1:
                if (m1 == n1 && m1 == 2) {
                    f = x[0][0]*x[1][1] - x[0][1]*x[1][0];
                    printf("\nDeterminant of Matrix 1 = %d \n",f);
                }
                else
                    printf("\nError Not Square Matrix (2*2)\n\a");
            break;
            
        case 2:
            if (m2 == n2 && m2 == 2) {
                f = y[0][0]*y[1][1] - y[0][1]*y[1][0];
                printf("\nDeterminant of Matrix 2 = %d \n",f);
            }
            else
                printf("\nError Not Square Matrix (2*2)\n\a");
            break;
            
        case 3:
            if (m3 == n3 && m3 == 2) {
                f = z[0][0]*z[1][1] - z[0][1]*z[1][0];
                printf("\nDeterminant of Matrix 3 = %d \n",f);
                }
            else
                printf("\nError Not Square Matrix (2*2)\n\a");
            break;
            
                default:
            break;
    }
}