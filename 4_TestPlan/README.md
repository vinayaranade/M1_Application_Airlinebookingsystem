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
