# HC_SR04 - Bibliothèque Arduino pour le capteur à ultrasons HC-SR04

## Description
HC_SR04 est une bibliothèque Arduino permettant de simplifier l'utilisation du capteur à ultrasons HC-SR04. Elle facilite la mesure de distance en encapsulant les signaux envoyés et reçus par le capteur.

## Installation

### Installation manuelle
1. Téléchargez le code source depuis [GitHub](https://github.com/TonCompte/HC_SR04).
2. Placez le dossier `HC_SR04` dans le répertoire `libraries` d'Arduino.
3. Redémarrez l'IDE Arduino.

### Installation via le Library Manager
(Si ajoutée au Library Manager Arduino)
1. Ouvrez l'IDE Arduino.
2. Allez dans **Croquis** > **Inclure une bibliothèque** > **Gérer les bibliothèques**.
3. Recherchez `HC_SR04` et cliquez sur **Installer**.

## Utilisation

### Exemple de code
```cpp
#include "HC_SR04.h"

HC_SR04 capteur(9, 10);

void setup() {
    Serial.begin(9600);
}

void loop() {
    float distance = capteur.capteurDistance();
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
}
```

## API de la bibliothèque
### **HC_SR04(int trigPin, int echoPin)**
Crée une instance du capteur avec les broches spécifiées.

### **float capteurDistance()**
Retourne la distance mesurée en centimètres.

## Auteur
- **TonNom** - [GitHub](https://github.com/TonCompte)

## Licence
Ce projet est sous licence MIT - voir le fichier [LICENSE](LICENSE) pour plus de détails.
