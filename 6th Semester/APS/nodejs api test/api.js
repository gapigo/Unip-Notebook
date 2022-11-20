//import fetch from 'node-fetch';
const fetch = (...args) =>
  import('node-fetch').then(({ default: fetch }) => fetch(...args));

let _data = {
  title: 'foo',
  body: 'bar',
  userId: 1,
};

try {
  fetch('http://localhost:5000/motores', {
    janela: {
      aberta: true,
      manual: false,
      temperatura_de_ativacao: 25,
      umidade_de_ativacao: 40,
    },
  })
    .then((response) => response.json())
    .then((json) => console.log(json));
} catch (error) {
  console.log(error);
}
