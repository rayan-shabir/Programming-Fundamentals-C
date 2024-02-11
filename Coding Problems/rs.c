if((a < c && b < c && c < d && c < e) || (a < c && d < c && c < b && c < e) || (a < c && e < c && c < b && c < d) || (b < c && d < c && c < a && c < e) || (b < c && e < c && c < a && c < d) || (d < c && e < c && c < a && c < b)) {
	return c;
}
else if((c < a && b < a && a < d && a < e) || (c < a && d < a && a < b && a < e) || (c < a && e < a && a < b && a < d) || (b < a && d < a && a < c && a < e) || (b < a && e < a && a < c && a < d) || (d < a && e < a && a < c && a < b)) {
	return a;
}
else if((c < b && a < b && b < d && b < e) || (c < b && d < b && b < a && b < e) || (c < b && e < b && b < a && b < d) || (a < b && d < b && b < c && b < e) || (a < b && e < b && b < c && b < d) || (d < b && e < b && b < c && b < a)) {
	return b;
}
else if((c < d && a < d && d < b && d < e) || (c < d && b < d && d < a && d < e) || (c < d && e < d && d < a && d < b) || (a < d && b < d && d < c && d < e) || (a < d && e < d && d < c && d < b) || (b < d && e < d && d < c && d < a)) {
	return d;
}
else {
	return e;
}