﻿# Recursion

         Recursion

    1- Soving problem using smaller instance of same problem.
    2- Function call itself.


E.g=>

    int  sum(int N){
    
        // ( Assumption: Sum(N)--> N to 1)

        // Base Conditoin
        if(N==1){
            return 1;
        }

        // Recursive Eqn.
        int ans = N + sum(N-1);
        return ans;
    }


