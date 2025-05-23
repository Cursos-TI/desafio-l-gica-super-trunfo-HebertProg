#include <stdio.h>


int main(){

  
    char inicial1;// - Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta1[4]; // - A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nome_cidade1[100];//- O nome da cidade. Tipo: char[] (string)
    
    char inicial2;// - Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta2[4]; // - A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nome_cidade2[100];//- O nome da cidade. Tipo: char[] (string)
    
    unsigned long int populacao1;// - O número de habitantes da cidade. Tipo: unsigned long int
    unsigned long int populacao2;// - O número de habitantes da cidade. Tipo: unsigned long int
    float km_cidade1;//  - A área da cidade em quilômetros quadrados. Tipo: float
    float km_cidade2;// - A área da cidade em quilômetros quadrados. Tipo: float
    float pib1;// - O Produto Interno Bruto da cidade. Tipo: float
    float pib2;// - O Produto Interno Bruto da cidade. Tipo: float
    int pontos_turisticos1;// - A quantidade de pontos turísticos na cidade. Tipo: int
    int pontos_turisticos2;// - A quantidade de pontos turísticos na cidade. Tipo: int
    float pib_Perca1;//- irá armazenar a divisão das variáveis (PIB/POPULACAO)
    float pib_Perca2;//- irá armazenar a divisão das variáveis (PIB/POPULACAO)
    float densi_popula1;//- irpa armazenar o resultado da divisão das variáveis (Populacao/km_cidade)
    float densi_popula2;//- irá armazenar o resultado da divisão das variáveis (Populacao/km_cidade)
    float Super_poder1;// - Irá calcular todas as outras variáveis e o resultado será o super poder
    float Super_poder2;// - Irá calcular todas as outras variáveis e o resultado será o super poder

    unsigned long int resultado_populacao;// Irá ser o resultado da soma das duas atribuição 
    float resultado_area;// Irá ser o resultado da soma das duas atribuição 
    float resultado_pib;// Irá ser o resultado da soma das duas atribuição 
    int resultado_turisticos;// Irá ser o resultado da soma das duas atribuição 
    float resultado_pib_P;// Irá ser o resultado da soma das duas atribuição 
    float resultado_densi;// Irá ser o resultado da soma das duas atribuição 
    float resultado_poder;// Irá ser o resultado da soma das duas atribuição 
    
    int menu_atributos;
        

    printf("==========Bem-vindo Super Trunfo de Países==========\n\n"); // Texto de identificação de apresentação da primeira carta !

    printf("*****CARTA 01***** \n\n");

    printf("Digite a Primeira letra do Estado: ");// Usuário irá inserir o a letra do estado 
    scanf(" %c", &inicial1);//Leitura da letra inicial do estado, pela funcção scanf . essa leitura será jogada para a variavel 1 

    while (getchar() != '\n');
    printf("Digite o codigo da carta: ");//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    fgets(codigo_carta1,4,stdin);
    //scanf("%s",codigo_carta1);//Leitura do codigo da carta inserido pelo usuário

    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");//O nome da cidade. Tipo: char[] (string)
    fgets(nome_cidade1,100,stdin);
    //scanf("%s",nome_cidade1);//leitura do nome da cidade inserido pelo usuário
    

    printf("Digite o numero de habitantes da cidade: ");//O número de habitantes da cidade. Tipo: int
    scanf("%u",&populacao1);//Leitura do numero de habitantes da cidade 

    printf("Digite o tamanho da cidade em km²: ");//A área da cidade em quilômetros quadrados. Tipo: float
    scanf("%f",&km_cidade1);//Leitura do tamanho da cidade em km²

    printf("Digite o Pib: "); //O Produto Interno Bruto da cidade. Tipo: float
    scanf("%f",&pib1);//Leitura do Pib inserido pelo usuário 

    printf("Digite o numero de pontos turísticos: ");//A quantidade de pontos turísticos na cidade. Tipo: int
    scanf(" %d",&pontos_turisticos1);//Leitura a quatidade de pontos turisticos inseridos pelo usuário

    pib_Perca1 = (float)pib1/populacao1;// Divisão da renda per capita 
    
    densi_popula1 =(float)populacao1/km_cidade1;//divisão da densidade populacional

    Super_poder1 = (float) populacao1+km_cidade1+pib1+pontos_turisticos1+pib_Perca1+1/densi_popula1;//super poder é a soma de todas as atribuições. 

    printf("\n\n *****CARTA 02***** \n\n");

    printf("Digite a Primeira letra do Estado: ");// Usuário irá inserir o a letra do estado 
    scanf(" %c", &inicial2);//Leitura da letra inicial do estado, pela funcção scanf . essa leitura será jogada para a variavel 1 

    while (getchar() != '\n');

    printf("Digite o codigo da carta: ");//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    fgets(codigo_carta2,4,stdin);
    //scanf("%s",codigo_carta2);//Leitura do codigo da carta inserido pelo usuário
   
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");//O nome da cidade. Tipo: char[] (string)
    fgets(nome_cidade2,100,stdin);
    //scanf("%s",nome_cidade2);//leitura do nome da cidade inserido pelo usuário


    printf("Digite o numero de habitantes da cidade: ");//O número de habitantes da cidade. Tipo: int
    scanf("%u",&populacao2);//Leitura do numero de habitantes da cidade 

    printf("Digite o tamanho da cidade em km²: ");//A área da cidade em quilômetros quadrados. Tipo: float
    scanf("%f",&km_cidade2);//Leitura do tamanho da cidade em km²

    printf("Digite o Pib: "); //O Produto Interno Bruto da cidade. Tipo: float
    scanf("%f",&pib2);//Leitura do Pib inserido pelo usuário 

    printf("Digite o numero de pontos turísticos: ");//A quantidade de pontos turísticos na cidade. Tipo: int
    scanf(" %d",&pontos_turisticos2);//Leitura a quatidade de pontos turisticos inseridos pelo usuário

    pib_Perca2 = (float)pib2/populacao2;// Divisão da renda per capita 
    
    densi_popula2 = (float)populacao2/km_cidade2;//divisão da densidade populacional

    Super_poder2 = (float) populacao2+km_cidade2+pib2+pontos_turisticos2+pib_Perca2+1/densi_popula2;//super poder é a soma de todas as atribuições. 
    /*compração das cartas são essas linhas de códigos abaixo , o atributo escolhido é a População,
     */

   

     printf("\n\n  ESCOLHA O ATRIBUTO PARA COPARAÇÃO DAS CARTAS \n\n");//Menu interativo  com o usuário para que ele possa escolher qual atributo será comparado

   

     printf("1 - População \n");
     printf("2 - Aréa \n");
     printf("3 - Pib \n");
     printf("4 - Numeros de pontos turísticos \n");
     printf("5 - Densidade populacional \n");
     printf("Escolha: ");
     scanf("%d",&menu_atributos);/*variável que será armazenada o atributo */

     switch (menu_atributos)/*SWITCH */
     {
    case 1://case 1 será responsável pela compração dos valores do atributo população . 
    menu_atributos = resultado_populacao ;/* se no menu for selecionado a opção população a variavel menu_atributo 
    receberar o valor da variável resultado_populacao*/

    printf("\n#### Carta 1 - %s (%s) : %u  ####", nome_cidade1 , codigo_carta1,populacao1); //especificação das cartas junto com o atributo escolhido
    printf("\n#### Carta 2 - %s (%s) : %u  ####", nome_cidade2 , codigo_carta2,populacao2); //especificação das cartas junto com o atributo escolhido

     if (resultado_populacao = populacao1 > populacao2) {/*Comando if irá comprar se a variável população de uma carta é 
      maior  que a outra */
            printf("\n PARABÉNS %s Venceu! \n ", nome_cidade1);//ação tomada se caso a condição for verdadeira.
     } else if(resultado_populacao = populacao1 < populacao2){
        printf("\n PARABÉNS %s VENCEU! \n ", nome_cidade2);// ação tomada para a condição else if 
     } else {
        printf("\nEmpatou !!\n");// Ação tomada caso nenhuma das conições acima forém verdadeira . 
     }    
    
       
    break;
    case 2://case 1 será responsável pela compração dos valores do atributo área  .
       menu_atributos = resultado_area;/* se no menu for selecionado a opção área a variavel menu_atributo 
    receberar o valor da variável resultado_area*/
       printf("\n#### Carta 1 - %s (%s) : %.2f  ####", nome_cidade1 , codigo_carta1,km_cidade1); //especificação das cartas junto com o atributo escolhido
    printf("\n#### Carta 2 - %s (%s) : %.2f  ####", nome_cidade2 , codigo_carta2,km_cidade2);//especificação das cartas junto com o atributo escolhido

     if (resultado_area = km_cidade1 > km_cidade2) {/*Comando if irá comprar se a variável km_cidade de uma carta é 
      maior  que a outra */
            printf("\n PARABÉNS %s Venceu! \n ", nome_cidade1);//ação tomada se caso a condição for verdadeira.
     } else if(resultado_area = km_cidade1 < km_cidade2){
        printf("\n PARABÉNS %s VENCEU! \n ", nome_cidade2);// ação tomada para a condição else if 
     } else {
        printf("\nEmpatou !!\n");// Ação tomada caso nenhuma das conições acima forém verdadeira . 
     }
    break;
    case 3://case 1 será responsável pela compração dos valores do atributo Pib  .
       menu_atributos = resultado_pib ;/* se no menu for selecionado a opção área a variavel menu_atributo 
    receberar o valor da variável Resultado_pib*/
       printf("\n#### Carta 1 - %s (%s) : %.2f  ####", nome_cidade1 , codigo_carta1,pib1); //especificação das cartas junto com o atributo escolhido
    printf("\n#### Carta 2 - %s (%s) : %.2f  ####", nome_cidade2 , codigo_carta2,pib2);//especificação das cartas junto com o atributo escolhido

     if (resultado_area = pib1 > pib2) {/*Comando if irá comprar se a variável pib de uma carta é 
      maior  que a outra */
            printf("\n PARABÉNS %s Venceu! \n ", nome_cidade1);//ação tomada se caso a condição for verdadeira.
     } else if(resultado_pib = pib1 < pib2){
        printf("\n PARABÉNS %s VENCEU! \n ", nome_cidade2);// ação tomada para a condição else if 
     } else {
        printf("\nEmpatou !!\n");// Ação tomada caso nenhuma das conições acima forém verdadeira . 
     }
    break;
    case 4://case 1 será responsável pela compração dos valores do atributo  pontos turisticos  .
       menu_atributos = resultado_turisticos ;/* se no menu for selecionado a opção área a variavel menu_atributo 
    receberar o valor da variável Resultado_turisticos*/
       printf("\n#### Carta 1 - %s (%s) : %d  ####", nome_cidade1 , codigo_carta1,pontos_turisticos1); //especificação das cartas junto com o atributo escolhido
    printf("\n#### Carta 2 - %s (%s) : %d  ####", nome_cidade2 , codigo_carta2,pontos_turisticos2);//especificação das cartas junto com o atributo escolhido

     if (resultado_turisticos = pontos_turisticos1 > pontos_turisticos2) {/*Comando if irá comprar se a variável pontos turisticos de uma carta é 
      maior  que a outra */
            printf("\n PARABÉNS %s Venceu! \n ", nome_cidade1);//ação tomada se caso a condição for verdadeira.
     } else if(resultado_turisticos = pontos_turisticos1 < pontos_turisticos2){
        printf("\n PARABÉNS %s VENCEU! \n ", nome_cidade2);// ação tomada para a condição else if 
     } else {
        printf("\nEmpatou !!\n");// Ação tomada caso nenhuma das conições acima forém verdadeira . 
    break;
    case 5://case 1 será responsável pela compração dos valores do atributo  densidade populacional  .
       menu_atributos = resultado_densi ;/* se no menu for selecionado a opção área a variavel menu_atributo 
    receberar o valor da variável Resultado_densi*/
       printf("\n#### Carta 1 - %s (%s) : %.2f  ####", nome_cidade1 , codigo_carta1,densi_popula1); //especificação das cartas junto com o atributo escolhido
    printf("\n#### Carta 2 - %s (%s) : %.2f  ####", nome_cidade2 , codigo_carta2,densi_popula2);//especificação das cartas junto com o atributo escolhido

     if (resultado_densi = densi_popula1 < densi_popula2) {/*Comando if irá comprar se a variável  densidade populacional de uma carta é 
      maior  que a outra */
            printf("\n PARABÉNS %s Venceu! \n ", nome_cidade1);//ação tomada se caso a condição for verdadeira.
     } else if(resultado_densi = densi_popula1 > densi_popula2){
        printf("\n PARABÉNS %s VENCEU! \n ", nome_cidade2);// ação tomada para a condição else if 
     } else {
        printf("\nEmpatou !!\n");// Ação tomada caso nenhuma das conições acima forém verdadeira . 
    break;
     
     default:
     printf("Opção Inválida.");
        break;
     }
    }
    
}
    
}


