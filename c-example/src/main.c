#include <stdio.h>
#include <curl/curl.h>

// Callback function to handle the response
size_t write_callback(void *ptr, size_t size, size_t nmemb, void *userdata) {
    fwrite(ptr, size, nmemb, stdout); // Print the response to stdout
    return size * nmemb;
}

int main(void) {
    CURL *curl;
    CURLcode res;

    // Initialize curl
    curl = curl_easy_init();
    if(curl) {
        // Set the URL to fetch
        curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");

        // Set the write callback function
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

        // Perform the request
        res = curl_easy_perform(curl);

        // Check for errors
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        // Cleanup curl
        curl_easy_cleanup(curl);
    }
    return 0;
}
