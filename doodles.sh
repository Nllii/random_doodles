#!bin/bash
working_dir=`pwd`
run=$2
case $run in
  -c)
    run='gcc'
    ;;
    -cc)
    run='g++'
    ;;
    

esac

function getfile() {
    # echo "Working...."
    for dir in `ls -d */`
    do
    # echo $dir
    if [[ $dir =~ "$1/" ]]; then
        for file in `ls -d $dir*`
        do 
            if [[ $file =~ "$3.c" ]]; then
                if [ -f $file ]; then
                    if [ -x $file ]; then
                        ./$file
                    else
                        $run $file -o $file.out
                        echo "Running $file"
                    fi
                else
                    echo "File does not exist"
                fi
        
            fi
        done
    fi
    done
}



if [ ! $# -lt 1 ]; then
    getfile $*
    exit 0
fi










