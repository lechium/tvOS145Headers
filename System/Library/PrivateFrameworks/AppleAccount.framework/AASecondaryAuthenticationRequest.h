/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AARequest.h>

@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {

	NSString* _primaryToken;
	NSString* _dsid;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithDSID:(id)arg1 primaryToken:(id)arg2 ;
@end

