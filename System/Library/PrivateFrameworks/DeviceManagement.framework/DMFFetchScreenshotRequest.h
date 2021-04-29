/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest {

	BOOL _usesPixels;
	unsigned long long _maxWidth;
	unsigned long long _maxHeight;
	NSString* _sessionToken;

}

@property (assign,nonatomic) unsigned long long maxWidth;               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxHeight;              //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) BOOL usesPixels;                           //@synthesize usesPixels=_usesPixels - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;                     //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maxWidth;
-(void)setMaxWidth:(unsigned long long)arg1 ;
-(unsigned long long)maxHeight;
-(void)setMaxHeight:(unsigned long long)arg1 ;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(BOOL)usesPixels;
-(void)setUsesPixels:(BOOL)arg1 ;
@end

