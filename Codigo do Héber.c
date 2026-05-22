#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Função entrada() para ler e validar a escolha do usuário entre começar o quiz (1) ou sair (0). A função fica em loop até receber uma entrada válida, garantindo que o usuário digite apenas 1 ou 0.
int entrada()
{
    int entrada;
    do
    {
        if (scanf("%d", &entrada) != 1) // Verifica se o scanf conseguiu ler um inteiro; se falhar (letra/símbolo), entra no if
        {
            // Isso evita que o lixo fique "preso" e cause loop infinito
            while (getchar() != '\n')
                ;
            entrada = -1; // Valor inválido para forçar o loop a repetir
        }
        else
        {
            // Leitura bem-sucedida, mas o '\n' ainda fica no buffer
            // Limpamos aqui para não atrapalhar o próximo scanf
            while (getchar() != '\n')
                ;
        }
        // Verifica se o número está fora do intervalo permitido
        if (entrada > 1 || entrada < 0) // Repete enquanto inválido
        {
            printf("Invalido! Digite 1 ou 0 \n"); // Retorna para que o usuario digite 1 ou 0.
        }

    } while (entrada > 1 || entrada < 0); // A condição de repetição é verdadeira enquanto a entrada for maior que 1 ou menor que 0, ou seja, enquanto for diferente de 1 ou 0.

    return entrada;
}
int lerResposta() // FUNÇÃO lerResposta(), responsável por ler e VALIDAR a resposta do usuário (1 a 5) fica em loop até receber uma entrada válida.
{
    int resposta;
    do
    {
        printf("Digite sua resposta (1-5): ");
        // Tenta ler um inteiro; se falhar (letra/símbolo), entra no if
        if (scanf("%d", &resposta) != 1)
        {
            // Isso evita que o lixo fique "preso" e cause loop infinito
            while (getchar() != '\n')
                ;
            resposta = 6; // Valor inválido para forçar o loop a repetir
        }
        else
        {
            // Leitura bem-sucedida, mas o '\n' ainda fica no buffer
            // Limpamos aqui para não atrapalhar o próximo scanf
            while (getchar() != '\n')
                ;
        }
        // Verifica se o número está fora do intervalo permitido
        if (resposta < 1 || resposta > 5) // Repete enquanto inválido
        {
            printf("Invalido! Digite um numero entre 1 e 5.\n"); // Retorna o valor garantidamente entre 1 e 5
        }

    } while (resposta < 1 || resposta > 5);

    return resposta;
}
int main()
{
    // Héber Ebenezer Cardoso Silva
    // Primeiro periodo de Ciencia da Computação
    int num, pontos = 0; // Variável para armazenar a resposta do usuário e a pontuação é o %d
    char nome[50];       // Variável para armazenar o nome do usuário é o %s
    do
    {
        printf("============================== Bem vindo ao melhor quiz de ball knower do mundo ============================== \n"); // Menu do jogador
        printf("|  Como funciona o quiz:                                                                                     | \n"); // Explicação de como o quiz funciona para o usuário
        printf("| 1. O quiz consiste em 10 perguntas sobre futebol.                                                          |\n");
        printf("| 2. Cada pergunta tem 5 opcoes de resposta, mas apenas uma eh correta.                                      |\n");
        printf("| 3. Para cada resposta correta, voce ganhara 1 ponto.                                                       | \n");
        printf("| 4. No final do quiz, seu total de pontos sera exibido.                                                     |\n");
        printf("============================================================================================================== \n");
        printf("Digite seu nome para comecar o quiz: "); // Solicita o nome do usuário para personalizar a experiência do quiz
        scanf("%[^\n]s", nome);
        system("cls || clear"); // Limpa a tela para uma melhor experiencia do usuario
        printf("=============================================================================================================== \n");
        printf("  Prazer em lhe conhecer, %s! Vamos comecar o quiz.                                                            \n", nome);
        printf("| #                                         Como funciona o quiz?                                              |\n");
        printf("| 1. O quiz consiste em 10 perguntas sobre futebol.                                                            |\n");
        printf("| 2. Cada pergunta tem 5 opcoes de resposta, mas apenas uma eh correta.                                        |\n");
        printf("| 3. Para cada resposta correta, voce ganhara 1 ponto.                                                         |\n");
        printf("| 4. No final do quiz, seu total de pontos sera exibido.                                                       |\n");
        printf("================================================================================================================ \n");
        printf("Escreva 1 para comecar o quiz ou 0 para sair: ");
        num = entrada(); // Chama a função entrada() para ler e validar a escolha do usuário entre começar o quiz (1) ou sair (0)
        system("cls || clear");   // Limpa a tela para uma melhor experiencia do usuario
        if (num == 1)
        {
            printf("otimo! Vamos comecar o quiz, %s! \n", nome);
        }
        else
        {
            printf("Saindo... \n");
            return 0; // Encerra o programa se o usuário escolher sair
        }
        printf("Vamos comecar, %s! Primeira pergunta: \n", nome);
        printf("Qual pais venceu a Copa do Mundo de 2018? \n 1) Brasil \n 2) Alemanha \n 3) Argentina \n 4) Franca \n 5) Croacia \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 4) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta errada. O campeao foi a Franca. \n");
        }
        printf("Qual jogador eh conhecido como 'Robo'? \n 1) Neymar \n 2) Ronaldinho \n 3) Ronaldo Fenomeno \n 4) Messi \n 5) Cristiano Ronaldo \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 5) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 5) Cristiano Ronaldo. \n");
        }
        printf("Qual eh o nome do jogador conhecido como 'O Rei do Futebol'? \n 1) Pele \n 2) Diego Maradona \n 3) Lionel Messi \n 4) Cristiano Ronaldo \n 5) Neymar \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. O unico rei do futebol eh o Pele. \n");
        }
        system("cls || clear");
        printf("Qual selecao venceu a Copa do Mundo de 2002? \n 1) Alemanha \n 2) Argentina \n 3) Brasil \n 4) Franca \n 5) Italia \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 3) // Opção correta
        {
            printf("Resposta correta! A selecao vencedora da Copa do Mundo de 2002 foi o Brasil. \n");
        }
        else // Opção incorreta
        {
            printf("Resposta errada! O Brasil foi penta em 2002 com dois gols do fenomeno na final em cima da alemanha. \n");
        }
        printf("Qual jogador eh conhecido como 'ET'? \n 1) Neymar \n 2) Ronaldinho \n 3) Ronaldo Fenomeno \n 4) Messi \n 5) Kaka \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 4) // Opção correta
        {
            printf("Resposta correta! voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta é a opcao 4) Messi. \n");
        }
        printf("ONDE aconteceu a Copa do Mundo de 2014? \n 1) Brasil \n 2) Russia \n 3) Qatar \n 4) Alemanha \n 5) Espanha \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 1) Brasil. \n");
        }
        printf("Qual clube brasileiro tem mais titulos de Libertadores? \n 1) Flamengo \n 2) Santos \n 3) Sao Paulo \n 4) Palmeiras \n 5) Gremio \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 1) Flamengo. \n");
        }
        printf("Quem ganhou a Copa do Mundo de 2022? \n 1) Brasil \n 2) Franca \n 3) Argentina \n 4) Croacia \n 5) Inglaterra \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 3) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 3) Argentina. \n");
        }
        printf("Qual jogador possui mais bolas de ouro? \n 1) Cristiano Ronaldo \n 2) Pele \n 3) Neymar \n 4) Messi \n 5) Ronaldinho \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 4) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 4) Messi. \n");
        }
        printf("Qual desses clubes eh da Inglaterra? \n 1) Barcelona \n 2) Juventus \n 3) Manchester City \n 4) Bayern de Munique \n 5) PSG \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 3) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 3) Manchester City. \n");
        }
        printf("Quem eh conhecido como Bruxo no futebol? \n 1) Ronaldo \n 2) Ronaldinho Gaucho \n 3) Rivaldo \n 4) Neymar \n 5) Romario \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 2)
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 2) Ronaldinho Gaucho. \n");
        }
        if (pontos == 10) // Se  o usuario tiver acertado as 10 questões ele receberá está mensagem.
        {
            printf("O que temos aqui!? Um verdadeiro ball knower parabens, %s! sua pontuacao foi de %d pontos. \n", nome, pontos);
        }
        else if (pontos < 10 && pontos >= 7) // Se  o usuario tiver acertado menor que 10 e maior ou igua a   mais questões ele receberá está mensagem.
        {
            printf("Parabens, %s! Voce eh um entendido medio de futebol! Sua pontuacao final eh: %d pontos. \n", nome, pontos);
        }
        else if (pontos >= 4) // Se  o usuario tiver acertado menor ou igual a 4 questões ele receberá está mensagem.
        {
            printf("Rapaz %s ta hora de se atualizar um pouquinho rs. Sua pontuacao final eh: %d pontos. \n", nome, pontos);
        }
        else // Se  o usuario tiver acertado as 10 questões ele receberá está mensagem.
        {
            printf("Eguas, %s! Ta na hora de trocar de esporte, por que esse aqui nao deu pra tu nao oh. Precisa nem dizer que tua pontuacao foi %d pontos. \n", nome, pontos);
        }
        pontos = 0; // Reseta a pontuação para a próxima fase do quiz
        printf("===================================================================================== \n");
        printf("Vamos comecar a parte dificil do quiz, %s! \n", nome); // começo de uma nova fase do quiz com perguntas mais difíceis.
        printf("Qual primeiro selecao a ganhar a Copa do Mundo? \n 1) Brasil \n 2) Alemanha \n 3) Italia \n 4) Uruguai \n 5) Argentina \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 4) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 4) Uruguai. \n");
        }
        printf("Qual eh o maior algoz do Brasil em Copas do Mundo? \n 1) Alemanha \n 2) Argentina \n 3) Franca \n 4) Italia \n 5) Inglaterra \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 3) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 3) Franca. \n");
        }
        printf("Qual eh o jogador com mais gols em uma unica Copa do Mundo? \n 1) Ronaldo \n 2) Just Fontaine \n 3) Gerd Muller \n 4) Miroslav Klose \n 5) Pele \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 2) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 2) Just Fontaine com 13 gols. \n");
        }
        printf("Quem eh o maior artilheiro da Champions League de todos os tempos? \n 1) Cristiano Ronaldo \n 2) Lionel Messi \n 3) Raul \n 4) Robert Lewandowski \n 5) Karim Benzema \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 1) Cristiano Ronaldo com 140 gols. \n");
        }
        printf("Qual jogador tem mais gols em uma unica edicao da Champions League? \n 1) Cristiano Ronaldo \n 2) Lionel Messi \n 3) Robert Lewandowski \n 4) Karim Benzema \n 5) Raul \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 1) Cristiano Ronaldo com 17 gols. \n");
        }
        printf("Qual clube tem mais titulos do Campeonato Brasileiro? \n 1) Flamengo \n 2) Palmeiras \n 3) Santos \n 4) Sao Paulo \n 5) Corinthians \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 2) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 2) Palmeiras com 12 titulos. \n");
        }
        printf("Qual jogador com mais assistencias em uma unica edicao de champions league? \n 1) Lionel Messi \n 2) Cristiano Ronaldo \n 3) Neymar \n 4) Robert Lewandowski \n 5) Karim Benzema \n");
        num = lerResposta();
        system("cls || clear");
        if (num == 3) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 3) Neymar com 8 assistencias. \n");
        }
        printf("Qual o maior 'garcom' da historia da champions league? \n 1) Lionel Messi \n 2) Cristiano Ronaldo \n 3) Neymar \n 4) Robert Lewandowski \n 5) Karim Benzema \n");

        num = lerResposta();
        system("cls || clear");
        if (num == 2) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta incorreta. A resposta correta eh a opcao 1) Cristiano Ronaldo com 42 assistencias. \n");
        }
        printf("Quais foram os principais titulos coletivos e premios individuais de Messi em 2012? \n 1) Bola de Ouro 2012, Artilheiro da Champions League, Artilheiro da La Liga, Copa do Rei, Supercopa da Espanha e Mundial de Clubes da FIFA \n 2) Bola de Ouro 2012, Melhor Jogador da Copa, Premier League, Champions League e Mundial de Clubes pelo PSG \n 3) Chuteira de Ouro, Libertadores, Copa America 2012 e Campeonato Italiano \n 4) Melhor Jogador da UEFA, Copa da Alemanha, Ligue 1 e Eurocopa \n 5) Bola de Ouro 2012, Premier League, Copa da Inglaterra e Supercopa da UEFA pelo Manchester City \n");

        num = lerResposta();
        system("cls || clear");

        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta errada! Messi venceu a Bola de Ouro 2012 e conquistou titulos importantes pelo Barcelona. \n");
        }
        printf("Quais foram os principais titulos coletivos e premios individuais de Cristiano Ronaldo em 2008? \n 1) Bola de Ouro 2008, Chuteira de Ouro Europeia, Champions League, Premier League e Mundial de Clubes da FIFA \n 2) Bola de Ouro 2008, Copa America, Libertadores e Campeonato Italiano \n 3) Melhor Jogador da Copa do Mundo, La Liga, Champions League e Eurocopa \n 4) Chuteira de Ouro, Ligue 1, Copa da Franca e Mundial pelo PSG \n 5) Bola de Ouro 2008, Bundesliga, Copa da Alemanha e Supercopa da UEFA pelo Bayern de Munique \n");

        num = lerResposta();
        system("cls || clear");

        if (num == 1) // Opção correta
        {
            printf("Resposta correta! Voce ganhou 1 ponto. \n");
            pontos++;
        }
        else // Opção incorreta
        {
            printf("Resposta errada! Cristiano Ronaldo teve o maior auge da historia da humanidade em 2008 pelo Manchester United \n");
        }
        printf("===================================================================================== \n");
        if (num == 10) // Se o usuário acertar todas as perguntas, ele receberá uma mensagem de parabéns especial.
        {
            printf("Increvel, %s! Voce eh um verdadeiro ball knower! Sua pontuacao final eh de %d pontos. Parabéns! \n", nome, pontos);
        }
        else if (pontos >= 7) // Se o usuário acertar 7 ou mais perguntas, ele receberá uma mensagem de parabéns.
        {
            printf("Parabens, %s! Voce eh um verdadeiro entendedor de futebol! Sua pontuacao final eh de %d pontos. \n", nome, pontos);
        }
        else if (pontos >= 4) // Se o usuário acertar entre 4 e 6 perguntas, ele receberá uma mensagem de incentivo para melhorar seus conhecimentos.
        {
            printf("Bom trabalho, %s! voce tem na media. Sua pontuacao final eh de %d pontos. \n", nome, pontos);
        }
        else if (pontos >= 1) // Se o usuário acertar menos de 4 perguntas1, ele receberá uma mensagem de incentivo para estudar mais sobre futebol.
        {
            printf("Pelo menos voce conseguiu chegar ate aqui, %s. Sua pontuacao final eh de %d pontos. \n", nome, pontos);
        }
        else // Se o usuário não acertar nenhuma pergunta, ele receberá uma mensagem de incentivo para estudar mais sobre futebol.
        {
            printf("Eguas, %s! Ta na hora de trocar de esporte, por que esse aqui nao deu pra tu nao oh. Precisa nem dizer que tua pontuacao foi %d pontos. \n", nome, pontos);
        }
        printf("Obrigado por jogar o quiz, %s! Ate a proxima! \n", nome);
        printf("Se quiser jogar novamente, basta apertar 1 para sim ou 0 para nao. \n");
        num = entrada();
        if (num == 1)
        {
            system("cls || clear");
            main(); // Reinicia o quiz chamando a função main novamente
        }
        else
        {
            printf("Saindo... \n"); // Encerra o programa se o usuário escolher sair
            system("exit");
        }
    } while (num != 0);
    return 0;
}