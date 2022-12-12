#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#include <sys/types.h>
#include <arpa/inet.h>

//escolhas do sistema feitas pelo cliente
int menu(vetor);

// gera o complemento da entrada
int complemento(int n, int tamanho);

//faz a soma de checagem
int checksum(int portaorigem, int portadestino, int comprimento);


def cria_pacote_cliente(int portaorigem,int portadestino,int comprimento, int soma,int seq, int dado);

def cria_pacote_servidor(int portaorigem, int portadestino, int comprimento, int ack, int seq);
