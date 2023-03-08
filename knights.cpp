// Note that when we have two knights threatening each other, it actually forms either a 2×3 or 3×2 board. 
//And for each of 2×3 and 3×2 boards, there are 2 ways of placing two knights so that they threaten each other. 
// So, what we should do is to count how many 2×3 and 3×2 squares on 𝑛×𝑛 board. For general 𝑛, the answer is
// (𝑛−1)(𝑛−2)+(𝑛−2)(𝑛−1)=2(𝑛−1)(𝑛−2)
// And for each 2×3 and 3×2 board, there are 2 ways of placing the knights so that they threaten each other. Therefore, in total there are
// 2⋅2(𝑛−1)(𝑛−2)=4(𝑛−1)(𝑛−2)
// ways of placing two knights so that they threaten each other. So what you are looking for is
// 𝑛^2 * (𝑛^2−1)/2 − 4(𝑛−1)(𝑛−2)
// It is also worth mentioning that we are not over-counting because whenever we place two knights so that they threaten each other,
// either a 2×3 or 3×2 board must contain both of the knights. 

# include <simplecpp>
int knights(int k)
{ 
    return (k * k * ((k * k) -1 ) * 0.5) - (4 * (k -1) * (k-2));

}