// Batimentos cardíacos, morreu !!!!
int pino10 = 10;
int batimentos = 1;
void setup()
{
    // Ativando o pino
    pinMode(pino10, OUTPUT);
}
void loop()
{
    if (batimentos <= 5)
    {
        // Ativa o pino10
        digitalWrite(pino10, HIGH);
        delay(500);
        // Desativa o pino 10
        digitalWrite(pino10, LOW);
        delay(500);
        batimentos++;
    }
    else
    {
        // Ativa o pino 10 depois de 5 batimentos
        digitalWrite(pino10, HIGH);
    }
}

println("---------------------------------------------------------------------------------------------");

// Sistema de largada da Fórmula 01 – Versão 01.
void setup()
{
    // Ativando os pinos
    pinMode(10, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(6, OUTPUT);
}
void loop()
{
    digitalWrite(10, HIGH);
    delay(750);
    digitalWrite(8, HIGH);
    delay(750);
    digitalWrite(6, HIGH);
    delay(2000);
    // reset
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    // pausa para iniciar
    delay(1000);
}

println("---------------------------------------------------------------------------------------------");

// Sistema de largada da Fórmula 01 – Versão 02.
void setup()
{
    // Ativando os pinos
    pinMode(10, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(4, OUTPUT);
}
void loop()
{
    digitalWrite(10, HIGH);
    digitalWrite(4, HIGH);
    // pisca do LED
    delay(200);
    digitalWrite(4, LOW);
    delay(750);
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
    // pisca do LED
    delay(200);
    digitalWrite(4, LOW);
    delay(750);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    // pisca do LED
    delay(200);
    digitalWrite(4, LOW);
    delay(2000);
    // reset
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    // pausa para iniciar
    delay(1000);
}
void setup()
{
    // Ativando os pinos
    pinMode(10, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(4, OUTPUT);
}
void loop()
{
    digitalWrite(10, HIGH);
    digitalWrite(4, HIGH);
    led();
    delay(750);
    digitalWrite(8, HIGH);
    led();
    delay(750);
    digitalWrite(6, HIGH);
    led();
    delay(2000);
    // reset
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    // pausa para iniciar
    delay(1000);
}
void led()
{
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
}

println("---------------------------------------------------------------------------------------------");

// Usando LED RGB.
void setup()
{
    // Ativando os pinos
    pinMode(10, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(6, OUTPUT);
}
void loop()
{
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
}

println("---------------------------------------------------------------------------------------------");

// Usando LED RGB com efeito.
void setup()
{
    // Ativando os pinos
    pinMode(10, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(6, OUTPUT);
}
void loop()
{
    digitalWrite(10, HIGH);
    delay(150);
    digitalWrite(6, LOW);
    delay(150);
    digitalWrite(8, HIGH);
    delay(150);
    digitalWrite(10, LOW);
    delay(150);
    digitalWrite(6, HIGH);
    delay(150);
    digitalWrite(8, LOW);
    delay(150);
}

println("---------------------------------------------------------------------------------------------");

// Usando um potenciômetro.
int valor;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    // faz a leitura do pino A0 ( 0-1023)
    valor = analogRead(A0);
    Serial.print("Valor = ");
    Serial.println(valor);
    delay(250);
}

println("---------------------------------------------------------------------------------------------");

// Usando um potenciômetro para acionar um LED.
int valor;
void setup()
{
    pinMode(6, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    valor = analogRead(A0);
    Serial.print("Valor = ");
    if (valor > 500)
    {
        digitalWrite(6, HIGH); // liga o LED com valores acima de 500
    }
    else
    {
        digitalWrite(6, LOW); // desliga o LED com valores abaixo de 500
    }
    Serial.println(valor);
    delay(250);
}

println("---------------------------------------------------------------------------------------------");

// Acionando 03 LEDs pela faixa de resposta do potenciômetro.
int valor;
void setup()
{
    pinMode(6, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
}
void loop()
{
    valor = analogRead(A0);
    if (valor < 300)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if (valor > 300 and valor < 900)
    {
        digitalWrite(6, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    if (valor > 900)
    {
        digitalWrite(6, LOW);
        digitalWrite(4, LOW);
        digitalWrite(2, HIGH);
    }
}
// ligar na sequência.
int valor;
void setup()
{
    pinMode(6, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
}
void loop()
{
    valor = analogRead(A0);
    if (valor < 300)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if (valor > 300 and valor < 900)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    if (valor > 900)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, HIGH);
    }
}
// todos os LEDs apagados.
int valor;
void setup()
{
    pinMode(6, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
}
void loop()
{
    valor = analogRead(A0);
    if (valor < 250)
    {
        digitalWrite(6, LOW);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if (valor > 250 and valor < 500)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if (valor > 500 and valor < 750)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    if (valor > 750)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, HIGH);
    }
}

println("---------------------------------------------------------------------------------------------");

// Acionando 03 LEDs pela faixa de resposta do potenciômetro, com um Buzzer no último LED.
int valor;
void setup()
{
    pinMode(8, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
}
void loop()
{
    valor = analogRead(A0);
    if (valor < 250)
    {
        digitalWrite(6, LOW);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
        digitalWrite(8, LOW);
    }
    if (valor > 250 and valor < 500)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
        digitalWrite(8, LOW);
    }
    if (valor > 500 and valor < 750)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(8, LOW);
    }
    if (valor > 750)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(8, HIGH);
    }
}

println("---------------------------------------------------------------------------------------------");

// Usando um potenciômetro para acionar um LED RGB.
int valor;
void setup()
{
    pinMode(6, OUTPUT); // Vermelho
    pinMode(4, OUTPUT); // Verde
    pinMode(2, OUTPUT); // Azul
}
void loop()
{
    valor = analogRead(A0);
    if (valor < 250)
    {
        digitalWrite(6, LOW);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if (valor > 250 and valor < 500)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if (valor > 500 and valor < 750)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    if (valor > 750)
    {
        digitalWrite(6, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(2, HIGH);
    }
}

println("---------------------------------------------------------------------------------------------");

// Usando um LDR.
int sensor = 0;
int valor = 0;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    int valor = analogRead(sensor);
    // verificar os valores de saída no Serial Monitor
    // Use uma lanterna (celular) para aumentar a luminosidade
    Serial.println(valor);
    delay(500);
}

println("---------------------------------------------------------------------------------------------");

// Usando um LDR com LED.
int sensor = 0;
int valor = 0;
void setup()
{
    pinMode(10, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    int valor = analogRead(sensor);
    Serial.println(valor);
    // o valor 500 deverá ser ajustado conforme ambiente de teste
    if (valor < 500)
    {
        digitalWrite(10, HIGH);
    }
    else
    {
        digitalWrite(10, LOW);
    }
    // altere o delay para leituras mais rápidas se necessário
    delay(500);
}

println("---------------------------------------------------------------------------------------------");

// Usando um LDR com LED e Buzzer pânico!
int sensor = 0;
int valor = 0;
void setup()
{
    pinMode(10, OUTPUT);
    pinMode(6, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    int valor = analogRead(sensor);
    Serial.println(valor);
    if (valor < 500)
    {
        digitalWrite(10, HIGH);
        digitalWrite(6, HIGH);
    }
    else
    {
        digitalWrite(10, LOW);
        digitalWrite(6, LOW);
    }
    delay(500);
}

println("---------------------------------------------------------------------------------------------");

// Música com Arduino - Buzzer
void setup()
{
    pinMode(10, OUTPUT);
}
void loop()
{
    delay(2000);
    tone(10, 262, 200); // DO
    delay(200);
    tone(10, 294, 300); // RE
    delay(200);
    tone(10, 330, 300); // MI
    delay(200);
    tone(10, 349, 300); // FA
    delay(300);
    tone(10, 392, 200); // SOL
    delay(200);
    tone(10, 440, 200); // LA
    delay(200);
    tone(10, 440, 200); // SI
    delay(200);
    noTone(10);
    delay(1000);
}
void setup()
{
    pinMode(10, OUTPUT);
}
void loop()
{
    delay(2000);
    tone(10, 262, 200); // DO
    delay(200);
    tone(10, 294, 300); // RE
    delay(200);
    tone(10, 330, 300); // MI
    delay(200);
    tone(10, 349, 300); // FA
    delay(300);
    tone(10, 349, 300); // FA
    delay(300);
    tone(10, 349, 300); // FA
    delay(300);
    tone(10, 262, 100); // DO
    delay(200);
    tone(10, 294, 300); // RE
    delay(200);
    tone(10, 262, 100); // DO
    delay(200);
    tone(10, 294, 300); // RE
    delay(300);
    tone(10, 294, 300); // RE
    delay(300);
    tone(10, 294, 300); // RE
    delay(300);
    tone(10, 262, 200); // DO
    delay(200);
    tone(10, 392, 200); // SOL
    delay(200);
    tone(10, 349, 200); // FA
    delay(200);
    tone(10, 330, 300); // MI
    delay(300);
    tone(10, 330, 300); // MI
    delay(300);
    tone(10, 330, 300); // MI
    delay(300);
    tone(10, 262, 200); // DO
    delay(200);
    tone(10, 294, 300); // RE
    delay(200);
    tone(10, 330, 300); // MI
    delay(200);
    tone(10, 349, 300); // FA
    delay(300);
    tone(10, 349, 300); // FA
    delay(300);
    tone(10, 349, 300); // FA
    delay(300);
}
// Sirene
int tempo = 10;
int frequencia = 0;
void setup()
{
    pinMode(10, OUTPUT); // Pino do buzzer
}
void loop()
{
    for (frequencia = 150; frequencia < 1800; frequencia += 1)
    {
        tone(10, frequencia, tempo);
        delay(1);
    }
    for (frequencia = 1800; frequencia > 150; frequencia -= 1)
    {
        tone(10, frequencia, tempo);
        delay(1);
    }
}

println("---------------------------------------------------------------------------------------------");

// Usando sensor ultrassônico HC-SR04.
#include <Ultrasonic.h>
// pino_trigger = 4
// pino_echo = 5
float centrimetro;
long leiturasensor;
Ultrasonic ultrasonic(4, 5);
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    // faz a leitura do sensor
    leiturasensor = ultrasonic.timing();
    // converte o valor lido em centímetro - CM
    centrimetro = ultrasonic.convert(leiturasensor, Ultrasonic::CM);
    Serial.print("Distancia em cm: ");
    Serial.println(centrimetro);
    delay(1000);
}

println("---------------------------------------------------------------------------------------------");

// Usando sensor ultrassônico HC-SR04, com limite sonoro de 5cm.
#include <Ultrasonic.h>
float centrimetro;
long leiturasensor;
Ultrasonic ultrasonic(4, 5);
void setup()
{
    Serial.begin(9600);
    pinMode(2, OUTPUT);
}
void loop()
{
    leiturasensor = ultrasonic.timing();
    centrimetro = ultrasonic.convert(leiturasensor, Ultrasonic::CM);
    Serial.print("Distancia em cm: ");
    Serial.println(centrimetro);
    if (centrimetro < 5)
    {
        tone(2, 400);
    }
    else
    {
        noTone(2);
    }
    delay(100); // ajuste o tempo de leitura
}

println("---------------------------------------------------------------------------------------------");

// Usando sensor ultrassônico HC-SR04, com limite sonoro e luminoso de 5cm.
#include <Ultrasonic.h>
float centrimetro;
long leiturasensor;
Ultrasonic ultrasonic(4, 5);
void setup()
{
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(8, OUTPUT);
}
void loop()
{
    leiturasensor = ultrasonic.timing();
    centrimetro = ultrasonic.convert(leiturasensor, Ultrasonic::CM);
    Serial.print("Distancia em cm: ");
    Serial.println(centrimetro);
    if (centrimetro < 5)
    {
        tone(2, 400);
        digitalWrite(8, HIGH);
    }
    else
    {
        noTone(2);
        digitalWrite(8, LOW);
    }
    delay(100);
}

println("---------------------------------------------------------------------------------------------");

// Controlando um Micro Servo 9g.
#include <Servo.h>
Servo servo;
int pos;
void setup()
{
    servo.attach(6);
    // coloca o servo na posição inicial
    servo.write(0);
    delay(1000);
}
void loop()
{
    // movimentação até 180
    for (pos = 0; pos < 180; pos++)
    {
        servo.write(pos);
        delay(15);
    }
    delay(1000);
    // movimentação até 0
    for (pos = 180; pos >= 0; pos--)
    {
        servo.write(pos);
        delay(15);
    }
}

println("---------------------------------------------------------------------------------------------");

// Controlando um Micro Servo 9g, com LED limitadores.
#include <Servo.h>
Servo servo;
int pos;
void setup()
{
    servo.attach(6);
    servo.write(0);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
    delay(1000);
}
void loop()
{
    for (pos = 0; pos < 180; pos++)
    {
        servo.write(pos);
        delay(15);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    delay(1000);
    for (pos = 180; pos >= 0; pos--)
    {
        servo.write(pos);
        delay(15);
        digitalWrite(4, LOW);
        digitalWrite(2, HIGH);
    }
}

println("---------------------------------------------------------------------------------------------");

// Controlando um Micro Servo 9g, com LED limitadores e buzzer.
#include <Servo.h>
Servo servo;
int pos;
void setup()
{
    servo.attach(6);
    servo.write(0);
    pinMode(8, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
    delay(1000);
}
void loop()
{
    for (pos = 0; pos < 180; pos++)
    {
        servo.write(pos);
        delay(15);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    tone(8, 250, 150);
    delay(1000);
    for (pos = 180; pos >= 0; pos--)
    {
        servo.write(pos);
        delay(15);
        digitalWrite(4, LOW);
        digitalWrite(2, HIGH);
    }
    tone(8, 500, 150);
}

println("---------------------------------------------------------------------------------------------");

// Controlando um Micro Servo 9g, com LED limitadores, buzzer e potenciômetro.
#include <Servo.h>
Servo servo;
int pos;
void setup()
{
    servo.attach(6);
    servo.write(0);
    pinMode(8, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
    delay(1000);
}
void loop()
{
    pos = analogRead(A0);
    pos = map(pos, 0, 1023, 0, 180);
    servo.write(pos);
    if (pos < 5)
    {
        tone(8, 250);
        digitalWrite(4, HIGH);
        digitalWrite(2, LOW);
    }
    else if (pos > 175)
    {
        tone(8, 250);
        digitalWrite(4, LOW);
        digitalWrite(2, HIGH);
    }
    else
    {
        noTone(8);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    delay(15);
}

println("---------------------------------------------------------------------------------------------");

// Usando o sensor de temperatura.
float temperatura;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    temperatura = (float(analogRead(A0)) * 5 / (1023)) / 0.01;
    Serial.print("Temperatura: ");
    Serial.println(temperatura);
    delay(2000);
}

println("---------------------------------------------------------------------------------------------");

// Usando o sensor de temperatura, com sinal de LED na leitura.
float temperatura;
void setup()
{
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    temperatura = (float(analogRead(A0)) * 5 / (1023)) / 0.01;
    Serial.print("Temperatura: ");
    Serial.println(temperatura);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    delay(2000);
}

println("---------------------------------------------------------------------------------------------");
