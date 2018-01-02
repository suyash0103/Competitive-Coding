#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s = "c2F2xNQ5fGw:APA91bHc3TyPBassgNy9xLiiz1epsb72W0cae-rflwXXJ8AjTWP2AkccelkXa8ovbs16IXmLVP_A_TJa5CvLEpIJqTynl-0ztZ6xmycFkcHgN2YFV456yuqfajtuH_rOaJyaD4tk3dPo";
	int l = s.length();
	cout << l;
}

//    public void setSharedpreferences()
//    {
//        SharedPreferences sharedpreferences = this.getSharedPreferences(MyPREFERENCES, Context.MODE_PRIVATE);
//        int indexOfRemember = rawCookies.indexOf(rememberUserToken) + rememberUserToken.length() + 1;
//        int indexOfDomain = rawCookies.indexOf(domain) + domain.length() + 1;
//        int indexOfPath = rawCookies.indexOf(path) + path.length() + 1;
//        int indexOfExpiry = rawCookies.indexOf(expiry) + expiry.length() + 1;
//        int first = rawCookies.indexOf(';', indexOfRemember);
//        int second = rawCookies.indexOf(';', indexOfDomain);
//        int third = rawCookies.indexOf(';', indexOfPath);
//        int fourth = rawCookies.indexOf(';', indexOfExpiry);
//        rememberUserTokenFinal = rawCookies.substring(indexOfRemember, first);
//        domainFinal = rawCookies.substring(indexOfDomain, second);
//        pathFinal = rawCookies.substring(indexOfPath, third);
//        expiryFinal = rawCookies.substring(indexOfExpiry, fourth);
//        SharedPreferences.Editor editor = sharedpreferences.edit();
//        editor.putString(rememberUserToken, rememberUserTokenFinal);
//        editor.putString(domain, domainFinal);
//        editor.putString(path, pathFinal);
//        editor.putString(expiry, expiryFinal);
//        editor.commit();
//    }
