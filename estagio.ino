// Inicia variáveis de tempo
unsigned long millisTarefa1 = millis();
unsigned long millisTarefa2 = millis();
unsigned long millisTarefa3 = millis();
unsigned long millisTarefa4 = millis();

int relay_1 = 7;
int relay_2 = 6;
int relay_3 = 5;
int relay_4 = 4;

void setup() {
  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(relay_3, OUTPUT);
  pinMode(relay_4, OUTPUT);
}

void loop() {
  tarefa1();
  tarefa2();
  tarefa3();
  tarefa4();
}

void tarefa1(){
  // Verifica se já passou 5000 milisegundos
  if((millis() - millisTarefa1) < 5000){
    digitalWrite(relay_1, HIGH);
  }else{
    digitalWrite(relay_1, LOW);
  }

  if((millis() - millisTarefa1) > 5200){
    millisTarefa1 = millis();
  }
}
 
void tarefa2(){
  if((millis() - millisTarefa2) < 10000){
    digitalWrite(relay_2, HIGH);
  }else{
    digitalWrite(relay_2, LOW);
  }
  if((millis() - millisTarefa2) > 10200){
    millisTarefa2 = millis();
  }
}

void tarefa3(){
  if((millis() - millisTarefa3) < 3000){
    digitalWrite(relay_3, HIGH);
  }else{
    digitalWrite(relay_3, LOW);
  }
  if((millis() - millisTarefa3) > 3200){
    millisTarefa3 = millis();
  }
}
 
void tarefa4(){
  if((millis() - millisTarefa4) < 7000){
    digitalWrite(relay_4, HIGH);
  }else{
    digitalWrite(relay_4, LOW);
  }
  if((millis() - millisTarefa4) > 7200){
    millisTarefa4 = millis();
  }
}
