echo "SIMPLE TESTS"
echo "-----------------"
echo "TEST VALUE = 1"
./convert 1
echo "-----------------"
echo "TEST VALUE = 55"
./convert 55
echo "-----------------"
echo "TEST VALUE = 120094"
./convert 120094
echo "-----------------"
echo "TEST VALUE = 14.4f"
./convert 14.4f
echo "-----------------"
echo "TEST VALUE = 3204.24234"
./convert 3204.24234
echo "-----------------"
echo "TEST VALUE = -342.13"
./convert -342.13
echo "-----------------"
echo "INF NAN TEST"
./convert nan
echo "-----------------"
./convert inf
echo "-----------------"
./convert -inf
echo "-----------------"
./convert +inf
echo "-----------------"
./convert nanf
echo "-----------------"
./convert inff
echo "-----------------"
./convert -inff
echo "-----------------"
./convert +inff
echo "-----------------"
echo "OVERFLOW TEST"
echo "TEST VALUE = 999999999999999"
./convert 999999999999999
echo "-----------------"
echo "STRING TEST"
./convert "hello"



