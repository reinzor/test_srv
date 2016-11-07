# test_srv

Test speed of ROS service calls

## Usage

    Usage: rosrun test_srv test_srv_client_node [tries] [num]
    
Modify the service test.srv in the srv directory according to your needs ..

## Result

    $ rosrun test_srv test_srv_client_node 10 100000
    [ INFO] [1478505788.500726830]: We are doing 10 tries of 100000 iterations ...
    [ INFO] [1478505790.869351323]: [1] - 100000 iteration took 2.368555 seconds --> 23.69 microseconds per request
    [ INFO] [1478505793.322700811]: [2] - 100000 iteration took 2.453298 seconds --> 24.53 microseconds per request
    [ INFO] [1478505795.533722579]: [3] - 100000 iteration took 2.210972 seconds --> 22.11 microseconds per request
    [ INFO] [1478505797.875398278]: [4] - 100000 iteration took 2.341625 seconds --> 23.42 microseconds per request
    [ INFO] [1478505800.451607217]: [5] - 100000 iteration took 2.576161 seconds --> 25.76 microseconds per request
    [ INFO] [1478505802.789594560]: [6] - 100000 iteration took 2.337936 seconds --> 23.38 microseconds per request
    [ INFO] [1478505805.137447050]: [7] - 100000 iteration took 2.347800 seconds --> 23.48 microseconds per request
    [ INFO] [1478505807.590900686]: [8] - 100000 iteration took 2.453399 seconds --> 24.53 microseconds per request
    [ INFO] [1478505809.852597032]: [9] - 100000 iteration took 2.261639 seconds --> 22.62 microseconds per request
    [ INFO] [1478505812.155238017]: [10] - 100000 iteration took 2.302584 seconds --> 23.03 microseconds per request
    [ INFO] [1478505812.155272767]: [AVERAGE] 23.65 microseconds per request
