//
// Created by mateo on 30/12/2021.
//

#ifndef ZADACA_LIBRARY_H
#define ZADACA_LIBRARY_H

#endif //ZADACA_LIBRARY_H

typedef struct student
{
    char index[10];
    char ime[23];
    char prezime[23];
    int kvizovi[11];
}studenti;

typedef struct raw
{
    char kvizovi[70];
    char divider[70];
}neprocesirano;


studenti st[120];
neprocesirano rw[120];

void draw_ui();
void return_main_ui();




void sort_index_ui()
{
    const char *sorted[120];
    const char *sortedIme[120];
    const char *sortedPrezime[120];
    const int *sortedKvizovi[120];

    for(int i=0;i<120;i++)
    {
        sorted[i] = st[i].index;
        sortedIme[i]=st[i].ime;
        sortedPrezime[i]=st[i].prezime;
        sortedKvizovi[i]=st[i].kvizovi;
    }

    for (int j=0; j<120; j++)
    {
        for (int i=j+1; i<120; i++)
        {
            if (strcmp(sorted[j], sorted[i]) > 0)
            {
                const char *temp = sorted[j];
                sorted[j] = sorted[i];
                sorted[i] = temp;

                const char *temp1 = sortedIme[j];
                sortedIme[j] = sortedIme[i];
                sortedIme[i] = temp1;

                const char *temp2 = sortedPrezime[j];
                sortedPrezime[j] = sortedPrezime[i];
                sortedPrezime[i] = temp2;

                const int *temp3 = sortedKvizovi[j];
                sortedKvizovi[j] = sortedKvizovi[i];
                sortedKvizovi[i] = temp3;


            }
        }
    }
    for(int i=0;i<120;i++)
    {
        printf("\nStudent %d:\n%s\n%s\n%s\n",i,sorted[i],sortedIme[i],sortedPrezime[i]);
        for(int j=0; j<10; j++)
        {
            printf(" %d ", *(sortedKvizovi[i]+j));
        }
        printf("\n");
    }
    return_main_ui();
}

void sort_quiz_name()
{
        char *sorted[120];
        char *sortedIme[120];
        char *sortedPrezime[120];
        int *sortedKvizovi[120];
        int ui1, ui2, ui3;

        printf("\nSortiranje po sumi 3 kviza\n");
        do
        {
            printf("Unesite broj kviza 1 (od 1-10)\n");
            scanf("%d",&ui1);
            printf("Unesite broj kviza 2 (od 1-10)\n");
            scanf("%d",&ui2);
            printf("Unesite broj kviza 3 (od 1-10)\n");
            scanf("%d", &ui3);
        }while(((ui1>10 || ui1<1)||(ui2>10 || ui2<1)) || (ui3>10 || ui3<1));

        ui1=ui1-1;
        ui2=ui2-1;
        ui3=ui3-1;

        for(int i=0;i<120;i++)
        {
            int hold1,hold2,hold3;
            hold1=st[i].kvizovi[ui1];
            hold2=st[i].kvizovi[ui2];
            hold3=st[i].kvizovi[ui3];
            int *hptr1=&hold1;
            int *hptr2=&hold2;
            int *hptr3=&hold3;


            sorted[i] = st[i].index;
            sortedIme[i]=st[i].ime;
            sortedPrezime[i]=st[i].prezime;
            *sortedKvizovi[i]=(*hptr1 + *hptr2 + *hptr3); //segfault
        }

        for (int j=0; j<120; j++)
        {
            for (int i=j+1; i<120; i++)
            {
                if (sortedKvizovi[j] < sortedKvizovi[i])
                {
                    char *temp = sorted[j];
                    sorted[j] = sorted[i];
                    sorted[i] = temp;

                    char *temp1 = sortedIme[j];
                    sortedIme[j] = sortedIme[i];
                    sortedIme[i] = temp1;

                    char *temp2 = sortedPrezime[j];
                    sortedPrezime[j] = sortedPrezime[i];
                    sortedPrezime[i] = temp2;

                    int *temp3 = sortedKvizovi[j];
                    sortedKvizovi[j] = sortedKvizovi[i];
                    sortedKvizovi[i] = temp3;


                }
            }
        }
        for(int i=0;i<120;i++)
        {
            printf("\nStudent %d:\n%s\n%s\n%s\n",i,sorted[i],sortedIme[i],sortedPrezime[i]);
            for(int j=0; j<10; j++)
            {
                printf(" %d ", *(sortedKvizovi[i]+j));
            }
            printf("\n");
        }
        return_main_ui();
}

void sort_name_ui()
{
    const char *sorted[120];
    const char *sortedIme[120];
    const char *sortedPrezime[120];
    const int *sortedKvizovi[120];

    for(int i=0;i<120;i++)
    {
        sorted[i] = st[i].index;
        sortedIme[i]=st[i].ime;
        sortedPrezime[i]=st[i].prezime;
        sortedKvizovi[i]=st[i].kvizovi;
    }

    for (int j=0; j<120; j++)
    {
        for (int i=j+1; i<120; i++)
        {
            if (strcmp(sortedIme[j], sortedIme[i]) > 0)
            {
                const char *temp = sorted[j];
                sorted[j] = sorted[i];
                sorted[i] = temp;

                const char *temp1 = sortedIme[j];
                sortedIme[j] = sortedIme[i];
                sortedIme[i] = temp1;

                const char *temp2 = sortedPrezime[j];
                sortedPrezime[j] = sortedPrezime[i];
                sortedPrezime[i] = temp2;

                const int *temp3 = sortedKvizovi[j];
                sortedKvizovi[j] = sortedKvizovi[i];
                sortedKvizovi[i] = temp3;


            }
        }
    }
    for(int i=0;i<120;i++)
    {
        printf("\nStudent %d:\n%s\n%s\n%s\n",i,sorted[i],sortedIme[i],sortedPrezime[i]);
        for(int j=0; j<10; j++)
        {
            printf(" %d ", *(sortedKvizovi[i]+j));
        }
        printf("\n");
    }
    return_main_ui();
}

void sort_surname_ui()
{
    const char *sorted[120];
    const char *sortedIme[120];
    const char *sortedPrezime[120];
    const int *sortedKvizovi[120];

    for(int i=0;i<120;i++)
    {
        sorted[i] = st[i].index;
        sortedIme[i]=st[i].ime;
        sortedPrezime[i]=st[i].prezime;
        sortedKvizovi[i]=st[i].kvizovi;
    }

    for (int j=0; j<120; j++)
    {
        for (int i=j+1; i<120; i++)
        {
            if (strcmp(sortedPrezime[j], sortedPrezime[i]) > 0)
            {
                const char *temp = sorted[j];
                sorted[j] = sorted[i];
                sorted[i] = temp;

                const char *temp1 = sortedIme[j];
                sortedIme[j] = sortedIme[i];
                sortedIme[i] = temp1;

                const char *temp2 = sortedPrezime[j];
                sortedPrezime[j] = sortedPrezime[i];
                sortedPrezime[i] = temp2;

                const int *temp3 = sortedKvizovi[j];
                sortedKvizovi[j] = sortedKvizovi[i];
                sortedKvizovi[i] = temp3;


            }
        }
    }
    for(int i=0;i<120;i++)
    {
        printf("\nStudent %d:\n%s\n%s\n%s\n",i,sorted[i],sortedIme[i],sortedPrezime[i]);
        for(int j=0; j<10; j++)
        {
            printf(" %d ", *(sortedKvizovi[i]+j));
        }
        printf("\n");
    }
    return_main_ui();
}

void sort_ui()
{
    int ui;
    printf("\n\tIZBOR SORTIRANJA\n");
    printf("Za odabir koristite zadani broj kraj zeljene opcije.\n");
    printf("---------------------------------------------\n");
    printf("[1] -- Sortiraj po indeksu\n");
    printf("[2] -- Sortiraj po imenu\n");
    printf("[3] -- Sortiraj po prezimenu\n");
    printf("[4] -- Sortiraj po broju bodova iz kvizova...\n");
    printf("---------------------------------------------\n");
    printf("[5] -- Nazad\n");
    do
    {
        printf("Vas odabir: ");
        scanf("%d", &ui);
        switch (ui)
        {
            case 1:
                sort_index_ui();
                break;
            case 2:
                sort_name_ui();
                break;
            case 3:
                sort_surname_ui();
                break;
            case 4:
                sort_quiz_name();
                break;
            case 5:
                printf("\n\n\n\n\n");
                draw_ui();
            default:
                printf("\nMolimo unesite jednu od ponudjenih opcija!\n");
        }
    }while(ui>5 || ui<1);
    printf("\nGreska! Ova opcija jos nije dostupna.\n");
    sort_ui();
}

void return_main_ui()
{
    int ui;
    printf("\n---------------------------------\n");
    printf("[1] za povratak na meni\n");
    printf("[2] za izlaz iz programa\n");
    printf("---------------------------------\n");
    do{
        printf("Vas odabir: ");
        scanf("%d", &ui);
        switch(ui)
        {
            case 1:
                printf("\n\n\n\n\n"); //privremeni cls
                draw_ui();
                break;
            case 2:
                printf("Izlaz uspjesan");
                exit(0);
                break;
            default:
                printf("Molimo unesite jednu od ponudjenih opcija!\n");
        }
    }while(ui>5 ||ui <1);
}

void print_studenti()
{
    for(int i=0;i<120;i++)
    {
        printf("%s\n", (st+i)->index);
        printf("%s\n", (st+i)->ime);
        printf("%s\n", (st+i)->prezime);
        for(int j=0;j<10;j++)
        {
            printf(" %d |", st[i].kvizovi[j]);
        }
        printf("\n-----------------------------------------------------\n");
    }
    return_main_ui();
}

void draw_ui()
{
    int ui;
    printf("Dobrodosli u Program Sortiranja Marjanovic!\n");
    printf("Za odabir koristite zadani broj kraj zeljene opcije.\n");
    printf("---------------------------------------------\n");
    printf("[1] -- Za prikaz svih studenata u originalnoj formi\n");
    printf("[2] -- Sortirajte po...\n");
    printf("[3] -- Izlaz\n");
    printf("---------------------------------------------\n");
    do
    {
        printf("Vas odabir: ");
        scanf("%d", &ui);
        switch (ui)
        {
            case 1:
                print_studenti();
                break;
            case 2:
                sort_ui();
                break;
            case 3:
                printf("Izlaz uspjesan.\n");
                exit(0);
            default:
                printf("\nMolimo unesite jednu od ponudjenih opcija!\n");
        }
    }while(ui>3 || ui<1);
}

void init_load()
{
    FILE * fp;
    char line[100];
    if((fp=fopen("studenti_2022.txt", "r")) == NULL)
    {
        printf("Datoteka nije pronadjena, molimo ubacite datoteku \"studenti_2022.txt\" u folder sa programom.\n");
        exit(1);
    }

    bool s1=false,s2=false,s3=false,s4=false,s5=false;

    int id=0;
    while ((fgets(line, 120, fp) != NULL) && id<120)
    {
        line[strcspn(line, "\n")] = '\0';
        if (s5 == true)
        {
            s1=false; s2=false; s3=false; s4=false; s5=false;
            strcpy(((st+id+1)->index), line);
            s1=true;
            id++;

        }else if (s4 == true)
        {
            strcpy(((rw+id)->divider), line);
            s5=true;
        }else if (s3 == true)
        {
            strcpy(((rw+id)->kvizovi), line);
            s4=true;
        }else if(s2 == true)
        {
            strcpy(((st+id)->prezime), line);
            s3=true;
        }else if(s1 == true)
        {
            strcpy(((st+id)->ime), line);
            s2=true;
        }else
        {
            strcpy(((st+id)->index), line);
            s1=true;
        }
    }
    fclose(fp);

    for(int i=0;i<120;i++)
    {
        char *str = rw[i].kvizovi, *p = str;
        int domen=0;

        while (*p)
        {
            if ( isdigit(*p) ||  (*p=='-'||*p=='+') && isdigit(*(p+1)) )
            {
                int filter = strtol(p, &p, 10);
                switch(domen)
                {
                    case 0:
                        st[i].kvizovi[0]=filter;
                        break;
                    case 1:
                        st[i].kvizovi[1]=filter;
                        break;
                    case 2:
                        st[i].kvizovi[2]=filter;
                        break;
                    case 3:
                        st[i].kvizovi[3]=filter;
                        break;
                    case 4:
                        st[i].kvizovi[4]=filter;
                        break;
                    case 5:
                        st[i].kvizovi[5]=filter;
                        break;
                    case 6:
                        st[i].kvizovi[6]=filter;
                        break;
                    case 7:
                        st[i].kvizovi[7]=filter;
                        break;
                    case 8:
                        st[i].kvizovi[8]=filter;
                        break;
                    case 9:
                        st[i].kvizovi[9]=filter;
                        break;
                    default:
                        continue;
                }
                domen++;


            } else
            {
                p++;
            }
        }
    }
    draw_ui();
}
