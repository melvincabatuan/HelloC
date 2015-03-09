/*
 * File: TestList.java
 * ------------------
 * This program will test the MyList class that implements
 * List ADT
 */

import acm.graphics.*;
import acm.program.*;
import acm.util.*;

import java.awt.*;

public class TestList extends ConsoleProgram {

    private ListCanvas canvas;

    /// Create the list of food (memory allocation)
    private MyLinkedList<String> food = new MyLinkedList<String>();

    public void init() {
	      canvas = new ListCanvas();
              add(canvas); 
              canvas.reset();
		}

    public void run() {

             /// Create empty list
             println("food.createList()");

             food.createList();
	     println("food.size()  = " + food.size());

             canvas.displayList(food);            

             println("food.isEmpty() = " + food.isEmpty());

             testRemoveFromEmpty();             
 
             testAdd();

             println("food.isEmpty() = " + food.isEmpty());

             testRemove();
 
        
	}


    private void testAdd(){

             /// Add milk
             println("food.add(1, \"milk\")");
             food.add(1, "milk"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food); 
             pause(4000);

         
             /// Add eggs
             println("food.add(1, \"eggs\")");
             food.add(1, "eggs"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);  

             /// Add butter
             println("food.add(1, \"butter\")");
             food.add(1, "butter"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);  

               /// Add apples
             println("food.add(1, \"apples\")");
             food.add(1, "apples"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);  

             /// Add bread
             println("food.add(1, \"bread\")");
             food.add(1, "bread"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Add chicken
             println("food.add(1, \"chicken\")");
             food.add(1, "chicken"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Add pork
             println("food.add(7, \"pork\")");
             food.add(7, "pork"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Add beef
             println("food.add(10, \"beef\")");
             try{
                food.add(10, "beef"); 
             }
             catch (Exception e){
                e.printStackTrace();
             }
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

              /// Add beef
             println("food.add(2, \"beef\")");
             food.add(2, "beef"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Add tilapia
             println("food.add(2, \"tilapia\")");
             food.add(2, "tilapia"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Add tuna
             println("food.add(10, \"tuna\")");
             food.add(10, "tuna"); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Add lechon
             println("food.add(10, \"lechon\")");
             try{
             food.add(10, "lechon"); 
             }
             catch (Exception e){
                e.printStackTrace();
             }
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(5000);

       }

 
    private void testRemove(){

             /// Remove 5: apples
             println("food.remove(5)");
             food.remove(5); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Remove 10 : ERROR
             println("food.remove(10)");
             try{
             food.remove(10); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Remove 9: tuna
             println("food.remove(9)");
             food.remove(9); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Remove 1: chicken
             println("food.remove(1)");
             food.remove(1); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Remove 7: pork
             println("food.remove(7)");
             food.remove(7); 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);
   }

   private void testRemoveFromEmpty(){
             /// Remove 0 : ERROR
             println("food.remove(0)");
             try{
             food.remove(0); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);

             /// Remove 1 : ERROR
             println("food.remove(1)");
             try{
             food.remove(1); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);
  }

   private void testGet(){
             /// Get 1 :  
             println("food.remove(1)");
             try{
             food.remove(1); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("food.size()  = " + food.size()); 
             canvas.displayList(food);
             pause(4000);
   }
}
