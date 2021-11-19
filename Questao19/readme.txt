Questão 19:

Para instalar a biblioteca libGC no Ubuntu 20 é apenas necessário utilizar o comando "apt-get install libgc-dev libgc1c2" no terminal. Essa biblioteca é um coletor de lixo conservativo desenvolvido para a linguagem C.

Ele permite que você aloque memória como faria normalmente, sem desalocar explicitamente a memória que não é mais útil. O coletor recicla automaticamente a memória quando determina que ela não pode mais ser usada.

https://packages.debian.org/sid/libgc-dev

O código libgc é projetado para ser um substituto imediato para o gerenciamento de memória baseado em heap em programas C e C ++, portanto, fornece uma implementação de malloc, chamada GC_malloc (todas as funções na interface pública de libgc começam com o prefixo GC_).

https://joshpeterson.github.io/reading-the-libgc-code
