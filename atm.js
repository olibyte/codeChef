process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here
let data = "";
process.stdin.on('data', function(chunk) {
  data += chunk.toString();
});
process.stdin.on('end', function() {
    main();
});
function main() {
    let lines = data.split(" ");
    const withdrawal = parseInt(lines[0]);
    const balance = parseFloat(lines[1]);
    const fee = parseFloat(0.50);

    if (withdrawal % 5 !== 0 || withdrawal > (balance+fee)) {
        console.log(balance);
    } else if (withdrawal % 5 === 0){
        console.log(balance-withdrawal-fee);
    }
}