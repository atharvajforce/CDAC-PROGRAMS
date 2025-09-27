function Calculator(props)
{ 
    let num1=parseInt(props.num1);
    let num2=parseInt(props.num2);
    let num3=parseInt(props.num3); 
 
    let Addition =num1+num2+num3;
    let Multiplication =num1*num2;
    let Division =num2/num1;
    let Subtraction=num2-num1;
   return(
    <>
    <h1>hello from Atharv</h1>
    <div>
        
     <h1> <i>CALCULATOR</i> </h1>
     <h2> Addition is {Addition} </h2>
     <h2> Subtraction is {Subtraction} </h2>
     <h2> Multiplication is {Multiplication} </h2>
     <h2> Division is {Division} </h2>
    
   
     </div>
     </>
   )
}
 export default Calculator;

