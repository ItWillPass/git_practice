def start_calc():
     a = int(input('Введите первое число: '))
     b = int(input('Введите второе число: '))

     operation = ask_operation()

     result = calculate(a, b, operation)

     print(f'Результат вычислений: {result}')

def calculate(a, b, operation):
   result = None 

   if operation == '+':
       result = sum(a, b)
   elif operation == '-':
       result = subtract(a, b)
   elif operation == '/':
       result = divide(a, b)
   elif operation == '*':
       result = multiply(a, b)
   else:
       print('Неизвестная операция')  
    
   return result

def ask_operation():
   message = '''
   Пожалуйста, введите символ операции, которую вы хотите совершить и нажмите Enter:
 
+ : Сложение
- : Вычитание
/ : Деление
* : Умножение
 
Ваш выбор:
   '''
   operation = input(message) 
 
   return operation



start_calc()
