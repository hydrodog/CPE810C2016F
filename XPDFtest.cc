int main() {
	XPDF doc;

	int id1 = doc.defineFont("Arial", 24, BOLD);
	int id2 = doc.defineFont("Arial", 12, PLAIN);
	doc.add("hello. this is text");
	doc.setFont(id1);
}

void load(string bookname) {
	EPUBReader reader;
	reader.open(bookname);
	Iterator i = reader;
  while (i.next()) {
    doc.insert(i);		

}
