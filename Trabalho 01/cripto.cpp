#include "cripto.h"

using namespace std;
unsigned long long Codificar(unsigned int a)
{
    unsigned long long temp = 0;
    unsigned int bit32 = a;
    unsigned int aleatorios = 3, aleatorio_1 = 0, aleatorio_2 = 0, aleatorio_3 = 0, aleatorio_4 = 0, aleatorio_5 = 0, aleatorio_6 = 0;
    bool maskara;
    random_device rd;
    mt19937 mt(rd());//gera��o de n�mero aleat�rio entre ( 0 a 31 )
    uniform_int_distribution<int> dist(1, 31);

    aleatorio_1 = dist(mt);// insere um numero aleatorio referente a posi��o em uma vari�vel e faz o teste, caso esteja ligado ser� desligado e caso esteja ligado ser� desligado 
    maskara = TestarBit(bit32, aleatorio_1);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_1);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_1);
    };

    aleatorio_2 = dist(mt);;// insere um numero aleatorio referente a posi��o em uma vari�vel e faz o teste, caso esteja ligado ser� desligado e caso esteja ligado ser� desligado
    maskara = TestarBit(bit32, aleatorio_2);

    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_2);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_2);
    };
    // insere um numero aleatorio referente a posi��o em uma vari�vel e faz o teste, caso esteja ligado ser� desligado e caso esteja ligado ser� desligado
    aleatorio_3 = dist(mt);;
    maskara = TestarBit(bit32, aleatorio_3);

    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_3);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_3);
    };
    // insere um numero aleatorio referente a posi��o em uma vari�vel e faz o teste, caso esteja ligado ser� desligado e caso esteja ligado ser� desligado
    aleatorio_4 = dist(mt);;
    maskara = TestarBit(bit32, aleatorio_4);

    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_4);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_4);
    };
    // insere um numero aleatorio referente a posi��o em uma vari�vel e faz o teste, caso esteja ligado ser� desligado e caso esteja ligado ser� desligado
    aleatorio_5 = dist(mt);;
    maskara = TestarBit(bit32, aleatorio_5);

    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_5);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_5);
    };
    // insere um numero aleatorio referente a posi��o em uma vari�vel e faz o teste, caso esteja ligado ser� desligado e caso esteja ligado ser� desligado
    aleatorio_6 = dist(mt);;
    maskara = TestarBit(bit32, aleatorio_6);

    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_6);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_6);
    }
    //Inseri os valores em uma vari�vel 64 bits come�ndo pelo valor criptografado e depois as localiza��es dos bits alterados
    temp = temp | (unsigned long long)(bit32) << 32;
    temp = temp | (unsigned long long)(aleatorio_1) << 27;
    temp = temp | (unsigned long long)(aleatorio_2) << 22;
    temp = temp | (unsigned long long)(aleatorio_3) << 17;
    temp = temp | ((unsigned long long)(aleatorio_4)) << 12;
    temp = temp | ((unsigned long long)(aleatorio_5)) << 7;
    temp = temp | ((unsigned long long)(aleatorio_6)) << 2;
    return temp;
}
unsigned int Decodificar(unsigned long long a)
{
    unsigned int aleatorios = 0, aleatorio_1 = 0, aleatorio_2 = 0, aleatorio_3 = 0, aleatorio_4 = 0, aleatorio_5 = 0, aleatorio_6 = 0;
    unsigned long long bit32 = 0;
    bool maskara;
    aleatorios = a;
// atribuindo as posi��es alteradas dos bits a vari�veis
    aleatorio_1 = aleatorios; (aleatorio_1 = (aleatorio_1 >> 27));
    aleatorio_2 = aleatorios << 5; aleatorio_2 = aleatorio_2 >> 27;
    aleatorio_3 = (aleatorios << 10); (aleatorio_3 = (aleatorio_3 >> 27));
    aleatorio_4 = (aleatorios << 15); (aleatorio_4 = (aleatorio_4 >> 27));
    aleatorio_5 = (aleatorios << 20); (aleatorio_5 = (aleatorio_5 >> 27));
    aleatorio_6 = (aleatorios << 25); aleatorio_6 = aleatorio_6 >> 27;
    bit32 = (a >> 32);
    // testa o bit da pisi��o aleatoria devolvida e caso o bit esteja ligado ser� desligado e caso esteja desligado ser� ligado
    maskara = TestarBit(bit32, aleatorio_1);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_1);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_1);
    };
    // testa o bit da pisi��o aleatoria devolvida e caso o bit esteja ligado ser� desligado e caso esteja desligado ser� ligado
    maskara = TestarBit(bit32, aleatorio_2);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_2);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_2);
    }
// testa o bit da pisi��o aleatoria devolvida e caso o bit esteja ligado ser� desligado e caso esteja desligado ser� ligado
    maskara = TestarBit(bit32, aleatorio_3);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_3);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_3);
    }
    // testa o bit da pisi��o aleatoria devolvida e caso o bit esteja ligado ser� desligado e caso esteja desligado ser� ligado
    maskara = TestarBit(bit32, aleatorio_4);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_4);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_4);
    }
    // testa o bit da pisi��o aleatoria devolvida e caso o bit esteja ligado ser� desligado e caso esteja desligado ser� ligado
    maskara = TestarBit(bit32, aleatorio_5);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_5);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_5);
    }
    // testa o bit da pisi��o aleatoria devolvida e caso o bit esteja ligado ser� desligado e caso esteja desligado ser� ligado
    maskara = TestarBit(bit32, aleatorio_6);
    if (maskara == true)
    {
        bit32 = DesligarBit(bit32, aleatorio_6);
    }
    else
    {
        bit32 = LigarBit(bit32, aleatorio_6);
    }

    return bit32;
}
// recebe um valor e uma posi��o e liga o bit dessa posi��o
unsigned int LigarBit(unsigned int a, int c)
{
    unsigned int mascara = 1 << c;

    unsigned int estado = a;
    estado = estado | mascara;
    return estado;
}// recebe um valor e uma posi��o e desliga o bit dessa posi��o
unsigned int DesligarBit(unsigned int a, int c)
{
    unsigned int mascara = ~(1 << c);

    unsigned int estado = a;
    estado = estado & mascara;
    return estado;
}

//verifica o bit da posi��o e devolve se ele est� ligado ou desligado
bool TestarBit(unsigned int a, int c)
{
    bool controle;
    unsigned int mascara = (1 << c);

    unsigned int estado = a;
    if (estado & mascara)
        controle = true;
    else
        controle = false;

    return controle;
}
// devolve o o valor aleatorio armazenado em 5 bits no vetor de 64 bits 
unsigned int aleatorio6(unsigned long long a)
{
    unsigned int b = a;
    b = (b >> 27);
    return b;
}
// devolve o o valor aleatorio armazenado em 5 bits no vetor de 64 bits 
unsigned int aleatorio5(unsigned long long a)
{
    unsigned int b = a;
    b = (b << 5);
    b = (b >> 27);
    return b;
}
// devolve o o valor aleatorio armazenado em 5 bits no vetor de 64 bits 
unsigned int aleatorio4(unsigned long long a)
{
    unsigned int b = a;
    b = (b << 10);
    b = (b >> 27);
    return b;
}
// devolve o o valor aleatorio armazenado em 5 bits no vetor de 64 bits 
unsigned int aleatorio3(unsigned long long a)
{
    unsigned int b = a;
    b = (b << 15);
    b = (b >> 27);
    return b;
}
// devolve o o valor aleatorio armazenado em 5 bits no vetor de 64 bits 
unsigned int aleatorio2(unsigned long long a)
{
    unsigned int b = a;
    b = (b << 20);
    b = (b >> 27);
    return b;
}
// devolve o o valor aleatorio armazenado em 5 bits no vetor de 64 bits 
unsigned int aleatorio1(unsigned long long a)
{
    unsigned int b = a;
    b = (b << 25);
    b = (b >> 27);

    return b;
}