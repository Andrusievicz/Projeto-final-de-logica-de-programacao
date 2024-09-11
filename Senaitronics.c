  #include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int menu, loop;//variaveis para o menu principal e o loop do dowhile

    //======================================== variaveis dos nomes do produto =====================================================
    char cpu[8][100];
    strcpy(cpu[1],"AMD Ryzen 7 5700G  ");
    strcpy(cpu[2],"AMD Ryzen 5 5600G  ");
    strcpy(cpu[3],"AMD Ryzen 7 5800x3D");
    strcpy(cpu[4],"AMD Ryzen 5 5600x  ");
    strcpy(cpu[5],"Intel i5-10400F    ");
    strcpy(cpu[6],"Intel i5-12400F    ");
    strcpy(cpu[7],"Intel i7-13700F    ");
    char gpu[8][100];
    strcpy(gpu[1],"AMD Radeon RX 6700 XT     ");
    strcpy(gpu[2],"AMD Radeon RX 7900 XTX    ");
    strcpy(gpu[3],"Intel ARC A380            ");
    strcpy(gpu[4],"Intel ARC A770            ");
    strcpy(gpu[5],"Nvidia GeForce RTX 4060   ");
    strcpy(gpu[6],"Nvidia GeForce RTX 3060 TI");
    strcpy(gpu[7],"Nvidia GeForce RTX 4090   ");
    char monitor[6][100];
    strcpy(monitor[1],"Monitor LG 21.5 FHD LED 75Hz FreeSync            ");
    strcpy(monitor[2],"Monitor LG UltraGear 27 FHD 144Hz FreeSync       ");
    strcpy(monitor[3],"Monitor LG UltraGear 34 Curvo WQHD 160Hz FreeSync");
    strcpy(monitor[4],"Monitor AOC 27 FHD Wide 144Hz G-Sync             ");
    strcpy(monitor[5],"Monitor Asus TUF Gaming 27 FHD 165Hz FreeSync    ");
    char ssd[10][100];
    strcpy(ssd[1],"HDD WD Black 4TB 3.5 SATA III          ");
    strcpy(ssd[2],"HDD Seagate 4TB 3.5 SATA III           ");
    strcpy(ssd[3],"HDD Seagate 2TB 3.5 SATA III           ");
    strcpy(ssd[4],"SSD Kingston 960GB 2.5 SATA III        ");
    strcpy(ssd[5],"SSD Crucial 1TB 2.5 SATA III           ");
    strcpy(ssd[6],"SSD WD Green 2TB 2.5 SATA III          ");
    strcpy(ssd[7],"SSD Kingston Fury Renegade 1TB M.2 Gen4");
    strcpy(ssd[8],"SSD Kingston KC3000 1TB M.2 Gen4       ");
    strcpy(ssd[9],"SSD Adata S40G 1TB M.2 Gen3            ");
    char ram[7][100];
    strcpy(ram[1],"Memória XPG Lancer RGB 32GB(2x16GB)6000MHz DDR5 CL40           ");
    strcpy(ram[2],"Memória Kingston Fury Beast RGB 32GB 5600MHz DDR5 CL40         ");
    strcpy(ram[3],"Memória Kingston Fury Beast 8GB 3200MHz DDR4 CL16              ");
    strcpy(ram[4],"Memória Kingston Fury Beast 16GB 3200MHz DDR4 CL16             ");
    strcpy(ram[5],"Memória Corsair Vengeance RGB Pro 8GB 3200MHz DDR4 CL16        ");
    strcpy(ram[6],"Memória Kingston Fury Beast RGB 32GB (2x16GB) 3200MHz DDR4 CL16");
    char fonte[8][100];
    strcpy(fonte[1],"Fonte MSI MAG A650BN ATX 650W 80 PLUS Bronze PFC Ativo Entrada Bivolt");
    strcpy(fonte[2],"Fonte XPG Core Reactor 650W 80 Plus Gold Modular                     ");
    strcpy(fonte[3],"Fonte Cooler Master ATX MWE 650 White V2 650W                        ");
    strcpy(fonte[4],"Fonte XPG Core Reactor 750W 80 Plus Gold Modular                     ");
    strcpy(fonte[5],"Fonte MSI MPG A750GF 750W 80 Plus Gold Modular PFC Ativo Bivolt      ");
    strcpy(fonte[6],"Fonte Thermaltake Toughpower GF1 1000W ATX Fully Modular 80+ Gold    ");
    strcpy(fonte[7],"Fonte Corsair Hx1000i Series 1000w 80 Plus Platinum Full Modular     ");
    char gabinete[8][100];
    strcpy(gabinete[1],"Gabinete Gamer Rise Mode Glass 06X Mid Tower Preto                  ");
    strcpy(gabinete[2],"Gabinete Gamer T-Dagger Cube White Mid Tower Branco                 ");
    strcpy(gabinete[3],"Gabinete Gamer Redragon Sideways Mini Tower M-ATX Preto             ");
    strcpy(gabinete[4],"Gabinete Gamer Cooler Master MasterBox MB311L Mini Tower com FAN    ");
    strcpy(gabinete[5],"Gabinete Gamer Corsair 470T Mid Tower RGB ATX Com Fan Preto         ");
    strcpy(gabinete[6],"Gabinete Gamer Asus TUF Gaming GT501 Mid Tower Aura Sync RGB com FAN");
    strcpy(gabinete[7],"Gabinete Cosmos C700m Iluminação Rgb                                ");
    char mobo[8][100];
    strcpy(mobo[1],"Placa Mãe MSI A320M-A Pro AM4 mATX DDR4                                ");
    strcpy(mobo[2],"Placa Mãe ASRock B450M Steel Legend AM4 mATX DDR4                      ");
    strcpy(mobo[3],"Placa Mãe Asus TUF Gaming B650M-Plus AM5 B650 mATX DDR5                ");
    strcpy(mobo[4],"Placa Mãe Gigabyte X670 Aorus Elite AX AM5 ATX DDR5 RGB Bluetooth Wi-Fi");
    strcpy(mobo[5],"Placa Mãe Biostar H510mhp R2.0 DDR4 LGA1200 mATX                       ");
    strcpy(mobo[6],"Placa Mãe Gigabyte B760M DS3H LGA1700 DDR4                             ");
    strcpy(mobo[7],"Placa Mae Asus ROG Maximus Z790 Hero LGA1700 ATX DDR5 Wi-Fi            ");

    //===================================== variaveis dos preços dos produtos em vetor =====================================================
    float cpuprice[8]= {0,1130.49,812.52,1988.99,1072.54,569.03,882.54,2374.99},
                       gpuprice[10]= {0,2036.99,6269.99,872.99,2327.99,2099.99,2199.99,12610.00,0,0},
                                     monitorprice[6]= {0,407.39,1066.98,1939.99,1115.49,1183.39},
                                             ssdprice[10]= {0,921.48,427.29,313.49,284.99,294.66,569.99,522.49,494.00,370.49},
                                                     ramprice[7]= {0,979.99,859.99,170.99,237.49,237.49,569.99},
                                                             fonteprice[8]= {0,306.84,599.99,482.52,617.49,669.99,2259.00,2890.00},
                                                                     gabineteprice[8]= {0,169.99,184.29,299.99,271.59,717.79,1099.99,4261.07},
                                                                             moboprice[8]= {0,303.99,699.99,1329.99,2184.99,579.60,1054.49,5799.99};

    //========= variaveis para identificar o ponto do vetor onde o usuario faz a escolha pra mostrar no carrinho ===========================
    int gpuqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                    cpuqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                                monitorqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                                        ssdqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                                                ramqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                                                        fonteqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                                                                gabineteqtd[10]= {0,0,0,0,0,0,0,0,0,0},
                                                                        moboqtd[10]= {0,0,0,0,0,0,0,0,0,0};
    //============================================== variaveis para a escolha do usuario ====================================================
    int counter=0,
        cpuchoice=0,
        gpuchoice=0,
        monitorchoice=0,
        ssdchoice=0,
        ramchoice=0,
        fontechoice=0,
        gabinetechoice=0,
        mobochoice=0,
        carrinho;
    //============================================ variaveis para a soma do carrinho ========================================================
    float
    somacpu=0,
    somagpu=0,
    somamonitor=0,
    somassd=0,
    somaram=0,
    somafonte=0,
    somagabinete=0,
    somamobo=0,
    somatotal=somacpu+somagpu+somamonitor+somassd+somaram+somafonte+somagabinete+somamobo;
    //============================================= variaveis para a finalização do carrinho ================================================

    struct  endereco
    {
        char nome[100];
        int idade;
        char cpf[100];
        char telefone[100];
        char endereco[100];
        int num;
        char complemento[100];
        int cep;
        char bairro[100];
        char cidade[100];
        char estado[100];
    };
    struct endereco end;

    do
    {

mainmenu://ponto goto do menu principal

        printf("----------------------------\n");
        printf("|       Senaitronics       |\n");
        printf("----------------------------\n");
        printf("|**************************|\n");
        printf("----------------------------\n");
        printf("|Selecione o setor desejado|\n");
        printf("----------------------------\n");
        printf("|[1]         CPU           |\n");
        printf("----------------------------\n");
        printf("|[2]         GPU           |\n");
        printf("----------------------------\n");
        printf("|[3]       Monitores       |\n");
        printf("----------------------------\n");
        printf("|[4]       SDD & HDD       |\n");
        printf("----------------------------\n");
        printf("|[5]      Memória RAM      |\n");
        printf("----------------------------\n");
        printf("|[6]        Fontes         |\n");
        printf("----------------------------\n");
        printf("|[7]      Gabinetes        |\n");
        printf("----------------------------\n");
        printf("|[8]      Placa mãe        |\n");
        printf("----------------------------\n");
        printf("|[9]     Seu Carrinho      |\n");
        printf("----------------------------\n");
        printf("|[10]  Finalizar a compra  |\n");
        printf("----------------------------\n");
        scanf("%i", &menu);//menu principal e sua leitura

        switch (menu)//caso para os setores do menu
        {
        case 1://caso para os CPU
            system("cls");
            printf("\n------------------------------------\n");
            printf("|                 CPU              |\n");
            printf("------------------------------------\n");
            printf("| [1]AMD Ryzen 7 5700G    R$1130,49|\n");
            printf("------------------------------------\n");
            printf("| [2]AMD Ryzen 5 5600G     R$812,52|\n");
            printf("------------------------------------\n");
            printf("| [3]AMD Ryzen 7 5800x3D  R$1988,99|\n");
            printf("------------------------------------\n");
            printf("| [4]AMD Ryzen 5 5600x    R$1072,54|\n");
            printf("------------------------------------\n");
            printf("| [5]Intel i5-10400F       R$569,03|\n");
            printf("------------------------------------\n");
            printf("| [6]Intel i5-12400F       R$882,54|\n");
            printf("------------------------------------\n");
            printf("| [7]Intel i7-13700F      R$2374,99|\n");
            printf("------------------------------------\n");
            scanf("%i", &cpuchoice);
            cpuqtd[cpuchoice]=1;
            break;

        case 2://caso para os GPU
            system("cls");
            printf("\n------------------------------------------\n");
            printf("|               GPU                      |\n");
            printf("------------------------------------------\n");
            printf("| [1]AMD Radeon RX 6700 XT      R$2036,99|\n");
            printf("| [2]AMD Radeon RX 7900 XTX     R$6269,99|\n");
            printf("| [3]Intel ARC A380              R$872,99|\n");
            printf("| [4]Intel ARC A770             R$2327,99|\n");
            printf("| [5]Nvidia GeForce RTX 4060    R$2099,99|\n");
            printf("| [6]Nvidia GeForce RTX 3060 TI R$2199,99|\n");
            printf("| [7]Nvidia GeForce RTX 4090  R$12,610,00|\n");
            printf("------------------------------------------\n");
            scanf("%i", &gpuchoice);
            gpuqtd[gpuchoice]=1;
            break;

        case 3://caso para o monitor
            system("cls");
            printf("-----------------------------------------------------------------\n");
            printf("|                          Monitores                            |\n");
            printf("-----------------------------------------------------------------\n");
            printf("| [1]Monitor LG 21.5 FHD LED 75Hz FreeSync              R$407,39|\n");
            printf("-----------------------------------------------------------------\n");
            printf("| [2]Monitor LG UltraGear 27 FHD 144Hz FreeSync        R$1066,98|\n");
            printf("-----------------------------------------------------------------\n");
            printf("| [3]Monitor LG UltraGear 34 Curvo WQHD 160Hz FreeSync R$1939,99|\n");
            printf("-----------------------------------------------------------------\n");
            printf("| [4]Monitor AOC 27 FHD Wide 144Hz G-Sync              R$1115,49|\n");
            printf("-----------------------------------------------------------------\n");
            printf("| [5]Monitor Asus TUF Gaming 27 FHD 165Hz FreeSync     R$1183,39|\n");
            printf("-----------------------------------------------------------------\n");
            scanf("%i", &monitorchoice);
            monitorqtd[monitorchoice]=1;
            break;

        case 4://caso para ssd/hdd
            system("cls");
            printf("\n------------------------------------------------------\n");
            printf("|                      SSD & HDD                     |\n");
            printf("------------------------------------------------------\n");
            printf("| [1]HDD WD Black 4TB 3.5 SATA III           R$921,48|\n");
            printf("------------------------------------------------------\n");
            printf("| [2]HDD Seagate 4TB 3.5 SATA III            R$427,49|\n");
            printf("------------------------------------------------------\n");
            printf("| [3]HDD Seagate 2TB 3.5 SATA III            R$313,49|\n");
            printf("------------------------------------------------------\n");
            printf("| [4]SSD Kingston 960GB 2.5 SATA III         R$284,99|\n");
            printf("------------------------------------------------------\n");
            printf("| [5]SSD Crucial 1TB 2.5 SATA III            R$294,66|\n");
            printf("------------------------------------------------------\n");
            printf("| [6]SSD WD Green 2TB 2.5 SATA III           R$569,99|\n");
            printf("------------------------------------------------------\n");
            printf("| [7]SSD Kingston Fury Renegade 1TB M.2 Gen4 R$522,49|\n");
            printf("------------------------------------------------------\n");
            printf("| [8]SSD Kingston KC3000 1TB M.2 Gen4        R$494,00|\n");
            printf("------------------------------------------------------\n");
            printf("| [9]SSD Adata S40G 1TB M.2 Gen3             R$370,49|\n");
            printf("------------------------------------------------------\n");
            scanf("%i", &ssdchoice);
            ssdqtd[ssdchoice]=1;
            break;

        case 5://caso pra memoria ram
            system("cls");
            printf("\n------------------------------------------------------------------------------\n");
            printf("|                                Memória RAM                                 |\n");
            printf("------------------------------------------------------------------------------\n");
            printf("| [1]Memória XPG Lancer RGB 32GB(2x16GB)6000MHz DDR5 CL40            R$979,99|\n");
            printf("------------------------------------------------------------------------------\n");
            printf("| [2]Memória Kingston Fury Beast RGB 32GB 5600MHz DDR5 CL40          R$859,99|\n");
            printf("------------------------------------------------------------------------------\n");
            printf("| [3]Memória Kingston Fury Beast 8GB 3200MHz DDR4 CL16               R$170,99|\n");
            printf("------------------------------------------------------------------------------\n");
            printf("| [4]Memória Kingston Fury Beast 16GB 3200MHz DDR4 CL16              R$237,49|\n");
            printf("------------------------------------------------------------------------------\n");
            printf("| [5]Memória Corsair Vengeance RGB Pro 8GB 3200MHz DDR4 CL16         R$237,49|\n");
            printf("------------------------------------------------------------------------------\n");
            printf("| [6]Memória Kingston Fury Beast RGB 32GB (2x16GB) 3200MHz DDR4 CL16 R$569,99|\n");
            printf("------------------------------------------------------------------------------\n");
            scanf("%i", &ramchoice);
            ramqtd[ramchoice]=1;
            break;

        case 6://caso pra fonte
            system("cls");
            printf("\n------------------------------------------------------------------------------------\n");
            printf("|                                     Fonte                                        |\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [1]Fonte MSI MAG A650BN ATX 650W 80 PLUS Bronze PFC Ativo Entrada Bivolt R$306,84|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [2]Fonte XPG Core Reactor 650W 80 Plus Gold Modular                      R$599,99|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [3]Fonte Cooler Master ATX MWE 650 White V2 650W                         R$482,52|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [4]Fonte XPG Core Reactor 750W 80 Plus Gold Modular                      R$617,49|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [5]Fonte MSI MPG A750GF 750W 80 Plus Gold Modular PFC Ativo Bivolt       R$669,99|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [6]Fonte Thermaltake Toughpower GF1 1000W ATX Fully Modular 80+ Gold    R$2259,00|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [7]Fonte Corsair Hx1000i Series 1000w 80 Plus Platinum Full Modular     R$2890,00|\n");
            printf("------------------------------------------------------------------------------------\n");
            scanf("%i", &fontechoice);
            fonteqtd[fontechoice]=1;
            break;

        case 7://caso pra gabinete
            system("cls");
            printf("\n------------------------------------------------------------------------------------\n");
            printf("|                                     Gabinete                                     |\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [1]Gabinete Gamer Rise Mode Glass 06X Mid Tower Preto                    R$169,99|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [2]Gabinete Gamer T-Dagger Cube White Mid Tower Branco                   R$184,29|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [3]Gabinete Gamer Redragon Sideways Mini Tower M-ATX Preto               R$299,99|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [4]Gabinete Gamer Cooler Master MasterBox MB311L Mini Tower com FAN      R$271,59|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [5]Gabinete Gamer Corsair 470T Mid Tower RGB ATX Com Fan Preto           R$717,79|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [6]Gabinete Gamer Asus TUF Gaming GT501 Mid Tower Aura Sync RGB com FAN R$1099,99|\n");
            printf("------------------------------------------------------------------------------------\n");
            printf("| [7]Gabinete Cosmos C700m Iluminação Rgb                                 R$4261,07|\n");
            printf("------------------------------------------------------------------------------------\n");
            scanf("%i", &gabinetechoice);
            gabineteqtd[gabinetechoice]=1;
            break;

        case 8://caso pra placa mãe
            system("cls");
            printf("\n---------------------------------------------------------------------------------------\n");
            printf("|                                     Placa Mãe                                       |\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [1]Placa Mãe MSI A320M-A Pro AM4 mATX DDR4                                  R$303,99|\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [2]Placa Mãe ASRock B450M Steel Legend AM4 mATX DDR4                        R$699,99|\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [3]Placa Mãe Asus TUF Gaming B650M-Plus AM5 B650 mATX DDR5                 R$1329,99|\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [4]Placa Mãe Gigabyte X670 Aorus Elite AX AM5 ATX DDR5 RGB Bluetooth Wi-Fi R$2184,99|\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [5]Placa Mãe Biostar H510mhp R2.0 DDR4 LGA1200 mATX                         R$579,60|\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [6]Placa Mãe Gigabyte B760M DS3H LGA1700 DDR4                              R$1054,49|\n");
            printf("---------------------------------------------------------------------------------------\n");
            printf("| [7]Placa Mae Asus ROG Maximus Z790 Hero LGA1700 ATX DDR5 Wi-Fi             R$5799,99|\n");
            printf("---------------------------------------------------------------------------------------\n");
            scanf("%i", &mobochoice);
            moboqtd[mobochoice]=1;
            break;

        case 9://caso carrinho



            system("cls");//limpa tela

//================================ for para cada submenu contendo a escolha na posição do vetor ===========================================

            for (counter=0; counter<8; counter++)//cpu
            {
                if (cpuqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s                                                    |R$%.2f|\n", cpu[counter], cpuprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somacpu+=cpuprice[counter];
                }
            }
            for (counter=0; counter<8; counter++)//gpu
            {
                if (gpuqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s                                             |R$%.2f|\n", gpu[counter], gpuprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somagpu+=gpuprice[counter];
                }
            }
            for (counter=0; counter<6; counter++)//monitor
            {
                if (monitorqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s                      |R$%.2f|\n", monitor[counter], monitorprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somamonitor+=monitorprice[counter];
                }
            }
            for (counter=0; counter<10; counter++)//ssd/hdd
            {
                if (ssdqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s                                 |R$%.2f|\n", ssd[counter], ssdprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somassd+=ssdprice[counter];
                }
            }
            for (counter=0; counter<7; counter++)//memoria ram
            {
                if (ramqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s         |R$%.2f|\n", ram[counter], ramprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somaram+=ramprice[counter];
                }
            }
            for (counter=0; counter<8; counter++)//fonte
            {
                if (fonteqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s   |R$%.2f|\n", fonte[counter], fonteprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somafonte+=fonteprice[counter];
                }
            }
            for (counter=0; counter<8; counter++)//gabinete
            {
                if (gabineteqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s   |R$%.2f|\n", gabinete[counter], gabineteprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somagabinete+=gabineteprice[counter];
                }
            }
            for (counter=0; counter<8; counter++)//placa mãe
            {
                if (moboqtd[counter]>0)
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|Produto                                                              |Preço      |\n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("|%s|R$%.2f|\n", mobo[counter], moboprice[counter]);
                    printf("-----------------------------------------------------------------------------------\n");
                    somamobo+=moboprice[counter];
                }
            }

//================================================= total do carrinho =========================================================================


            somatotal=somacpu+somagpu+somamonitor+somassd+somaram+somafonte+somagabinete+somamobo;
            printf("|Total                                                               |R$%.2f  |\n", somatotal);
            printf("-----------------------------------------------------------------------------------\n");
            break;

        case 10://caso para finalizar o carrinho

//========================================================= leitura dos dados do destinatario ==================================================
            system("cls");
            printf("--- Dados do destinatario ---- \n");

            printf("Informe o nome  ");
            fflush(stdin);
            fgets(end.nome, 100, stdin);

            printf("Informe a idade ");
            scanf("%i", &end.idade);

            printf("Informe o CPF ");
            fflush(stdin);
            fgets(end.cpf, 100, stdin);

            printf("Informe o telefone ");
            fflush(stdin);
            fgets(end.telefone, 100, stdin);

            printf("Informe o endereço ");
            fflush(stdin);
            fgets(end.endereco, 100, stdin);

            printf("Informe o numero ");
            scanf("%i", &end.num);

            printf("Informe o complemento ");
            fflush(stdin);
            fgets(end.complemento, 100, stdin);

            printf("Informe o CEP ");
            scanf("%i", &end.cep);

            printf("Informe o bairro ");
            fflush(stdin);
            fgets(end.bairro, 100, stdin);

            printf("Informe a cidade ");
            fflush(stdin);
            fgets(end.cidade, 100, stdin);

            printf("Informe o estado ");
            fflush(stdin);
            fgets(end.estado, 100, stdin);

            system("pause");//pause pra nao sumir a tela muito rapido e ficar mais dinamico

            system("cls");//limpa tela

//======================== print para confirmação de metodo de pagamento ================================

            printf("\n--------------------------------------\n");
            printf("|Valor total da compra:   |%.2f  |\n", somatotal);
            printf("--------------------------------------\n");
            printf("|    Selecione a forma de pagamento  |\n");
            printf("--------------------------------------\n");
            printf("|  [1]Crédito   |        [2]PIX      |\n");
            printf("--------------------------------------\n");
            int pagamento;
            scanf("%i", &pagamento);

            system("cls");//limpa tela

//=========================================  confirmação de entrega  ======================================================

            printf("\n-------------------------------------------------------------------------\n");
            printf("|  Produto ja esta sendo separado e será entregue para o destinatario   |\n");
            printf("-------------------------------------------------------------------------\n");
            printf("|                        Dados do destinatario                          |\n");
            printf("-------------------------------------------------------------------------\n");
            printf("Nome:%s", end.nome);
            printf("-------------------------------------------------------------------------\n");
            printf("Idade: %i\n", end.idade);
            printf("-------------------------------------------------------------------------\n");
            printf("CPF: %s", end.cpf);
            printf("-------------------------------------------------------------------------\n");
            printf("Telefone: %s", end.telefone);
            printf("-------------------------------------------------------------------------\n");
            printf("Endereço: %s", end.endereco);
            printf("-------------------------------------------------------------------------\n");
            printf("Numero: %i\n", end.num);
            printf("-------------------------------------------------------------------------\n");
            printf("Complemento: %s", end.complemento);
            printf("-------------------------------------------------------------------------\n");
            printf("CEP: %i\n", end.cep);
            printf("-------------------------------------------------------------------------\n");
            printf("Bairro: %s", end.bairro);
            printf("-------------------------------------------------------------------------\n");
            printf("Cidade: %s", end.cidade);
            printf("-------------------------------------------------------------------------\n");
            printf("Estado: %s", end.estado);
            printf("-------------------------------------------------------------------------");

            return 0;//para fechar o programa depois de finalizar a compra


        default://default caso não digite uma opção valida
            printf("Digite uma opção valida ");

        }
        printf("\n[1]Menu principal [2] Sair\n");
        scanf("%i", &loop);//voltar ao menu principal
        system("cls");//limpa tela


    }
    while (loop==1);//condição do dowhile

    system ("pause");

    return 0;

}
