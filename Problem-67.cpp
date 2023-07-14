class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            int sum = carry;
            if (i >= 0)
                sum += +a[i--] - '0'; // when we subtract '0' from a char we convert it into a decimal value
            if (j >= 0)
                sum += b[j--] - '0'; //
            /*if sum is greater than one, then carry is set to one
            else it is set to zero */
            carry = sum > 1 ? 1 : 0;
            res += sum % 2 + '0';
        }
        if (carry)
            res += to_string(carry);     // if we have extra carry at the end of string, we append it
        reverse(res.begin(), res.end()); // reverse the string to get answer
        return res;
    }
};