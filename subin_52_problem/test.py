
sold_books =[{
	'book_id': 1,
	'user_category': 4,
	'category_id': 4
},
{
	'book_id': 2,
	'user_category': 4,
	'category_id': 4

},
{
	'book_id': 3,
	'user_category': 1,
	'category_id': 1

},
{
	'book_id': 5,
	'user_category': 4,
	'category_id': 1

}

]

def get_category(user_category):
	
	freq = {} #{1: 0}
	
	for book in sold_books:
		freq['category_id'] = freq.get('category_id' , 0) + 1
		if book['user_category'] == user_category:
			print(book)
			# return book['category_id']
			
		
	freq = sorted(freq.items(), key=lambda x: x[1], reverse=True)
	print(freq)
	return -1
	
found_category = get_category(1)
print(found_category)
	
