# TEST PLAN

### HIGH LEVEL TEST PLAN

| Test_id | Description | Input | Expected Output | Actual output |
|---------|-------------|-------|-----------------|---------------|
| 01   | addbook | 220 | 1 | 1|
|02 | editbook | 220 | 1 | 1 |
| 03 | deletebook | 220 | 1 | 1|
| 04 | searchbook | 220 | 0 | 0 |
| 05 | adduser | 263994 | 1 | 1 |
| 06 | edituser | 263994| 1 | 1 |
| 07 | deleteuser | 263994 | 1 | 1 |
| 08 | bookmenu | None | 1 | 1 |
| 09 | usermenu | None | 1 | 1 |

### LOW LEVEL TEST PLAN
| Test_id | Description | Input | Expected Output | Actual output |
|---------|-------------|-------|-----------------|---------------|
| 01 | validatedatecheck | 03-12-1999 | 1 | 1 |
| 02 | collecctbook | 263994 | 1 | 1 |
| 03 | bookid_check | 250 | 0 | 0 |
| 04 | userid_check | 263994 | 1 | 1 |
