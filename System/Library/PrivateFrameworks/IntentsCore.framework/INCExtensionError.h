/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface INCExtensionError : NSObject {

	long long _errorCode;
	NSError* _underlyingError;

}

@property (assign,nonatomic) long long errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(void)setUnderlyingError:(NSError *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSError *)underlyingError;
-(id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
@end

