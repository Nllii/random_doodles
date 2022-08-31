#!bin/bash
working_dir=`pwd`
run=$2
case $run in
  -c)
    run='gcc'
    ;;

esac

function getfile() {
    # echo "Working...."
    for dir in `ls -d */`
    do
    # echo $dir
    if [[ $dir =~ "$1/" ]]; then
        # echo "Directory $dir exists"
        for file in `ls -d $dir*`
        do 
            if [[ $file =~ "$3.c" ]]; then
                # echo "File $file exists"
                # echo "Compiling $file"
                # check if the file exists
                if [ -f $file ]; then
                    # check if the file is executable
                    if [ -x $file ]; then
                        # echo "File is executable"
                        # echo "Running $file"
                        ./$file
                    else
                        # echo "File is not executable"
                        # echo "Compiling $file"
                        $run $file -o $file.out
                        echo "Running $file"
                        # ./$file.out
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










