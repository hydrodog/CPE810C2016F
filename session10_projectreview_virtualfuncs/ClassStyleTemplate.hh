#ifndef CLASS_STYLE_TEMPLATE_HH__
#define CLASS_STYLE_TEMPLATE_HH__

/**
	 @author: Dov Kruger, name, name
	 @modified: Dov .....

   Explain your section of the project once

	 The calendar for assignments. The purpose is to make it easier for
	 teachers to assign without entering dates, having to re-enter dates
	 when events happen and classes are cancelled





 */



/**
	 Explain what the class is for
 */
class ClassStyleTemplate { // class Names use camelcase with first letter capital
private:
	int m_privateData;
	static int m_count;
public: // this is public
  static int getCount();
	/*
		Explain what the method does.  Hopefully in one short sentence, IF NECESSARY, more.

	 */
	void f();
	void thisIsaLongMethodName(); // use camel case for method names

	int privateData();
};


#endif
