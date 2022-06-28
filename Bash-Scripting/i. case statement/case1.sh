#bin/bash

vehicle=$1

case $vehicle in
    "car" )
        echo "Rent of $vehicle is \$100" ;;
    "van" )
        echo "Rent of $vehicle is \$80" ;;
    "bicycle" )
        echo "Rent of $vehicle is \$5" ;;
    "truck" )
        echo "Rent of $vehicle is \$150" ;;
    * )
        echo "Unknown vehicle found" ;;
esac