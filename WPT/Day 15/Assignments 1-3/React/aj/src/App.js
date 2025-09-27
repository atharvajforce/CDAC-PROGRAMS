//import logo from './logo.svg';
import './App.css';
import Factorial from './Factorial';
import Calculator from './calculator';


function App() {
       
     return (
        <div className="App"> 

         <Factorial num='5'> </Factorial> 

            <Calculator num1="2" num2="4" num3="3">  </Calculator>  
        </div>
     )

}
export default App;
