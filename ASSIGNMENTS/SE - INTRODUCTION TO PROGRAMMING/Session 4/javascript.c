
function calculateTotal(itemPrice, quantity) {
    
    return itemPrice * quantity;
}


let price = 299.00; 
let qty = 3;        

let totalBill = calculateTotal(price, qty);
console.log("Total Bill Amount: ?" + totalBill); 


