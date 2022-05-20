//Paulo Roberto Fernandes Holanda
enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };
union jogador
{
	char nome[25];
	int numero;
};
struct gol
{
	jogador jog; // identificação do jogador
	float x, y, z; // posição da bola nas coordenadas
	trave local; // onde a bola entrou
	float velo; // velocidade da bola
	float acel; // aceleração da bola
}; 
int main() {
	gol estatistica[10]; // estatísticas para até 10 gols
	estatistica; // vetor gol[10]
	estatistica[4]; // gol
	estatistica[1].jog; //jogador
	estatistica->jog.numero; // int
	(estatistica + 9)->local;//trave mas não há enumeração definida
	estatistica[2].velo;//float
	(estatistica + 1)->jog.nome[0]; //char
	estatistica[6].acel;// float
}