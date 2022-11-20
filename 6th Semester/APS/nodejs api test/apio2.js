//import fetch from 'node-fetch';
// const fetch = (...args) =>
//   import('node-fetch').then(({ default: fetch }) => fetch(...args));
//import dns from 'node:dns';
const dns = require('node:dns');
dns.setDefaultResultOrder('ipv4first');
const fetch = require('node-fetch');

let _data = {
  title: 'foo',
  body: 'bar',
  userId: 1,
};

// try {
//   fetch('http://localhost:5000/motores', {
//     janela: {
//       aberta: true,
//       manual: false,
//       temperatura_de_ativacao: 25,
//       umidade_de_ativacao: 40,
//     },
//   })
//     .then((response) => response.json())
//     .then((json) => console.log(json));
// } catch (error) {
//   console.log(error);
// }

request = {
  janela: {
    aberta: true,
    manual: false,
    temperatura_de_ativacao: 25,
    umidade_de_ativacao: 40,
  },
};

fetch('http://localhost:5000/motores', {
  method: 'POST',
  body: JSON.stringify(request),
  headers: { 'Content-Type': 'application/json' },
});
// .then((res) => res.json())
// .then((json) => console.log(json));
