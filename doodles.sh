# ask the user for type of doodle
echo "What project do you want to see?"
echo "1. lucky number"


read choice
if [ $choice -eq 1 ]
then
    echo "You chose lucky number"
    cd luckynumber
    ls
    javac lucky.java && java lucky
    cd ..
    # run another project after the user exits the lucky number project
    echo "Do you want to see another project?"
    echo "1. yes"
    echo "2. no"
    read choice

fi


