//import fetch from 'node-fetch';
const fetch = (...args) =>
  import('node-fetch').then(({ default: fetch }) => fetch(...args));

let _data = {
  title: 'foo',
  body: 'bar',
  userId: 1,
};

fetch('https://jsonplaceholder.typicode.com/posts', {
  method: 'POST',
  body: JSON.stringify(_data),
  headers: { 'Content-type': 'application/json; charset=UTF-8' },
})
  .then((response) => response.json())
  .then((json) => console.log(json));
