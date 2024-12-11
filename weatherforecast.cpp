#include <iostream>
#include<string>
#include<cpprest/http_client.h>
#include<cpprest/filestream.h>

using namespace std;
using namespace web;
using namespace web::http;
using namespace web::http::client;

int main() {
	cout << "\t+-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o+" << endl;
	cout << "\t\tMy weather App" << endl;
	cout << "\t+-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o+" << endl;
	cout << "\tEnter the city name: ";
	string city;
	getline(cin, city);


	http_client client(U("https://api.openweathermap.org/data/2.5"));
	uri_builder buider(U("/weather"));
	buider.append_query(U("q"), utility::conversions::to_string_t(city));
	buider.append_query(U("appid"), U("c9addd8b7725db599e2542cf07a6b226"));
	http_request request(methods::GET);
	request.set_request_uri(buider.to_string());


	client.request(request).then([](http_response response) {
		return response.extract_json();
		}
	).then([](web::json::value body) {
			cout << "\tTemperature: " << body[U("main")][U("temp")].as_double() << "Л " << endl;
			cout << "\tHumidity: " << body[U("main")][U("humidity")].as_double() << "%" << endl;
			cout << "\Pressure: " << body[U("main")][U("pressure")].as_double() << endl;
			cout << "\tWeather: " << utility::conversions::to_utf8string(body[U("weather")][0][U("main")].as_string());
			cout << "\tWeather: " << utility::conversions::to_utf8string(body[U("weather")][0][U("description")].as_string());
		}
		).wait();
		return 0;
}


