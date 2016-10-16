//
//  FKFlickrTagsGetMostFrequentlyUsed.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrTagsGetMostFrequentlyUsedError) {
	FKFlickrTagsGetMostFrequentlyUsedError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrTagsGetMostFrequentlyUsedError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrTagsGetMostFrequentlyUsedError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrTagsGetMostFrequentlyUsedError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrTagsGetMostFrequentlyUsedError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrTagsGetMostFrequentlyUsedError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrTagsGetMostFrequentlyUsedError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrTagsGetMostFrequentlyUsedError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrTagsGetMostFrequentlyUsedError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrTagsGetMostFrequentlyUsedError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrTagsGetMostFrequentlyUsedError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrTagsGetMostFrequentlyUsedError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrTagsGetMostFrequentlyUsedError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Returns a list of most frequently used tags for a user.


Response:

<rsp stat="ok">
<who id="30135021@N05">
	<tags>
		<tag count="1">blah</tag>
		<tag count="5">publicdomain</tag>
	</tags>
</who>
</rsp>

*/
@interface FKFlickrTagsGetMostFrequentlyUsed : NSObject <FKFlickrAPIMethod>


@end