const dns = require('node:dns');
dns.setDefaultResultOrder('ipv4first');
const fetch = require('node-fetch');

request = {
  janela: {
    aberta: true,
    manual: false,
    temperatura_de_ativacao: 25,
    umidade_de_ativacao: 40,
  },
};

fetch('https://arduino-unip.herokuapp.com/motores', {
  method: 'POST',
  body: JSON.stringify(request),
  headers: { 'Content-Type': 'application/json' },
});
