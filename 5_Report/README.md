# Requirements
Airline booking system is based on the objective of providing the customers/users an easy way for making reservations, placing cancellation and checking their reservations. This airline booking system will help the customers to book their tickets in a hassle-free manner and make seats available as soon as there is a cancellation placed.
# Research/State of Art 
The present Airline booking system has counters at the airport where customers have to go to make reservations, cancel tickets and check reservations. There are travel agents who take advance bookings and provide tickets to customers at a higher cost than the actual cost also cancellation needs to be done at the counters and travel agents well in advance which is very lengthy and tedious process.
# Cost and Timeline
| Time line  |   Changes in the Airline Booking System   |
| --------- | ------ |
|1964-1971 | The airline bookings witnessed rapid growth of customers but used manual systems.  |
| Late 1976 | Partial semi-automatic systems were used with complicated mechanical computers to show seat availability  |
| Early 2000|Programmed airline reservations were used similar to previous systems. |
| 2000-    2003 | GDS centric distribution model was used -Travel agencies were connected to various airlines, and terminals that provided access to GDS content  |
|2003-  2009     |GDS system became independent and first electronic ticket . |

Various technology devices made it easy for the end user to access travel data, compare prices, and book electronic tickets stored in smartphone memory. But even now, all flight information still comes from GDSs by channels established in the 1960s and has Third Parties involved which in turn increase the cost for the end user.

# 4 W’s and 1H
#### What  :
Air travel is one of the first choice among most of the customers to save time the main objective is to reduce time by simplifying the reservation process for customers who do not want to visit travel agents or airports for booking tickets.
#### Who   :
This system will help the airline companies to provide an easy booking service to their customers directly without the need of any travel agents or separate booking counters.
#### Where  :
The system can be accessed easily by users anywhere anytime at their own comfort rather than visiting airport booking counters.
#### When :
The need for airline reservation system was realized since the growth in number of airline companies all with multiple prices, aircrafts and schedules

#### How:
Airline Booking will ask for the passenger’s statistics which include name, passport no, email id. After these procedures,  a reservation is done. As a reservation proof, the system provides seat number.  In order to check tickets, the person has to offer seat no. then the system checks  for the respective tickets in  and shows a result. Canceling a flight reservation is easy thru the system, the user simply has to provide their seat number.
# SWOT Analysis 

### Strengths:
 •	Provides Faster, easier and hassle-free services to the customer
 •	Reduces errors that may occur in the manual system.
 •	Allows the customer to purchase tickets from the remote areas
 •	The pressure at the reservation counter is substantially reduced
 •	It saves time by reducing the time involved in the physical transportation of the customer to the reservation counter.
 
###  Weakness:
•	No notification of passengers in the event of flight cancellation or delays.
•	It does not provide any option of passengers printing their boarding pass from the existing system.

### Opportunities:
•	The system will allow potential airline customers to book available tickets, check their reservations and cancel tickets in an easy way which in turn helps the airline to increase their customers.
•	It will help passengers save time and money.

### Threats:
•	Whenever there are changes in the flight timings or cancellation of flights the passengers cannot be informed via this system.
•	No option of passengers printing their boarding
pass from the existing system.

# High level Requirements 
| ID | Description  |Status|
| ------ | ------ |------|
| HLR  1 |It should make a reservation and display seat number to the customer.  | Implemented|
| HLR  2 | It should display all the reservation details of reserved seats . |Implemented |
| HLR  3 | It should cancel a seat and make it available for reservation as soon as cancelled. | Implemented |


# Low level Requirements 
| ID | Description  | Status |
| ------ | ------ | ------|
| LLR  1 |It should take required details from the customer before making a reservation  | Implemented |
| LLR  2 |It should check if the entered details are valid and send error in case of invalid | Implemented |
| LLR  3 |It should generate a unique seat number for every reservation  | Implemented |
| LLR 4 | It should take input seat details before cancellation | Implemented |
| LLR 5 | Take input details of customer and display from existing records | Implemented |

  [dill]: <https://github.com/joemccann/dillinger>
   [git-repo-url]: <https://github.com/joemccann/dillinger.git>
   [john gruber]: <http://daringfireball.net>
   [df1]: <http://daringfireball.net/projects/markdown/>
   [markdown-it]: <https://github.com/markdown-it/markdown-it>
   [Ace Editor]: <http://ace.ajax.org>
   [node.js]: <http://nodejs.org>
   [Twitter Bootstrap]: <http://twitter.github.com/bootstrap/>
   [jQuery]: <http://jquery.com>
   [@tjholowaychuk]: <http://twitter.com/tjholowaychuk>
   [express]: <http://expressjs.com>
   [AngularJS]: <http://angularjs.org>
   [Gulp]: <http://gulpjs.com>

   [PlDb]: <https://github.com/joemccann/dillinger/tree/master/plugins/dropbox/README.md>
   [PlGh]: <https://github.com/joemccann/dillinger/tree/master/plugins/github/README.md>
   [PlGd]: <https://github.com/joemccann/dillinger/tree/master/plugins/googledrive/README.md>
   [PlOd]: <https://github.com/joemccann/dillinger/tree/master/plugins/onedrive/README.md>
   [PlMe]: <https://github.com/joemccann/dillinger/tree/master/plugins/medium/README.md>
   [PlGa]: <https://github.com/RahulHP/dillinger/blob/master/plugins/googleanalytics/README.md>

# High Level Design

## High Level Structural Diagram 

![flowchart](https://user-images.githubusercontent.com/94466750/142776597-0a25d7a1-bfb9-448a-9616-7ad919f065f4.png)


# Behavioural Diagram
## Feature level behavioural diagram

![flowchart1](https://user-images.githubusercontent.com/94466750/142776697-281c34bb-79a4-49b7-a08c-9efe60ad7200.png)

## Feature level behavioural diagram

![flowchart3](https://user-images.githubusercontent.com/94466750/142776705-fa672ce3-979b-4b39-98b0-0dfa2d5b8e17.png)

## Feature level behavioural diagram

![display flowchart](https://user-images.githubusercontent.com/94466750/143263073-0b324189-0bd4-4001-b8e8-446b2f7fdf51.png)

# Testplan 

### High level test plan
|Test Id | Description | Expected Output | Actual Output | Type of test |
|-------|-------|-------|------|-----|
|H_01|Make a reservation with passport no 45521| Successful and seat number| Successful with seat number A_1| Requirment based|
|h_02|Make a reservation with already entered passport number | Seat number A_2| Sat number A-2| Scenario based|
|H-03|Enter a 9 digit passport number| Successful |Successful |Requirement based |
|H_04|Delete reservation after entering passport number |Booking Deleted |Booking Deleted |Requirment based |
|H_05|Select Delete and Enter 0 as passport number | Passport Number is wrong |Passport Number is wrong |Scenario based |
|H_06|Select Display record enter A_1 |Successfully print all details of A_1 |Successfully print all details of A_1| Requirment based |

### Low level test plan 
|Test Id | Description | Expected Output | Actual Output | Type of test |
|-------|-------|-------|------|-----|
|L_01|Select Reservation and enter details simultaneously | Successful and seat number|  Successful and seat number| Scenario based |
|L_02|Select delete and enter invalid passport number | Passport number is wrong  |Passport number is wrong  |Scenario  based |
|L_03|Select display without any reservations |Back to option select window |Back to option select window |Scenario based |
|L_04|Enter invalid choice from select menu | Sorry Invalid choice | Sorry Invalid choice | Scenario based |

# Expected Output 

The output window is a first display window of the system that displays all the options i.e Reservation,cancel,display.

![window1](https://user-images.githubusercontent.com/94466750/142777692-ff74d61d-3bf2-4e78-8777-055a313b1e25.PNG)
 
 
# Test case Output
### Reservation confirmation window 

![reservation](https://user-images.githubusercontent.com/94466750/142777752-1105f2be-00c4-4b13-bdcc-8f86c7574443.PNG)

### Display Record window

![displayrecord](https://user-images.githubusercontent.com/94466750/142777781-f94c7617-171b-4fb2-8b6d-dc340ea20a98.PNG)
