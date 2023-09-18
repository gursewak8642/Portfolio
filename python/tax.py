def Tax_Cal(PAN, name, taxable_income, tax):

   if taxable_income <= 60000:
      tax = 0
   elif taxable_income > 60000 and taxable_income <= 150000:
      tax = 5/100*taxable_income
   elif taxable_income > 150000 and taxable_income <= 500000:
     tax = 10/100*taxable_income
   elif taxable_income > 500000:
     tax = 15/100*taxable_income
   print(tax)
Tax_Cal(8575, "James", 70000, 0)
