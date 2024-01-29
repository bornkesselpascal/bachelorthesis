# eParser

This folder contains python scripts used for the evaluation of the raw output data from the TestSuite.


## Input
These scripts expect the output files from TestSuite as input. To avoid having to evaluate each test separately, an entire test campaign can be specified as a folder with several individual tests.

The scripts automatically search for test campaign folders in the parent directory.


## Output
The output differs between the scripts for reliability and performance tests.

### Reliability Tests
- Creation of an Excel spreadsheet for each test campaign with relevant metrics such as packet loss and average throughput
- Creation of various diagrams for simplified evaluation

### Performance Tests
- Calculation of the latencies from the timestamps
    - Output as TXT file
    - Calculation of relevant metrics from the timestamps (worst-case latency, mean latency, ...)
- Creation of an Excel spreadsheet for each test campaign
- Creation of diagrams (optional)
