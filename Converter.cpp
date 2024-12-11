#include<iostream>
#include<string>
#include<cpprest/http_client.h>


using namespace std;
using namespace web;
using namespace web::http;
using namespace web::http::client;

int main() {
	cout << "-------------------------------------------" << endl;
	cout << "\t Currency Converter" << endl;
	cout << "-------------------------------------------" << endl;

	string amount;
	string from;
	string to;
	 
	cout << "Enter amount: ";
	cin >> amount;
	cout << "From: ";
	cin >> from;
	cout << "To: ";
	cin >> to;

	http_client client(U("https://api.apilayer.com/currency_data"));
	uri_builder builder(U("/convert"));
	builder.append_query(U("to"), utility::conversions::to_string_t(to));
	builder.append_query(U("from"), utility::conversions::to_string_t(from));
	builder.append_query(U("amount"), utility::conversions::to_string_t(amount));
	builder.append_query(U(""), U(""));


	http_request request(methods::GET);
	request.set_request_uri(builder.to_string());


	client.request(request).then([](http_response response) {
		return response.extract_json();
	}
	).then([](web::json::value body) {
		cout << "\tRate: " << body[U("info")][U("quote")].as_double();

		}).wait();

		cout << " " << to;
		return 0;
}
