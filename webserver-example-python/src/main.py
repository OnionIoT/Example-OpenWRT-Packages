#!/usr/bin/python3



from bottle import Bottle, request, response, run, static_file

app = Bottle()

# Data storage (for demonstration purposes)
data = {"message": "Hello, World!"}

# REST API endpoint
@app.route('/api/data', method=['GET', 'POST'])
def api_data():
    if request.method == 'POST':
        new_data = request.json
        data.update(new_data)
        response.content_type = 'application/json'
        return {"status": "success", "data": data}
    response.content_type = 'application/json'
    return data

# Web UI route
@app.route('/')
def home():
    return static_file('index.html', root='/usr/lib/webserver-example-python')

if __name__ == '__main__':
    run(app, host='0.0.0.0', port=5000)

