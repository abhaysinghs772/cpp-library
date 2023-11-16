let a = 5;    // binary: 0101
let b = 3;    // binary: 0011

let result = a ^ b;  // binary result: 0110 (decimal: 6)
// console.log(result);  // Outputs: 6

// Input: pref = [5,2,0,3,1]
// Output: [5,7,2,3,2]
// Explanation: From the array [5,7,2,3,2] we have the following:
// - pref[0] = 5. 
// - pref[1] = 5 ^ 7 = 2.  
// - pref[2] = 5 ^ 7 ^ 2 = 0.  
// - pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.  
// - pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.

/**
 * @param {number[]} pref
 * @return {number[]}
 */
let findArray = function (pref) {
    let output = [ pref[0] ];
    // let c = output[0] ^ pref[1] // 5 ^ 2 = 7
    // output.push(c); // output: [5, 7]

    // c = output[0] ^ output[1] ^ pref[2] // 5 ^ 7 ^ 0
    // output.push(c); // output: [5, 7, 2]
    
    // c = output[0] ^ output[1] ^ output[2] ^ pref[3]; // 5 ^ 7 ^ 2 ^ 3
    // output.push(c); // output: [5, 7, 2, 3]

    // c = output[0] ^ output[1] ^ output[2] ^ output[3] ^ pref[4]; // 5 ^ 7 ^ 2 ^ 3 ^ 1 
    // output.push(c); // output: [5, 7, 2, 3, 2];
    let c = 0;
    for (let i = 1; i < pref.length; i ++){
        for (let j = 0; j < output.length; j++){
            c ^= output[j];
        }
        c ^= pref[i];
        output.push(c);
        c = 0;
    }

    return output;
};

console.log(findArray([5])); // Output: [ 5, 7, 2, 3, 2]