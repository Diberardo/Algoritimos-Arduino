// Sinaxe e Estrutura de Condição no Arduino;
int contador = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    contador++;
    Serial.println(contador);
    if (contador == 10)
        Serial.println("Chegamos em 10");
    delay(500);
}

Serial.println("----------------------------------------------------------------------------------------");

void loop()
{
    contador++;
    Serial.println(contador);
    if (contador == 10)
    {
        Serial.println("Chegamos em 10");
    }
    else
    {
        Serial.println("...");
    }
    delay(500);
}

Serial.println("----------------------------------------------------------------------------------------");

int cor = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    // Semáforo LED
    cor++;
    if (cor == 1) // Se for verdadeiro faz essa condição, senao passa pra proxima;
    {
        Serial.println("Verde"); // execulta esse comando
    }
    if (cor == 2)
    {
        Serial.println("Amarelo");
    }
    if (cor == 3)
    {
        Serial.println("Vermelho");
        cor = 0;
    }
    delay(1000);
}

Serial.println("----------------------------------------------------------------------------------------");

int cor = 0;
void setup()
{
    Serial.begin(9600);
    // ativa sinal para o led verde
    // ativa sinal para o led amarelo
    // ativa sinal para o led vermelho
}
void loop()
{
    cor++;
    if (cor == 1)
    {
        Serial.println("Verde");
        // desliga led vermelho
        // liga led verde
    }
    if (cor == 2)
    {
        Serial.println("Amarelo");
        // desliga led verde
        // liga led amarelo
    }
    if (cor == 3)
    {
        Serial.println("Vermelho");
        cor = 0;
        // desliga led amarelo
        // liga led vermelho
    }
    delay(1000);
}

Serial.println("----------------------------------------------------------------------------------------");

int cor = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    cor++;
    switch (cor) // Melhor metodo, do que usar if else encadeado;
    {
    case 1:
        Serial.println("Verde");
        break;
    case 2:
        Serial.println("Amarelo");
        break;
    case 3:
        Serial.println("Vermelho");
        cor = 0;
        break;
    }
    delay(1000);
}

Serial.println("----------------------------------------------------------------------------------------");

// Utilizando o Comando While
int contador = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Iniciando a contagem While");
    while (contador <= 10)
    {
        Serial.println("Contador:" + String(contador));
        contador++;
        delay(500);
    }
    contador = 1;
    delay(500);
}

Serial.println("----------------------------------------------------------------------------------------");

int cont_while = 1;
int cont_loop = 1;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Contador loop(): " + String(cont_loop));
    while (cont_while <= 10)
    {
        Serial.println("Contador while: " + String(cont_while));
        cont_while++;
        delay(500);
    }
    cont_loop++;
    cont_while = 1;
    delay(500);
}

Serial.println("----------------------------------------------------------------------------------------");

int controle = 1;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Contando:");
    while (true)
    {
        Serial.println(String(controle));
        controle++;
        if (controle > 10)
        {
            break; // Ele sai de uma estrutura, nao do programa em si;
        }
        delay(500);
    }
    controle = 0;
}

Serial.println("----------------------------------------------------------------------------------------");

int contador = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Iniciando a contagem While");
    do // Verificação de teste, faz, enquanto isso for verdadeiro;
    {
        Serial.println("Contador:" + String(contador));
        contador++;
        delay(500);
    } while (contador <= 10);
    contador = 1;
    delay(500);
}

Serial.println("----------------------------------------------------------------------------------------");

// é quase mesma coisa do while, com estrutura mais controlada;
// somando até 10
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Iniciando a contagem For()");
    for (int x = 1; x <= 10; x++)
    {
        Serial.println("Contador:" + String(x));
        delay(500);
    }
}

Serial.println("----------------------------------------------------------------------------------------");

// Começando com 10 diminuindo ate 1;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println("Iniciando a contagem For()");
    for (int x = 10; x >= 1; x--)
    {
        Serial.println("Contador:" + String(x));
        delay(500);
    }
}

Serial.println("----------------------------------------------------------------------------------------");

int pisca = 1;
void setup()
{
    Serial.begin(9600);
    // ativa sinal para o led
}
void loop()
{
    while (pisca <= 10)
    {
        Serial.println("Pisca:" + String(pisca));
        pisca++;
        // liga led
        delay(500);
        // desliga led
        delay(500);
    }
    Serial.println("Fim do Pisca, mas ainda estamos em loop.");
}

Serial.println("----------------------------------------------------------------------------------------"); // Ultilizando as duas maneiras de repetição;

int pisca = 1;
void setup()
{
    Serial.begin(9600);
    // ativa sinal para o led
}
void loop()
{
    for (pisca; pisca <= 10; pisca++)
    {
        Serial.println("Pisca:" + String(pisca));
        // liga led
        delay(500);
        // desliga led
        delay(500);
    }
    Serial.println("Fim do Pisca, mas ainda estamos em loop.");
}

Serial.println("----------------------------------------------------------------------------------------");

void setup()
{
    Serial.begin(9600);
}
void loop()
{
    for (int contador = 0; contador <= 100; contador++)
    {
        if (contador > 40 && contador < 60) // Da pra ultilizar condição dentro laço de repetição;
        {
            Serial.println("Pulando uma faixa");
            continue;
        }
        Serial.println(contador);
        delay(5);
    }
}

Serial.println("----------------------------------------------------------------------------------------");

int contador = 1;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
contar:
    Serial.println(contador);
    delay(50);
    contador++;
    if (contador == 100)
        goto fim;
    goto contar; // Ultilizando a função goto;
fim:
    Serial.println("Fim");
    contador = 0;
    goto contar;
}

Serial.println("----------------------------------------------------------------------------------------");

// Ultilizando funçao no programa;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    numero(10, 20);
}
void numero(int x, int y)
{
    int resp = x + y;
    Serial.println(String(resp));
}

Serial.println("----------------------------------------------------------------------------------------");

void setup()
{
    Serial.begin(9600);
}
void loop()
{
    Serial.println(String(numero(10, 20)));
}
int numero(int x, int y)
{
    int resp = x + y;
    return resp;
}

Serial.println("----------------------------------------------------------------------------------------");

// Utilizando a entrada de dados fornecido pelo usuario;
byte caracter;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    if (Serial.available())
    {
        caracter = Serial.read();
        Serial.write(caracter);
    }
}

Serial.println("----------------------------------------------------------------------------------------");

int op;
void setup()
{
    Serial.begin(9600);
    Serial.println("Digite: 1, 2 ou 3.");
}
void loop()
{
    if (Serial.available())
    {
        op = Serial.read();
        if (op == 49)
        {
            Serial.println("LED Um");
        }
        else if (op == 50)
        {
            Serial.println("LED Dois");
        }
        else if (op == 51)
        {
            Serial.println("LED Três");
        }
    }
}

Serial.println("----------------------------------------------------------------------------------------");