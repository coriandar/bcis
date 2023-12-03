/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Task10_2;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Assert;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;

/**
 *
 * @author coriandar
 */
public class ArrayTestTest {
	private ArrayTest at;
	private int[] arr;

	@BeforeClass //beforeAll
	public static void setUpClass() {
//		System.out.println("@BeforeClass --- setUpClass(yy) is called!\n");
	}

	@AfterClass // afterAll
	public static void tearDownClass() {
//		System.out.println("\n@AfterClass --- tearDownClass() is called!");
	}

	@Before // beforeEach
	public void setUp() {
//		System.out.println("@Before --- setUp() is called!");
		at = new ArrayTest();
		arr = new int[]{1,2,3,4,5};
	}

	@After //afterEach
	public void tearDown() {
//		System.out.println("@After --- tearDown() is called!\n");
	}

	@Test (expected = IllegalArgumentException.class) // correct
	public void testFindIndexSmallerThan0() {
		System.out.print("testFindIndexSmallerThan0: ");
		int i = -1;
		System.out.println(i < 0 ? "PASS" : "FAIL");
		at.find(i, arr);
		Assert.fail("Index is not less than 0");
	}

	@Test (expected = IllegalArgumentException.class) // correct
	public void testFindArrayIsNull() {
		System.out.print("testFindArrayIsNull: ");
		int i = 0;
		int[] arr = null;
		System.out.println(arr == null ? "PASS" : "FAIL");
		at.find(i, arr);
		Assert.fail("Array is not null");
	}

	@Test (expected = IllegalArgumentException.class) // correct
	public void testFindArrayLengthLessThan2() {
		System.out.print("testFindArrayLengthLessThan2: ");
		int i = 0;
		int[] arr = {1};
		System.out.println(arr.length < 2 ? "PASS" : "FAIL");
		at.find(i, arr);
	}

	@Test
	public void testFindIndex1() {
		System.out.print("testFindIndex1:");
		int i = 1;
		double expResult = this.arr[0];
		double actResult = at.find(i, this.arr);
		System.out.println(actResult == expResult ? "PASS" : "FAIL");
		Assert.assertEquals(expResult, actResult, 0);
	}

	@Test
	public void testFindIndex2() {
		System.out.print("testFindIndex2: ");
		int i = 2;
		double expResult = this.arr[this.arr.length - 1]; // last
		double actResult = at.find(i, this.arr);
		System.out.println(actResult == expResult ? "PASS" : "FAIL");
		Assert.assertEquals(expResult, actResult, 0);
	}

	@Test
	public void testFindIndex0NCountNotEqualto0() {
		System.out.print("testFindIndex0NCountNotEqualto0: ");
		int i = 0;
		double expResult = 15 / 5;
		double actResult = at.find(i, this.arr);
		System.out.println(actResult == expResult ? "PASS" : "FAIL");
		Assert.assertEquals(expResult, actResult, 0);
	}
}
