//Paulo Roberto Fernandes Holanda
enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };
union jogador
{
	char nome[25];
	int numero;
};
struct gol
{
	jogador jog; // identifica��o do jogador
	float x, y, z; // posi��o da bola nas coordenadas
	trave local; // onde a bola entrou
	float velo; // velocidade da bola
	float acel; // acelera��o da bola
}; 
int main() {
	gol estatistica[10]; // estat�sticas para at� 10 gols
	estatistica; // vetor gol[10]
	estatistica[4]; // gol
	estatistica[1].jog; //jogador
	estatistica->jog.numero; // int
	(estatistica + 9)->local;//trave mas n�o h� enumera��o definida
	estatistica[2].velo;//float
	(estatistica + 1)->jog.nome[0]; //char
	estatistica[6].acel;// float
}