import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import Multiple ,{Hello , React1,Summation , Display} from './Multiple';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <div className='index'>
  <React.StrictMode>
    <App /> <br>
    </br>
    <Multiple></Multiple> <br>
    </br>
    <Hello></Hello> <br></br>
    <React1></React1> <br>
    </br>
    <Summation num1="5"  num2="2"></Summation>
    <Display></Display>
  </React.StrictMode>
</div>
);






// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
