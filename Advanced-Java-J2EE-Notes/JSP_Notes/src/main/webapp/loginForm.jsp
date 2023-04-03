<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" import="com.shashi.util.*, java.sql.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Home Page</title>
<link rel="stylesheet"
	href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css">
</head>
<body>

	<div class="container pr-5 pl-5">
		<form action="login.jsp" method="post">
			<!-- Email input -->
			<div class="text-center">
				<label class="text-success font-weight-bold mt-1">Login Form</label>
			</div>
			<!-- Email input -->
			<div class="form-outline mb-4">
				<input type="email" id="email" class="form-control" name="email" required/>
				<label class="form-label" for="email">Email address</label>
			</div>

			<!-- Password input -->
			<div class="form-outline mb-4">
				<input type="password" id="form2Example2" class="form-control"
					name="password" / required> <label class="form-label" for="form2Example2">Password</label>
			</div>

			<!-- 2 column grid layout for inline styling -->
			<div class="row mb-4">
				<div class="col d-flex justify-content-center">
					<!-- Checkbox -->
					<div class="form-check">
						<input class="form-check-input" type="checkbox" value=""
							id="form2Example31" checked /> <label class="form-check-label"
							for="form2Example31"> Remember me </label>
					</div>
				</div>

				<div class="col">
					<!-- Simple link -->
					<a href="#!">Forgot password?</a>
				</div>
			</div>

			<!-- Submit button -->
			<button type="submit" class="btn btn-primary btn-block mb-4"
				name="SignIn">Sign In</button>

			<!-- Register buttons -->
			<div class="text-center">
				<p>
					Not a member? <a href="#!">Register</a>
				</p>
				<p>or sign up with:</p>
				<button type="button" class="btn btn-link btn-floating mx-1">
					<i class="fab fa-facebook-f"></i>
				</button>

				<button type="button" class="btn btn-link btn-floating mx-1">
					<i class="fab fa-google"></i>
				</button>

				<button type="button" class="btn btn-link btn-floating mx-1">
					<i class="fab fa-twitter"></i>
				</button>

				<button type="button" class="btn btn-link btn-floating mx-1">
					<i class="fab fa-github"></i>
				</button>
			</div>
		</form>
	</div>

</body>
</html>