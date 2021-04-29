/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSTimer;

@interface _TVRXSearchReference : NSObject {

	NSString* _identifier;
	id _completionBlock;
	NSTimer* _expirationTimer;

}

@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * expirationTimer;              //@synthesize expirationTimer=_expirationTimer - In the implementation block
-(NSString *)identifier;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)completionBlock;
-(NSTimer *)expirationTimer;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
@end
