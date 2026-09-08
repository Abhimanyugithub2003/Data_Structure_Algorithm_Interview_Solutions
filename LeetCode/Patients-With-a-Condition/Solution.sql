1# Write your MySQL query statement below
2SELECT patient_id, patient_name, conditions FROM Patients 
3WHERE conditions LIKE 'DIAB1%' OR conditions LIKE '% DIAB1%';