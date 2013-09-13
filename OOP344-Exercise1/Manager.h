class Employee;
//class Manager's data types and methods 
class Manager
   {
   private:
      int totalHours;
   protected:
   public:
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };