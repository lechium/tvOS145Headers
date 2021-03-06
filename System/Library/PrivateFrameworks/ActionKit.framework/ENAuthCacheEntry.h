/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDAMAuthenticationResult, NSDate;

@interface ENAuthCacheEntry : NSObject {

	EDAMAuthenticationResult* _authResult;
	NSDate* _cachedDate;

}

@property (nonatomic,retain) EDAMAuthenticationResult * authResult;              //@synthesize authResult=_authResult - In the implementation block
@property (nonatomic,retain) NSDate * cachedDate;                                //@synthesize cachedDate=_cachedDate - In the implementation block
+(id)entryWithResult:(id)arg1 ;
-(BOOL)isValid;
-(EDAMAuthenticationResult *)authResult;
-(void)setAuthResult:(EDAMAuthenticationResult *)arg1 ;
-(NSDate *)cachedDate;
-(void)setCachedDate:(NSDate *)arg1 ;
@end

