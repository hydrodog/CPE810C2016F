class Postscript {
public:

};

int main() {
	Postscript p("test.ps");
	p.line(0,0, 100,100); // default color? black // 0 0 moveto 100 100 lineto stroke
	p.setColor(0.5, 0.0, 0.0); // [red=0.5 green=0 blue=0]  0.5 0 0 setrgbcolor

	// 200 300 moveto 250 300 lineto 250 650 lineto 200 650 lineto closepath stroke
	p.drawRect(200, 300, 50, 350); // x,y,width,height  

	// 200 300 moveto 250 300 lineto 250 650 lineto 200 650 lineto closepath fill
	p.fillRect(200, 300, 50, 350); // x,y,width,height 

	p.drawCircle(300, 300, 100); // x,y, radius      300 300 100 0 360 arc  stroke
	p.fillCircle(300, 300, 100); // x,y, radius      300 300 100 0 360 arc  fill

}
