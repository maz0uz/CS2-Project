# Simulating Randomness in Airport Landing Queue: Estimating Average Waiting Time and Analyzing Runway Occupancy

## Description
This project introduces an airport simulation queue model for analyzing runway occupancy and plane waiting times. The model considers arrival rate, landing time, and average time between arrivals. It aims to estimate the average waiting time for airplanes in the landing queue before they can land. The simulation provides valuable insights into the efficiency of the landing process, helping identify areas for improvement and optimization in airport operations.

## Problem Definition
The goal is to simulate the waiting queues of airplanes in an airport with a single landing runway. Airplanes arrive near the airport with random arrival times. Once in the landing queue, a plane may have to wait until the runway becomes available. After landing, the runway remains occupied for a fixed service time until the plane successfully docks.

## Methodology
To begin the simulation, the necessary libraries and header files are included in the code. The classes runway and plane are defined to represent the runway and individual planes, respectively. Additionally, the random number generation for the distribution is initialized to ensure randomness in the simulation. The simulation follows a loop that runs until the current time (t) reaches the maximum time (tMax) specified for the simulation. At each iteration of the loop, the current time is printed to the console to keep track of the progress.

During each iteration, a random number, x, is generated using the Random function. This random number represents the probability of a plane arriving at the airport. If the probability of a plane arrival, determined by run.getProb(), is less than x, a new plane is created. The arrival time of the plane is set to the current time, and it is added to the rear of the queue. A message is printed to indicate the plane's arrival, providing information about its identification.

Next, the simulation checks if the queue is empty or not. If the queue is not empty, the simulation examines the plane at the front. If the arrival time of the plane at the front of the queue, plus the landing time, is less than or equal to the current time (t), it means the plane is ready to land. The simulation then checks if the runway is occupied or not. If the runway is not occupied, the plane is allowed to land. A message is printed to indicate the plane's landing, including information about its identification and the time it spent waiting in the air. The waiting time is updated accordingly. The plane is removed from the front of the queue, and the landed count is incremented. However, if the runway is occupied, a message is printed to inform that the runway is currently occupied and the plane cannot land at the moment. If no planes are in the queue, a message is printed to indicate that there are currently no planes waiting to land.

After processing the current time, the simulation increments the time (t) and proceeds to the next iteration of the loop. This ensures that the simulation progresses in chronological order. Once the simulation loop concludes, the average wait time for the planes that have landed is calculated. This is achieved by dividing the total waiting time by the number of planes that have successfully landed. The average wait time, along with the number of planes that have not yet landed, is printed to the console and written to an output file (excel).

## Results and Data Analysis
The simulation's data analysis reveals the relationship between arrival rates, landing times, and runway occupancy. It provides insights into the impact of these factors on efficiency and delays. By varying parameters, such as inter-arrival time and landing service time, different scenarios can be explored.

## Conclusion
The airport simulation queue model helps optimize runway occupancy and waiting times. Efficient queue management is crucial for enhanced airport performance and passenger experience. The simulation offers valuable information for airport authorities to make informed decisions.

## Acknowledgments
We would like to express gratitude to Dr. Howida for her invaluable support and mentorship. Thanks to Mr. Mohamed Basuony for his insightful explanations. Special thanks to the contributors Mohamed Azouz, Saif Ahmed, and Hadi Hesham.

## Installation
Please refer to the [GitHub repository QT folder](https://github.com/maz0uz/CS2-Project/Project-Folder) for installation instructions.

## Contributors
Mohamed Azouz (@maz0uz) 900225230
Saif Ahmed (@Saifahmeed) 900225535
Hadi Hesham (@HadiHesham) 900221206
