/*
 * File: TestList_int.java
 * ------------------
 * This program will test the MyList class that implements
 * List ADT (using an Integer array)
 */

import acm.graphics.*;
import acm.program.*;
import acm.util.*;

import java.awt.*;

public class TestList_int extends ConsoleProgram {

    private ListCanvas canvas;
    private MyList<Integer> score = new MyList<Integer>();

    public void init() {
	      canvas = new ListCanvas();
              add(canvas); 
              canvas.reset();
		}

    public void run() {

             /// Create empty list
             println("score.createList()");
             score.createList();
	     println("score.size()  = " + score.size());
             canvas.displayList(score);
             pause(2000);

             println("score.isEmpty() = " + score.isEmpty());

             testRemoveFromEmpty();             

             testAdd();

             println("score.isEmpty() = " + score.isEmpty());

             testRemove();
        
	}


    private void testAdd(){

             /// Add 80
             println("score.add(1, 80)");
             score.add(1, 80); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score); 
             pause(2000);
           
             /// Add 93
             println("score.add(1, 93)");
             score.add(1, 93); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);  

             /// Add 76
             println("score.add(1, 76)");
             score.add(1, 76); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);  

               /// Add 60
             println("score.add(1, 60)");
             score.add(1, 60); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);  

             /// Add 55
             println("score.add(1, 55)");
             score.add(1, 55); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Add 88
             println("score.add(1, 88)");
             score.add(1, 88); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Add 100
             println("score.add(7, 100)");
             score.add(7, 100); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Add 0
             println("score.add(10, 0)");
             try{
                score.add(10, 0); 
             }
             catch (Exception e){
                e.printStackTrace();
             }
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

              /// Add 0
             println("score.add(2, 0)");
             score.add(2, 0); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Add 70
             println("score.add(2, 70)");
             score.add(2, 70); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Add 95
             println("score.add(10, 95)");
             score.add(10, 95); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Add 40
             println("score.add(10, 40)");
             try{
             score.add(1, 40); 
             }
             catch (Exception e){
                e.printStackTrace();
             }
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(5000);

       }

 
    private void testRemove(){

             /// Remove 5: 60
             println("score.remove(5)");
             score.remove(5); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Remove 10 : ERROR
             println("score.remove(10)");
             try{
             score.remove(10); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Remove 9: 95
             println("score.remove(9)");
             score.remove(9); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Remove 1: 88
             println("score.remove(1)");
             score.remove(1); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Remove 7: 100
             println("score.remove(7)");
             score.remove(7); 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);
   }

   private void testRemoveFromEmpty(){
             /// Remove 0 : ERROR
             println("score.remove(0)");
             try{
             score.remove(0); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);

             /// Remove 1 : ERROR
             println("score.remove(1)");
             try{
             score.remove(1); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);
  }

   private void testGet(){
             /// Get 1 :  
             println("score.remove(1)");
             try{
             score.remove(1); 
             } 
             catch (Exception e){
                e.printStackTrace();
             } 
             println("score.size()  = " + score.size()); 
             canvas.displayList(score);
             pause(2000);
   }
}
