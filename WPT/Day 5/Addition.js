
function calculate(...a)
{
    sum =0     // initialize sum =0;
    
    a.forEach((e)=> sum += e)
   
   console.log(`addiion is ${sum}`);
    return sum;
}

calculate(11,22);
calculate(14,35);
