
function Factorial(props) {
    let num = props.num; 
    let factorial = 1;
    for (let i = 1; i <= num; i++) {
        factorial *= i;
    }

    return (
        <div> 
            <h2>Factorial of {num} is {factorial}</h2>
    
        </div>
    );
}
export default Factorial;