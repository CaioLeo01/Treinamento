


/*fazer o alfabeto em mais de uma língua e apresentar os dados de quantas letras têm e uma palavra para cada letra*/


#include <stdio.h>

int main(){

char alfabeto, lingua, por, porM, ing, inG;
por == 'p';
porM =='P';
ing == 'i';
inG == 'I';
printf("Qual lingua que o alfabeto?\nWhat language what the alphabet\n");
printf("para portugues digite a letra 'P'\n");
printf("Para ingles digite a letra 'i'\n");
printf("for Portuguese type the letter 'p'\nFor English type the letter 'i'\n");
scanf("%c", &lingua);
fflush(stdin);
 


printf("Digite uma letra do alfabeto e recebera uma palavra com essa letra\n");
scanf("%c", &alfabeto);

if(lingua == por || lingua == porM)


switch(alfabeto){

case 'a': printf("abelha");break;
case 'b': printf("bola");break;
case 'c': printf("casa");break;
case 'd': printf("dado");break;
case 'e': printf("escola");break;
case 'f': printf("faca");break;
case 'g': printf("gato");break;
case 'h': printf("helicóptero");break;
case 'i': printf("igreja");break;
case 'j': printf("jacaré");break;
case 'k': printf("kiwi");break;
case 'l': printf("Lacoste");break;
case 'm': printf("macaco");break;
case 'n': printf("navio");break;
case 'o': printf("ovo");break;
case 'p': printf("pato");break;
case 'q': printf("queijo");break;
case 'r': printf("rato");break;
case 's': printf("sapo");break;
case 't': printf("tatu");break;
case 'u': printf("uva");break;
case 'v': printf("vaca");break;
case 'w': printf("William");break;
case 'x': printf("xícara");break;
case 'y': printf("Yakult");break;
case 'z': printf("zebra");break;
default:  printf("código inválido");break;
}
else if (lingua == ing || lingua == inG)
{
    printf("deu certo");
}

        


}










 


 