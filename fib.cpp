//Programmcode in Datei fib.cpp speichern, um es später zu kompilieren

#include <iostream>
#include <chrono>

int fib_cpp(int n) {

    if(n < 2)
        return n;

    return fib_cpp(n-1) + fib_cpp(n-2);

}

int main() {

  //Hier nutzen wir die chrono Bibliothek, um die momentane Zeit zu speichern
  auto start = std::chrono::high_resolution_clock::now();

  int result = fib_cpp(25);

  //Zeit nach dem Funktionsaufruf speichern
  auto end = std::chrono::high_resolution_clock::now();

  //Die Differenz von Endzeit und Startzeit liefert uns die Ausführungszeit
  std::chrono::duration<double> time_cpp = end - start;

  std::cout << "fib_cpp(20) took " << std::fixed << time_cpp.count() << " seconds to finish. Result: " << result << std::endl;

  return 0;

}

