// Boa noite. Após assistir esse módulo, gostaria de desenvolver uma função que fizesse isso:
// Eu preciso criar uma função que leia determinado número inteiro e verifique se existe sequência numérica (números consecutivos) nele e aponte a maior sequência. Ex1:
// Entrada: 20456
// Resultado: 456
// Ex2:
// Entrada: 74390123
// Resultado: 90123

function detectarSequencia(num) {
  tam = 1;
  qnt = 1;

  while (num / (tam * 10) > 1) {
    tam *= 10;
    qnt += 1;
  }
  num_aux = num;
  sequencias = [];
  antigo = 0;

  for (let i = 0; i < qnt; i++) {
    let digito = Math.floor(num_aux / tam);
    num_aux -= digito * tam;
    tam /= 10;
    if ((antigo == 9 && digito == 0) || antigo + 1 == digito) {
      sequencias[sequencias.length - 1] += `${digito}`;
    } else {
      sequencias.push(`${digito}`);
    }
    antigo = digito;
  }
  let maior = 0;
  let maior_sequencia = '';
  for (sequencia of sequencias)
    if (sequencia.length > maior) {
      maior_sequencia = sequencia;
      maior = sequencia.length;
    }
  console.log(maior_sequencia);
}

detectarSequencia(20456);
detectarSequencia(45620);
detectarSequencia(98191);
detectarSequencia(74390123);
detectarSequencia(90123);
