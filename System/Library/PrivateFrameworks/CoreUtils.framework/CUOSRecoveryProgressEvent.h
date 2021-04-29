/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSError;

@interface CUOSRecoveryProgressEvent : NSObject {

	int _type;
	NSString* _authenticationText;
	NSDictionary* _configInfo;
	NSError* _error;

}

@property (nonatomic,copy) NSString * authenticationText;                   //@synthesize authenticationText=_authenticationText - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configInfo;              //@synthesize configInfo=_configInfo - In the implementation block
-(void)setType:(int)arg1 ;
-(int)type;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)authenticationText;
-(NSDictionary *)configInfo;
-(void)setAuthenticationText:(NSString *)arg1 ;
@end

