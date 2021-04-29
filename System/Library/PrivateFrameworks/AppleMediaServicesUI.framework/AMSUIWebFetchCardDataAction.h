/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIWebAction.h>

@class NSString;

@interface AMSUIWebFetchCardDataAction : AMSUIWebAction {

	NSString* _merchantID;
	NSString* _storeFrontCountryCode;

}

@property (nonatomic,retain) NSString * merchantID;                         //@synthesize merchantID=_merchantID - In the implementation block
@property (nonatomic,retain) NSString * storeFrontCountryCode;              //@synthesize storeFrontCountryCode=_storeFrontCountryCode - In the implementation block
-(NSString *)storeFrontCountryCode;
-(NSString *)merchantID;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(void)setMerchantID:(NSString *)arg1 ;
-(void)setStoreFrontCountryCode:(NSString *)arg1 ;
@end
